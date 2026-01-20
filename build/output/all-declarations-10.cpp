#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@identifierAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_identifierAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                    const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                    GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_9828 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_9849 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_9828.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 287)).isValidAndTrue () ;
  if (enumerator_9849.hasCurrentObject () && bool_0) {
    while (enumerator_9849.hasCurrentObject () && bool_0) {
      switch (enumerator_9849.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_dateType:
        {
          var_found_9828 = GGS_bool (true) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            const GGS_identifierAsDefaultValue temp_2 = this ;
            test_1 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 291)).getter_hasKey (temp_2.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.ggs", 291)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GalgasBool test_3 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_3) {
                const GGS_identifierAsDefaultValue temp_4 = this ;
                test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("now"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_3) {
                  outArgument_outSwiftDefaultValueAsString = GGS_string ("Date ()") ;
                }
              }
              if (GalgasBool::boolFalse == test_3) {
                GalgasBool test_5 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_5) {
                  const GGS_identifierAsDefaultValue temp_6 = this ;
                  test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("distantPast"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_5) {
                    outArgument_outSwiftDefaultValueAsString = GGS_string ("Date.distantPast") ;
                  }
                }
                if (GalgasBool::boolFalse == test_5) {
                  const GGS_identifierAsDefaultValue temp_7 = this ;
                  GenericArray <FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined date"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 297)) ;
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            const GGS_identifierAsDefaultValue temp_9 = this ;
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined date"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 300)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_bezierPathType:
        {
          var_found_9828 = GGS_bool (true) ;
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_identifierAsDefaultValue temp_12 = this ;
            test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("NSBezierPath ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            const GGS_identifierAsDefaultValue temp_13 = this ;
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default NSBezierPath"), fixItArray14  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 307)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        {
          var_found_9828 = GGS_bool (true) ;
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_identifierAsDefaultValue temp_16 = this ;
            test_15 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("BezierPathArray ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_15) {
            const GGS_identifierAsDefaultValue temp_17 = this ;
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default BezierPathArray"), fixItArray18  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 314)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        {
          GGS_string extractedValue_10926_enumTypeName_0 ;
          GGS_enumConstantMap extractedValue_10957_constantMap_1 ;
          GGS_enumFuncMap extractedValue_10970__2 ;
          enumerator_9849.current_mType (HERE).getAssociatedValuesFor_enumType (extractedValue_10926_enumTypeName_0, extractedValue_10957_constantMap_1, extractedValue_10970__2) ;
          var_found_9828 = GGS_bool (true) ;
          GalgasBool test_19 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_19) {
            const GGS_identifierAsDefaultValue temp_20 = this ;
            test_19 = extractedValue_10957_constantMap_1.getter_hasKey (temp_20.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.ggs", 318)).boolEnum () ;
            if (GalgasBool::boolTrue == test_19) {
              const GGS_identifierAsDefaultValue temp_21 = this ;
              outArgument_outSwiftDefaultValueAsString = extractedValue_10926_enumTypeName_0.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 319)).add_operation (temp_21.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 319)) ;
            }
          }
          if (GalgasBool::boolFalse == test_19) {
            const GGS_identifierAsDefaultValue temp_22 = this ;
            const GGS_identifierAsDefaultValue temp_23 = this ;
            GenericArray <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_22.readProperty_mValue ().readProperty_location (), GGS_string ("the '").add_operation (extractedValue_10926_enumTypeName_0, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)).add_operation (GGS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)).add_operation (temp_23.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)).add_operation (GGS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)), fixItArray24  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 321)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        {
          GGS_string extractedValue_11341__0 ;
          GGS_bool extractedValue_11341__1 ;
          enumerator_9849.current_mType (HERE).getAssociatedValuesFor_entityType (extractedValue_11341__0, extractedValue_11341__1) ;
          const GGS_identifierAsDefaultValue temp_25 = this ;
          GenericArray <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_25.readProperty_mValue ().readProperty_location (), GGS_string ("invalid entity type"), fixItArray26  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 326)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        {
          GGS_string extractedValue_11416__0 ;
          enumerator_9849.current_mType (HERE).getAssociatedValuesFor_classType (extractedValue_11416__0) ;
          const GGS_identifierAsDefaultValue temp_27 = this ;
          GenericArray <FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mValue ().readProperty_location (), GGS_string ("invalid class type"), fixItArray28  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 328)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
        {
          const GGS_identifierAsDefaultValue temp_29 = this ;
          GenericArray <FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (temp_29.readProperty_mValue ().readProperty_location (), GGS_string ("invalid bool type"), fixItArray30  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 330)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_dataType:
        {
          var_found_9828 = GGS_bool (true) ;
          GalgasBool test_31 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_31) {
            const GGS_identifierAsDefaultValue temp_32 = this ;
            test_31 = GGS_bool (ComparisonKind::equal, temp_32.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_31) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("Data ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_31) {
            const GGS_identifierAsDefaultValue temp_33 = this ;
            GenericArray <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (temp_33.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default Data"), fixItArray34  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 336)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_doubleType:
        {
          const GGS_identifierAsDefaultValue temp_35 = this ;
          GenericArray <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (temp_35.readProperty_mValue ().readProperty_location (), GGS_string ("invalid double type"), fixItArray36  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 339)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
        {
          const GGS_identifierAsDefaultValue temp_37 = this ;
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mValue ().readProperty_location (), GGS_string ("invalid integer type"), fixItArray38  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 341)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
        {
          const GGS_identifierAsDefaultValue temp_39 = this ;
          GenericArray <FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (temp_39.readProperty_mValue ().readProperty_location (), GGS_string ("invalid UInt32 type"), fixItArray40  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 343)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_stringType:
        {
          const GGS_identifierAsDefaultValue temp_41 = this ;
          GenericArray <FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (temp_41.readProperty_mValue ().readProperty_location (), GGS_string ("invalid string type"), fixItArray42  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 345)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_fontType:
        {
          const GGS_identifierAsDefaultValue temp_43 = this ;
          GenericArray <FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticError (temp_43.readProperty_mValue ().readProperty_location (), GGS_string ("invalid font type"), fixItArray44  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 347)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_colorType:
        {
          GalgasBool test_45 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_45) {
            const GGS_identifierAsDefaultValue temp_46 = this ;
            test_45 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 349)).getter_hasKey (temp_46.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.ggs", 349)).boolEnum () ;
            if (GalgasBool::boolTrue == test_45) {
              const GGS_identifierAsDefaultValue temp_47 = this ;
              outArgument_outSwiftDefaultValueAsString = GGS_string ("NSColor.").add_operation (temp_47.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 350)) ;
              var_found_9828 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_45) {
            const GGS_identifierAsDefaultValue temp_48 = this ;
            GenericArray <FixItDescription> fixItArray49 ;
            inCompiler->emitSemanticError (temp_48.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined color"), fixItArray49  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 353)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        {
          GGS_string extractedValue_12411__0 ;
          enumerator_9849.current_mType (HERE).getAssociatedValuesFor_transientPropertyExternType (extractedValue_12411__0) ;
          const GGS_identifierAsDefaultValue temp_50 = this ;
          GenericArray <FixItDescription> fixItArray51 ;
          inCompiler->emitSemanticError (temp_50.readProperty_mValue ().readProperty_location (), GGS_string ("invalid image type"), fixItArray51  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 356)) ;
        }
        break ;
      }
      enumerator_9849.gotoNextObject () ;
      if (enumerator_9849.hasCurrentObject ()) {
        bool_0 = var_found_9828.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 287)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_52 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_52) {
    test_52 = var_found_9828.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 359)).boolEnum () ;
    if (GalgasBool::boolTrue == test_52) {
      const GGS_identifierAsDefaultValue temp_53 = this ;
      GenericArray <FixItDescription> fixItArray54 ;
      inCompiler->emitSemanticError (temp_53.readProperty_mValue ().readProperty_location (), GGS_string ("unknow type for this identifier"), fixItArray54  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 360)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind var_kind_12950 ;
  const GGS_prefsAsDefaultValue temp_0 = this ;
  GGS_actionMap joker_12956_2 ; // Joker input parameter
  GGS_bool joker_12956_1 ; // Joker input parameter
  constinArgument_inPreferencesPropertyMap.method_searchKey (temp_0.readProperty_mPrefPropertyName (), var_kind_12950, joker_12956_2, joker_12956_1, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 372)) ;
  switch (var_kind_12950.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_13002_type_0 ;
      GGS_propertyAccessibility extractedValue_13008__1 ;
      var_kind_12950.getAssociatedValuesFor_property (extractedValue_13002_type_0, extractedValue_13008__1) ;
      GGS_bool var_found_13021 = GGS_bool (false) ;
      UpEnumerator_typeKindList enumerator_13044 (constinArgument_inAttributeActualTypeList) ;
      bool bool_1 = var_found_13021.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 376)).isValidAndTrue () ;
      if (enumerator_13044.hasCurrentObject () && bool_1) {
        while (enumerator_13044.hasCurrentObject () && bool_1) {
          var_found_13021 = GGS_bool (ComparisonKind::equal, extractedValue_13002_type_0.objectCompare (enumerator_13044.current_mType (HERE))) ;
          enumerator_13044.gotoNextObject () ;
          if (enumerator_13044.hasCurrentObject ()) {
            bool_1 = var_found_13021.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 376)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_found_13021.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 379)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_prefsAsDefaultValue temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("the atomic property type is not compatible"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 380)) ;
        }
      }
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_13255__0 ;
      GGS_propertyAccessibility extractedValue_13255__1 ;
      GGS_bool extractedValue_13255__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_13255__3 ;
      var_kind_12950.getAssociatedValuesFor_toMany (extractedValue_13255__0, extractedValue_13255__1, extractedValue_13255__2, extractedValue_13255__3) ;
      const GGS_prefsAsDefaultValue temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 383)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_13348__0 ;
      GGS_propertyAccessibility extractedValue_13348__1 ;
      GGS_bool extractedValue_13348__2 ;
      GGS_toOneOppositeRelationship extractedValue_13348__3 ;
      GGS_bool extractedValue_13348__4 ;
      var_kind_12950.getAssociatedValuesFor_toOne (extractedValue_13348__0, extractedValue_13348__1, extractedValue_13348__2, extractedValue_13348__3, extractedValue_13348__4) ;
      const GGS_prefsAsDefaultValue temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 385)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_13451__0 ;
      GGS_bool extractedValue_13451__1 ;
      var_kind_12950.getAssociatedValuesFor_arrayController (extractedValue_13451__0, extractedValue_13451__1) ;
      const GGS_prefsAsDefaultValue temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 387)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_13557__0 ;
      var_kind_12950.getAssociatedValuesFor_selectionController (extractedValue_13557__0) ;
      const GGS_prefsAsDefaultValue temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray12  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 389)) ;
    }
    break ;
  }
  const GGS_prefsAsDefaultValue temp_13 = this ;
  outArgument_outSwiftDefaultValueAsString = GGS_string ("preferences_").add_operation (temp_13.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 391)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsAsDefaultValue enterDefaultValuePrecedence'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_enterDefaultValuePrecedence (const GGS_lstring constinArgument_inNode,
                                                                   GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefsAsDefaultValue temp_0 = this ;
  const GGS_prefsAsDefaultValue temp_1 = this ;
  GGS_lstring var_p_13955 = GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 400)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 400)).add_operation (temp_0.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 400)), temp_1.readProperty_mPrefPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inNode, var_p_13955 COMMA_SOURCE_FILE ("explicit-default-value.ggs", 401)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildAutoLayoutBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                             const GGS_autoLayoutViewClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_autoLayoutViewClassBindingSpecificationList enumerator_3666 (constinArgument_inBindingSpecificationListMap) ;
  while (enumerator_3666.hasCurrentObject ()) {
    GGS_outletBindingSpecificationModelList temp_0 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 98)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_3767 = temp_0 ;
    UpEnumerator_outletClassBindingSpecificationModelList enumerator_3833 (enumerator_3666.current_mOutletClassBindingSpecificationModelList (HERE)) ;
    while (enumerator_3833.hasCurrentObject ()) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_3833.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          var_outletBindingSpecificationModelList_3767.setter_append (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), GGS_enumConstantMap::init (inCompiler COMMA_HERE), GGS_enumFuncMap::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 102)), enumerator_3833.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GGS_classKind var_classKind_4247 ;
        GGS_propertyMap joker_4258_3 ; // Joker input parameter
        GGS_actionMap joker_4258_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_4258_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_3833.current_mModelTypeName (HERE), var_classKind_4247, joker_4258_3, joker_4258_2, joker_4258_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 106)) ;
        GGS_typeKind var_typeKind_4285 ;
        switch (var_classKind_4247.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_3833.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 110)) ;
            var_typeKind_4285.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_4456_kind_0 ;
            var_classKind_4247.getAssociatedValuesFor_atomic (extractedValue_4456_kind_0) ;
            var_typeKind_4285 = extractedValue_4456_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_4513__0 ;
            var_classKind_4247.getAssociatedValuesFor_document (extractedValue_4513__0) ;
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_3833.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 114)) ;
            var_typeKind_4285.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_4625__0 ;
            GGS_bool extractedValue_4625__1 ;
            GGS_bool extractedValue_4625__2 ;
            GGS_bool extractedValue_4625__3 ;
            var_classKind_4247.getAssociatedValuesFor_entity (extractedValue_4625__0, extractedValue_4625__1, extractedValue_4625__2, extractedValue_4625__3) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_3833.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 116)) ;
            var_typeKind_4285.drop () ; // Release error dropped variable
          }
          break ;
        }
        {
        var_outletBindingSpecificationModelList_3767.setter_append (var_typeKind_4285, enumerator_3833.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 118)) ;
        }
      }
      enumerator_3833.gotoNextObject () ;
    }
    GGS_controllerBindingOptionDecoratedList temp_5 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 121)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_4887 = temp_5 ;
    UpEnumerator_controllerBindingOptionList enumerator_4951 (enumerator_3666.current_mBindingOptionList (HERE)) ;
    while (enumerator_4951.hasCurrentObject ()) {
      GGS_classKind var_classKind_5071 ;
      GGS_propertyMap joker_5082_3 ; // Joker input parameter
      GGS_actionMap joker_5082_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5082_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4951.current_mOptionTypeName (HERE), var_classKind_5071, joker_5082_3, joker_5082_2, joker_5082_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 123)) ;
      GGS_typeKind var_typeKind_5107 ;
      switch (var_classKind_5071.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_4951.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 127)) ;
          var_typeKind_5107.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_5271_kind_0 ;
          var_classKind_5071.getAssociatedValuesFor_atomic (extractedValue_5271_kind_0) ;
          var_typeKind_5107 = extractedValue_5271_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_5324__0 ;
          var_classKind_5071.getAssociatedValuesFor_document (extractedValue_5324__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_4951.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 131)) ;
          var_typeKind_5107.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_5433__0 ;
          GGS_bool extractedValue_5433__1 ;
          GGS_bool extractedValue_5433__2 ;
          GGS_bool extractedValue_5433__3 ;
          var_classKind_5071.getAssociatedValuesFor_entity (extractedValue_5433__0, extractedValue_5433__1, extractedValue_5433__2, extractedValue_5433__3) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_4951.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 133)) ;
          var_typeKind_5107.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_4887.setter_append (var_typeKind_5107, enumerator_4951.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 135)) ;
      }
      enumerator_4951.gotoNextObject () ;
    }
    GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_5692 ;
    GGS_lstring var_outletSuperClassName_5720 ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = ioArgument_ioSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().getter_hasKey (enumerator_3666.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 140)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_removeKey (enumerator_3666.current_mOutletClassName (HERE), var_outletSuperClassName_5720, var_bindingMap_5692, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 141)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      var_bindingMap_5692 = GGS_autoLayoutViewBindingSpecificationMap::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_6096_8 ; // Joker input parameter
      GGS_bool joker_6096_7 ; // Joker input parameter
      GGS_bool joker_6096_6 ; // Joker input parameter
      GGS_bool joker_6096_5 ; // Joker input parameter
      GGS_bool joker_6096_4 ; // Joker input parameter
      GGS_bool joker_6096_3 ; // Joker input parameter
      GGS_autoLayoutClassParameterList joker_6096_2 ; // Joker input parameter
      GGS_astAutoLayoutViewFunctionMap joker_6096_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (enumerator_3666.current_mOutletClassName (HERE), var_outletSuperClassName_5720, joker_6096_8, joker_6096_7, joker_6096_6, joker_6096_5, joker_6096_4, joker_6096_3, joker_6096_2, joker_6096_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 144)) ;
    }
    {
    var_bindingMap_5692.setter_insertKey (enumerator_3666.current_mBindingName (HERE), var_outletBindingSpecificationModelList_3767, var_controllerBindingOptionDecoratedList_4887, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 146)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_insertKey (enumerator_3666.current_mOutletClassName (HERE), var_outletSuperClassName_5720, var_bindingMap_5692, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 151)) ;
    }
    enumerator_3666.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'sortProperties??!'
//
//--------------------------------------------------------------------------------------------------

void routine_sortProperties_3F__3F__21_ (const GGS_string constinArgument_inSourceFile,
                                         const GGS_declarationListAST constinArgument_inDeclarationListAST,
                                         GGS_declarationListAST & outArgument_outSortedDeclarationListAST,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GGS_declarationPrecedenceGraph var_declarationPrecedenceGraph_2415 = GGS_declarationPrecedenceGraph::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationListAST enumerator_2455 (constinArgument_inDeclarationListAST) ;
  while (enumerator_2455.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_2455.current_mPropertyDeclaration (HERE).ptr (), var_declarationPrecedenceGraph_2415, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 69)) ;
    enumerator_2455.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_easyBindings_5F_options_outputDeclarationDependencyGraph.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_s_2694 = var_declarationPrecedenceGraph_2415.getter_graphviz (SOURCE_FILE ("declaration-graph.ggs", 73)) ;
      GGS_string var_path_2742 = constinArgument_inSourceFile.add_operation (GGS_string (".declarationDependancy.dot"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 74)) ;
      GGS_bool joker_2839 ; // Joker input parameter
      var_s_2694.method_writeToFileWhenDifferentContents (var_path_2742, joker_2839, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 75)) ;
    }
  }
  GGS_declarationListAST temp_1 = GGS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 78)) ;
  outArgument_outSortedDeclarationListAST = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_declarationPrecedenceGraph_2415.getter_undefinedNodeCount (SOURCE_FILE ("declaration-graph.ggs", 79)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator_lstringlist enumerator_3009 (var_declarationPrecedenceGraph_2415.getter_undefinedNodeReferenceList (SOURCE_FILE ("declaration-graph.ggs", 80))) ;
      while (enumerator_3009.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_3009.current_mValue (HERE).readProperty_location (), GGS_string ("the property ").add_operation (enumerator_3009.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)).add_operation (GGS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)), fixItArray3  COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)) ;
        enumerator_3009.gotoNextObject () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GGS_declarationListAST var_unsortedSemanticDeclarationListAST_3271 ;
    GGS_lstringlist joker_3256 ; // Joker input parameter
    GGS_lstringlist joker_3313 ; // Joker input parameter
    var_declarationPrecedenceGraph_2415.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_3256, var_unsortedSemanticDeclarationListAST_3271, joker_3313, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 84)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_3271.getter_count (SOURCE_FILE ("declaration-graph.ggs", 90)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string var_s_3389 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_3271.getter_count (SOURCE_FILE ("declaration-graph.ggs", 92)).getter_string (SOURCE_FILE ("declaration-graph.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 91)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 92)) ;
        UpEnumerator_declarationListAST enumerator_3562 (var_unsortedSemanticDeclarationListAST_3271) ;
        while (enumerator_3562.hasCurrentObject ()) {
          var_s_3389.plusAssignOperation(GGS_string ("\n-  ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3562.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)), inCompiler  COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)) ;
          enumerator_3562.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-graph.ggs", 97)), var_s_3389, fixItArray5  COMMA_SOURCE_FILE ("declaration-graph.ggs", 97)) ;
        UpEnumerator_declarationListAST enumerator_3706 (var_unsortedSemanticDeclarationListAST_3271) ;
        while (enumerator_3706.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3706.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).readProperty_location (), GGS_string ("the ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3706.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).add_operation (GGS_string (" property is declared here"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)), fixItArray6  COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)) ;
          enumerator_3706.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper (
  "",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0,
  0,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (Compiler * /* inCompiler */,
                                                                            const GGS_string & in_PROJECT_5F_REF,
                                                                            const GGS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                            const GGS_XCodeGroupList & in_GROUPS,
                                                                            const GGS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                            const GGS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                            const GGS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                            const GGS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                            const GGS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                            const GGS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const GGS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                            const GGS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("// !$*UTF8*$!\n{\n  archiveVersion = 1;\n  classes = {\n  };\n  objectVersion = 42;\n  objects = {\n\n  /*------------------------------------------------------------------ PBXBuildFile */\n") ;
  GGS_uint index_249_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator_BuildFileList enumerator_249 (in_BUILD_5F_FILE_5F_LIST) ;
    while (enumerator_249.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_249.current_mBuildReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_249.current_mFileName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXBuildFile;\n    fileRef = ") ;
      result.appendString (enumerator_249.current_mFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    settings = {ATTRIBUTES = (); };\n  };\n\n") ;
      enumerator_249.gotoNextObject () ;
      index_249_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFileReference */\n") ;
  GGS_uint index_554_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_554 (in_CPP_5F_FILE_5F_LIST) ;
    while (enumerator_554.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_554.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_554.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.cpp;\n    name = ") ;
      result.appendString (enumerator_554.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_554.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_554.gotoNextObject () ;
      index_554_.increment () ;
    }
  }
  GGS_uint index_901_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_901 (in_M_5F_FILE_5F_LIST) ;
    while (enumerator_901.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_901.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_901.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.obj;\n    name = ") ;
      result.appendString (enumerator_901.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_901.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_901.gotoNextObject () ;
      index_901_.increment () ;
    }
  }
  GGS_uint index_1247_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1247 (in_MM_5F_FILE_5F_LIST) ;
    while (enumerator_1247.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1247.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1247.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.objcpp;\n    name = ") ;
      result.appendString (enumerator_1247.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1247.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1247.gotoNextObject () ;
      index_1247_.increment () ;
    }
  }
  GGS_uint index_1601_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1601 (in_SWIFT_5F_FILE_5F_LIST) ;
    while (enumerator_1601.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1601.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1601.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.swift;\n    name = ") ;
      result.appendString (enumerator_1601.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1601.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1601.gotoNextObject () ;
      index_1601_.increment () ;
    }
  }
  GGS_uint index_1951_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1951 (in_HEADER_5F_FILE_5F_LIST) ;
    while (enumerator_1951.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1951.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1951.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.h;\n    name = ") ;
      result.appendString (enumerator_1951.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1951.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1951.gotoNextObject () ;
      index_1951_.increment () ;
    }
  }
  GGS_uint index_2302_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_2302 (in_FRAMEWORK_5F_FILE_5F_LIST) ;
    while (enumerator_2302.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2302.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2302.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    lastKnownFileType = wrapper.framework;\n    name = ") ;
      result.appendString (enumerator_2302.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2302.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2302.gotoNextObject () ;
      index_2302_.increment () ;
    }
  }
  GGS_uint index_2835_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_2835 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_2835.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2835.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_2835.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_2835.gotoNextObject () ;
      index_2835_.increment () ;
    }
  }
  GGS_uint index_3426_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_3426 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_3426.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3426.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_3426.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_3426.gotoNextObject () ;
      index_3426_.increment () ;
    }
  }
  GGS_uint index_3735_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_3735 (in_PLIST_5F_FILE_5F_LIST) ;
    while (enumerator_3735.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3735.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = text.plist;\n    name = ") ;
      result.appendString (enumerator_3735.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_3735.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_3735.gotoNextObject () ;
      index_3735_.increment () ;
    }
  }
  GGS_uint index_4059_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4059 (in_XIB_5F_FILE_5F_LIST) ;
    while (enumerator_4059.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4059.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = wrapper.xib;\n    name = ") ;
      result.appendString (enumerator_4059.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4059.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4059.gotoNextObject () ;
      index_4059_.increment () ;
    }
  }
  GGS_uint index_4385_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4385 (in_TIFF_5F_FILE_5F_LIST) ;
    while (enumerator_4385.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4385.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.tiff;\n    name = ") ;
      result.appendString (enumerator_4385.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4385.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4385.gotoNextObject () ;
      index_4385_.increment () ;
    }
  }
  GGS_uint index_4684_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4684 (in_ICNS_5F_FILE_5F_LIST) ;
    while (enumerator_4684.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4684.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.icns;\n    name = ") ;
      result.appendString (enumerator_4684.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4684.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4684.gotoNextObject () ;
      index_4684_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n\n") ;
  GGS_uint index_5295_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_5295 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_5295.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_5295.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  ") ;
        result.appendString (enumerator_5295.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
        GGS_uint index_5534_ (0) ;
        if (enumerator_5295.current_mFrameworksFileRefList (HERE).isValid ()) {
          UpEnumerator_stringlist enumerator_5534 (enumerator_5295.current_mFrameworksFileRefList (HERE)) ;
          while (enumerator_5534.hasCurrentObject ()) {
            result.appendString ("      ") ;
            result.appendString (enumerator_5534.current_mValue (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            enumerator_5534.gotoNextObject () ;
            index_5534_.increment () ;
          }
        }
        result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_5295.gotoNextObject () ;
      index_5295_.increment () ;
    }
  }
  GGS_uint index_5987_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_5987 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_5987.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5987.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_6171_ (0) ;
      if (enumerator_5987.current_mFrameworksFileRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_6171 (enumerator_5987.current_mFrameworksFileRefList (HERE)) ;
        while (enumerator_6171.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6171.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_6171.gotoNextObject () ;
          index_6171_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_5987.gotoNextObject () ;
      index_5987_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXGroup section */\n") ;
  GGS_uint index_6447_ (0) ;
  if (in_GROUPS.isValid ()) {
    UpEnumerator_XCodeGroupList enumerator_6447 (in_GROUPS) ;
    while (enumerator_6447.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6447.current_mGroupReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_6447.current_mGroupName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXGroup;\n    children = (\n") ;
      GGS_uint index_6574_ (0) ;
      if (enumerator_6447.current_mChildrenRefs (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_6574 (enumerator_6447.current_mChildrenRefs (HERE)) ;
        while (enumerator_6574.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6574.current_mValue (HERE).stringValue ()) ;
          result.appendString (", \n") ;
          enumerator_6574.gotoNextObject () ;
          index_6574_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_6447.current_mGroupName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_6447.current_mGroupPath (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n") ;
      enumerator_6447.gotoNextObject () ;
      index_6447_.increment () ;
    }
  }
  result.appendString ("\n  ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (" /* Main Group */ = {\n    isa = PBXGroup;\n    children = (\n") ;
  GGS_uint index_6886_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    UpEnumerator_stringlist enumerator_6886 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS) ;
    while (enumerator_6886.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_6886.current_mValue (HERE).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_6886.gotoNextObject () ;
      index_6886_.increment () ;
    }
  }
  result.appendString ("    );\n    sourceTree = \"<group>\";\n  };\n\n  /*------------------------------------------------------------------ PBXNativeTarget */\n") ;
  GGS_uint index_7300_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_7300 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_7300.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_7300.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_7300.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_7300.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_7300.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" ,\n") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_7300.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("      ") ;
        result.appendString (enumerator_7300.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" , /* Frameworks */\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("    );\n    buildRules = (\n    );\n    dependencies = (\n    );\n    name = ") ;
      result.appendString (enumerator_7300.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_7300.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_7300.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.tool\";\n  };\n \n") ;
      enumerator_7300.gotoNextObject () ;
      index_7300_.increment () ;
    }
  }
  GGS_uint index_8232_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_8232 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_8232.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_8232.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_8232.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_8232.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_8232.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" , /* Resources */\n      ") ;
      result.appendString (enumerator_8232.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Frameworks */\n      ") ;
      result.appendString (enumerator_8232.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Sources */\n    );\n    buildRules = (\n    );\n    dependencies = (\n") ;
      GGS_uint index_8621_ (0) ;
      if (enumerator_8232.current_mDependentTargets (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_8621 (enumerator_8232.current_mDependentTargets (HERE)) ;
        while (enumerator_8621.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_8621.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" ,\n") ;
          enumerator_8621.gotoNextObject () ;
          index_8621_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_8232.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_8232.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_8232.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.application\";\n  };\n\n") ;
      enumerator_8232.gotoNextObject () ;
      index_8232_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXProject */\n  ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */ = {\n   isa = PBXProject;\n   attributes = {\n     LastSwiftUpdateCheck = 0700;\n     LastUpgradeCheck = 0700;\n   };\n   buildConfigurationList = ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */;\n   compatibilityVersion = \"Xcode 2.4\";\n   hasScannedForEncodings = 1;\n   mainGroup = ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (";\n   projectDirPath = \"\";\n   projectRoot = \"\";\n   targets = (\n") ;
  GGS_uint index_9693_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_9693 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_9693.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_9693.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_9693.gotoNextObject () ;
      index_9693_.increment () ;
    }
  }
  GGS_uint index_10047_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_10047 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_10047.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10047.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_10047.gotoNextObject () ;
      index_10047_.increment () ;
    }
  }
  result.appendString ("   );\n  };\n\n  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n\n") ;
  GGS_uint index_10514_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_10514 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_10514.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_10514.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_10697_ (0) ;
      if (enumerator_10514.current_mResourceFileBuildRefs (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_10697 (enumerator_10514.current_mResourceFileBuildRefs (HERE)) ;
        while (enumerator_10697.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_10697.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_10697.gotoNextObject () ;
          index_10697_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_10514.gotoNextObject () ;
      index_10514_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n") ;
  GGS_uint index_11147_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_11147 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_11147.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11147.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_11314_ (0) ;
      if (enumerator_11147.current_mBuildPhaseRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_11314 (enumerator_11147.current_mBuildPhaseRefList (HERE)) ;
        while (enumerator_11314.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_11314.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_11314.gotoNextObject () ;
          index_11314_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_11147.gotoNextObject () ;
      index_11147_.increment () ;
    }
  }
  GGS_uint index_11735_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_11735 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_11735.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11735.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_11902_ (0) ;
      if (enumerator_11735.current_mBuildPhaseRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_11902 (enumerator_11735.current_mBuildPhaseRefList (HERE)) ;
        while (enumerator_11902.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_11902.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_11902.gotoNextObject () ;
          index_11902_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_11735.gotoNextObject () ;
      index_11735_.increment () ;
    }
  }
  result.appendString ("\n\n  /*------------------------------------------------------------------ PBXTargetDependency */\n \n") ;
  GGS_uint index_12424_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_12424 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_12424.hasCurrentObject ()) {
      GGS_uint index_12472_ (0) ;
      if (enumerator_12424.current_mDependentTargets (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_12472 (enumerator_12424.current_mDependentTargets (HERE)) ;
        while (enumerator_12472.hasCurrentObject ()) {
          result.appendString ("  ") ;
          result.appendString (enumerator_12472.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" = {\n    isa = PBXTargetDependency;\n    target = ") ;
          result.appendString (enumerator_12472.current_mValue_31_ (HERE).stringValue ()) ;
          result.appendString (";\n  };\n\n") ;
          enumerator_12472.gotoNextObject () ;
          index_12472_.increment () ;
        }
      }
      enumerator_12424.gotoNextObject () ;
      index_12424_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXVariantGroup */\n \n  /*------------------------------------------------------------------ XCBuildConfiguration */\n    ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
  GGS_uint index_12949_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_12949 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST) ;
    while (enumerator_12949.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_12949.current_mValue (HERE).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_12949.gotoNextObject () ;
      index_12949_.increment () ;
    }
  }
  result.appendString ("    };\n    name = Default;\n  };\n\n") ;
  GGS_uint index_13264_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_13264 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_13264.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13264.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_13432_ (0) ;
      if (enumerator_13264.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_13432 (enumerator_13264.current_mBuildConfigurationSettingList (HERE)) ;
        while (enumerator_13432.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_13432.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_13432.gotoNextObject () ;
          index_13432_.increment () ;
        }
      }
      result.appendString ("      PRODUCT_NAME = ") ;
      result.appendString (enumerator_13264.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 347)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_13264.gotoNextObject () ;
      index_13264_.increment () ;
    }
  }
  GGS_uint index_13902_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_13902 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_13902.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13902.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_14070_ (0) ;
      if (enumerator_13902.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_14070 (enumerator_13902.current_mBuildConfigurationSettingList (HERE)) ;
        while (enumerator_14070.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_14070.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_14070.gotoNextObject () ;
          index_14070_.increment () ;
        }
      }
      result.appendString ("      INFOPLIST_FILE = ") ;
      result.appendString (enumerator_13902.current_mInfoPListFile (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 359)).stringValue ()) ;
      result.appendString (";\n      PRODUCT_NAME = ") ;
      result.appendString (enumerator_13902.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_13902.gotoNextObject () ;
      index_13902_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ XCConfigurationList section */\n\n    ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
  GGS_uint index_14952_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_14952 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_14952.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_14952.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_14952.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_14952.gotoNextObject () ;
      index_14952_.increment () ;
    }
  }
  GGS_uint index_15549_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_15549 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_15549.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_15549.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_15549.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_15549.gotoNextObject () ;
      index_15549_.increment () ;
    }
  }
  result.appendString ("/*------------------------------------------------------------------ End */\n  };\n\n  rootObject = ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool /* constinArgument_inPreferences */,
                                                                                              const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                              const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                              const GGS_propertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                                                                              const GGS_propertyMap /* constinArgument_inPreferencesObservablePropertyMap */,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalIntMultipleBindingExpressionAST temp_0 = this ;
  outArgument_outEnableExpression = GGS_booleanMultipleBindingLiteralIntForGeneration::init_21_ (temp_0.readProperty_mValue ().readProperty_uint (), inCompiler COMMA_HERE) ;
  outArgument_outType = GGS_typeKind::class_func_integerType (SOURCE_FILE ("multiple-binding.ggs", 274)) ;
  const GGS_literalIntMultipleBindingExpressionAST temp_1 = this ;
  outArgument_outErrorLocation = temp_1.readProperty_mValue ().readProperty_location () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_observablePropertyInMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                                        const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                        GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GGS_typeKind & outArgument_outType,
                                                                                                        GGS_location & outArgument_outErrorLocation,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind var_kind_12428 ;
  GGS_string var_swiftTypeStringForTransientFunctionArgument_12458 ;
  GGS_string var_protocolTypeName_12527 ;
  GGS_string var_defaultValueAsString_12569 ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_0 = this ;
  GGS_propertyMap temp_1 ;
  const GalgasBool test_2 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = constinArgument_inPreferencesObservablePropertyMap ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = constinArgument_inCurrentObservablePropertyMap ;
  }
  extensionMethod_analyzeObservableProperty (temp_0.readProperty_mProperty (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, temp_1, var_kind_12428, var_swiftTypeStringForTransientFunctionArgument_12458, var_protocolTypeName_12527, var_defaultValueAsString_12569, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 290)) ;
  switch (var_kind_12428.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_12625_type_0 ;
      GGS_propertyAccessibility extractedValue_12631__1 ;
      var_kind_12428.getAssociatedValuesFor_property (extractedValue_12625_type_0, extractedValue_12631__1) ;
      outArgument_outType = extractedValue_12625_type_0 ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_12671__0 ;
      GGS_propertyAccessibility extractedValue_12671__1 ;
      GGS_bool extractedValue_12671__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_12671__3 ;
      var_kind_12428.getAssociatedValuesFor_toMany (extractedValue_12671__0, extractedValue_12671__1, extractedValue_12671__2, extractedValue_12671__3) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 303)), GGS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.ggs", 303)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_12785__0 ;
      GGS_propertyAccessibility extractedValue_12785__1 ;
      GGS_bool extractedValue_12785__2 ;
      GGS_toOneOppositeRelationship extractedValue_12785__3 ;
      GGS_bool extractedValue_12785__4 ;
      var_kind_12428.getAssociatedValuesFor_toOne (extractedValue_12785__0, extractedValue_12785__1, extractedValue_12785__2, extractedValue_12785__3, extractedValue_12785__4) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_5.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 305)), GGS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.ggs", 305)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_12909__0 ;
      GGS_bool extractedValue_12909__1 ;
      var_kind_12428.getAssociatedValuesFor_arrayController (extractedValue_12909__0, extractedValue_12909__1) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_7.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 307)), GGS_string ("only an atomic property can be observed"), fixItArray8  COMMA_SOURCE_FILE ("multiple-binding.ggs", 307)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_13036__0 ;
      var_kind_12428.getAssociatedValuesFor_selectionController (extractedValue_13036__0) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_9.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 309)), GGS_string ("only an atomic property can be observed"), fixItArray10  COMMA_SOURCE_FILE ("multiple-binding.ggs", 309)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_11 = this ;
  GGS_string temp_12 ;
  const GalgasBool test_13 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_13) {
    temp_12 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_13) {
    temp_12 = GGS_string ("self.") ;
  }
  outArgument_outEnableExpression = GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::init_21_ (extensionGetter_modelStringForSelf (temp_11.readProperty_mProperty (), temp_12, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 312)), inCompiler COMMA_HERE) ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_14 = this ;
  outArgument_outErrorLocation = extensionGetter_location (temp_14.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 314)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                                 const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                 const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                 const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                 GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                 GGS_typeKind & outArgument_outType,
                                                                                                 GGS_location & outArgument_outErrorLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_14217 ;
  const GGS_negateBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_expression_14217, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 329)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 339)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 339)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GGS_string ("cannot apply negation: operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 340)) ;
    }
  }
  outArgument_outEnableExpression = GGS_negateBooleanMultipleBindingExpressionForGeneration::init_21_ (var_expression_14217, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                             const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                             GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                             GGS_typeKind & outArgument_outType,
                                                                                             GGS_location & outArgument_outErrorLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_15315 ;
  GGS_typeKind var_outLeftType_15340 ;
  GGS_location var_outLeftLocation_15362 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_15315, var_outLeftType_15340, var_outLeftLocation_15362, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 357)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_15340.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 367)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 367)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_15362, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 368)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_15783 ;
  GGS_typeKind var_outRightType_15809 ;
  GGS_location var_outRightLocation_15832 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_15783, var_outRightType_15809, var_outRightLocation_15832, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 370)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_15809.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 380)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 380)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_15832, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 381)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 383)) ;
  outArgument_outErrorLocation = var_outRightLocation_15832 ;
  outArgument_outEnableExpression = GGS_orBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_15315, var_rightExpression_15783, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16984 ;
  GGS_typeKind var_outLeftType_17009 ;
  GGS_location var_outLeftLocation_17031 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_16984, var_outLeftType_17009, var_outLeftLocation_17031, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 400)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_17009.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 410)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 410)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_17031, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 411)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_17452 ;
  GGS_typeKind var_outRightType_17478 ;
  GGS_location var_outRightLocation_17501 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_17452, var_outRightType_17478, var_outRightLocation_17501, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 413)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_17478.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 423)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 423)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_17501, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 424)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 426)) ;
  outArgument_outErrorLocation = var_outRightLocation_17501 ;
  outArgument_outEnableExpression = GGS_xorBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_16984, var_rightExpression_17452, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_18654 ;
  GGS_typeKind var_outLeftType_18679 ;
  GGS_location var_outLeftLocation_18701 ;
  const GGS_andBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_18654, var_outLeftType_18679, var_outLeftLocation_18701, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 443)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_18679.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 453)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 453)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_18701, GGS_string ("cannot apply 'and': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 454)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_19123 ;
  GGS_typeKind var_outRightType_19149 ;
  GGS_location var_outRightLocation_19172 ;
  const GGS_andBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_19123, var_outRightType_19149, var_outRightLocation_19172, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 456)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_19149.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 466)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 466)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_19172, GGS_string ("cannot apply 'and': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 467)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 469)) ;
  outArgument_outErrorLocation = var_outRightLocation_19172 ;
  outArgument_outEnableExpression = GGS_andBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_18654, var_rightExpression_19123, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_20326 ;
  GGS_typeKind var_outLeftType_20351 ;
  GGS_location var_outLeftLocation_20373 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_20326, var_outLeftType_20351, var_outLeftLocation_20373, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 486)) ;
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_20674 ;
  GGS_typeKind var_outRightType_20700 ;
  GGS_location var_outRightLocation_20723 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_1.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_20674, var_outRightType_20700, var_outRightLocation_20723, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 496)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = var_outLeftType_20351.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 506)) ;
    if (GalgasBool::boolTrue != test_3.boolEnum ()) {
      test_3 = var_outLeftType_20351.getter_isIntegerType (SOURCE_FILE ("multiple-binding.ggs", 506)) ;
    }
    test_2 = test_3.operator_not (SOURCE_FILE ("multiple-binding.ggs", 506)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_outLeftLocation_20373, GGS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.ggs", 507)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_outRightType_20700.objectCompare (var_outLeftType_20351)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (var_outRightLocation_20723, GGS_string ("cannot compare: right operand type is different than left operand type"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.ggs", 510)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 512)) ;
  outArgument_outErrorLocation = var_outRightLocation_20723 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_7 = this ;
  outArgument_outEnableExpression = GGS_comparisonMultipleBindingExpressionForGeneration::init_21__21__21_ (var_leftExpression_20326, temp_7.readProperty_mOperator (), var_rightExpression_20674, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@booleanMultipleBindingLiteralIntForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_booleanMultipleBindingLiteralIntForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_booleanMultipleBindingLiteralIntForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".literalInt (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("multiple-binding.ggs", 529)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 529)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 529)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".prop (").add_operation (temp_0.readProperty_mObservedModelString (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 536)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 536)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@negateBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_negateBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_negateBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".not (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 543)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 543)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 543)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@orBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_orBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_orBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_orBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 550)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 550)).add_operation (GGS_string (", .or, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 550)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 550)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 550)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 550)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@xorBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_xorBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_xorBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_xorBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 557)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 557)).add_operation (GGS_string (", .xor, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 557)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 557)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 557)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 557)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@andBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_andBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_andBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_andBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 564)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 564)).add_operation (GGS_string (", .and, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 564)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 564)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 564)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 564)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@comparisonMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_comparisonMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".intcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 571)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 571)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 571)) ;
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_1 = this ;
  switch (temp_1.readProperty_mOperator ().enumValue ()) {
  case GGS_multipleBindingComparisonAST::Enumeration::invalid:
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_equal:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".eq"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 573)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_notEqual:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".ne"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 574)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_lower:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".lt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 575)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_lowerOrEqual:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".le"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 576)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_greater:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".gt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 577)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_greaterOrEqual:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".ge"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 578)) ;
    }
    break ;
  }
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_2 = this ;
  result_outExpressionString.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_2.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 580)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 580)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 580)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 580)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'validationStubExtension'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension (
  "controllers",
  0,
  gWrapperAllFiles_validationStubExtension_3,
  0,
  gWrapperAllDirectories_validationStubExtension_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension (
  "standard-properties",
  0,
  gWrapperAllFiles_validationStubExtension_1,
  0,
  gWrapperAllDirectories_validationStubExtension_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_2 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_0 [4] = {
  & gWrapperDirectory_3_validationStubExtension,
  & gWrapperDirectory_1_validationStubExtension,
  & gWrapperDirectory_2_validationStubExtension,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension (
  "",
  0,
  gWrapperAllFiles_validationStubExtension_0,
  3,
  gWrapperAllDirectories_validationStubExtension_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'validationStubExtension actionGeneration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_validationStubExtension_actionGeneration (Compiler * /* inCompiler */,
                                                                         const GGS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                         const GGS_string & in_MODEL_5F_NAME,
                                                                         const GGS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_OBJECT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  func validate_") ;
  result.appendString (in_MODEL_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("currentValue : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (",\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("proposedValue : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") -> EBValidationResult <") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateValidationRoutineStubs??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateValidationRoutineStubs_3F__3F__26_ (const GGS_string constinArgument_inOutputDirectory,
                                                         const GGS_validationStubRoutineListForGeneration constinArgument_inValidationStubRoutineListForGeneration,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_validationStubRoutineListForGeneration enumerator_1212 (constinArgument_inValidationStubRoutineListForGeneration) ;
  while (enumerator_1212.hasCurrentObject ()) {
    GGS_string var_s_1283 = GGS_string (filewrapperTemplate_validationStubExtension_actionGeneration (inCompiler, enumerator_1212.current_mObjectTypeName (HERE), enumerator_1212.current_mModelName (HERE), enumerator_1212.current_mModelTypeName (HERE) COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 33))) ;
    GGS_string var_fileName_1418 = GGS_string ("validation-").add_operation (enumerator_1212.current_mObjectTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (enumerator_1212.current_mModelName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_1418, inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 39)) ;
    }
    GGS_string var_defaultUserZone_32__1542 = GGS_string ("    var result : EBValidationResult <").add_operation (enumerator_1212.current_mModelTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GGS_string (">\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GGS_string ("    let validates = false // Add your validation condition here\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GGS_string ("    if validates {\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 42)).add_operation (GGS_string ("      result = .ok (proposedValue)\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 43)).add_operation (GGS_string ("    }else{\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 44)).add_operation (GGS_string ("      result = .rejectWithAlert (\"Rejected in \\(#file), line \\(#line)\")\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 45)).add_operation (GGS_string ("    }\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 46)).add_operation (GGS_string ("    return result\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 47)) ;
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_1418, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_s_1283, var_defaultUserZone_32__1542, GGS_string ("  }\n},\n\n//---------------------------------------------------------------------------------------------------------------------*\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 49)) ;
    }
    enumerator_1212.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1115 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 28)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 28)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_arrayControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1115, temp_3, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 29)) ;
  }
  {
  const GGS_arrayControllerDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1115, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("array-controller.ggs", 30)) ;
  }
  const GGS_arrayControllerDeclarationAST temp_5 = this ;
  switch (temp_5.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_1367_rootEntityName_0 ;
      temp_5.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_1367_rootEntityName_0) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, extractedValue_1367_rootEntityName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          const GGS_arrayControllerDeclarationAST temp_7 = this ;
          const GGS_arrayControllerDeclarationAST temp_8 = this ;
          ioArgument_ioGraph.setter_addEdge (var_node_1115, GGS_lstring::init_21__21_ (extractedValue_1367_rootEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 34)).add_operation (temp_7.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 34)), temp_8.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("array-controller.ggs", 34)) ;
          }
        }
      }
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      {
      const GGS_arrayControllerDeclarationAST temp_9 = this ;
      const GGS_arrayControllerDeclarationAST temp_10 = this ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_addEdge (var_node_1115, GGS_lstring::init_21__21_ (temp_9.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 37)).add_operation (temp_10.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 37)), temp_11.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("array-controller.ggs", 37)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_arrayControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 44)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 44)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_4145 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_actionMap var_controllerActions_4309 = GGS_actionMap::init (inCompiler COMMA_HERE) ;
  {
  var_controllerActions_4309.setter_insertKey (GGS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.ggs", 111)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 111)) ;
  }
  {
  var_controllerActions_4309.setter_insertKey (GGS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.ggs", 112)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 112)) ;
  }
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  switch (temp_1.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_4500_rootEntityName_0 ;
      temp_1.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_4500_rootEntityName_0) ;
      GGS_propertyMap var_rootProperties_4588 ;
      GGS_classKind joker_4579 ; // Joker input parameter
      GGS_actionMap joker_4604_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_4604_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_4500_rootEntityName_0, joker_4579, var_rootProperties_4588, joker_4604_2, joker_4604_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 115)) ;
      GGS_propertyKind var_classKind_4672 ;
      const GGS_arrayControllerDeclarationAST temp_2 = this ;
      GGS_actionMap joker_4683_2 ; // Joker input parameter
      GGS_bool joker_4683_1 ; // Joker input parameter
      var_rootProperties_4588.method_searchKey (temp_2.readProperty_mToManyPropertyName (), var_classKind_4672, joker_4683_2, joker_4683_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 116)) ;
      switch (var_classKind_4672.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_4733__0 ;
          GGS_propertyAccessibility extractedValue_4733__1 ;
          var_classKind_4672.getAssociatedValuesFor_property (extractedValue_4733__0, extractedValue_4733__1) ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_4500_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.ggs", 119)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_4829_typeName_0 ;
          GGS_propertyAccessibility extractedValue_4839__1 ;
          GGS_bool extractedValue_4842_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_4851__3 ;
          var_classKind_4672.getAssociatedValuesFor_toMany (extractedValue_4829_typeName_0, extractedValue_4839__1, extractedValue_4842_graphic_2, extractedValue_4851__3) ;
          GGS_propertyKind var_kind_4868 = GGS_propertyKind::class_func_arrayController (extractedValue_4829_typeName_0, extractedValue_4842_graphic_2  COMMA_SOURCE_FILE ("array-controller.ggs", 121)) ;
          {
          const GGS_arrayControllerDeclarationAST temp_4 = this ;
          var_entry_4145.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mControllerName (), var_kind_4868, var_controllerActions_4309, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 125)) ;
          }
          {
          const GGS_arrayControllerDeclarationAST temp_5 = this ;
          const GGS_arrayControllerDeclarationAST temp_6 = this ;
          const GGS_arrayControllerDeclarationAST temp_7 = this ;
          var_entry_4145.mProperty_mPropertyGenerationList.setter_append (GGS_arrayControllerPropertyGeneration::init_21__21__21_ (temp_5.readProperty_mControllerName ().readProperty_string (), GGS_string ("rootObject.").add_operation (temp_6.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 129)), temp_7.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 127)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_5324__0 ;
          GGS_propertyAccessibility extractedValue_5324__1 ;
          GGS_bool extractedValue_5324__2 ;
          GGS_toOneOppositeRelationship extractedValue_5324__3 ;
          GGS_bool extractedValue_5324__4 ;
          var_classKind_4672.getAssociatedValuesFor_toOne (extractedValue_5324__0, extractedValue_5324__1, extractedValue_5324__2, extractedValue_5324__3, extractedValue_5324__4) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_4500_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.ggs", 134)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_5430__0 ;
          GGS_bool extractedValue_5430__1 ;
          var_classKind_4672.getAssociatedValuesFor_arrayController (extractedValue_5430__0, extractedValue_5430__1) ;
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_4500_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.ggs", 136)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_5539__0 ;
          var_classKind_4672.getAssociatedValuesFor_selectionController (extractedValue_5539__0) ;
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_4500_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.ggs", 138)) ;
        }
        break ;
      }
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      GGS_propertyKind var_classKind_5727 ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      GGS_actionMap joker_5738_2 ; // Joker input parameter
      GGS_bool joker_5738_1 ; // Joker input parameter
      var_entry_4145.readProperty_mPropertyMap ().method_searchKey (temp_11.readProperty_mToManyPropertyName (), var_classKind_5727, joker_5738_2, joker_5738_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 141)) ;
      switch (var_classKind_5727.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_5788__0 ;
          GGS_propertyAccessibility extractedValue_5788__1 ;
          var_classKind_5727.getAssociatedValuesFor_property (extractedValue_5788__0, extractedValue_5788__1) ;
          const GGS_arrayControllerDeclarationAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray13  COMMA_SOURCE_FILE ("array-controller.ggs", 144)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_5894_typeName_0 ;
          GGS_propertyAccessibility extractedValue_5904__1 ;
          GGS_bool extractedValue_5907_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_5916__3 ;
          var_classKind_5727.getAssociatedValuesFor_toMany (extractedValue_5894_typeName_0, extractedValue_5904__1, extractedValue_5907_graphic_2, extractedValue_5916__3) ;
          GGS_propertyKind var_kind_5933 = GGS_propertyKind::class_func_arrayController (extractedValue_5894_typeName_0, extractedValue_5907_graphic_2  COMMA_SOURCE_FILE ("array-controller.ggs", 146)) ;
          {
          const GGS_arrayControllerDeclarationAST temp_14 = this ;
          var_entry_4145.mProperty_mPropertyMap.setter_insertKey (temp_14.readProperty_mControllerName (), var_kind_5933, var_controllerActions_4309, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 150)) ;
          }
          {
          const GGS_arrayControllerDeclarationAST temp_15 = this ;
          const GGS_arrayControllerDeclarationAST temp_16 = this ;
          const GGS_arrayControllerDeclarationAST temp_17 = this ;
          var_entry_4145.mProperty_mPropertyGenerationList.setter_append (GGS_arrayControllerPropertyGeneration::init_21__21__21_ (temp_15.readProperty_mControllerName ().readProperty_string (), temp_16.readProperty_mToManyPropertyName ().readProperty_string (), temp_17.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 152)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_6373__0 ;
          GGS_propertyAccessibility extractedValue_6373__1 ;
          GGS_bool extractedValue_6373__2 ;
          GGS_toOneOppositeRelationship extractedValue_6373__3 ;
          GGS_bool extractedValue_6373__4 ;
          var_classKind_5727.getAssociatedValuesFor_toOne (extractedValue_6373__0, extractedValue_6373__1, extractedValue_6373__2, extractedValue_6373__3, extractedValue_6373__4) ;
          const GGS_arrayControllerDeclarationAST temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray19  COMMA_SOURCE_FILE ("array-controller.ggs", 159)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_6489__0 ;
          GGS_bool extractedValue_6489__1 ;
          var_classKind_5727.getAssociatedValuesFor_arrayController (extractedValue_6489__0, extractedValue_6489__1) ;
          const GGS_arrayControllerDeclarationAST temp_20 = this ;
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray21  COMMA_SOURCE_FILE ("array-controller.ggs", 161)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_6608__0 ;
          var_classKind_5727.getAssociatedValuesFor_selectionController (extractedValue_6608__0) ;
          const GGS_arrayControllerDeclarationAST temp_22 = this ;
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray23  COMMA_SOURCE_FILE ("array-controller.ggs", 163)) ;
        }
        break ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_4145, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 167)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GGS_generationStruct & ioArgument_ioGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_boundModelPropertyMap_7187 ;
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  switch (temp_0.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_7270_rootEntityName_0 ;
      temp_0.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_7270_rootEntityName_0) ;
      GGS_classKind joker_7361 ; // Joker input parameter
      GGS_actionMap joker_7403_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7403_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_7270_rootEntityName_0, joker_7361, var_boundModelPropertyMap_7187, joker_7403_2, joker_7403_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 183)) ;
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      const GGS_arrayControllerDeclarationAST temp_1 = this ;
      GGS_classKind joker_7519 ; // Joker input parameter
      GGS_actionMap joker_7561_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7561_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mClassName (), joker_7519, var_boundModelPropertyMap_7187, joker_7561_2, joker_7561_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 190)) ;
    }
    break ;
  }
  GGS_propertyKind var_boundModelClassKind_7656 ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  GGS_actionMap joker_7682_2 ; // Joker input parameter
  GGS_bool joker_7682_1 ; // Joker input parameter
  var_boundModelPropertyMap_7187.method_searchKey (temp_2.readProperty_mToManyPropertyName (), var_boundModelClassKind_7656, joker_7682_2, joker_7682_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 197)) ;
  GGS_arrayControllerModelKind var_arrayControllerModelKind_7809 ;
  GGS_bool var_graphic_7846 ;
  GGS_string var_elementTypeName_7868 ;
  switch (var_boundModelClassKind_7656.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_7931__0 ;
      GGS_propertyAccessibility extractedValue_7931__1 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_property (extractedValue_7931__0, extractedValue_7931__1) ;
      const GGS_arrayControllerDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.ggs", 208)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_8096_typeName_0 ;
      GGS_propertyAccessibility extractedValue_8106_accessibility_1 ;
      GGS_bool extractedValue_8121_isGraphic_2 ;
      GGS_toManyRelationshipOptionAST extractedValue_8132__3 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_toMany (extractedValue_8096_typeName_0, extractedValue_8106_accessibility_1, extractedValue_8121_isGraphic_2, extractedValue_8132__3) ;
      var_elementTypeName_7868 = extractedValue_8096_typeName_0.readProperty_string () ;
      var_graphic_7846 = extractedValue_8121_isGraphic_2 ;
      GGS_arrayControllerModelKind temp_5 ;
      const GalgasBool test_6 = extractedValue_8106_accessibility_1.getter_isTransient (SOURCE_FILE ("array-controller.ggs", 214)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_arrayControllerModelKind::class_func_transientArray (SOURCE_FILE ("array-controller.ggs", 215)) ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_arrayControllerModelKind::class_func_entityArray (SOURCE_FILE ("array-controller.ggs", 216)) ;
      }
      var_arrayControllerModelKind_7809 = temp_5 ;
      GGS_classKind joker_8364 ; // Joker input parameter
      GGS_propertyMap joker_8368_3 ; // Joker input parameter
      GGS_actionMap joker_8368_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_8368_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_8096_typeName_0, joker_8364, joker_8368_3, joker_8368_2, joker_8368_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 218)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_8388__0 ;
      GGS_propertyAccessibility extractedValue_8388__1 ;
      GGS_bool extractedValue_8388__2 ;
      GGS_toOneOppositeRelationship extractedValue_8388__3 ;
      GGS_bool extractedValue_8388__4 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_toOne (extractedValue_8388__0, extractedValue_8388__1, extractedValue_8388__2, extractedValue_8388__3, extractedValue_8388__4) ;
      const GGS_arrayControllerDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.ggs", 220)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_8563__0 ;
      GGS_bool extractedValue_8563__1 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_arrayController (extractedValue_8563__0, extractedValue_8563__1) ;
      const GGS_arrayControllerDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.ggs", 224)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_8741__0 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_selectionController (extractedValue_8741__0) ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray12  COMMA_SOURCE_FILE ("array-controller.ggs", 228)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  }
  {
  const GGS_arrayControllerDeclarationAST temp_13 = this ;
  const GGS_arrayControllerDeclarationAST temp_14 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_arrayControllerGeneration::init_21__21__21__21__21__21_ (temp_13.readProperty_mClassName ().readProperty_string (), temp_14.readProperty_mControllerName (), GGS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_7868, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 236)), var_arrayControllerModelKind_7809, var_elementTypeName_7868, var_graphic_7846, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 233)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (var_elementTypeName_7868, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 242)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                                   const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                   const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("array-controller.ggs", 261)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 261)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 261)) ;
      const GGS_arrayControllerPropertyGeneration temp_1 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Array controller: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 262)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 262)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 262)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("array-controller.ggs", 263)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 263)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 263)) ;
      const GGS_arrayControllerPropertyGeneration temp_2 = this ;
      const GGS_arrayControllerPropertyGeneration temp_3 = this ;
      const GGS_arrayControllerPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("@MainAction let preferences_").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)).add_operation (temp_3.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 264)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.ggs", 266)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 266)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 266)) ;
    const GGS_arrayControllerPropertyGeneration temp_5 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Array controller: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 267)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 267)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 267)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.ggs", 268)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 268)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 268)) ;
    const GGS_arrayControllerPropertyGeneration temp_6 = this ;
    const GGS_arrayControllerPropertyGeneration temp_7 = this ;
    const GGS_arrayControllerPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 269)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 269)).add_operation (temp_7.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 269)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 269)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 269)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 269)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_arrayControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Array controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 282)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 282)) ;
  const GGS_arrayControllerPropertyGeneration temp_1 = this ;
  const GGS_arrayControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 283)).add_operation (GGS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 283)).add_operation (temp_2.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 283)).add_operation (GGS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 283)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 283)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_arrayControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_arrayControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_arrayControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_arrayControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_arrayControllerGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayControllerGenerationTemplate arrayControllerImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (Compiler * inCompiler,
                                                                                                       const GGS_string & in_OWNER_5F_NAME,
                                                                                                       const GGS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                                       const GGS_arrayControllerModelKind & in_MODEL_5F_KIND,
                                                                                                       const GGS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                       const GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                       const GGS_bool & in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Array controller ").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class Controller_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" : EBReadOnlyAbstractGenericRelationshipProperty") ;
  const GalgasBool test_0 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (", EBGraphicViewControllerProtocol") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (", HiddenEBProtocol {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mUndoManager : UndoManager\? = nil // SHOULD BE WEAK\n  var undoManager : UndoManager\? { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objects : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    if let objects = self.mModel\?.propval {\n      return objects\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedSet : EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    set {\n") ;
  const GalgasBool test_1 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("    //--- Add observers to newly selected set\n      for object in newValue.subtracting (self.mPrivateSelectedSet).values {\n        object.selectionDisplay_property.startsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n    //--- Remove observers to deselected set\n      let deselectedSet = self.mPrivateSelectedSet.subtracting (newValue)\n      for object in deselectedSet.values {\n        object.selectionDisplay_property.stopsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n      if deselectedSet.count > 0 {\n        self.mObjectSelectionObserver.observedObjectDidChange () // Required, as removing observer does not post event\n      }\n    //---\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("      self.mPrivateSelectedSet = newValue\n    }\n    get {\n      return self.selectedArray_property.propset\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mPrivateSelectedSet = EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> () {\n    didSet {\n      self.selectedArray_property.observedObjectDidChange ()\n      self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (self.mPrivateSelectedSet.values)))\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Selected Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mInternalSelectedArrayProperty = StandAloneArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArrayDidChange_property : EBObservedObserver { return self.mInternalSelectedArrayProperty } // EBGraphicViewControllerProtocol\n  var selectedArray_property : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mInternalSelectedArrayProperty }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n") ;
  const GalgasBool test_2 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n   //--- Selection observers\n    self.canBringForward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringForward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canBringToFront_property)\n  //---\n    self.canBringToFront_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringToFront)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canBringToFront_property)\n  //---\n    self.canSendBackward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendBackward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canSendBackward_property)\n  //---\n    self.canSendToBack_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendToBack)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canSendToBack_property)\n  //---\n    self.canFlipHorizontally_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipHorizontally)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canFlipHorizontally_property)\n  //---\n    self.canFlipVertically_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipVertically)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canFlipVertically_property)\n  //---\n    self.canRotate90_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canRotate90)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canRotate90_property)\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objectCount : Int {\n    if let n = self.mModel\?.propval.count {\n      return n\n    }else{\n      return 0\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_model (_ inModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (", _ inUndoManager : UndoManager\?) {\n    self.mModel = inModel\n    self.mUndoManager = inUndoManager\n    inModel.attachClient (self)\n") ;
  const GalgasBool test_3 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("    self.startObservingObjectShape ()\n    self.startObservingSelectionShape ()\n    self.inspectorViewManagerStartsObservingSelection ()\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func unbind_model () {\n") ;
  const GalgasBool test_4 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("    self.stopObservingObjectShape ()\n    self.stopObservingSelectionShape ()\n    self.inspectorViewManagerStopsObservingSelection ()\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    self.mModel\?.detachClient (self)\n    self.selectedSet = EBReferenceSet ()\n    self.mModel = nil\n    self.mUndoManager = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    super.notifyModelDidChange ()\n    let currentSelectedSet = self.selectedSet\n    let objectArray = self.objectArray\n    let newSelectedSet = currentSelectedSet.intersection (objectArray.values)\n    self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (newSelectedSet.values)))\n  }\n\n   // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   var objectArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n     if let values = self.mModel\?.propval {\n       return values\n     }else{\n       return EBReferenceArray ()\n     }\n   }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   SELECTION\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedIndexesSet : Set <Int> {\n    var result = Set <Int> ()\n    var idx = 0\n    for object in self.objectArray.values {\n      if self.selectedArray_property.propset.contains (object) {\n        result.insert (idx)\n      }\n      idx += 1\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (_ inObjects : [") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("]) {\n    self.selectedSet = EBReferenceSet (inObjects)\n  }\n") ;
  const GalgasBool test_5 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Graphic view interface\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedGraphicObjectSet : EBReferenceSet <EBGraphicManagedObject> {\n    var result = EBReferenceSet <EBGraphicManagedObject> (minimumCapacity: self.selectedArray_property.propval.count)\n    for object in self.selectedArray_property.propval.values {\n      result.insert (object)\n    }\n    return result\n  }\n\n   // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   var graphicObjectArray : [EBGraphicManagedObject] {\n     if let v = self.mModel\?.propval {\n       return v.values\n     }else{\n       return []\n     }\n   }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // Compute selection shape\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mObjectSelectionObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func startObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StartsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = { [weak self] in self\?.computeSelectionShape () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func computeSelectionShape () {\n    var selectionDisplayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if !self.selectedArray_property.propset.contains (object) {\n        selectionDisplayArray.append (EBShape ())\n      }else if let shape = object.selectionDisplay {\n        selectionDisplayArray.append (shape)\n      }else{\n        selectionDisplayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateSelectionShape (selectionDisplayArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func stopObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StopsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // Compute object shape\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mObjectDisplayObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func startObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StartsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = { [weak self] in self\?.updateObjectDisplay () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func stopObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StopsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func updateObjectDisplay () {\n    var displayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if let shape = object.objectDisplay {\n        displayArray.append (shape)\n      }else{\n        displayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateObjectDisplay (displayArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func alignmentPointSetArray () -> [Set<CanariPoint>] {\n    var result = [Set<CanariPoint>] ()\n    for object in self.objectArray.values {\n      result.append (object.alignmentPoints ())\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // EBGraphicViews\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mEBGraphicViews = Set <EBGraphicView> ()\n  private var mPasteboardTypes = Set <NSPasteboard.PasteboardType> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func addPasteBoardType (_ inType : NSPasteboard.PasteboardType) {\n    if !self.mPasteboardTypes.contains (inType) {\n      self.mPasteboardTypes.insert (inType)\n      for ebView in self.mEBGraphicViews {\n        ebView.register (draggedTypes: [inType])\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func boundViews () -> [EBGraphicView] {\n    return Array (self.mEBGraphicViews)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setBackgroundImageAffineTransform (_ inAffineTransform : NSAffineTransform) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mBackgroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setForegroundImageAffineTransform (_ inAffineTransform : NSAffineTransform) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mForegroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.register (draggedTypes: Array (self.mPasteboardTypes))\n      self.mEBGraphicViews.insert (ebView)\n      ebView.set (controller: self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.updateObjectDisplay ([])\n      ebView.updateSelectionShape ([])\n      self.mEBGraphicViews.remove (ebView)\n    }\n  } */\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func selectedObjectIndexSet () -> NSIndexSet {\n    let modelObjects = self.objectArray\n    let selectedObjects = self.selectedArray_property.propset\n    let indexSet = NSMutableIndexSet ()\n    for object in selectedObjects.values {\n      if let index = modelObjects.firstIndex (of: object) {\n        indexSet.add (index)\n      }\n    }\n    return indexSet\n  }\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_arrayControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_arrayControllerModelKind::Enumeration::enum_transientArray :
    {
    }
    break ;
  case GGS_arrayControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    select\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func select (object inObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (") {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let objectArray) :\n       let array = EBReferenceArray (objectArray)\n       if array.contains (inObject) {\n           self.selectedSet = EBReferenceSet (inObject)\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    add\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   @objc func add (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let v) :\n        let newObject = ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (" (self.undoManager)\n        var array = EBReferenceArray (v)\n        array.append (newObject)\n      //--- New object is the selection\n        self.selectedSet = EBReferenceSet ([newObject])\n        model.setProp (array)\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    remove\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @objc func remove (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let model_prop) :\n      //------------- Find the object to be selected after selected object removing\n      //--- Dictionary of object sorted indexes\n        var sortedObjectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          sortedObjectDictionary [object] = index\n        }\n        var indexArrayOfSelectedObjects = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = sortedObjectDictionary [object]\n          if let idx = index {\n            indexArrayOfSelectedObjects.append (idx)\n          }\n        }\n      //--- Sort\n        indexArrayOfSelectedObjects.sort { $0 < $1 }\n      //--- Find the first index of a non selected object\n        var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n        for index in indexArrayOfSelectedObjects {\n          if newSelectionIndex < index {\n            break\n          }else{\n            newSelectionIndex = index + 1\n          }\n        }\n        var newSelectedObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("\? = nil\n        if (newSelectionIndex >= 0) && (newSelectionIndex < model_prop.count) {\n          newSelectedObject = model_prop [newSelectionIndex]\n        }\n      //----------------------------------------- Remove selected object\n      //--- Dictionary of object absolute indexes\n        var objectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          objectDictionary [object] = index\n        }\n      //--- Build selected objects index array\n        var selectedObjectIndexArray = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = objectDictionary [object]\n          if let idx = index {\n            selectedObjectIndexArray.append (idx)\n          }\n        }\n      //--- Sort in reverse order\n        selectedObjectIndexArray.sort { $1 < $0 }\n      //--- Remove objects, in reverse of order of their index\n        var newObjectArray = EBReferenceArray (model_prop)\n        for index in selectedObjectIndexArray {\n          newObjectArray.remove (at: index)\n        }\n      //----------------------------------------- Set new selection\n        var newSelectionSet = EBReferenceSet <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("> ()\n        if let object = newSelectedObject {\n          newSelectionSet.insert (object)\n        }\n        self.selectedSet = newSelectionSet\n      //----------------------------------------- Set new object array\n        model.setProp (newObjectArray)\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  const GalgasBool test_6 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  DOCUMENT  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final weak var mDocument : EBAutoLayoutManagedDocument\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func set (document inDocument : EBAutoLayoutManagedDocument) {\n    self.mDocument = inDocument\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  SELECTION OPERATIONS\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func sortedIndexArrayOfSelectedObjects () -> [Int] {\n    var result = [Int] ()\n    let objects = self.objectArray\n    for object in self.selectedArray_property.propset.values {\n      let idx = objects.firstIndex (of: object)!\n      result.append (idx)\n    }\n    return result.sorted ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canCut (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if (inPasteboardType == nil) || (self.selectedArray_property.propset.count == 0) {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canCopyAndPaste () || !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func cutSelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, pasteOffset : CanariPoint) {\n    self.copySelectedObjectsIntoPasteboard (inPasteboardType, pasteOffset: pasteOffset)\n    self.deleteSelectedObjects ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canCopy (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    return self.canCut (inPasteboardType)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func copySelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?,\n                                          pasteOffset : CanariPoint) {\n    if let pasteboardType = inPasteboardType {\n    //--- Declare pasteboard types\n      let pb = NSPasteboard.general\n      pb.declareTypes ([pasteboardType, .pdf], owner: self)\n    //--- Build PDF representation\n      let indexArray = self.sortedIndexArrayOfSelectedObjects ()\n      let objects = self.objectArray\n      var shape = EBShape ()\n      for idx in indexArray {\n        let object = objects [idx]\n        if let s = object.objectDisplay {\n          shape.add (s)\n        }\n      }\n      let pdfData = buildPDFimageData (frame: shape.boundingBox, shape: shape)\n      pb.setData (pdfData, forType: .pdf)\n   //--- Build private representation\n      var objectDictionaryArray = [[String : Any]] ()\n      var objectAdditionalDictionaryArray = [[String : Any]] ()\n      for idx in indexArray {\n        let object = objects [idx]\n        var dict = [String : Any] ()\n        object.savePropertiesIntoDictionary (&dict)\n        objectDictionaryArray.append (dict)\n        var additionalDict = [String : Any] ()\n        object.saveIntoAdditionalDictionary (&additionalDict)\n        objectAdditionalDictionaryArray.append (additionalDict)\n      }\n    //--- Copy private representation\n      let dataDictionary : [String : Any] = [\n        OBJECT_DICTIONARY_KEY : objectDictionaryArray,\n        OBJECT_ADDITIONAL_DICTIONARY_KEY : objectAdditionalDictionaryArray,\n        X_KEY : pasteOffset.x,\n        Y_KEY : pasteOffset.y\n      ]\n      pb.setPropertyList (dataDictionary, forType: pasteboardType)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canPaste (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if let pasteboardType = inPasteboardType {\n      let pb = NSPasteboard.general\n      return pb.availableType (from: [pasteboardType]) != nil\n    }else{\n      return false\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   func pasteFromPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, _ inWindow : NSWindow) {\n    let pb = NSPasteboard.general\n    if let pasteboardType = inPasteboardType,\n           pb.availableType (from: [pasteboardType]) != nil,\n           let dataDictionary = pb.propertyList (forType: pasteboardType) as\? [String : Any],\n           let dictionaryArray = dataDictionary [OBJECT_DICTIONARY_KEY] as\? [[String : Any]],\n           let additionalDictionaryArray = dataDictionary [OBJECT_ADDITIONAL_DICTIONARY_KEY] as\? [[String : Any]],\n           let X = dataDictionary [X_KEY] as\? Int,\n           let Y = dataDictionary [Y_KEY] as\? Int {\n      var newObjects = [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("] ()\n      var userSet = EBReferenceSet <EBManagedObject> ()\n      var idx = -1\n      var errorMessage = \"\"\n      for dictionary in dictionaryArray {\n        idx += 1\n        if let object = makeManagedObjectFromDictionary (self.undoManager, dictionary) as\? ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (" {\n          if errorMessage.isEmpty {\n            errorMessage = object.operationAfterPasting (additionalDictionary: additionalDictionaryArray [idx],\n                                                         optionalDocument: self.mDocument,\n                                                         objectArray: self.objectArray.values)\n          }\n          if errorMessage.isEmpty {\n            object.translate (xBy: X, yBy: Y, userSet: &userSet)\n            newObjects.append (object)\n          }\n        }\n      }\n      if errorMessage.isEmpty {\n        var objects = self.objectArray\n        objects.append (objects: newObjects)\n        self.mModel\?.setProp (objects)\n        self.selectedSet = EBReferenceSet (newObjects)\n      }else{\n         let alert = NSAlert ()\n         alert.messageText = errorMessage\n         _ = alert.addButton (withTitle: \"Ok\")\n         alert.beginSheetModal (for: inWindow) { (inReturnCode : NSApplication.ModalResponse) in }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canDelete () -> Bool {\n    if self.selectedArray_property.propset.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var mAfterObjectRemovingCallback : Optional < () -> Void > = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func deleteSelectedObjects () {\n    if self.canDelete (), let model = self.mModel {\n    //--- Remove selected objects\n      let objectsToRemove = self.selectedArray_property.propset\n      for object in objectsToRemove.values {\n        object.operationBeforeRemoving ()\n        var objects = model.propval\n        if let idx = objects.firstIndex (of: object) {\n          objects.remove (at: idx)\n          model.setProp (objects)\n        }\n      }\n    //---\n      self.mAfterObjectRemovingCallback\? ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func selectAllObjects () {\n    self.selectedSet = EBReferenceSet (self.objectArray.values)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // BRING FORWARD\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringForward_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringForward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray.last! < (objects.count - 1)\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bringForward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n       let object = objects [idx]\n       objects.remove (at: idx)\n       objects.insert (object, at: idx+1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // BRING TO FRONT\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringToFront_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringToFront : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var top = objects.count - 1\n      for idx in sortedIndexArray.reversed () {\n        if idx < top {\n          return true\n        }\n        top -= 1\n      }\n    }\n    return false\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bringToFront () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.append (object)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SEND BACKWARD\n   // MARK: -\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendBackward_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendBackward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray [0] > 0\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func sendBackward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.insert (object, at: idx - 1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SEND TO BACK\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendToBack_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func sendToBack () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    var newObjectArray = EBReferenceArray <") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      newObjectArray.append (object)\n    }\n    newObjectArray.reverse ()\n    newObjectArray.append (objects: objects)\n    self.mModel\?.setProp (newObjectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendToBack : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var bottom = 0\n      for idx in sortedIndexArray {\n        if idx > bottom {\n          return true\n        }\n        bottom += 1\n      }\n    }\n    return false\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SNAP TO GRID\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func snapToGrid (_ inGrid : Int) {\n    for object in self.selectedArray_property.propset.values {\n      object.snapToGrid (inGrid)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canSnapToGrid (_ inGrid : Int) -> Bool {\n    for object in self.selectedArray_property.propset.values {\n      if object.canSnapToGrid (inGrid) {\n        return true\n      }\n    }\n    return false\n  }\n\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // HORIZONTAL FLIP\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipHorizontally_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func flipHorizontally () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipHorizontally ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipHorizontally : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipHorizontally () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // VERTICAL FLIP\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipVertically_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func flipVertically () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipVertically ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipVertically : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipVertically () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // ROTATE 90\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canRotate90_property = EBTransientProperty <Bool> ()\n  private var mRotate90PointSet = Set <CanariPoint> ()\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canRotate90 : Bool {\n    self.mRotate90PointSet.removeAll ()\n    if self.selectedArray.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray.values {\n        if !object.canRotate90 (accumulatedPoints: &self.mRotate90PointSet) {\n          return false\n        }\n      }\n      return !self.mRotate90PointSet.isEmpty\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func rotate90Clockwise () {\n    let r = CanariRect (points: Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90Clockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func rotate90CounterClockwise () {\n    let r = CanariRect (points: Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90CounterClockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func addToSelection (objects inObjects : [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("]) {\n    if let objectSet = self.mModel\?.propset {\n      var newSelectedSet = self.selectedArray_property.propset\n      for object in inObjects {\n        if objectSet.contains (object) {\n          newSelectedSet.insert (object)\n        }\n      }\n      self.selectedSet = newSelectedSet\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n /* func addToSelection (objectsWithIndex inIndexes : [Int]) {\n    let objects = self.objectArray\n    var newSelectedSet = self.selectedArray_property.propset\n    for idx in inIndexes {\n      let newSelectedObject = objects [idx]\n      newSelectedSet.insert (newSelectedObject)\n    }\n    self.selectedSet = newSelectedSet\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n/*  func removeFromSelection (objectWithIndex inIndex : Int) {\n    let objects = self.objectArray\n    let object = objects [inIndex]\n    var newSelectedSet = self.selectedArray_property.propset\n    newSelectedSet.remove (object)\n    self.selectedSet = newSelectedSet\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func clearSelection () {\n    self.selectedSet = EBReferenceSet ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (objectsWithIndexes inIndexes : [Int]) {\n    let objects = self.objectArray\n    var selectedObjects = [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("] ()\n    for index in inIndexes {\n      let newSelectedObject = objects [index]\n      selectedObjects.append (newSelectedObject)\n    }\n    self.selectedSet = EBReferenceSet (selectedObjects)\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  //  INSPECTOR\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mInspectorReceivingView : NSView\? = nil\n  private var mCurrentAttachedView : NSView\? = nil\n  private var mInspectorDictionary = [ObjectIdentifier : NSView] ()\n  private var mInspectorObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func register (inspectorReceivingView : NSView\?) {\n    self.mInspectorReceivingView = inspectorReceivingView\n    self.updateInspectorViews ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func register (inspectorView : NSView\?, for inEntity : EBGraphicManagedObject.Type) {\n    self.mInspectorDictionary [ObjectIdentifier (inEntity)] = inspectorView\n    self.updateInspectorViews ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func inspectorViewManagerStartsObservingSelection () {\n    self.selectedArray_property.startsBeingObserved (by: self.mInspectorObserver)\n    self.mInspectorObserver.mEventCallBack = { [weak self] in self\?.updateInspectorViews () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func inspectorViewManagerStopsObservingSelection () {\n    self.mInspectorObserver.mEventCallBack = nil\n    self.selectedArray_property.stopsBeingObserved (by: self.mInspectorObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func updateInspectorViews () {\n    if let inspectorView = self.mInspectorReceivingView {\n    //--- Remove current attached view\n      self.mCurrentAttachedView\?.removeFromSuperview ()\n    //--- Add the new attached view\n      if self.mViewIsHidden {\n        self.mCurrentAttachedView = nil\n      }else if self.selectedArray.count == 0 {\n        let tf = self.textField (\"Empty Selection\", inspectorView.frame)\n        inspectorView.addSubview (tf)\n        self.mCurrentAttachedView = tf\n      }else{\n        var selectionTypes = Set <ObjectIdentifier> ()\n        for object in self.selectedArray.values {\n          let T = ObjectIdentifier (type (of: object))\n          selectionTypes.insert (T)\n        }\n        if selectionTypes.count > 1 {\n          let tf = self.textField (\"Multiple Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }else if let selectionInspectorView = self.mInspectorDictionary [selectionTypes.first!] {\n          selectionInspectorView.autoresizingMask = [.width, .minYMargin]\n          selectionInspectorView.frame = inspectorView.frame\n          inspectorView.addSubview (selectionInspectorView)\n          self.mCurrentAttachedView = selectionInspectorView\n        }else{\n          let tf = self.textField (\"No Inspector for this Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func textField (_ inString : String, _ inspectorFrame : NSRect) -> NSTextField {\n    let textHeight : CGFloat = 30.0\n    let r = NSRect (\n      x: 0.0,\n      y: inspectorFrame.origin.y + (inspectorFrame.size.height - textHeight) / 2.0,\n      width: inspectorFrame.size.width,\n      height: textHeight\n    )\n    let tf = NSTextField (frame: r)\n    tf.alignment = .center\n    tf.isBezeled = false\n    tf.isBordered = false\n    tf.drawsBackground = false\n    tf.isEnabled = true\n    tf.isEditable = false\n    tf.autoresizingMask = [.width, .minYMargin, .maxYMargin]\n    tf.stringValue = inString\n    tf.font = NSFont.boldSystemFont (ofSize: NSFont.systemFontSize * 1.25)\n    tf.textColor = NSColor.lightGray\n    return tf\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mViewIsHidden = false {\n    didSet { self.updateInspectorViews () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var isHidden : Bool {\n    get { return self.mViewIsHidden }\n    set { self.mViewIsHidden = newValue }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                   const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                   GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                   GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                   const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                   const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                   GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerGeneration temp_0 = this ;
  const GGS_arrayControllerGeneration temp_1 = this ;
  const GGS_arrayControllerGeneration temp_2 = this ;
  const GGS_arrayControllerGeneration temp_3 = this ;
  const GGS_arrayControllerGeneration temp_4 = this ;
  const GGS_arrayControllerGeneration temp_5 = this ;
  GGS_string var_s_13516 = GGS_string (filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (inCompiler, temp_0.readProperty_mOwnerName (), temp_1.readProperty_mControllerName ().readProperty_string (), temp_2.readProperty_mArrayControllerModelKind (), temp_3.readProperty_mModelTypeName (), temp_4.readProperty_mElementTypeName (), temp_5.readProperty_mElementTypeIsGraphic () COMMA_SOURCE_FILE ("array-controller.ggs", 340))) ;
  {
  const GGS_arrayControllerGeneration temp_6 = this ;
  const GGS_arrayControllerGeneration temp_7 = this ;
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, GGS_string ("controller-array-").add_operation (temp_6.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 350)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 350)).add_operation (temp_7.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 350)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 350)), var_s_13516, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 348)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap_26__3F_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                   const GGS_outletClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_outletClassBindingSpecificationList enumerator_4526 (constinArgument_inBindingSpecificationListMap) ;
  while (enumerator_4526.hasCurrentObject ()) {
    GGS_outletBindingSpecificationModelList temp_0 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 130)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4627 = temp_0 ;
    UpEnumerator_outletClassBindingSpecificationModelList enumerator_4693 (enumerator_4526.current_mOutletClassBindingSpecificationModelList (HERE)) ;
    while (enumerator_4693.hasCurrentObject ()) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_4693.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          var_outletBindingSpecificationModelList_4627.setter_append (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), GGS_enumConstantMap::init (inCompiler COMMA_HERE), GGS_enumFuncMap::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 134)), enumerator_4693.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 133)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GGS_classKind var_classKind_5107 ;
        GGS_propertyMap joker_5118_3 ; // Joker input parameter
        GGS_actionMap joker_5118_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_5118_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4693.current_mModelTypeName (HERE), var_classKind_5107, joker_5118_3, joker_5118_2, joker_5118_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 138)) ;
        GGS_typeKind var_typeKind_5145 ;
        switch (var_classKind_5107.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4693.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 142)) ;
            var_typeKind_5145.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_5316_kind_0 ;
            var_classKind_5107.getAssociatedValuesFor_atomic (extractedValue_5316_kind_0) ;
            var_typeKind_5145 = extractedValue_5316_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_5373__0 ;
            var_classKind_5107.getAssociatedValuesFor_document (extractedValue_5373__0) ;
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4693.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 146)) ;
            var_typeKind_5145.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_5485__0 ;
            GGS_bool extractedValue_5485__1 ;
            GGS_bool extractedValue_5485__2 ;
            GGS_bool extractedValue_5485__3 ;
            var_classKind_5107.getAssociatedValuesFor_entity (extractedValue_5485__0, extractedValue_5485__1, extractedValue_5485__2, extractedValue_5485__3) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_4693.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 148)) ;
            var_typeKind_5145.drop () ; // Release error dropped variable
          }
          break ;
        }
        {
        var_outletBindingSpecificationModelList_4627.setter_append (var_typeKind_5145, enumerator_4693.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 150)) ;
        }
      }
      enumerator_4693.gotoNextObject () ;
    }
    GGS_controllerBindingOptionDecoratedList temp_5 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 153)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5747 = temp_5 ;
    UpEnumerator_controllerBindingOptionList enumerator_5811 (enumerator_4526.current_mBindingOptionList (HERE)) ;
    while (enumerator_5811.hasCurrentObject ()) {
      GGS_classKind var_classKind_5931 ;
      GGS_propertyMap joker_5942_3 ; // Joker input parameter
      GGS_actionMap joker_5942_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5942_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5811.current_mOptionTypeName (HERE), var_classKind_5931, joker_5942_3, joker_5942_2, joker_5942_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 155)) ;
      GGS_typeKind var_typeKind_5967 ;
      switch (var_classKind_5931.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5811.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 159)) ;
          var_typeKind_5967.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_6131_kind_0 ;
          var_classKind_5931.getAssociatedValuesFor_atomic (extractedValue_6131_kind_0) ;
          var_typeKind_5967 = extractedValue_6131_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_6184__0 ;
          var_classKind_5931.getAssociatedValuesFor_document (extractedValue_6184__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_5811.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 163)) ;
          var_typeKind_5967.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_6293__0 ;
          GGS_bool extractedValue_6293__1 ;
          GGS_bool extractedValue_6293__2 ;
          GGS_bool extractedValue_6293__3 ;
          var_classKind_5931.getAssociatedValuesFor_entity (extractedValue_6293__0, extractedValue_6293__1, extractedValue_6293__2, extractedValue_6293__3) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_5811.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 165)) ;
          var_typeKind_5967.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_5747.setter_append (var_typeKind_5967, enumerator_5811.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 167)) ;
      }
      enumerator_5811.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationMap var_bindingMap_6544 ;
    GGS_lstring var_outletSuperClassName_6572 ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = ioArgument_ioSemanticContext.readProperty_mBindingSpecificationMap ().getter_hasKey (enumerator_4526.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 172)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4526.current_mOutletClassName (HERE), var_outletSuperClassName_6572, var_bindingMap_6544, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 173)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      var_bindingMap_6544 = GGS_outletBindingSpecificationMap::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_6920_6 ; // Joker input parameter
      GGS_bool joker_6920_5 ; // Joker input parameter
      GGS_bool joker_6920_4 ; // Joker input parameter
      GGS_bool joker_6920_3 ; // Joker input parameter
      GGS_bool joker_6920_2 ; // Joker input parameter
      GGS_bool joker_6920_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_4526.current_mOutletClassName (HERE), var_outletSuperClassName_6572, joker_6920_6, joker_6920_5, joker_6920_4, joker_6920_3, joker_6920_2, joker_6920_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 176)) ;
    }
    {
    var_bindingMap_6544.setter_insertKey (enumerator_4526.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4627, var_controllerBindingOptionDecoratedList_5747, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 178)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4526.current_mOutletClassName (HERE), var_outletSuperClassName_6572, var_bindingMap_6544, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 183)) ;
    }
    enumerator_4526.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outletClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_outletClassDeclarationAST temp_0 = this ;
  const GGS_outletClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 18)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_outletClassDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_outletClassDeclarationAST temp_4 = this ;
      const GGS_outletClassDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("outlet-class.ggs", 20)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outletClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_outletClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_outletClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outletClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_outletClassDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_outletClassDeclarationAST temp_2 = this ;
      const GGS_outletClassDeclarationAST temp_3 = this ;
      const GGS_outletClassDeclarationAST temp_4 = this ;
      const GGS_outletClassDeclarationAST temp_5 = this ;
      const GGS_outletClassDeclarationAST temp_6 = this ;
      const GGS_outletClassDeclarationAST temp_7 = this ;
      const GGS_outletClassDeclarationAST temp_8 = this ;
      ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("outlet-class.ggs", 107)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 105)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bool var_hasRunAction_3629 ;
    GGS_bool var_handlesTableValueBinding_3654 ;
    GGS_bool var_hasEnabled_3691 ;
    GGS_bool var_hasHidden_3714 ;
    GGS_bool var_handlesGraphicControllerBinding_3736 ;
    const GGS_outletClassDeclarationAST temp_9 = this ;
    GGS_lstring joker_3614 ; // Joker input parameter
    GGS_bool joker_3775 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (temp_9.readProperty_mSuperClassName (), joker_3614, var_hasRunAction_3629, var_handlesTableValueBinding_3654, var_hasEnabled_3691, var_hasHidden_3714, var_handlesGraphicControllerBinding_3736, joker_3775, inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 116)) ;
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_outletClassDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mHasRunAction ().operator_and (var_hasRunAction_3629 COMMA_SOURCE_FILE ("outlet-class.ggs", 126)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_outletClassDeclarationAST temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.ggs", 127)) ;
      }
    }
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_outletClassDeclarationAST temp_15 = this ;
      test_14 = temp_15.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_3654 COMMA_SOURCE_FILE ("outlet-class.ggs", 129)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        const GGS_outletClassDeclarationAST temp_16 = this ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray17  COMMA_SOURCE_FILE ("outlet-class.ggs", 130)) ;
      }
    }
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_outletClassDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_mHasEnabled ().operator_and (var_hasEnabled_3691 COMMA_SOURCE_FILE ("outlet-class.ggs", 132)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_outletClassDeclarationAST temp_20 = this ;
        GenericArray <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray21  COMMA_SOURCE_FILE ("outlet-class.ggs", 133)) ;
      }
    }
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      const GGS_outletClassDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_mHasHidden ().operator_and (var_hasHidden_3714 COMMA_SOURCE_FILE ("outlet-class.ggs", 135)).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_outletClassDeclarationAST temp_24 = this ;
        GenericArray <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray25  COMMA_SOURCE_FILE ("outlet-class.ggs", 136)) ;
      }
    }
    GalgasBool test_26 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_26) {
      const GGS_outletClassDeclarationAST temp_27 = this ;
      test_26 = temp_27.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_3736 COMMA_SOURCE_FILE ("outlet-class.ggs", 138)).boolEnum () ;
      if (GalgasBool::boolTrue == test_26) {
        const GGS_outletClassDeclarationAST temp_28 = this ;
        GenericArray <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_28.readProperty_mClassName ().readProperty_location (), GGS_string ("$graphicController binding already defined in superclass"), fixItArray29  COMMA_SOURCE_FILE ("outlet-class.ggs", 139)) ;
      }
    }
    {
    const GGS_outletClassDeclarationAST temp_30 = this ;
    const GGS_outletClassDeclarationAST temp_31 = this ;
    const GGS_outletClassDeclarationAST temp_32 = this ;
    const GGS_outletClassDeclarationAST temp_33 = this ;
    const GGS_outletClassDeclarationAST temp_34 = this ;
    const GGS_outletClassDeclarationAST temp_35 = this ;
    const GGS_outletClassDeclarationAST temp_36 = this ;
    const GGS_outletClassDeclarationAST temp_37 = this ;
    ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_30.readProperty_mClassName (), temp_31.readProperty_mSuperClassName (), temp_32.readProperty_mHasRunAction ().operator_or (var_hasRunAction_3629 COMMA_SOURCE_FILE ("outlet-class.ggs", 144)), temp_33.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_3654 COMMA_SOURCE_FILE ("outlet-class.ggs", 145)), temp_34.readProperty_mHasEnabled ().operator_or (var_hasEnabled_3691 COMMA_SOURCE_FILE ("outlet-class.ggs", 146)), temp_35.readProperty_mHasHidden ().operator_or (var_hasHidden_3714 COMMA_SOURCE_FILE ("outlet-class.ggs", 147)), temp_36.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_3736 COMMA_SOURCE_FILE ("outlet-class.ggs", 148)), temp_37.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 141)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutDocumentDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 33)) ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mClassName (), temp_3.readProperty_mRootEntityName () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 34)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDocumentDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_autoLayoutDocumentDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutDocumentDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                       GGS_generationStruct & ioArgument_ioGeneration,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_4838 ;
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mActionDeclarationList (), var_actionMap_4838, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 134)) ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  GGS_propertyGenerationList temp_3 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 140)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GGS_classKind::class_func_document (temp_2.readProperty_mRootEntityName ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 137)), GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_4838, temp_3, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 135)) ;
  }
  UpEnumerator_actionMap enumerator_5010 (var_actionMap_4838) ;
  while (enumerator_5010.hasCurrentObject ()) {
    {
    const GGS_autoLayoutDocumentDeclarationAST temp_4 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_actionFileGeneration::init_21__21_ (temp_4.readProperty_mClassName ().readProperty_string (), enumerator_5010.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 143)) ;
    }
    enumerator_5010.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutDocumentDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & ioArgument_ioGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_preferencesPropertyMap_5527 ;
  GGS_classKind joker_5514 ; // Joker input parameter
  GGS_actionMap joker_5555_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_5555_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 158)), GGS_location::class_func_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 158)), inCompiler COMMA_HERE), joker_5514, var_preferencesPropertyMap_5527, joker_5555_2, joker_5555_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 157)) ;
  GGS_propertyMap var_documentPropertyMap_5687 ;
  GGS_actionMap var_documentActionMap_5717 ;
  GGS_propertyGenerationList var_documentPropertyGenerationList_5745 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  GGS_classKind joker_5674 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 165)), inCompiler COMMA_HERE), joker_5674, var_documentPropertyMap_5687, var_documentActionMap_5717, var_documentPropertyGenerationList_5745, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 164)) ;
  GGS_propertyMap var_rootPropertyMap_5898 ;
  GGS_actionMap var_rootActionMap_5931 ;
  GGS_propertyGenerationList var_rootPropertyGenerationList_5962 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  GGS_classKind joker_5885 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mRootEntityName (), joker_5885, var_rootPropertyMap_5898, var_rootActionMap_5931, var_rootPropertyGenerationList_5962, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 172)) ;
  GGS_regularBindingsGenerationList var_regularBindingsGenerationList_6324 ;
  GGS_multipleBindingGenerationList var_multipleBindingGenerationList_6391 ;
  GGS_actionBindingListForGeneration var_actionBindingListForGeneration_6463 ;
  GGS_decoratedOutletMap var_outletMap_6524 ;
  GGS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6576 ;
  GGS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6663 ;
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_4 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GGS_bool (false), var_rootPropertyMap_5898, var_preferencesPropertyMap_5527, temp_2.readProperty_mRootEntityName ().readProperty_string (), ioArgument_ioSemanticContext, temp_3.readProperty_mOutletDeclarationList (), var_documentPropertyMap_5687, var_documentActionMap_5717, temp_4.readProperty_mClassName ().readProperty_string (), ioArgument_ioGeneration, var_regularBindingsGenerationList_6324, var_multipleBindingGenerationList_6391, var_actionBindingListForGeneration_6463, var_outletMap_6524, var_tableViewBindingGenerationList_6576, var_ebViewGraphicControllerBindingGenerationList_6663, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 180)) ;
  }
  const GGS_autoLayoutDocumentDeclarationAST temp_5 = this ;
  UpEnumerator_arrayControllerBindingListAST enumerator_6768 (temp_5.readProperty_mArrayControllerBindingListAST ()) ;
  while (enumerator_6768.hasCurrentObject ()) {
    switch (enumerator_6768.current_mHiddenSelectionViewBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_6948_expression_0 ;
        enumerator_6768.current_mHiddenSelectionViewBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_6948_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_7220 ;
        GGS_typeKind var_type_7261 ;
        GGS_location var_errorLocation_7290 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_6948_expression_0.ptr (), GGS_bool (false), var_rootPropertyMap_5898, ioArgument_ioSemanticContext, var_documentPropertyMap_5687, var_preferencesPropertyMap_5527, var_hiddenExpression_7220, var_type_7261, var_errorLocation_7290, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 204)) ;
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = var_type_7261.getter_isBoolType (SOURCE_FILE ("document-auto-layout.ggs", 214)).operator_not (SOURCE_FILE ("document-auto-layout.ggs", 214)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (var_errorLocation_7290, GGS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 215)) ;
          }
        }
        {
        var_multipleBindingGenerationList_6391.setter_append (enumerator_6768.current_mControllerName (HERE).readProperty_string (), GGS_string ("hidden"), var_hiddenExpression_7220, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 217)) ;
        }
      }
      break ;
    }
    enumerator_6768.gotoNextObject () ;
  }
  GGS_autoLayoutViewDeclarationMap var_viewDeclarationMap_7637 = GGS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_HERE) ;
  GGS_viewGenerationList temp_8 = GGS_viewGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 226)) ;
  GGS_viewGenerationList var_viewGenerationList_7687 = temp_8 ;
  GGS_implicitViewFunctionGenerationList temp_9 = GGS_implicitViewFunctionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 227)) ;
  GGS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_7753 = temp_9 ;
  GGS_autoLayoutConfiguratorMap var_configuratorMap_7826 = GGS_autoLayoutConfiguratorMap::init (inCompiler COMMA_HERE) ;
  GGS_autoLayoutOutletMap var_autoLayoutOutletMap_7874 = GGS_autoLayoutOutletMap::init (inCompiler COMMA_HERE) ;
  const GGS_autoLayoutDocumentDeclarationAST temp_10 = this ;
  UpEnumerator_astViewDeclarationList enumerator_7916 (temp_10.readProperty_mViewDeclarationList ()) ;
  while (enumerator_7916.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_7637.setter_insertKey (enumerator_7916.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 231)) ;
    }
    GGS_abstractViewGeneration var_viewGeneration_8402 ;
    const GGS_autoLayoutDocumentDeclarationAST temp_11 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_7916.current_mView (HERE).ptr (), enumerator_7916.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_7637, GGS_bool (false), var_rootPropertyMap_5898, var_preferencesPropertyMap_5527, ioArgument_ioSemanticContext, var_documentPropertyMap_5687, var_documentActionMap_5717, temp_11.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_7753, var_configuratorMap_7826, var_autoLayoutOutletMap_7874, var_viewGeneration_8402, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 232)) ;
    {
    var_viewGenerationList_7687.setter_append (enumerator_7916.current_mViewName (HERE).readProperty_string (), var_viewGeneration_8402, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 248)) ;
    }
    enumerator_7916.gotoNextObject () ;
  }
  const GGS_autoLayoutDocumentDeclarationAST temp_12 = this ;
  var_viewDeclarationMap_7637.method_searchKey (temp_12.readProperty_mMainViewName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 250)) ;
  ioArgument_ioGeneration.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = GGS_bool (true) ;
  GGS_autoLayoutOutletLinkerGenerationList temp_13 = GGS_autoLayoutOutletLinkerGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 254)) ;
  GGS_autoLayoutOutletLinkerGenerationList var_outletLinkerGenerationList_8694 = temp_13 ;
  GGS_stringset temp_14 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 255)) ;
  GGS_stringset var_linkerNameSet_8743 = temp_14 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_15 = this ;
  UpEnumerator_astAutoLayoutOutletLinkerList enumerator_8781 (temp_15.readProperty_mOutletLinkerList ()) ;
  while (enumerator_8781.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = var_linkerNameSet_8743.getter_hasKey (enumerator_8781.current_mLinkerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 257)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_8781.current_mLinkerName (HERE).readProperty_location (), GGS_string ("duplicated linker name"), fixItArray17  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 258)) ;
      }
    }
    {
    var_linkerNameSet_8743.setter_insert (enumerator_8781.current_mLinkerName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 260)) ;
    }
    GGS__32_stringlist temp_18 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 261)) ;
    GGS__32_stringlist var_outletNameAndTypeNameList_9004 = temp_18 ;
    UpEnumerator_lstringlist enumerator_9044 (enumerator_8781.current_mOutletNameList (HERE)) ;
    while (enumerator_9044.hasCurrentObject ()) {
      GGS_string var_outletTypeName_9130 ;
      GGS_bool var_outletIsArray_9158 ;
      var_autoLayoutOutletMap_7874.method_searchKey (enumerator_9044.current_mValue (HERE), var_outletTypeName_9130, var_outletIsArray_9158, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 263)) ;
      {
      var_outletNameAndTypeNameList_9004.setter_append (enumerator_9044.current_mValue (HERE).readProperty_string (), var_outletTypeName_9130, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 264)) ;
      }
      enumerator_9044.gotoNextObject () ;
    }
    {
    var_outletLinkerGenerationList_8694.setter_append (enumerator_8781.current_mLinkerName (HERE).readProperty_string (), var_outletNameAndTypeNameList_9004, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 266)) ;
    }
    enumerator_8781.gotoNextObject () ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_19 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_20 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_21 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_22 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_autoLayoutDocumentFileGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (temp_19.readProperty_mClassName ().readProperty_string (), temp_20.readProperty_mRootEntityName ().readProperty_string (), temp_21.readProperty_mMainViewName ().readProperty_string (), var_documentPropertyGenerationList_5745, var_outletMap_6524, var_autoLayoutOutletMap_7874, var_actionBindingListForGeneration_6463, var_regularBindingsGenerationList_6324, var_multipleBindingGenerationList_6391, var_tableViewBindingGenerationList_6576, var_ebViewGraphicControllerBindingGenerationList_6663, var_viewGenerationList_7687, var_implicitViewFunctionGenerationList_7753, var_configuratorMap_7826, temp_22.readProperty_mCustomSuperClassName (), var_outletLinkerGenerationList_8694, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 269)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutDocumentFileGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                          const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                          GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                          GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutDocumentFileGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                          const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                          const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                          GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutDocumentFileGeneration temp_0 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_1 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_2 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_3 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_4 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_5 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_6 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_7 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_8 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_9 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_10 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_11 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_12 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_13 = this ;
  GGS_string temp_14 ;
  const GalgasBool test_15 = GGS_bool (ComparisonKind::equal, temp_13.readProperty_mCustomSuperClassName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_15) {
    temp_14 = GGS_string ("EBAutoLayoutManagedDocument") ;
  }else if (GalgasBool::boolFalse == test_15) {
    const GGS_autoLayoutDocumentFileGeneration temp_16 = this ;
    temp_14 = temp_16.readProperty_mCustomSuperClassName () ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_17 = this ;
  GGS_string var_s_12117 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (inCompiler, temp_0.readProperty_mDocumentName (), temp_1.readProperty_mRootEntityName (), temp_2.readProperty_mMainViewName (), temp_3.readProperty_mDocumentPropertyGenearionList (), temp_4.readProperty_mOutletMap (), temp_5.readProperty_mAutoLayoutOutletMap (), temp_6.readProperty_mTargetActionList (), temp_7.readProperty_mRegularBindingsGenerationList (), temp_8.readProperty_multipleBindingGenerationList (), temp_9.readProperty_mTableViewBindingGenerationList (), temp_10.readProperty_mEBViewBindingGenerationList (), temp_11.readProperty_mViewDeclarationList (), temp_12.readProperty_mImplicitViewFunctionGenerationList (), temp_14, temp_17.readProperty_mOutletLinkerGenerationList () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 330))) ;
  const GGS_autoLayoutDocumentFileGeneration temp_18 = this ;
  GGS_string var_fileName_12788 = GGS_string ("document-").add_operation (temp_18.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 347)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 347)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12788, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 348)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12788, var_s_12117, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 349)) ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_19 = this ;
  UpEnumerator_autoLayoutConfiguratorMap enumerator_12975 (temp_19.readProperty_mConfiguratorMap ()) ;
  while (enumerator_12975.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_20 = this ;
    GGS_string var_s_13027 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, temp_20.readProperty_mDocumentName (), enumerator_12975.current_lkey (HERE).readProperty_string (), enumerator_12975.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 355))) ;
    GGS_string var_header_13209 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 360)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 360)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 360)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 362)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 362)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 362)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 362)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 363)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 364)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 364)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 364)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_21 = this ;
    GGS_string var_fileName_13551 = GGS_string ("configurator-").add_operation (temp_21.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)).add_operation (enumerator_12975.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_13551, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 366)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_13551, GGS_string ("//"), var_header_13209, GGS_string ("\n\n"), var_s_13027, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 375)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 375)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 375)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 367)) ;
    }
    enumerator_12975.gotoNextObject () ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_22 = this ;
  UpEnumerator_autoLayoutOutletLinkerGenerationList enumerator_14130 (temp_22.readProperty_mOutletLinkerGenerationList ()) ;
  while (enumerator_14130.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_23 = this ;
    GGS_string var_s_14204 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (inCompiler, temp_23.readProperty_mDocumentName (), enumerator_14130.current_mLinkerName (HERE), enumerator_14130.current_mOutletNameAndTypeNameList (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 380))) ;
    GGS_string var_header_14376 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 385)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 385)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 385)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 387)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 387)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 387)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 387)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 388)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 389)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 389)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 389)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_24 = this ;
    GGS_string var_fileName_14718 = GGS_string ("linker-").add_operation (temp_24.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 390)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 390)).add_operation (enumerator_14130.current_mLinkerName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 390)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 390)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_14718, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 391)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_14718, GGS_string ("//"), var_header_14376, GGS_string ("\n\n"), var_s_14204, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 400)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 400)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 400)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 392)) ;
    }
    enumerator_14130.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutDocumentGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_3,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_1,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_2,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_autoLayoutDocumentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_0,
  3,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (Compiler * inCompiler,
                                                                                            const GGS_string & in_DOCUMENT_5F_CLASS_5F_NAME,
                                                                                            const GGS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                            const GGS_string & in_MAIN_5F_VIEW_5F_NAME,
                                                                                            const GGS_propertyGenerationList & in_DOCUMENT_5F_PROPERTY_5F_LIST,
                                                                                            const GGS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                            const GGS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP,
                                                                                            const GGS_actionBindingListForGeneration & /* in_TARGET_5F_ACTION_5F_LIST */,
                                                                                            const GGS_regularBindingsGenerationList & /* in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                            const GGS_tableViewBindingGenerationList & /* in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_ebViewGraphicControllerBindingGenerationList & /* in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                                            const GGS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                                            const GGS_string & in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME,
                                                                                            const GGS_autoLayoutOutletLinkerGenerationList & in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\n@objc(") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (") class ") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  \n") ;
  GGS_uint index_521_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_521 (in_DOCUMENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_521.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_521.current_mProperty (HERE).ptr (), GGS_bool (false), GGS_bool (true), GGS_stringset::class_func_emptySet (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)).stringValue ()) ;
      enumerator_521.gotoNextObject () ;
      index_521_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_901_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_autoLayoutOutletMap enumerator_901 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP) ;
    while (enumerator_901.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_901.current_mOutletIsArray (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  final var ") ;
        result.appendString (enumerator_901.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" = EBWeakReferenceArray <AutoLayout") ;
        result.appendString (enumerator_901.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("> ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("  weak final var ") ;
        result.appendString (enumerator_901.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : AutoLayout") ;
        result.appendString (enumerator_901.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("\? = nil\n") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_901.gotoNextObject () ;
      index_901_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_1408_ (0) ;
  if (in_OUTLET_5F_GENERATION_5F_MAP.isValid ()) {
    UpEnumerator_decoratedOutletMap enumerator_1408 (in_OUTLET_5F_GENERATION_5F_MAP) ;
    while (enumerator_1408.hasCurrentObject ()) {
      result.appendString ("  @IBOutlet final var ") ;
      result.appendString (enumerator_1408.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_1408.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_1408.gotoNextObject () ;
      index_1408_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Multiple bindings controllers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_1818_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_multipleBindingGenerationList enumerator_1818 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_1818.hasCurrentObject ()) {
      result.appendString ("//  final var mController_") ;
      result.appendString (enumerator_1818.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1818.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" : MultipleBindingController_") ;
      result.appendString (enumerator_1818.current_mBindingName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_1818.gotoNextObject () ;
      index_1818_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    displayName\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var displayName : String\? {\n    get {\n      return super.displayName\n    }\n    set {\n      super.displayName = newValue\n      self.documentFileName_property.observedObjectDidChange ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    rootEntityClassName\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override final func rootEntityClassName () -> String {\n    return \"") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    rootObject\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var rootObject : ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mRootObject as! ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n") ;
  GGS_uint index_3064_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_viewGenerationList enumerator_3064 (in_VIEW_5F_GENERATION_5F_LIST) ;
    while (enumerator_3064.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    VIEW ") ;
      result.appendString (enumerator_3064.current_mViewName (HERE).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_3064.current_mView (HERE).ptr (), GGS_bool (false), enumerator_3064.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 78)).stringValue ()) ;
      enumerator_3064.gotoNextObject () ;
      index_3064_.increment () ;
    }
  }
  GGS_uint index_3440_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator_implicitViewFunctionGenerationList enumerator_3440 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST) ;
    while (enumerator_3440.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_3440_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 82)).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeImplicitView_") ;
      result.appendString (index_3440_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_3440.current_mInstruction (HERE).ptr (), GGS_bool (false), GGS_string ("view"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 85)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      enumerator_3440.gotoNextObject () ;
      index_3440_idx.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Build User Interface\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func ebBuildUserInterface () {\n  //--------------------------- Read documentFileName model\n    self.documentFileName_property.mReadModelFunction = { [weak self] in\n      if let r = self\?.displayName {\n        return .single (r)\n      }else{\n        return .single (\"\")\n      }\n    }\n  //--- Build window content view\n    self.configureProperties ()\n    let mainView = self.") ;
  result.appendString (in_MAIN_5F_VIEW_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n  //--- Call outlet linkers\n") ;
  GGS_uint index_4631_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST.isValid ()) {
    UpEnumerator_autoLayoutOutletLinkerGenerationList enumerator_4631 (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST) ;
    while (enumerator_4631.hasCurrentObject ()) {
      result.appendString ("    self.linker_") ;
      result.appendString (enumerator_4631.current_mLinkerName (HERE).stringValue ()) ;
      result.appendString (" (") ;
      GGS_uint index_4740_ (0) ;
      if (enumerator_4631.current_mOutletNameAndTypeNameList (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_4740 (enumerator_4631.current_mOutletNameAndTypeNameList (HERE)) ;
        while (enumerator_4740.hasCurrentObject ()) {
          result.appendString ("self.") ;
          result.appendString (enumerator_4740.current_mValue_30_ (HERE).stringValue ()) ;
          enumerator_4740.gotoNextObject () ;
          if (enumerator_4740.hasCurrentObject ()) {
            result.appendString (", ") ;
          }
          index_4740_.increment () ;
        }
      }
      result.appendString (")\n") ;
      enumerator_4631.gotoNextObject () ;
      index_4631_.increment () ;
    }
  }
  result.appendString ("  //--- Assign main view to window\n    self.windowForSheet\?.setContentView (mainView)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    configureProperties\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func configureProperties () {\n") ;
  GGS_uint index_5224_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_5224 (in_DOCUMENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5224.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5224.current_mProperty (HERE).ptr (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 125)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_5224.gotoNextObject () ;
      index_5224_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentOutletConfiguratorImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (Compiler * /* inCompiler */,
                                                                                                              const GGS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                              const GGS_string & in_OUTLET_5F_NAME,
                                                                                                              const GGS_string & in_OUTLET_5F_TYPE_5F_NAME
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_DOCUMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  final func configure_") ;
  result.appendString (in_OUTLET_5F_NAME.stringValue ()) ;
  result.appendString (" (_ inOutlet : AutoLayout") ;
  result.appendString (in_OUTLET_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate outletLinkerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (Compiler * /* inCompiler */,
                                                                                                const GGS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                const GGS_string & in_LINKER_5F_NAME,
                                                                                                const GGS__32_stringlist & in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_DOCUMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  final func linker_") ;
  result.appendString (in_LINKER_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_235_ (0) ;
  if (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_235 (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST) ;
    while (enumerator_235.hasCurrentObject ()) {
      result.appendString ("_ in_") ;
      result.appendString (enumerator_235.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" : AutoLayout") ;
      result.appendString (enumerator_235.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString ("\?") ;
      enumerator_235.gotoNextObject () ;
      if (enumerator_235.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_235_.increment () ;
    }
  }
  result.appendString (") {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateCode???'
//
//--------------------------------------------------------------------------------------------------

void routine_generateCode_3F__3F__3F_ (const GGS_string constinArgument_inXcodeProjectString,
                                       const GGS_generationStruct constinArgument_inGeneration,
                                       const GGS_string constinArgument_inSourceFile,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_outputDirectory_3210 = constinArgument_inSourceFile.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("code-generation.ggs", 67)) ;
  GGS_string var_projectName_3281 = constinArgument_inSourceFile.getter_lastPathComponent (SOURCE_FILE ("code-generation.ggs", 68)).getter_deletingPathExtension (SOURCE_FILE ("code-generation.ggs", 68)) ;
  GGS_string var_fileOutputDirectory_3354 = var_outputDirectory_3210.add_operation (GGS_string ("/../"), inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 69)).add_operation (var_projectName_3281, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 69)) ;
  GGS_stringset var_generatedFileSet_3432 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_usedProtocolSet_3471 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_fileGenerationList enumerator_3499 (constinArgument_inGeneration.readProperty_mFileGenerationList ()) ;
  while (enumerator_3499.hasCurrentObject ()) {
    callExtensionMethod_generateCodePhase_31_ ((cPtr_abstractFileGeneration *) enumerator_3499.current_mFileGeneration (HERE).ptr (), var_fileOutputDirectory_3354, constinArgument_inGeneration, var_usedProtocolSet_3471, var_generatedFileSet_3432, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 73)) ;
    enumerator_3499.gotoNextObject () ;
  }
  UpEnumerator_fileGenerationList enumerator_3710 (constinArgument_inGeneration.readProperty_mFileGenerationList ()) ;
  while (enumerator_3710.hasCurrentObject ()) {
    callExtensionMethod_generateCodePhase_32_ ((cPtr_abstractFileGeneration *) enumerator_3710.current_mFileGeneration (HERE).ptr (), var_fileOutputDirectory_3354, constinArgument_inGeneration, var_usedProtocolSet_3471, var_generatedFileSet_3432, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 81)) ;
    enumerator_3710.gotoNextObject () ;
  }
  {
  routine_generateEBManagedObjectContext_3F__3F__26_ (constinArgument_inGeneration.readProperty_mEntityListForGeneration (), var_fileOutputDirectory_3354, var_generatedFileSet_3432, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 88)) ;
  }
  {
  routine_generateSelectionControllers_3F__3F__26_ (constinArgument_inGeneration.readProperty_mSelectionControllerListForGeneration (), var_fileOutputDirectory_3354, var_generatedFileSet_3432, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 93)) ;
  }
  {
  routine_generateValidationRoutineStubs_3F__3F__26_ (var_fileOutputDirectory_3354, constinArgument_inGeneration.readProperty_mValidationStubRoutineListForGeneration (), var_generatedFileSet_3432, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 98)) ;
  }
  {
  routine_generateStandardProperties_3F__3F__3F__26_ (var_fileOutputDirectory_3354, constinArgument_inGeneration.readProperty_mPropertyClassList (), constinArgument_inGeneration.readProperty_mTransientPropertyTypeList (), var_generatedFileSet_3432, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 103)) ;
  }
  {
  routine_generateXcodeProject_3F__3F__3F__3F_ (var_outputDirectory_3210, constinArgument_inXcodeProjectString, var_generatedFileSet_3432, var_projectName_3281, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 109)) ;
  }
  {
  routine_generateTestFile_3F__3F__3F__3F_ (constinArgument_inXcodeProjectString, var_projectName_3281, constinArgument_inGeneration.readProperty_mMainXibDescriptorList (), var_outputDirectory_3210, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 115)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'standard_properties'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_standard_5F_properties_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_standard_5F_properties_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_standard_5F_properties (
  "",
  0,
  gWrapperAllFiles_standard_5F_properties_0,
  0,
  gWrapperAllDirectories_standard_5F_properties_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties scalarProperty'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_standard_5F_properties_scalarProperty (Compiler * /* inCompiler */,
                                                                      const GGS_string & in_TYPE,
                                                                      const GGS_bool & in_TRANSIENT,
                                                                      const GGS_string & /* in_COMPARISON_5F_METHOD */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//   Scalar property ") ;
  result.appendString (in_TYPE.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = in_TRANSIENT.operator_not (SOURCE_FILE ("scalar-standard-property.swift.galgasTemplate", 11)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("typealias EBReadWriteProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (" = EBObservableMutableProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\ntypealias EBComputedProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString ("   = EBComputedProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\ntypealias EBStoredProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString ("     = EBStoredProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\ntypealias EBStandAloneProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (" = EBStandAloneProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\ntypealias EBPreferenceProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (" = EBPreferenceProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties classProperty'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_standard_5F_properties_classProperty (Compiler * /* inCompiler */,
                                                                     const GGS_string & in_CLASS_5F_NAME,
                                                                     const GGS_bool & in_TRANSIENT
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n") ;
  const GalgasBool test_0 = in_TRANSIENT.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//   Transient property class ") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("//   Property class ") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_1 = in_TRANSIENT.operator_not (SOURCE_FILE ("class-standard-property.swift.galgasTemplate", 17)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("typealias EBReadWriteProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("   = EBObservableMutableProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\ntypealias EBComputedProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("    = EBComputedProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\ntypealias EBStoredProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("      = EBStoredProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\ntypealias EBStandAloneProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("  = EBStandAloneProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\ntypealias EBPreferenceProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("  = EBPreferenceProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateStandardProperties???&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateStandardProperties_3F__3F__3F__26_ (const GGS_string constinArgument_inOutputDirectory,
                                                         const GGS_stringlist constinArgument_inPropertyClassList,
                                                         const GGS_transientExternTypeList constinArgument_inTransientPropertyExternTypeList,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("UInt32"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 148)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Int"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 149)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Bool"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 150)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Double"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 151)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("String"), GGS_bool (false), GGS_string ("localizedStandardCompare"), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 152)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Data"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 153)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Date"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 154)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("BezierPathArray"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 155)) ;
  }
  UpEnumerator_stringlist enumerator_6532 (constinArgument_inPropertyClassList) ;
  while (enumerator_6532.hasCurrentObject ()) {
    {
    routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, enumerator_6532.current_mValue (HERE), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 158)) ;
    }
    enumerator_6532.gotoNextObject () ;
  }
  UpEnumerator_transientExternTypeList enumerator_6702 (constinArgument_inTransientPropertyExternTypeList) ;
  while (enumerator_6702.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_6702.current_mIsClass (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, enumerator_6702.current_mTypeName (HERE), GGS_bool (true), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 162)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, enumerator_6702.current_mTypeName (HERE), GGS_bool (true), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 164)) ;
      }
    }
    enumerator_6702.gotoNextObject () ;
  }
  {
  routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, GGS_string ("NSBezierPath"), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 167)) ;
  }
  {
  routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, GGS_string ("NSFont"), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 168)) ;
  }
  {
  routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, GGS_string ("NSColor"), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 169)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateClassProperty???transient&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateClassProperty_3F__3F__3F_transient_26_ (const GGS_string constinArgument_inOutputDirectory,
                                                             const GGS_string constinArgument_inClassPropertyTypeName,
                                                             const GGS_bool constinArgument_inTransient,
                                                             GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_contents_7691 = GGS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, constinArgument_inClassPropertyTypeName, constinArgument_inTransient COMMA_SOURCE_FILE ("code-generation.ggs", 178))) ;
  GGS_string var_fileName_7813 = GGS_string ("property-").add_operation (constinArgument_inClassPropertyTypeName, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 180)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 180)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_7813, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 181)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_7813, var_contents_7691, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 182)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateScalarProperty???transient?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (const GGS_string constinArgument_inOutputDirectory,
                                                                  const GGS_string constinArgument_inScalarPropertyTypeName,
                                                                  const GGS_bool constinArgument_inTransient,
                                                                  const GGS_string constinArgument_inComparisonMethod,
                                                                  GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_contents_8456 = GGS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, constinArgument_inScalarPropertyTypeName, constinArgument_inTransient, constinArgument_inComparisonMethod COMMA_SOURCE_FILE ("code-generation.ggs", 196))) ;
  GGS_string var_fileName_8600 = GGS_string ("property-").add_operation (constinArgument_inScalarPropertyTypeName, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 198)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 198)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_8600, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 199)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_8600, var_contents_8456, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 200)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProject????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateXcodeProject_3F__3F__3F__3F_ (const GGS_string constinArgument_inOutputDirectory,
                                                   const GGS_string constinArgument_inXcodeProjectString,
                                                   const GGS_stringset constinArgument_inGeneratedFileSet,
                                                   const GGS_string constinArgument_projectName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inXcodeProjectString.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_generateXcodeProjectInternal_3F__3F__3F__3F_ (constinArgument_inOutputDirectory, constinArgument_inXcodeProjectString, constinArgument_inGeneratedFileSet, constinArgument_projectName, inCompiler  COMMA_SOURCE_FILE ("xcode-project.ggs", 39)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProjectInternal????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateXcodeProjectInternal_3F__3F__3F__3F_ (const GGS_string constinArgument_inOutputDirectory,
                                                           const GGS_string constinArgument_inXcodeProjectString,
                                                           const GGS_stringset constinArgument_inGeneratedFileSet,
                                                           const GGS_string constinArgument_projectName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor var_xcodeProject_1552 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
  GGS_string var_SDK_1633 = GGS_string ("macosx") ;
  GGS_string var_DEPLOYMENT_1654 = GGS_string ("10.10") ;
  {
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 93)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 56)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ARCHS = \"$(ARCHS_STANDARD_64_BIT)\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 57)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 58)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 59)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 60)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_THREADSAFE_STATICS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 61)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 62)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 63)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 64)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 65)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 66)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 67)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 68)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 69)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 70)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 71)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 72)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 73)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 74)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 75)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 76)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 77)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_PEDANTIC = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 78)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SHADOW = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 79)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SIGN_COMPARE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 80)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 81)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 82)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 83)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 84)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_LABEL = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 85)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VALUE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 86)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 87)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("HEADER_SEARCH_PATHS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 88)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("MACOSX_DEPLOYMENT_TARGET = ").add_operation (var_DEPLOYMENT_1654, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 89)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 89)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SDKROOT = ").add_operation (var_SDK_1633, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 90)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 90)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("COPY_PHASE_STRIP = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 91)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_VERSION = 4.2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 92)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("LD_RUNPATH_SEARCH_PATHS = \"$(inherited) @executable_path/../Frameworks\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 93)) ;
  extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_1552, temp_0, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 55)) ;
  }
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 96)) ;
  GGS_stringlist var_swiftFileRefList_3525 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 97)) ;
  GGS_stringlist var_resourceFileRefList_3565 = temp_2 ;
  GGS_stringset var_generatedFileSet_3596 = constinArgument_inGeneratedFileSet ;
  {
  var_generatedFileSet_3596.setter_insert (GGS_string ("MainMenu.xib"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 99)) ;
  }
  GGS_stringlist var_cppFileRefs_3686 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mFileRefs_3722 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mmFileRefs_3756 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_frameworkFileRefs_3791 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_string var_groupRef_4188 ;
  {
  extensionSetter_addGroupWithFiles (var_xcodeProject_1552, GGS_string ("Sources"), constinArgument_projectName, var_generatedFileSet_3596, var_cppFileRefs_3686, var_mFileRefs_3722, var_mmFileRefs_3756, var_swiftFileRefList_3525, var_frameworkFileRefs_3791, var_resourceFileRefList_3565, var_groupRef_4188, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 104)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1552, var_groupRef_4188, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 116)) ;
  }
  GGS_stringlist var_cppFileRefs_32__4268 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mFileRefs_32__4305 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mmFileRefs_32__4340 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_frameworkFileRefs_32__4376 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  {
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 124)) ;
  temp_3.plusPlusAssignOperation (GGS_string ("Info.plist")  COMMA_SOURCE_FILE ("xcode-project.ggs", 124)) ;
  extensionSetter_addGroupWithFiles (var_xcodeProject_1552, GGS_string ("Resources"), constinArgument_projectName, temp_3, var_cppFileRefs_32__4268, var_mFileRefs_32__4305, var_mmFileRefs_32__4340, var_swiftFileRefList_3525, var_frameworkFileRefs_32__4376, var_resourceFileRefList_3565, var_groupRef_4188, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 121)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1552, var_groupRef_4188, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 133)) ;
  }
  {
  GGS_stringlist temp_4 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 139)) ;
  GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 143)) ;
  temp_5.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 142)) ;
  temp_5.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 143)) ;
  GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 145)) ;
  GGS__32_stringlist temp_7 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 146)) ;
  GGS_string joker_5293 ; // Joker input parameter
  extensionSetter_addAppTarget (var_xcodeProject_1552, constinArgument_projectName, constinArgument_projectName, var_swiftFileRefList_3525, temp_4, var_resourceFileRefList_3565, temp_5, temp_6, temp_7, constinArgument_projectName.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 147)), joker_5293, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 135)) ;
  }
  GGS_string var_sourceDir_5343 = constinArgument_inOutputDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 151)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 151)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 151)) ;
  extensionMethod_generateAtPath (var_xcodeProject_1552, constinArgument_inOutputDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 153)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 153)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 153)), var_sourceDir_5343.add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 154)).add_operation (GGS_string (".xcodeproj.txt"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 154)), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 152)) ;
  GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 161)) ;
  temp_8.plusPlusAssignOperation (constinArgument_projectName  COMMA_SOURCE_FILE ("xcode-project.ggs", 161)) ;
  GGS_string var_s_5606 = GGS_string (filewrapperTemplate_additionalXcodeFiles_info_5F_plist (inCompiler, constinArgument_projectName, constinArgument_inXcodeProjectString, GGS_string ("1.0.0"), temp_8 COMMA_SOURCE_FILE ("xcode-project.ggs", 157))) ;
  {
  GGS_string::class_method_generateFile (var_sourceDir_5343, GGS_string ("Info.plist"), var_s_5606, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 163)) ;
  }
  var_s_5606 = GGS_string (filewrapperTemplate_additionalXcodeFiles_main_5F_xib (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.ggs", 168))) ;
  {
  GGS_string::class_method_generateFile (var_sourceDir_5343, GGS_string ("MainMenu.xib"), var_s_5606, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 171)) ;
  }
  var_s_5606 = GGS_string (filewrapperTemplate_additionalXcodeFiles_build_5F_command (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.ggs", 176))) ;
  GGS_bool joker_6099 ; // Joker input parameter
  var_s_5606.method_writeToExecutableFileWhenDifferentContents (constinArgument_inOutputDirectory.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 178)), joker_6099, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 177)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'additionalXcodeFiles'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_additionalXcodeFiles_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_additionalXcodeFiles_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_additionalXcodeFiles (
  "",
  0,
  gWrapperAllFiles_additionalXcodeFiles_0,
  0,
  gWrapperAllDirectories_additionalXcodeFiles_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles main_xib'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_main_5F_xib (Compiler * /* inCompiler */,
                                                                 const GGS_string & in_PROJECT_5F_NAME
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"\?>\n<document type=\"com.apple.InterfaceBuilder3.Cocoa.XIB\" version=\"3.0\" toolsVersion=\"7528.3\" systemVersion=\"14C1514\" targetRuntime=\"MacOSX.Cocoa\" propertyAccessControl=\"none\">\n    <dependencies>\n        <deployment version=\"1090\" identifier=\"macosx\"/>\n        <plugIn identifier=\"com.apple.InterfaceBuilder.CocoaPlugin\" version=\"7528.3\"/>\n    </dependencies>\n    <objects>\n        <customObject id=\"-2\" userLabel=\"File's Owner\" customClass=\"NSApplication\"/>\n        <customObject id=\"-1\" userLabel=\"First Responder\" customClass=\"FirstResponder\"/>\n        <customObject id=\"-3\" userLabel=\"Application\" customClass=\"NSObject\"/>\n        <menu title=\"AMainMenu\" systemMenu=\"main\" id=\"29\">\n            <items>\n                <menuItem title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" id=\"56\">\n                    <menu key=\"submenu\" title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" systemMenu=\"apple\" id=\"57\">\n                        <items>\n                            <menuItem title=\"About ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" id=\"58\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <connections>\n                                    <action selector=\"orderFrontStandardAboutPanel:\" target=\"-2\" id=\"142\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"236\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Preferences…\" keyEquivalent=\",\" id=\"129\"/>\n                            <menuItem isSeparatorItem=\"YES\" id=\"143\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Services\" id=\"131\">\n                                <menu key=\"submenu\" title=\"Services\" systemMenu=\"services\" id=\"130\"/>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"144\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Hide ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" keyEquivalent=\"h\" id=\"134\">\n                                <connections>\n                                    <action selector=\"hide:\" target=\"-1\" id=\"367\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Hide Others\" keyEquivalent=\"h\" id=\"145\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"hideOtherApplications:\" target=\"-1\" id=\"368\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Show All\" id=\"150\">\n                                <connections>\n                                    <action selector=\"unhideAllApplications:\" target=\"-1\" id=\"370\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"149\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Quit ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" keyEquivalent=\"q\" id=\"136\">\n                                <connections>\n                                    <action selector=\"terminate:\" target=\"-3\" id=\"449\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"File\" id=\"83\">\n                    <menu key=\"submenu\" title=\"File\" id=\"81\">\n                        <items>\n                            <menuItem title=\"New\" keyEquivalent=\"n\" id=\"82\">\n                                <connections>\n                                    <action selector=\"newDocument:\" target=\"-1\" id=\"373\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Open…\" keyEquivalent=\"o\" id=\"72\">\n                                <connections>\n                                    <action selector=\"openDocument:\" target=\"-1\" id=\"374\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Open Recent\" id=\"124\">\n                                <menu key=\"submenu\" title=\"Open Recent\" systemMenu=\"recentDocuments\" id=\"125\">\n                                    <items>\n                                        <menuItem title=\"Clear Menu\" id=\"126\">\n                                            <connections>\n                                                <action selector=\"clearRecentDocuments:\" target=\"-1\" id=\"127\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"79\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Close\" keyEquivalent=\"w\" id=\"73\">\n                                <connections>\n                                    <action selector=\"performClose:\" target=\"-1\" id=\"193\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Save…\" keyEquivalent=\"s\" id=\"75\">\n                                <connections>\n                                    <action selector=\"saveDocument:\" target=\"-1\" id=\"362\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Revert to Saved\" id=\"112\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <connections>\n                                    <action selector=\"revertDocumentToSaved:\" target=\"-1\" id=\"364\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"74\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Page Setup...\" keyEquivalent=\"P\" id=\"77\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"runPageLayout:\" target=\"-1\" id=\"87\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Print…\" keyEquivalent=\"p\" id=\"78\">\n                                <connections>\n                                    <action selector=\"print:\" target=\"-1\" id=\"86\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Edit\" id=\"217\">\n                    <menu key=\"submenu\" title=\"Edit\" id=\"205\">\n                        <items>\n                            <menuItem title=\"Undo\" keyEquivalent=\"z\" id=\"207\">\n                                <connections>\n                                    <action selector=\"undo:\" target=\"-1\" id=\"223\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Redo\" keyEquivalent=\"Z\" id=\"215\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"redo:\" target=\"-1\" id=\"231\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"206\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Cut\" keyEquivalent=\"x\" id=\"199\">\n                                <connections>\n                                    <action selector=\"cut:\" target=\"-1\" id=\"228\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Copy\" keyEquivalent=\"c\" id=\"197\">\n                                <connections>\n                                    <action selector=\"copy:\" target=\"-1\" id=\"224\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Paste\" keyEquivalent=\"v\" id=\"203\">\n                                <connections>\n                                    <action selector=\"paste:\" target=\"-1\" id=\"226\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Paste and Match Style\" keyEquivalent=\"V\" id=\"485\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"pasteAsPlainText:\" target=\"-1\" id=\"486\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Delete\" id=\"202\">\n                                <connections>\n                                    <action selector=\"delete:\" target=\"-1\" id=\"235\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Select All\" keyEquivalent=\"a\" id=\"198\">\n                                <connections>\n                                    <action selector=\"selectAll:\" target=\"-1\" id=\"232\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"214\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Find\" id=\"218\">\n                                <menu key=\"submenu\" title=\"Find\" id=\"220\">\n                                    <items>\n                                        <menuItem title=\"Find…\" tag=\"1\" keyEquivalent=\"f\" id=\"209\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"241\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find and Replace…\" tag=\"12\" keyEquivalent=\"f\" id=\"534\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"535\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find Next\" tag=\"2\" keyEquivalent=\"g\" id=\"208\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"487\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find Previous\" tag=\"3\" keyEquivalent=\"G\" id=\"213\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"488\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Use Selection for Find\" tag=\"7\" keyEquivalent=\"e\" id=\"221\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"489\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Jump to Selection\" keyEquivalent=\"j\" id=\"210\">\n                                            <connections>\n                                                <action selector=\"centerSelectionInVisibleArea:\" target=\"-1\" id=\"245\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Spelling and Grammar\" id=\"216\">\n                                <menu key=\"submenu\" title=\"Spelling and Grammar\" id=\"200\">\n                                    <items>\n                                        <menuItem title=\"Show Spelling and Grammar\" keyEquivalent=\":\" id=\"204\">\n                                            <connections>\n                                                <action selector=\"showGuessPanel:\" target=\"-1\" id=\"230\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Check Document Now\" keyEquivalent=\";\" id=\"201\">\n                                            <connections>\n                                                <action selector=\"checkSpelling:\" target=\"-1\" id=\"225\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"453\"/>\n                                        <menuItem title=\"Check Spelling While Typing\" id=\"219\">\n                                            <connections>\n                                                <action selector=\"toggleContinuousSpellChecking:\" target=\"-1\" id=\"222\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Check Grammar With Spelling\" id=\"346\">\n                                            <connections>\n                                                <action selector=\"toggleGrammarChecking:\" target=\"-1\" id=\"347\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Correct Spelling Automatically\" id=\"454\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticSpellingCorrection:\" target=\"-1\" id=\"456\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Substitutions\" id=\"348\">\n                                <menu key=\"submenu\" title=\"Substitutions\" id=\"349\">\n                                    <items>\n                                        <menuItem title=\"Show Substitutions\" id=\"457\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"orderFrontSubstitutionsPanel:\" target=\"-1\" id=\"458\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"459\"/>\n                                        <menuItem title=\"Smart Copy/Paste\" tag=\"1\" keyEquivalent=\"f\" id=\"350\">\n                                            <connections>\n                                                <action selector=\"toggleSmartInsertDelete:\" target=\"-1\" id=\"355\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Quotes\" tag=\"2\" keyEquivalent=\"g\" id=\"351\">\n                                            <connections>\n                                                <action selector=\"toggleAutomaticQuoteSubstitution:\" target=\"-1\" id=\"356\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Dashes\" id=\"460\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticDashSubstitution:\" target=\"-1\" id=\"461\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Links\" tag=\"3\" keyEquivalent=\"G\" id=\"354\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticLinkDetection:\" target=\"-1\" id=\"357\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Text Replacement\" id=\"462\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticTextReplacement:\" target=\"-1\" id=\"463\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Transformations\" id=\"450\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Transformations\" id=\"451\">\n                                    <items>\n                                        <menuItem title=\"Make Upper Case\" id=\"452\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"uppercaseWord:\" target=\"-1\" id=\"464\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Make Lower Case\" id=\"465\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"lowercaseWord:\" target=\"-1\" id=\"468\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Capitalize\" id=\"466\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"capitalizeWord:\" target=\"-1\" id=\"467\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Speech\" id=\"211\">\n                                <menu key=\"submenu\" title=\"Speech\" id=\"212\">\n                                    <items>\n                                        <menuItem title=\"Start Speaking\" id=\"196\">\n                                            <connections>\n                                                <action selector=\"startSpeaking:\" target=\"-1\" id=\"233\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Stop Speaking\" id=\"195\">\n                                            <connections>\n                                                <action selector=\"stopSpeaking:\" target=\"-1\" id=\"227\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Format\" id=\"375\">\n                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n                    <menu key=\"submenu\" title=\"Format\" id=\"376\">\n                        <items>\n                            <menuItem title=\"Font\" id=\"377\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Font\" systemMenu=\"font\" id=\"388\">\n                                    <items>\n                                        <menuItem title=\"Show Fonts\" keyEquivalent=\"t\" id=\"389\">\n                                            <connections>\n                                                <action selector=\"orderFrontFontPanel:\" target=\"420\" id=\"424\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Bold\" tag=\"2\" keyEquivalent=\"b\" id=\"390\">\n                                            <connections>\n                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"421\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Italic\" tag=\"1\" keyEquivalent=\"i\" id=\"391\">\n                                            <connections>\n                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"422\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Underline\" keyEquivalent=\"u\" id=\"392\">\n                                            <connections>\n                                                <action selector=\"underline:\" target=\"-1\" id=\"432\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"393\"/>\n                                        <menuItem title=\"Bigger\" tag=\"3\" keyEquivalent=\"+\" id=\"394\">\n                                            <connections>\n                                                <action selector=\"modifyFont:\" target=\"420\" id=\"425\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smaller\" tag=\"4\" keyEquivalent=\"-\" id=\"395\">\n                                            <connections>\n                                                <action selector=\"modifyFont:\" target=\"420\" id=\"423\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"396\"/>\n                                        <menuItem title=\"Kern\" id=\"397\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Kern\" id=\"415\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"416\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useStandardKerning:\" target=\"-1\" id=\"438\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use None\" id=\"417\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"turnOffKerning:\" target=\"-1\" id=\"441\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Tighten\" id=\"418\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"tightenKerning:\" target=\"-1\" id=\"431\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Loosen\" id=\"419\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"loosenKerning:\" target=\"-1\" id=\"435\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem title=\"Ligature\" id=\"398\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Ligature\" id=\"411\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"412\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useStandardLigatures:\" target=\"-1\" id=\"439\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use None\" id=\"413\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"turnOffLigatures:\" target=\"-1\" id=\"440\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use All\" id=\"414\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useAllLigatures:\" target=\"-1\" id=\"434\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem title=\"Baseline\" id=\"399\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Baseline\" id=\"405\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"406\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"unscript:\" target=\"-1\" id=\"437\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Superscript\" id=\"407\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"superscript:\" target=\"-1\" id=\"430\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Subscript\" id=\"408\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"subscript:\" target=\"-1\" id=\"429\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Raise\" id=\"409\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"raiseBaseline:\" target=\"-1\" id=\"426\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Lower\" id=\"410\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"lowerBaseline:\" target=\"-1\" id=\"427\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"400\"/>\n                                        <menuItem title=\"Show Colors\" keyEquivalent=\"C\" id=\"401\">\n                                            <connections>\n                                                <action selector=\"orderFrontColorPanel:\" target=\"-1\" id=\"433\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"402\"/>\n                                        <menuItem title=\"Copy Style\" keyEquivalent=\"c\" id=\"403\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"copyFont:\" target=\"-1\" id=\"428\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Paste Style\" keyEquivalent=\"v\" id=\"404\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"pasteFont:\" target=\"-1\" id=\"436\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Text\" id=\"496\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Text\" id=\"497\">\n                                    <items>\n                                        <menuItem title=\"Align Left\" keyEquivalent=\"{\" id=\"498\">\n                                            <connections>\n                                                <action selector=\"alignLeft:\" target=\"-1\" id=\"524\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Center\" keyEquivalent=\"|\" id=\"499\">\n                                            <connections>\n                                                <action selector=\"alignCenter:\" target=\"-1\" id=\"518\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Justify\" id=\"500\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"alignJustified:\" target=\"-1\" id=\"523\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Align Right\" keyEquivalent=\"}\" id=\"501\">\n                                            <connections>\n                                                <action selector=\"alignRight:\" target=\"-1\" id=\"521\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"502\"/>\n                                        <menuItem title=\"Writing Direction\" id=\"503\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Writing Direction\" id=\"508\">\n                                                <items>\n                                                    <menuItem title=\"Paragraph\" enabled=\"NO\" id=\"509\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                    </menuItem>\n                                                    <menuItem id=\"510\">\n                                                        <string key=\"title\"> Default</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionNatural:\" target=\"-1\" id=\"525\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"511\">\n                                                        <string key=\"title\"> Left to Right</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionLeftToRight:\" target=\"-1\" id=\"526\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"512\">\n                                                        <string key=\"title\"> Right to Left</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionRightToLeft:\" target=\"-1\" id=\"527\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem isSeparatorItem=\"YES\" id=\"513\"/>\n                                                    <menuItem title=\"Selection\" enabled=\"NO\" id=\"514\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                    </menuItem>\n                                                    <menuItem id=\"515\">\n                                                        <string key=\"title\"> Default</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionNatural:\" target=\"-1\" id=\"528\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"516\">\n                                                        <string key=\"title\"> Left to Right</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionLeftToRight:\" target=\"-1\" id=\"529\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"517\">\n                                                        <string key=\"title\"> Right to Left</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionRightToLeft:\" target=\"-1\" id=\"530\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"504\"/>\n                                        <menuItem title=\"Show Ruler\" id=\"505\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleRuler:\" target=\"-1\" id=\"520\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Copy Ruler\" keyEquivalent=\"c\" id=\"506\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"copyRuler:\" target=\"-1\" id=\"522\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Paste Ruler\" keyEquivalent=\"v\" id=\"507\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"pasteRuler:\" target=\"-1\" id=\"519\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"View\" id=\"295\">\n                    <menu key=\"submenu\" title=\"View\" id=\"296\">\n                        <items>\n                            <menuItem title=\"Show Toolbar\" keyEquivalent=\"t\" id=\"297\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"toggleToolbarShown:\" target=\"-1\" id=\"366\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Customize Toolbar…\" id=\"298\">\n                                <connections>\n                                    <action selector=\"runToolbarCustomizationPalette:\" target=\"-1\" id=\"365\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Window\" id=\"19\">\n                    <menu key=\"submenu\" title=\"Window\" systemMenu=\"window\" id=\"24\">\n                        <items>\n                            <menuItem title=\"Minimize\" keyEquivalent=\"m\" id=\"23\">\n                                <connections>\n                                    <action selector=\"performMiniaturize:\" target=\"-1\" id=\"37\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Zoom\" id=\"239\">\n                                <connections>\n                                    <action selector=\"performZoom:\" target=\"-1\" id=\"240\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"92\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Bring All to Front\" id=\"5\">\n                                <connections>\n                                    <action selector=\"arrangeInFront:\" target=\"-1\" id=\"39\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Help\" id=\"490\">\n                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n                    <menu key=\"submenu\" title=\"Help\" systemMenu=\"help\" id=\"491\">\n                        <items>\n                            <menuItem title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (" Help\" keyEquivalent=\"\?\" id=\"492\">\n                                <connections>\n                                    <action selector=\"showHelp:\" target=\"-1\" id=\"493\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n            </items>\n        </menu>\n        <window identifier=\"PrefWindow\" title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" allowsToolTipsWhenApplicationIsInactive=\"NO\" autorecalculatesKeyViewLoop=\"NO\" releasedWhenClosed=\"NO\" animationBehavior=\"default\" id=\"371\">\n            <windowStyleMask key=\"styleMask\" titled=\"YES\"/>\n            <windowPositionMask key=\"initialPositionMask\" leftStrut=\"YES\" rightStrut=\"YES\" topStrut=\"YES\" bottomStrut=\"YES\"/>\n            <rect key=\"contentRect\" x=\"335\" y=\"390\" width=\"615\" height=\"409\"/>\n            <rect key=\"screenRect\" x=\"0.0\" y=\"0.0\" width=\"2560\" height=\"1418\"/>\n            <view key=\"contentView\" id=\"372\">\n                <rect key=\"frame\" x=\"0.0\" y=\"0.0\" width=\"615\" height=\"409\"/>\n                <autoresizingMask key=\"autoresizingMask\"/>\n            </view>\n        </window>\n        <customObject id=\"536\" userLabel=\"Prefs\" customClass=\"Preferences\">\n            <connections>\n                <outlet property=\"window\" destination=\"371\" id=\"MyW-LM-hi6\"/>\n            </connections>\n        </customObject>\n        <customObject id=\"420\" customClass=\"NSFontManager\"/>\n    </objects>\n</document>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles info_plist'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_info_5F_plist (Compiler * /* inCompiler */,
                                                                   const GGS_string & in_PROJECT_5F_NAME,
                                                                   const GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                   const GGS_string & in_VERSION_5F_STRING,
                                                                   const GGS_stringset & in_HANDLED_5F_EXTENSION_5F_SET
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n<plist version=\"1.0\">\n<dict>\n <key>CFBundleDevelopmentRegion</key>\n <string>English</string>\n <key>CFBundleExecutable</key>\n <string>${EXECUTABLE_NAME}</string>\n <key>CFBundleIconFile</key>\n <string>application_icns</string>\n <key>CFBundleIdentifier</key>\n <string>") ;
  result.appendString (in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</string>\n <key>CFBundleInfoDictionaryVersion</key>\n <string>6.0</string>\n <key>CFBundleName</key>\n <string>${PRODUCT_NAME}</string>\n <key>CFBundlePackageType</key>\n <string>APPL</string>\n <key>CFBundleSignature</key>\n <string>\?\?\?\?</string>\n <key>LSMinimumSystemVersion</key>\n <string>10.9</string>\n <key>CFBundleShortVersionString</key>\n <string>") ;
  result.appendString (in_VERSION_5F_STRING.stringValue ()) ;
  result.appendString ("</string>\n <key>NSMainNibFile</key>\n <string>MainMenu</string>\n <key>NSPrincipalClass</key>\n <string>EBApplication</string>\n <key>CFBundleDocumentTypes</key>\n <array>\n") ;
  GGS_uint index_1016_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_1016 (in_HANDLED_5F_EXTENSION_5F_SET) ;
    while (enumerator_1016.hasCurrentObject ()) {
      result.appendString ("  <dict>\n   <key>CFBundleTypeIconFile</key>\n   <string>") ;
      result.appendString (enumerator_1016.current_key (HERE).stringValue ()) ;
      result.appendString ("_icns</string>\n   <key>CFBundleTypeExtensions</key>\n   <array>\n    <string>") ;
      result.appendString (enumerator_1016.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n   </array>\n   <key>CFBundleTypeName</key>\n   <string>") ;
      result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
      result.appendString (" Source</string>\n   <key>CFBundleTypeOSTypes</key>\n   <array>\n    <string>TEXT</string>\n   </array>\n   <key>CFBundleTypeRole</key>\n   <string>Editor</string>\n   <key>LSTypeIsPackage</key>\n   <false/>\n   <key>NSDocumentClass</key>\n   <string>OC_GGS_Document</string>\n  </dict>\n") ;
      enumerator_1016.gotoNextObject () ;
      index_1016_.increment () ;
    }
  }
  result.appendString ("\n </array>\n</dict>\n</plist>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles build_command'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_build_5F_command (Compiler * /* inCompiler */,
                                                                      const GGS_string & in_PROJECT_5F_NAME
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/env python\n# -*- coding: UTF-8 -*-\n\n//-----------------------------------------------------------------------------*\n\nimport subprocess, os, sys, atexit\n\n//-----------------------------------------------------------------------------*\n\ndef cleanup () :\n  if buildProcess.poll () == None :\n    buildProcess.kill ()\n    print 'Build process killed'\n\n//-----------------------------------------------------------------------------*\n\n//------------------ Register a function for killing build subprocess\natexit.register (cleanup)\n//------------------ Get compiler as first argument\ncompiler = \"eb\" # Default compiler\nif len (sys.argv) > 1 :\n  compiler = sys.argv [1]\n//------------------ Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n//------------------ Build\nprint \"+ \" + compiler + \" ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (".eb\"\nbuildProcess = subprocess.Popen ([compiler, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (".eb\"])\nbuildProcess.wait ()\n//------------------ Xcode build\nif buildProcess.returncode == 0 :\n  buildProcess = subprocess.Popen ([\"/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild\"])\n  buildProcess.wait ()\n//------------------ Result\nif buildProcess.returncode != 0 :\n  sys.exit (buildProcess.returncode)\n\n//-----------------------------------------------------------------------------*\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildActionMap?!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildActionMap_3F__21_ (const GGS_lstringlist constinArgument_inActionDeclarationList,
                                     GGS_actionMap & outArgument_outActionMap,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActionMap.drop () ; // Release 'out' argument
  outArgument_outActionMap = GGS_actionMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_1756 (constinArgument_inActionDeclarationList) ;
  while (enumerator_1756.hasCurrentObject ()) {
    {
    outArgument_outActionMap.setter_insertKey (enumerator_1756.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 48)) ;
    }
    enumerator_1756.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@actionFileGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                              const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                              GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                              GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@actionFileGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                              const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                              const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                              GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_actionFileGeneration temp_0 = this ;
  const GGS_actionFileGeneration temp_1 = this ;
  GGS_string var_s_2884 = GGS_string (filewrapperTemplate_actionGenerationTemplate_actionGeneration (inCompiler, temp_0.readProperty_mClassName (), temp_1.readProperty_mActionName () COMMA_SOURCE_FILE ("run-action.ggs", 77))) ;
  const GGS_actionFileGeneration temp_2 = this ;
  const GGS_actionFileGeneration temp_3 = this ;
  GGS_string var_fileName_2996 = GGS_string ("action-").add_operation (temp_2.readProperty_mClassName (), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)).add_operation (temp_3.readProperty_mActionName (), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_2996, inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 82)) ;
  }
  {
  GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_2996, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_s_2884, GGS_string ("    ENTER USER CODE HERE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("run-action.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 91)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 91)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 83)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'actionGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_actionGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_actionGenerationTemplate_3,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_actionGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_actionGenerationTemplate_1,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_2 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_actionGenerationTemplate,
  & gWrapperDirectory_1_actionGenerationTemplate,
  & gWrapperDirectory_2_actionGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_actionGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_actionGenerationTemplate_0,
  3,
  gWrapperAllDirectories_actionGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'actionGenerationTemplate actionGeneration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_actionGenerationTemplate_actionGeneration (Compiler * /* inCompiler */,
                                                                          const GGS_string & in_EXTENDED_5F_CLASS_5F_NAME,
                                                                          const GGS_string & in_ACTION_5F_NAME
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_EXTENDED_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  @objc func ") ;
  result.appendString (in_ACTION_5F_NAME.stringValue ()) ;
  result.appendString (" (_ inSender : NSObject\?) {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutViewClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  const GGS_autoLayoutViewClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 63)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_autoLayoutViewClassDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 65)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutViewClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_autoLayoutViewClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutViewClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutViewClassDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_autoLayoutViewClassDeclarationAST temp_2 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_3 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_6 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_7 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_8 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_9 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_10 = this ;
      ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.ggs", 239)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), temp_9.readProperty_mParameterList (), temp_10.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 237)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bool var_hasRunAction_8531 ;
    GGS_bool var_handlesTableValueBinding_8556 ;
    GGS_bool var_hasEnabled_8593 ;
    GGS_bool var_hasHidden_8616 ;
    GGS_bool var_handlesGraphicControllerBinding_8638 ;
    const GGS_autoLayoutViewClassDeclarationAST temp_11 = this ;
    GGS_lstring joker_8516 ; // Joker input parameter
    GGS_bool joker_8677_3 ; // Joker input parameter
    GGS_autoLayoutClassParameterList joker_8677_2 ; // Joker input parameter
    GGS_astAutoLayoutViewFunctionMap joker_8677_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8516, var_hasRunAction_8531, var_handlesTableValueBinding_8556, var_hasEnabled_8593, var_hasHidden_8616, var_handlesGraphicControllerBinding_8638, joker_8677_3, joker_8677_2, joker_8677_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 250)) ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_autoLayoutViewClassDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8531 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 260)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_autoLayoutViewClassDeclarationAST temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 261)) ;
      }
    }
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_autoLayoutViewClassDeclarationAST temp_17 = this ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8556 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 263)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        const GGS_autoLayoutViewClassDeclarationAST temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 264)) ;
      }
    }
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_autoLayoutViewClassDeclarationAST temp_21 = this ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8593 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 266)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_autoLayoutViewClassDeclarationAST temp_22 = this ;
        GenericArray <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 267)) ;
      }
    }
    GalgasBool test_24 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_24) {
      const GGS_autoLayoutViewClassDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8616 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 269)).boolEnum () ;
      if (GalgasBool::boolTrue == test_24) {
        const GGS_autoLayoutViewClassDeclarationAST temp_26 = this ;
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 270)) ;
      }
    }
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_autoLayoutViewClassDeclarationAST temp_29 = this ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8638 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 272)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_autoLayoutViewClassDeclarationAST temp_30 = this ;
        GenericArray <FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (temp_30.readProperty_mClassName ().readProperty_location (), GGS_string ("$graphicController binding already defined in superclass"), fixItArray31  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 273)) ;
      }
    }
    {
    const GGS_autoLayoutViewClassDeclarationAST temp_32 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_33 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_34 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_35 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_36 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_37 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_38 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_39 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_40 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_41 = this ;
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8531 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 279)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8556 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 280)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8593 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 281)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8616 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 282)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8638 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 283)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 276)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOutlets?????????&!!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                             const GGS_string /* constinArgument_inRootEntityName */,
                                                                                             const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GGS_outletDeclarationList constinArgument_inOutletDeclarationList,
                                                                                             const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                             const GGS_actionMap constinArgument_inActionMap,
                                                                                             const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                             GGS_generationStruct & ioArgument_ioGeneration,
                                                                                             GGS_regularBindingsGenerationList & outArgument_outRegularBindingsGenerationList,
                                                                                             GGS_multipleBindingGenerationList & outArgument_outMultipleBindingGenerationList,
                                                                                             GGS_actionBindingListForGeneration & outArgument_outTargetActionList,
                                                                                             GGS_decoratedOutletMap & outArgument_outletMap,
                                                                                             GGS_tableViewBindingGenerationList & outArgument_outTableViewBindingGenerationList,
                                                                                             GGS_ebViewGraphicControllerBindingGenerationList & outArgument_outEBViewGraphicControllerBindingGenerationList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outTargetActionList.drop () ; // Release 'out' argument
  outArgument_outletMap.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGenerationList.drop () ; // Release 'out' argument
  GGS_regularBindingsGenerationList temp_0 = GGS_regularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 207)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GGS_actionBindingListForGeneration temp_1 = GGS_actionBindingListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 208)) ;
  outArgument_outTargetActionList = temp_1 ;
  GGS_multipleBindingGenerationList temp_2 = GGS_multipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 209)) ;
  outArgument_outMultipleBindingGenerationList = temp_2 ;
  outArgument_outletMap = GGS_decoratedOutletMap::init (inCompiler COMMA_HERE) ;
  GGS_tableViewBindingGenerationList temp_3 = GGS_tableViewBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 211)) ;
  outArgument_outTableViewBindingGenerationList = temp_3 ;
  GGS_ebViewGraphicControllerBindingGenerationList temp_4 = GGS_ebViewGraphicControllerBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 212)) ;
  outArgument_outEBViewGraphicControllerBindingGenerationList = temp_4 ;
  UpEnumerator_outletDeclarationList enumerator_8180 (constinArgument_inOutletDeclarationList) ;
  while (enumerator_8180.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_8180.current_mOutletName (HERE), enumerator_8180.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 214)) ;
    }
    GGS_bool var_handlesRunAction_8421 ;
    GGS_bool var_handlesTableViewBinding_8456 ;
    GGS_bool var_handlesEnabledBinding_8498 ;
    GGS_bool var_handlesHiddenBinding_8538 ;
    GGS_bool var_handleGraphicControllerBinding_8577 ;
    GGS_bool var_outletClassIsUserDefined_8626 ;
    GGS_lstring joker_8400 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_8180.current_mOutletTypeName (HERE), joker_8400, var_handlesRunAction_8421, var_handlesTableViewBinding_8456, var_handlesEnabledBinding_8498, var_handlesHiddenBinding_8538, var_handleGraphicControllerBinding_8577, var_outletClassIsUserDefined_8626, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 215)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_outletClassIsUserDefined_8626.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 225)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.setter_insert (enumerator_8180.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 226)) ;
        }
      }
    }
    switch (enumerator_8180.current_mGraphicController (HERE).enumValue ()) {
    case GGS_graphicController::Enumeration::invalid:
      break ;
    case GGS_graphicController::Enumeration::enum_none:
      break ;
    case GGS_graphicController::Enumeration::enum_defined:
      {
        GGS_lstring extractedValue_8893_controllerName_0 ;
        GGS_lstring extractedValue_8918_propertyName_1 ;
        enumerator_8180.current_mGraphicController (HERE).getAssociatedValuesFor_defined (extractedValue_8893_controllerName_0, extractedValue_8918_propertyName_1) ;
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = var_handleGraphicControllerBinding_8577.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 232)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_8180.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8180.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 233)).add_operation (GGS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 233)), fixItArray7  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 233)) ;
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GGS_propertyKind var_kind_9222 ;
          GGS_actionMap joker_9238_2 ; // Joker input parameter
          GGS_bool joker_9238_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_8893_controllerName_0, var_kind_9222, joker_9238_2, joker_9238_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 235)) ;
          switch (var_kind_9222.enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            {
              GGS_typeKind extractedValue_9297__0 ;
              GGS_propertyAccessibility extractedValue_9297__1 ;
              var_kind_9222.getAssociatedValuesFor_property (extractedValue_9297__0, extractedValue_9297__1) ;
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (extractedValue_8893_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 242)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_9405__0 ;
              GGS_propertyAccessibility extractedValue_9405__1 ;
              GGS_bool extractedValue_9405__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_9405__3 ;
              var_kind_9222.getAssociatedValuesFor_toMany (extractedValue_9405__0, extractedValue_9405__1, extractedValue_9405__2, extractedValue_9405__3) ;
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_8893_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_9512__0 ;
              GGS_propertyAccessibility extractedValue_9512__1 ;
              GGS_bool extractedValue_9512__2 ;
              GGS_toOneOppositeRelationship extractedValue_9512__3 ;
              GGS_bool extractedValue_9512__4 ;
              var_kind_9222.getAssociatedValuesFor_toOne (extractedValue_9512__0, extractedValue_9512__1, extractedValue_9512__2, extractedValue_9512__3, extractedValue_9512__4) ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (extractedValue_8893_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray10  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 246)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            {
              GGS_lstring extractedValue_9628_entityName_0 ;
              GGS_bool extractedValue_9640_graphic_1 ;
              var_kind_9222.getAssociatedValuesFor_arrayController (extractedValue_9628_entityName_0, extractedValue_9640_graphic_1) ;
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, extractedValue_8918_propertyName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  GalgasBool test_12 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_12) {
                    test_12 = extractedValue_9640_graphic_1.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 249)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_12) {
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (extractedValue_8893_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_9628_entityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 250)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 250)), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 250)) ;
                    }
                  }
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                GGS_propertyMap var_observablePropertyMap_9981 ;
                GGS_classKind joker_9958 ; // Joker input parameter
                GGS_actionMap joker_10018_2 ; // Joker input parameter
                GGS_propertyGenerationList joker_10018_1 ; // Joker input parameter
                constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_9628_entityName_0, joker_9958, var_observablePropertyMap_9981, joker_10018_2, joker_10018_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 253)) ;
                GGS_propertyKind var_propertyKind_10100 ;
                GGS_actionMap joker_10114_2 ; // Joker input parameter
                GGS_bool joker_10114_1 ; // Joker input parameter
                var_observablePropertyMap_9981.method_searchKey (extractedValue_8918_propertyName_1, var_propertyKind_10100, joker_10114_2, joker_10114_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)) ;
                switch (var_propertyKind_10100.enumValue ()) {
                case GGS_propertyKind::Enumeration::invalid:
                  break ;
                case GGS_propertyKind::Enumeration::enum_property:
                  {
                    GGS_typeKind extractedValue_10180__0 ;
                    GGS_propertyAccessibility extractedValue_10180__1 ;
                    var_propertyKind_10100.getAssociatedValuesFor_property (extractedValue_10180__0, extractedValue_10180__1) ;
                    GenericArray <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (extractedValue_8893_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 262)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_toMany:
                  {
                    GGS_lstring extractedValue_10293_kEntityName_0 ;
                    GGS_propertyAccessibility extractedValue_10306__1 ;
                    GGS_bool extractedValue_10309_isGraphic_2 ;
                    GGS_toManyRelationshipOptionAST extractedValue_10320__3 ;
                    var_propertyKind_10100.getAssociatedValuesFor_toMany (extractedValue_10293_kEntityName_0, extractedValue_10306__1, extractedValue_10309_isGraphic_2, extractedValue_10320__3) ;
                    GalgasBool test_15 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_15) {
                      test_15 = extractedValue_10309_isGraphic_2.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 264)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_15) {
                        GenericArray <FixItDescription> fixItArray16 ;
                        inCompiler->emitSemanticError (extractedValue_8893_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_10293_kEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 265)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 265)), fixItArray16  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 265)) ;
                      }
                    }
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_toOne:
                  {
                    GGS_lstring extractedValue_10516__0 ;
                    GGS_propertyAccessibility extractedValue_10516__1 ;
                    GGS_bool extractedValue_10516__2 ;
                    GGS_toOneOppositeRelationship extractedValue_10516__3 ;
                    GGS_bool extractedValue_10516__4 ;
                    var_propertyKind_10100.getAssociatedValuesFor_toOne (extractedValue_10516__0, extractedValue_10516__1, extractedValue_10516__2, extractedValue_10516__3, extractedValue_10516__4) ;
                    GenericArray <FixItDescription> fixItArray17 ;
                    inCompiler->emitSemanticError (extractedValue_8893_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 268)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_arrayController:
                  {
                    GGS_lstring extractedValue_10639__0 ;
                    GGS_bool extractedValue_10639__1 ;
                    var_propertyKind_10100.getAssociatedValuesFor_arrayController (extractedValue_10639__0, extractedValue_10639__1) ;
                    GenericArray <FixItDescription> fixItArray18 ;
                    inCompiler->emitSemanticError (extractedValue_8893_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 270)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_selectionController:
                  {
                    GGS_string extractedValue_10765__0 ;
                    var_propertyKind_10100.getAssociatedValuesFor_selectionController (extractedValue_10765__0) ;
                    GenericArray <FixItDescription> fixItArray19 ;
                    inCompiler->emitSemanticError (extractedValue_8893_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 272)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            {
              GGS_string extractedValue_10916__0 ;
              var_kind_9222.getAssociatedValuesFor_selectionController (extractedValue_10916__0) ;
              GenericArray <FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (extractedValue_8893_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 276)) ;
            }
            break ;
          }
          {
          outArgument_outEBViewGraphicControllerBindingGenerationList.setter_append (enumerator_8180.current_mOutletName (HERE).readProperty_string (), extractedValue_8893_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 278)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8180.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GGS_tableValueBinding::Enumeration::invalid:
      break ;
    case GGS_tableValueBinding::Enumeration::enum_noTableValueBinding:
      break ;
    case GGS_tableValueBinding::Enumeration::enum_tableValueBinding:
      {
        GGS_lstring extractedValue_11311_controllerName_0 ;
        enumerator_8180.current_mTableValueBindingDescriptor (HERE).getAssociatedValuesFor_tableValueBinding (extractedValue_11311_controllerName_0) ;
        GalgasBool test_21 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_21) {
          test_21 = var_handlesTableViewBinding_8456.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 288)).boolEnum () ;
          if (GalgasBool::boolTrue == test_21) {
            GenericArray <FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_8180.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8180.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 289)).add_operation (GGS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 289)), fixItArray22  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 289)) ;
          }
        }
        if (GalgasBool::boolFalse == test_21) {
          GGS_propertyKind var_kind_11609 ;
          GGS_actionMap joker_11625_2 ; // Joker input parameter
          GGS_bool joker_11625_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_11311_controllerName_0, var_kind_11609, joker_11625_2, joker_11625_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 291)) ;
          GalgasBool test_23 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_23) {
            test_23 = var_kind_11609.getter_isArrayController (SOURCE_FILE ("outlet-declaration.ggs", 296)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 296)).boolEnum () ;
            if (GalgasBool::boolTrue == test_23) {
              GenericArray <FixItDescription> fixItArray24 ;
              inCompiler->emitSemanticError (extractedValue_11311_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray24  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 297)) ;
            }
          }
          {
          outArgument_outTableViewBindingGenerationList.setter_append (enumerator_8180.current_mOutletName (HERE).readProperty_string (), extractedValue_11311_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 299)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8180.current_mRunDescriptor (HERE).enumValue ()) {
    case GGS_runActionDescriptor::Enumeration::invalid:
      break ;
    case GGS_runActionDescriptor::Enumeration::enum_noAction:
      break ;
    case GGS_runActionDescriptor::Enumeration::enum_action:
      {
        GGS_lstring extractedValue_12016_target_0 ;
        GGS_lstring extractedValue_12033_action_1 ;
        enumerator_8180.current_mRunDescriptor (HERE).getAssociatedValuesFor_action (extractedValue_12016_target_0, extractedValue_12033_action_1) ;
        GalgasBool test_25 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_25) {
          test_25 = var_handlesRunAction_8421.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 309)).boolEnum () ;
          if (GalgasBool::boolTrue == test_25) {
            GenericArray <FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_8180.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8180.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 310)).add_operation (GGS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 310)), fixItArray26  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 310)) ;
          }
        }
        if (GalgasBool::boolFalse == test_25) {
          GalgasBool test_27 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_27) {
            test_27 = GGS_bool (ComparisonKind::equal, extractedValue_12016_target_0.readProperty_string ().objectCompare (GGS_string ("self"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_27) {
              constinArgument_inActionMap.method_searchKey (extractedValue_12033_action_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 312)) ;
              {
              outArgument_outTargetActionList.setter_append (enumerator_8180.current_mOutletName (HERE).readProperty_string (), GGS_string ("self"), extractedValue_12033_action_1.readProperty_string (), constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 313)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_27) {
            GGS_actionMap var_controllerActionMap_12569 ;
            GGS_propertyKind joker_12539 ; // Joker input parameter
            GGS_bool joker_12600 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_12016_target_0, joker_12539, var_controllerActionMap_12569, joker_12600, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 320)) ;
            var_controllerActionMap_12569.method_searchKey (extractedValue_12033_action_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 326)) ;
            {
            GGS_string temp_28 ;
            const GalgasBool test_29 = constinArgument_inPreferences.boolEnum () ;
            if (GalgasBool::boolTrue == test_29) {
              temp_28 = GGS_string ("preferences_") ;
            }else if (GalgasBool::boolFalse == test_29) {
              temp_28 = GGS_string::makeEmptyString () ;
            }
            outArgument_outTargetActionList.setter_append (enumerator_8180.current_mOutletName (HERE).readProperty_string (), temp_28.add_operation (extractedValue_12016_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 329)), extractedValue_12033_action_1.readProperty_string (), GGS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 331)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 331)).add_operation (extractedValue_12016_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 331)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 327)) ;
            }
          }
        }
      }
      break ;
    }
    switch (enumerator_8180.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_13077_expression_0 ;
        enumerator_8180.current_mEnabledBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_13077_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_13375 ;
        GGS_typeKind var_type_13416 ;
        GGS_location var_errorLocation_13445 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13077_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_13375, var_type_13416, var_errorLocation_13445, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 339)) ;
        GalgasBool test_30 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_30) {
          test_30 = var_handlesEnabledBinding_8498.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 349)).boolEnum () ;
          if (GalgasBool::boolTrue == test_30) {
            GenericArray <FixItDescription> fixItArray31 ;
            inCompiler->emitSemanticError (var_errorLocation_13445, GGS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray31  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 350)) ;
          }
        }
        GalgasBool test_32 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_32) {
          test_32 = var_type_13416.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 352)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 352)).boolEnum () ;
          if (GalgasBool::boolTrue == test_32) {
            GenericArray <FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticError (var_errorLocation_13445, GGS_string ("expression is not boolean"), fixItArray33  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 353)) ;
          }
        }
        {
        outArgument_outMultipleBindingGenerationList.setter_append (enumerator_8180.current_mOutletName (HERE).readProperty_string (), GGS_string ("enabled"), var_enableExpression_13375, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 355)) ;
        }
      }
      break ;
    }
    switch (enumerator_8180.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_13985_expression_0 ;
        enumerator_8180.current_mHiddenBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_13985_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_14283 ;
        GGS_typeKind var_type_14324 ;
        GGS_location var_errorLocation_14353 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13985_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_14283, var_type_14324, var_errorLocation_14353, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 365)) ;
        GalgasBool test_34 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_34) {
          test_34 = var_type_14324.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 375)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 375)).boolEnum () ;
          if (GalgasBool::boolTrue == test_34) {
            GenericArray <FixItDescription> fixItArray35 ;
            inCompiler->emitSemanticError (var_errorLocation_14353, GGS_string ("expression is not boolean"), fixItArray35  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 376)) ;
          }
        }
        GalgasBool test_36 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_36) {
          test_36 = var_handlesHiddenBinding_8538.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 378)).boolEnum () ;
          if (GalgasBool::boolTrue == test_36) {
            GenericArray <FixItDescription> fixItArray37 ;
            inCompiler->emitSemanticError (var_errorLocation_14353, GGS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray37  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 379)) ;
          }
        }
        {
        outArgument_outMultipleBindingGenerationList.setter_append (enumerator_8180.current_mOutletName (HERE).readProperty_string (), GGS_string ("hidden"), var_hiddenExpression_14283, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 381)) ;
        }
      }
      break ;
    }
    {
    GGS_string temp_38 ;
    const GalgasBool test_39 = constinArgument_inPreferences.boolEnum () ;
    if (GalgasBool::boolTrue == test_39) {
      temp_38 = GGS_string ("preferences_") ;
    }else if (GalgasBool::boolFalse == test_39) {
      temp_38 = GGS_string ("self.") ;
    }
    routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_8180.current_mOutletTypeName (HERE), enumerator_8180.current_mOutletName (HERE).readProperty_string (), enumerator_8180.current_mRegularBindingList (HERE), temp_38, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 388)) ;
    }
    enumerator_8180.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRegularBinding????????&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (const GGS_propertyMap constinArgument_inRootPropertyMap,
                                                                        const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                        const GGS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                                        const GGS_lstring constinArgument_inOutletTypeName,
                                                                        const GGS_string constinArgument_inOutletName,
                                                                        const GGS_regularBindingList constinArgument_inRegularBindingList,
                                                                        const GGS_string constinArgument_inSelfSwiftName,
                                                                        GGS_regularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_regularBindingList enumerator_15724 (constinArgument_inRegularBindingList) ;
  while (enumerator_15724.hasCurrentObject ()) {
    GGS_outletBindingModelList temp_0 = GGS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 417)) ;
    GGS_outletBindingModelList var_boundModelTypeList_15824 = temp_0 ;
    GGS_boundObjectList temp_1 = GGS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 418)) ;
    GGS_boundObjectList var_boundModelListForGeneration_15873 = temp_1 ;
    UpEnumerator_observablePropertyList enumerator_15915 (enumerator_15724.current_mObservablePropertyList (HERE)) ;
    while (enumerator_15915.hasCurrentObject ()) {
      GGS_propertyKind var_kind_16133 ;
      GGS_string var_swiftTypeStringForTransientFunctionArgument_16167 ;
      GGS_string var_protocolTypeName_16240 ;
      GGS_string var_defaultValueAsString_16286 ;
      extensionMethod_analyzeObservableProperty (enumerator_15915.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_16133, var_swiftTypeStringForTransientFunctionArgument_16167, var_protocolTypeName_16240, var_defaultValueAsString_16286, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 420)) ;
      switch (var_kind_16133.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_16386__0 ;
          GGS_propertyAccessibility extractedValue_16386__1 ;
          GGS_bool extractedValue_16386__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_16386__3 ;
          var_kind_16133.getAssociatedValuesFor_toMany (extractedValue_16386__0, extractedValue_16386__1, extractedValue_16386__2, extractedValue_16386__3) ;
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15915.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 432)), GGS_string ("a toMany property cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 432)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_16490__0 ;
          GGS_propertyAccessibility extractedValue_16490__1 ;
          GGS_bool extractedValue_16490__2 ;
          GGS_toOneOppositeRelationship extractedValue_16490__3 ;
          GGS_bool extractedValue_16490__4 ;
          var_kind_16133.getAssociatedValuesFor_toOne (extractedValue_16490__0, extractedValue_16490__1, extractedValue_16490__2, extractedValue_16490__3, extractedValue_16490__4) ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15915.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 434)), GGS_string ("a toOne property cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 434)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_16603__0 ;
          GGS_bool extractedValue_16603__1 ;
          var_kind_16133.getAssociatedValuesFor_arrayController (extractedValue_16603__0, extractedValue_16603__1) ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15915.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 436)), GGS_string ("an array controller cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 436)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_16722__0 ;
          var_kind_16133.getAssociatedValuesFor_selectionController (extractedValue_16722__0) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15915.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 438)), GGS_string ("a selection controller cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 438)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_15873.setter_append (extensionGetter_modelStringForSelf (enumerator_15915.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 441)), var_kind_16133, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 440)) ;
      }
      {
      var_boundModelTypeList_15824.setter_append (var_kind_16133, extensionGetter_location (enumerator_15915.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 444)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 444)) ;
      }
      enumerator_15915.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationModelList temp_6 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 447)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_17109 = temp_6 ;
    GGS_controllerBindingOptionDecoratedList temp_7 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 448)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_17196 = temp_7 ;
    GGS_lstring var_outletTypeName_17246 = constinArgument_inOutletTypeName ;
    GGS_bool var_continues_17288 = GGS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 451)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 451)).isValid ()) {
      uint32_t variant_17309 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 451)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 451)).uintValue () ;
      bool loop_17309 = true ;
      while (loop_17309) {
        loop_17309 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_17246.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_17288 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 451)).isValid () ;
        if (loop_17309) {
          loop_17309 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_17246.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_17288 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 451)).boolValue () ;
        }
        if (loop_17309 && (0 == variant_17309)) {
          loop_17309 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.ggs", 451)) ;
        }
        if (loop_17309) {
          variant_17309 -= 1 ;
          var_continues_17288 = GGS_bool (false) ;
          GGS_lstring var_superOutletClassName_17541 ;
          GGS_outletBindingSpecificationMap var_bindingMap_17607 ;
          constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().method_searchKey (var_outletTypeName_17246, var_superOutletClassName_17541, var_bindingMap_17607, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 453)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_bindingMap_17607.getter_hasKey (enumerator_15724.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-declaration.ggs", 458)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              var_bindingMap_17607.method_searchKey (enumerator_15724.current_mBindingName (HERE), var_outletBindingSpecificationModelList_17109, var_controllerBindingOptionDecoratedList_17196, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 459)) ;
            }
          }
          if (GalgasBool::boolFalse == test_8) {
            var_continues_17288 = GGS_bool (true) ;
            var_outletTypeName_17246 = var_superOutletClassName_17541 ;
          }
        }
      }
    }
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_continues_17288.boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_15724.current_mBindingName (HERE).readProperty_location (), GGS_string ("this binding is not defined"), fixItArray10  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 470)) ;
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, var_boundModelTypeList_15824.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 471)).objectCompare (var_outletBindingSpecificationModelList_17109.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 471)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_15724.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_17109.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 473)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 473)).add_operation (GGS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 473)).add_operation (var_boundModelTypeList_15824.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 475)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 474)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 474)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 475)), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 472)) ;
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        UpEnumerator_outletBindingSpecificationModelList enumerator_18326 (var_outletBindingSpecificationModelList_17109) ;
        UpEnumerator_outletBindingModelList enumerator_18421 (var_boundModelTypeList_15824) ;
        while (enumerator_18326.hasCurrentObject () && enumerator_18421.hasCurrentObject ()) {
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            GGS_bool test_14 = enumerator_18326.current_mModelShouldBeWritableProperty (HERE) ;
            if (GalgasBool::boolTrue == test_14.boolEnum ()) {
              test_14 = extensionGetter_isTransient (enumerator_18421.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 478)) ;
            }
            test_13 = test_14.boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_18421.current_mErrorLocation (HERE), GGS_string ("the model is transient and the binding requires an writable model"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 479)) ;
            }
          }
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            GGS_bool test_17 = enumerator_18326.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.ggs", 481)) ;
            if (GalgasBool::boolTrue == test_17.boolEnum ()) {
              test_17 = extensionGetter_isEnumType (enumerator_18421.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 481)) ;
            }
            test_16 = test_17.boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            GalgasBool test_18 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_18) {
              test_18 = GGS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_18326.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 482)).objectCompare (extensionGetter_swiftTypeName (enumerator_18421.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 482)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_18) {
                GenericArray <FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (enumerator_18421.current_mErrorLocation (HERE), GGS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_18326.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 483)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 483)), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 483)) ;
              }
            }
          }
          enumerator_18326.gotoNextObject () ;
          enumerator_18421.gotoNextObject () ;
        }
      }
    }
    GGS_string var_bindingOptionString_18993 = GGS_string::makeEmptyString () ;
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = GGS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_17196.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 489)).objectCompare (enumerator_15724.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("outlet-declaration.ggs", 489)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        GGS_string var_s_19119 ;
        GalgasBool test_21 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_21) {
          test_21 = GGS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_17196.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 491)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_21) {
            var_s_19119 = GGS_string ("this binding has no option") ;
          }
        }
        if (GalgasBool::boolFalse == test_21) {
          var_s_19119 = GGS_string ("this binding requires the following options:") ;
          UpEnumerator_controllerBindingOptionDecoratedList enumerator_19321 (var_controllerBindingOptionDecoratedList_17196) ;
          while (enumerator_19321.hasCurrentObject ()) {
            var_s_19119.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_19321.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 496)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 496)).add_operation (extensionGetter_swiftTypeName (enumerator_19321.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 496)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 496)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 496)) ;
            enumerator_19321.gotoNextObject () ;
          }
        }
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15724.current_mBindingName (HERE).readProperty_location (), var_s_19119, fixItArray22  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 499)) ;
      }
    }
    if (GalgasBool::boolFalse == test_20) {
      UpEnumerator_controllerBindingOptionDecoratedList enumerator_19546 (var_controllerBindingOptionDecoratedList_17196) ;
      UpEnumerator_bindingOptionList enumerator_19643 (enumerator_15724.current_mBindingOptionList (HERE)) ;
      while (enumerator_19546.hasCurrentObject () && enumerator_19643.hasCurrentObject ()) {
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          test_23 = GGS_bool (ComparisonKind::notEqual, enumerator_19546.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_19643.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            GenericArray <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_19643.current_mOptionName (HERE).readProperty_location (), GGS_string ("the option name should be '").add_operation (enumerator_19546.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 504)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 504)), fixItArray24  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 504)) ;
          }
        }
        GGS_string var_optionValueAsString_20030 ;
        GGS_typeKindList temp_25 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 507)) ;
        temp_25.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (enumerator_19546.current_mOptionType (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 507)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_19643.current_mOptionValue (HERE).ptr (), temp_25, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_20030, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 506)) ;
        var_bindingOptionString_18993.plusAssignOperation(GGS_string (", ").add_operation (enumerator_19546.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 511)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 511)).add_operation (var_optionValueAsString_20030, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 511)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 511)) ;
        enumerator_19546.gotoNextObject () ;
        enumerator_19643.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (constinArgument_inOutletName, enumerator_15724.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_15873, var_bindingOptionString_18993, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 515)) ;
    }
    enumerator_15724.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_transientClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_transientClassDeclarationAST temp_0 = this ;
  const GGS_transientClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 12)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_transientClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_transientClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_transientClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GGS_generationStruct & ioArgument_ioGeneration,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_transientClassDeclarationAST temp_0 = this ;
  const GGS_transientClassDeclarationAST temp_1 = this ;
  GGS_propertyGenerationList temp_2 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 66)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GGS_classKind::class_func_atomic (GGS_typeKind::class_func_transientPropertyExternType (temp_1.readProperty_mClassName ().readProperty_string ()  COMMA_SOURCE_FILE ("transient-property-class.ggs", 63))  COMMA_SOURCE_FILE ("transient-property-class.ggs", 63)), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_actionMap::init (inCompiler COMMA_HERE), temp_2, inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 61)) ;
  }
  {
  const GGS_transientClassDeclarationAST temp_3 = this ;
  const GGS_transientClassDeclarationAST temp_4 = this ;
  ioArgument_ioGeneration.mProperty_mTransientPropertyTypeList.setter_append (temp_3.readProperty_mClassName ().readProperty_string (), temp_4.readProperty_mIsClass (), inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 68)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@toOneRelationshipAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toOneRelationshipAST temp_0 = this ;
  const GGS_toOneRelationshipAST temp_1 = this ;
  const GGS_toOneRelationshipAST temp_2 = this ;
  GGS_lstring var_node_958 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_toOneRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_958, temp_3, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 25)) ;
  }
  {
  const GGS_toOneRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_958, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 26)) ;
  }
  {
  const GGS_toOneRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_958, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 27)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOneRelationshipAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_toOneRelationshipAST::getter_nodeKey (Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_toOneRelationshipAST temp_0 = this ;
  const GGS_toOneRelationshipAST temp_1 = this ;
  const GGS_toOneRelationshipAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 33)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 33)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@toOneRelationshipAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toOneRelationshipAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_3945 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  {
  const GGS_toOneRelationshipAST temp_1 = this ;
  ioArgument_ioGeneration.mProperty_mToOneClassImplementations.setter_insert (temp_1.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 106)) ;
  }
  GGS_classKind var_classKind_4250 ;
  const GGS_toOneRelationshipAST temp_2 = this ;
  GGS_propertyMap joker_4261_3 ; // Joker input parameter
  GGS_actionMap joker_4261_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_4261_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_4250, joker_4261_3, joker_4261_2, joker_4261_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 107)) ;
  switch (var_classKind_4250.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_toOneRelationshipAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 110)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_4392__0 ;
      var_classKind_4250.getAssociatedValuesFor_atomic (extractedValue_4392__0) ;
      const GGS_toOneRelationshipAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 112)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_4487__0 ;
      var_classKind_4250.getAssociatedValuesFor_document (extractedValue_4487__0) ;
      const GGS_toOneRelationshipAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 114)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_4580__0 ;
      GGS_bool extractedValue_4583_graphic_1 ;
      GGS_bool extractedValue_4592__2 ;
      GGS_bool extractedValue_4595_handleOpposite_3 ;
      var_classKind_4250.getAssociatedValuesFor_entity (extractedValue_4580__0, extractedValue_4583_graphic_1, extractedValue_4592__2, extractedValue_4595_handleOpposite_3) ;
      const GGS_toOneRelationshipAST temp_9 = this ;
      const GGS_toOneRelationshipAST temp_10 = this ;
      const GGS_toOneRelationshipAST temp_11 = this ;
      GGS_propertyKind var_kind_4623 = GGS_propertyKind::class_func_toOne (temp_9.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-one-relationship.ggs", 118)), extractedValue_4583_graphic_1, temp_10.readProperty_mOpposite (), temp_11.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 116)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_toOneRelationshipAST temp_13 = this ;
        test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOpposite ().objectCompare (GGS_toOneOppositeRelationship::class_func_none (SOURCE_FILE ("to-one-relationship.ggs", 123)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = extractedValue_4595_handleOpposite_3.operator_not (SOURCE_FILE ("to-one-relationship.ggs", 123)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            const GGS_toOneRelationshipAST temp_14 = this ;
            const GGS_toOneRelationshipAST temp_15 = this ;
            GenericArray <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (temp_14.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("the '").add_operation (temp_15.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 124)).add_operation (GGS_string ("' entity does not handle opposite relationship"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 124)), fixItArray16  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 124)) ;
          }
        }
      }
      {
      const GGS_toOneRelationshipAST temp_17 = this ;
      var_entry_3945.mProperty_mPropertyMap.setter_insertKey (temp_17.readProperty_mToOneRelationshipName (), var_kind_4623, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 126)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_3945, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 128)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@toOneRelationshipAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toOneRelationshipAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_5489 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_5630 ;
  GGS_propertyMap var_destinationEntityPropertyMap_5646 ;
  const GGS_toOneRelationshipAST temp_1 = this ;
  GGS_actionMap joker_5676_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_5676_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mDestinationEntityName (), var_classKind_5630, var_destinationEntityPropertyMap_5646, joker_5676_2, joker_5676_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 137)) ;
  switch (var_classKind_5630.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    break ;
  case GGS_classKind::Enumeration::enum_document:
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_5772__0 ;
      GGS_bool extractedValue_5775_graphic_1 ;
      GGS_bool extractedValue_5785__2 ;
      GGS_bool extractedValue_5785__3 ;
      var_classKind_5630.getAssociatedValuesFor_entity (extractedValue_5772__0, extractedValue_5775_graphic_1, extractedValue_5785__2, extractedValue_5785__3) ;
      const GGS_toOneRelationshipAST temp_2 = this ;
      const GGS_toOneRelationshipAST temp_3 = this ;
      const GGS_toOneRelationshipAST temp_4 = this ;
      GGS_propertyKind var_kind_5798 = GGS_propertyKind::class_func_toOne (temp_2.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-one-relationship.ggs", 145)), extractedValue_5775_graphic_1, temp_3.readProperty_mOpposite (), temp_4.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 143)) ;
      {
      const GGS_toOneRelationshipAST temp_5 = this ;
      const GGS_toOneRelationshipAST temp_6 = this ;
      const GGS_toOneRelationshipAST temp_7 = this ;
      const GGS_toOneRelationshipAST temp_8 = this ;
      const GGS_toOneRelationshipAST temp_9 = this ;
      var_entry_5489.mProperty_mPropertyGenerationList.setter_append (GGS_toOnePropertyGeneration::init_21__21__21__21__21__21__21_ (temp_5.readProperty_mToOneRelationshipName ().readProperty_string (), temp_6.readProperty_mClassName ().readProperty_string (), var_kind_5798, temp_7.readProperty_mOpposite (), var_destinationEntityPropertyMap_5646, temp_8.readProperty_mUsedForSignature (), temp_9.readProperty_mWeak ().operator_not (SOURCE_FILE ("to-one-relationship.ggs", 158)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 151)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_5489, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 163)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toOnePropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                         const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                         const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 191)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 191)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 191)) ;
  const GGS_toOnePropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)) ;
  const GGS_toOnePropertyGeneration temp_1 = this ;
  const GGS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)).add_operation (GGS_string ("_property = StoredObject_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)) ;
  const GGS_toOnePropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string (" (usedForSignature: ").add_operation (temp_3.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-one-relationship.ggs", 195)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)) ;
  const GGS_toOnePropertyGeneration temp_4 = this ;
  const GGS_toOnePropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string (", strongRef: ").add_operation (temp_4.readProperty_mStrongRef ().getter_cString (SOURCE_FILE ("to-one-relationship.ggs", 196)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)).add_operation (GGS_string (", key: \""), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)).add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)).add_operation (GGS_string ("\")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)) ;
  const GGS_toOnePropertyGeneration temp_6 = this ;
  const GGS_toOnePropertyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)) ;
  result_result.plusAssignOperation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)) ;
  const GGS_toOnePropertyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("      return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 200)).add_operation (GGS_string ("_property.propval\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 200)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 200)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 201)) ;
  result_result.plusAssignOperation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 202)) ;
  const GGS_toOnePropertyGeneration temp_9 = this ;
  result_result.plusAssignOperation(GGS_string ("      // self.").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 203)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 203)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 203)) ;
  const GGS_toOnePropertyGeneration temp_10 = this ;
  result_result.plusAssignOperation(GGS_string ("      if self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)).add_operation (GGS_string ("_property.propval !== newValue {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)) ;
  const GGS_toOnePropertyGeneration temp_11 = this ;
  result_result.plusAssignOperation(GGS_string ("        if self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)).add_operation (GGS_string ("_property.propval != nil {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)) ;
  const GGS_toOnePropertyGeneration temp_12 = this ;
  result_result.plusAssignOperation(GGS_string ("          self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)).add_operation (GGS_string ("_property.setProp (nil)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 207)) ;
  result_result.plusAssignOperation(GGS_string ("        if newValue != nil {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 208)) ;
  const GGS_toOnePropertyGeneration temp_13 = this ;
  result_result.plusAssignOperation(GGS_string ("          self.").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 210)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 211)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 212)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 213)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)) ;
  const GGS_toOnePropertyGeneration temp_14 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)).add_operation (GGS_string ("_none = EBTransientProperty <Bool> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toOnePropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toOnePropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toOnePropertyGeneration temp_0 = this ;
  switch (temp_0.readProperty_mOpposite ().enumValue ()) {
  case GGS_toOneOppositeRelationship::Enumeration::invalid:
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
    {
      GGS_lstring extractedValue_9610_oppositeName_0 ;
      temp_0.readProperty_mOpposite ().getAssociatedValuesFor_oppositeIsToMany (extractedValue_9610_oppositeName_0) ;
      const GGS_toOnePropertyGeneration temp_1 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (GGS_string (" (has opposite to many relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (extractedValue_9610_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)) ;
      const GGS_toOnePropertyGeneration temp_2 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)) ;
      const GGS_toOnePropertyGeneration temp_3 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)) ;
      result_result.plusAssignOperation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9610_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)).add_operation (GGS_string ("_property.add (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)) ;
      result_result.plusAssignOperation(GGS_string ("      resetter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9610_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)).add_operation (GGS_string ("_property.remove (me) } }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)) ;
      result_result.plusAssignOperation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 234)) ;
    }
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
    {
      const GGS_toOnePropertyGeneration temp_4 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 236)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 236)) ;
      const GGS_toOnePropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)) ;
    }
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
    {
      GGS_lstring extractedValue_10430_oppositeName_0 ;
      temp_0.readProperty_mOpposite ().getAssociatedValuesFor_oppositeIsToOne (extractedValue_10430_oppositeName_0) ;
      const GGS_toOnePropertyGeneration temp_6 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (GGS_string (" (has opposite to one relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (extractedValue_10430_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)) ;
      const GGS_toOnePropertyGeneration temp_7 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)) ;
      const GGS_toOnePropertyGeneration temp_8 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)) ;
      result_result.plusAssignOperation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_10430_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)).add_operation (GGS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)) ;
      result_result.plusAssignOperation(GGS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_10430_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)).add_operation (GGS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)) ;
      result_result.plusAssignOperation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 244)) ;
    }
    break ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = constinArgument_inPreferences.operator_not (SOURCE_FILE ("to-one-relationship.ggs", 246)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_toOnePropertyGeneration temp_10 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.accumulateProperty (self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 247)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 247)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 247)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astSeparatorInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astSeparatorInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                       const GGS_bool /* constinArgument_inPreferences */,
                                                                       const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                       const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                       const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                       const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                       const GGS_actionMap /* constinArgument_inActionMap */,
                                                                       const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                       const GGS_classMap /* constinArgument_inClassMap */,
                                                                       GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                       GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                       GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                       GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astSeparatorInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutSeparatorInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astGutterInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astGutterInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                    const GGS_bool /* constinArgument_inPreferences */,
                                                                    const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                    const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                    const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                    const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                    const GGS_actionMap /* constinArgument_inActionMap */,
                                                                    const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                    const GGS_classMap /* constinArgument_inClassMap */,
                                                                    GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                    GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                    GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                    GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astGutterInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutGutterInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astComputedHorizontalViewDeclaration checkView'
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedHorizontalViewDeclaration::method_checkView (const GGS_string /* constinArgument_inViewName */,
                                                                  const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                  const GGS_bool constinArgument_inPreferences,
                                                                  const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                  const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                  const GGS_actionMap constinArgument_inActionMap,
                                                                  const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                  const GGS_classMap constinArgument_inClassMap,
                                                                  GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                  GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                  GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                  GGS_abstractViewGeneration & outArgument_outGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_preferencesActionMap_32233 ;
  GGS_classKind joker_32223_2 ; // Joker input parameter
  GGS_propertyMap joker_32223_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_32255 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::class_func_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 786)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 786)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 786)), joker_32223_2, joker_32223_1, var_preferencesActionMap_32233, joker_32255, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 786)) ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_32772 ;
  const GGS_astComputedHorizontalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_32233, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_32772, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 787)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_1 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 804)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_32836 = temp_1 ;
  const GGS_astComputedHorizontalViewDeclaration temp_2 = this ;
  UpEnumerator_astViewInstructionList enumerator_32864 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_32864.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_33292 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_32864.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_33292, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 806)) ;
    {
    var_instructionList_32836.setter_append (var_generatedInstruction_33292, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 821)) ;
    }
    enumerator_32864.gotoNextObject () ;
  }
  const GGS_astComputedHorizontalViewDeclaration temp_3 = this ;
  outArgument_outGeneration = GGS_computedHorizontalViewGeneration::init_21__21__21_ (var_funcCallList_32772, var_instructionList_32836, temp_3.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astComputedVerticalViewDeclaration checkView'
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedVerticalViewDeclaration::method_checkView (const GGS_string /* constinArgument_inViewName */,
                                                                const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                const GGS_bool constinArgument_inPreferences,
                                                                const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                                const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                const GGS_actionMap constinArgument_inActionMap,
                                                                const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                const GGS_classMap constinArgument_inClassMap,
                                                                GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                GGS_abstractViewGeneration & outArgument_outGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_preferencesActionMap_34794 ;
  GGS_classKind joker_34784_2 ; // Joker input parameter
  GGS_propertyMap joker_34784_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_34816 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::class_func_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 843)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 843)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 843)), joker_34784_2, joker_34784_1, var_preferencesActionMap_34794, joker_34816, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 843)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 844)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_34867 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_35401 ;
  const GGS_astComputedVerticalViewDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_34794, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_35401, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 845)) ;
  const GGS_astComputedVerticalViewDeclaration temp_2 = this ;
  UpEnumerator_astViewInstructionList enumerator_35425 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_35425.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_35852 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_35425.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_35852, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 863)) ;
    {
    var_instructionList_34867.setter_append (var_generatedInstruction_35852, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 878)) ;
    }
    enumerator_35425.gotoNextObject () ;
  }
  const GGS_astComputedVerticalViewDeclaration temp_3 = this ;
  const GGS_astComputedVerticalViewDeclaration temp_4 = this ;
  const GGS_astComputedVerticalViewDeclaration temp_5 = this ;
  outArgument_outGeneration = GGS_computedVerticalViewGeneration::init_21__21__21__21__21_ (temp_3.readProperty_mHasVerticalScroller (), temp_4.readProperty_mConfiguratorName (), var_funcCallList_35401, var_instructionList_34867, temp_5.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astSpaceViewInstruction generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astSpaceViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                            const GGS_bool /* constinArgument_inPreferences */,
                                                            const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                            const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                            const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                            const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                            const GGS_actionMap /* constinArgument_inActionMap */,
                                                            const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                            const GGS_classMap /* constinArgument_inClassMap */,
                                                            GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                            GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                            GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                            GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstruction = GGS_autoLayoutSpaceViewInstructionGeneration::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astDividerInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astDividerInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                     const GGS_bool /* constinArgument_inPreferences */,
                                                                     const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                     const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                     const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                     const GGS_actionMap /* constinArgument_inActionMap */,
                                                                     const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                     const GGS_classMap /* constinArgument_inClassMap */,
                                                                     GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                     GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                     GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                     GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astDividerInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutDividerInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astLocalViewInstruction generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astLocalViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                            const GGS_bool /* constinArgument_inPreferences */,
                                                            const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                            const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                            const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                            const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                            const GGS_actionMap /* constinArgument_inActionMap */,
                                                            const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                            const GGS_classMap /* constinArgument_inClassMap */,
                                                            GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                            GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                            GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                            GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astLocalViewInstruction temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutLocalViewInstructionGeneration::init_21_ (temp_0.readProperty_mLocalView ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astComputedViewInstruction generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                               const GGS_bool constinArgument_inPreferences,
                                                               const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                               const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                               const GGS_actionMap constinArgument_inActionMap,
                                                               const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                               const GGS_classMap constinArgument_inClassMap,
                                                               GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                               GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                               GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                               GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList var_formalParameterList_42468 ;
  GGS_astAutoLayoutViewFunctionMap var_functionMap_42499 ;
  const GGS_astComputedViewInstruction temp_0 = this ;
  GGS_lstring joker_42453_7 ; // Joker input parameter
  GGS_bool joker_42453_6 ; // Joker input parameter
  GGS_bool joker_42453_5 ; // Joker input parameter
  GGS_bool joker_42453_4 ; // Joker input parameter
  GGS_bool joker_42453_3 ; // Joker input parameter
  GGS_bool joker_42453_2 ; // Joker input parameter
  GGS_bool joker_42453_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_0.readProperty_mAutoLayoutViewClassName (), joker_42453_7, joker_42453_6, joker_42453_5, joker_42453_4, joker_42453_3, joker_42453_2, joker_42453_1, var_formalParameterList_42468, var_functionMap_42499, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 979)) ;
  GGS_actionMap var_preferencesActionMap_42587 ;
  GGS_classKind joker_42577_2 ; // Joker input parameter
  GGS_propertyMap joker_42577_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_42609 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::class_func_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 985)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 985)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 985)), joker_42577_2, joker_42577_1, var_preferencesActionMap_42587, joker_42609, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 985)) ;
  GGS_autoLayoutViewInstructionGenerationParameterList temp_1 = GGS_autoLayoutViewInstructionGenerationParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 986)) ;
  GGS_autoLayoutViewInstructionGenerationParameterList var_parameterList_42669 = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_astComputedViewInstruction temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, var_formalParameterList_42468.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 987)).objectCompare (temp_3.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 987)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_astComputedViewInstruction temp_4 = this ;
      const GGS_astComputedViewInstruction temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mAutoLayoutViewClassName ().readProperty_location (), var_formalParameterList_42468.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 989)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 989)).add_operation (GGS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 989)).add_operation (temp_5.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 989)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 989)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 989)).add_operation (GGS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 989)), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 988)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_astComputedViewInstruction temp_7 = this ;
    UpEnumerator_astAutoLayoutViewInstructionParameterList enumerator_42933 (temp_7.readProperty_mParameterList ()) ;
    UpEnumerator_autoLayoutClassParameterList enumerator_42977 (var_formalParameterList_42468) ;
    while (enumerator_42933.hasCurrentObject () && enumerator_42977.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_43028 = enumerator_42977.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 992)).unwrappedValue () ;
        if (!enumerator_42977.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 992)).isValuated ()) {
          test_8 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_8) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_43073 = enumerator_42933.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 992)).unwrappedValue () ;
          if (!enumerator_42933.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 992)).isValuated ()) {
            test_8 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_8) {
            GGS_classKind var_typeKind_43168 ;
            GGS_propertyMap joker_43178_3 ; // Joker input parameter
            GGS_actionMap joker_43178_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_43178_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (var_formalTypeEnum_43028.readProperty_name (), var_typeKind_43168, joker_43178_3, joker_43178_2, joker_43178_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 993)) ;
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              const GGS_classKind_2E_atomic var_atomicTypeKind_43198 = var_typeKind_43168.getter_getAtomic (SOURCE_FILE ("auto-layout-view.ggs", 994)).unwrappedValue () ;
              if (!var_typeKind_43168.getter_getAtomic (SOURCE_FILE ("auto-layout-view.ggs", 994)).isValuated ()) {
                test_9 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_9) {
                const GGS_typeKind_2E_enumType var_enumKind_43239 = var_atomicTypeKind_43198.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.ggs", 994)).unwrappedValue () ;
                if (!var_atomicTypeKind_43198.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.ggs", 994)).isValuated ()) {
                  test_9 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_9) {
                  GGS_uint joker_43350 ; // Joker input parameter
                  var_enumKind_43239.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_43073.readProperty_name (), joker_43350, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 995)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (var_formalTypeEnum_43028.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 997)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_42933.current_mParameterType (HERE).objectCompare (enumerator_42977.current_mParameterType (HERE))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GenericArray <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_42933.current_mParameterName (HERE).readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_42977.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)).add_operation (extensionGetter_string (enumerator_42933.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)) ;
          }
        }
      }
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_42933.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_42977.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_42933.current_mParameterName (HERE).readProperty_location (), GGS_string ("the parameter name should be '").add_operation (enumerator_42977.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1003)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1003)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1003)) ;
        }
      }
      switch (enumerator_42933.current_mParameter (HERE).enumValue ()) {
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::invalid:
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_viewFunc:
        {
          GGS_astAbstractViewInstructionDeclaration extractedValue_43768_instruction_0 ;
          enumerator_42933.current_mParameter (HERE).getAssociatedValuesFor_viewFunc (extractedValue_43768_instruction_0) ;
          GGS_abstractViewInstructionGeneration var_viewInstruction_44290 ;
          callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_43768_instruction_0.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_44290, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1007)) ;
          {
          var_parameterList_42669.setter_append (enumerator_42933.current_mParameterName (HERE).readProperty_string (), GGS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1022)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1022)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1022)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1022)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1022)) ;
          }
          {
          ioArgument_ioImplicitViewFunctionGenerationList.setter_append (var_viewInstruction_44290, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1023)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_entity:
        {
          GGS_lstring extractedValue_44533_entityName_0 ;
          enumerator_42933.current_mParameter (HERE).getAssociatedValuesFor_entity (extractedValue_44533_entityName_0) ;
          GGS_classKind var_classKind_44594 ;
          GGS_propertyMap joker_44605_3 ; // Joker input parameter
          GGS_actionMap joker_44605_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_44605_1 ; // Joker input parameter
          constinArgument_inClassMap.method_searchKey (extractedValue_44533_entityName_0, var_classKind_44594, joker_44605_3, joker_44605_2, joker_44605_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1025)) ;
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            test_15 = var_classKind_44594.getter_isEntity (SOURCE_FILE ("auto-layout-view.ggs", 1026)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1026)).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              GenericArray <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_44533_entityName_0.readProperty_location (), GGS_string ("an entity is required here"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1027)) ;
            }
          }
          {
          var_parameterList_42669.setter_append (enumerator_42933.current_mParameterName (HERE).readProperty_string (), extractedValue_44533_entityName_0.readProperty_string ().add_operation (GGS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1029)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1029)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_string:
        {
          GGS_string extractedValue_44804_stringValue_0 ;
          enumerator_42933.current_mParameter (HERE).getAssociatedValuesFor_string (extractedValue_44804_stringValue_0) ;
          {
          var_parameterList_42669.setter_append (enumerator_42933.current_mParameterName (HERE).readProperty_string (), extractedValue_44804_stringValue_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1031)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_menuItem:
        {
          GGS_string extractedValue_44891_title_0 ;
          GGS_runActionDescriptor extractedValue_44898_run_1 ;
          GGS_multipleBindingDescriptor extractedValue_44903_enabledBinding_2 ;
          enumerator_42933.current_mParameter (HERE).getAssociatedValuesFor_menuItem (extractedValue_44891_title_0, extractedValue_44898_run_1, extractedValue_44903_enabledBinding_2) ;
          GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_45239 ;
          {
          routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (extractedValue_44898_run_1, GGS_bool (true), constinArgument_inPreferences, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 1037)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_preferencesActionMap_42587, var_runBindingGeneration_45239, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1033)) ;
          }
          GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_45575 ;
          {
          routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (extractedValue_44903_enabledBinding_2, GGS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_45575, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1044)) ;
          }
          GGS_string var_s_45622 = GGS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_44891_title_0.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.ggs", 1054)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1054)) ;
          switch (var_runBindingGeneration_45239.enumValue ()) {
          case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
            break ;
          case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
            {
              var_s_45622.plusAssignOperation(GGS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1057)) ;
            }
            break ;
          case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
            {
              GGS_string extractedValue_45814_targetName_0 ;
              GGS_string extractedValue_45826_actionName_1 ;
              GGS_string extractedValue_45838_runTargetName_2 ;
              var_runBindingGeneration_45239.getAssociatedValuesFor_run (extractedValue_45814_targetName_0, extractedValue_45826_actionName_1, extractedValue_45838_runTargetName_2) ;
              var_s_45622.plusAssignOperation(GGS_string (", target: ").add_operation (extractedValue_45814_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)).add_operation (GGS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)).add_operation (extractedValue_45838_runTargetName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)).add_operation (extractedValue_45826_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)).add_operation (GGS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)) ;
            }
            break ;
          }
          switch (var_enabledBindingGeneration_45575.enumValue ()) {
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
            break ;
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
            {
              var_s_45622.plusAssignOperation(GGS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1063)) ;
            }
            break ;
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
            {
              GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_46111_binding_0 ;
              var_enabledBindingGeneration_45575.getAssociatedValuesFor_enabled (extractedValue_46111_binding_0) ;
              var_s_45622.plusAssignOperation(GGS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_46111_binding_0.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1065)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1065)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1065)) ;
            }
            break ;
          }
          var_s_45622.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1067)) ;
          {
          var_parameterList_42669.setter_append (enumerator_42933.current_mParameterName (HERE).readProperty_string (), var_s_45622, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1068)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_enumFunc:
        {
          GGS_lstring extractedValue_46275_enumTypeName_0 ;
          GGS_lstring extractedValue_46289_funcName_1 ;
          enumerator_42933.current_mParameter (HERE).getAssociatedValuesFor_enumFunc (extractedValue_46275_enumTypeName_0, extractedValue_46289_funcName_1) ;
          GGS_classKind var_type_46367 ;
          GGS_propertyMap joker_46373_3 ; // Joker input parameter
          GGS_actionMap joker_46373_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_46373_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_46275_enumTypeName_0, var_type_46367, joker_46373_3, joker_46373_2, joker_46373_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1070)) ;
          GalgasBool test_17 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_17) {
            test_17 = var_type_46367.getter_isAtomic (SOURCE_FILE ("auto-layout-view.ggs", 1071)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1071)).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              GenericArray <FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_46275_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1072)) ;
            }
          }
          if (GalgasBool::boolFalse == test_17) {
            GGS_typeKind var_typeKind_46531 ;
            var_type_46367.method_extractAtomic (var_typeKind_46531, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1074)) ;
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = var_typeKind_46531.getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1075)).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GGS_enumFuncMap var_funcMap_46635 ;
                GGS_string joker_46617_2 ; // Joker input parameter
                GGS_enumConstantMap joker_46617_1 ; // Joker input parameter
                var_typeKind_46531.method_extractEnumType (joker_46617_2, joker_46617_1, var_funcMap_46635, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1076)) ;
                GGS_enumFunAssociationSortedList joker_46685 ; // Joker input parameter
                var_funcMap_46635.method_searchKey (extractedValue_46289_funcName_1, joker_46685, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1077)) ;
              }
            }
            if (GalgasBool::boolFalse == test_19) {
              GenericArray <FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (extractedValue_46275_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1079)) ;
            }
          }
          {
          var_parameterList_42669.setter_append (enumerator_42933.current_mParameterName (HERE).readProperty_string (), extractedValue_46275_enumTypeName_0.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1082)).add_operation (extractedValue_46289_funcName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1082)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1082)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1082)) ;
          }
        }
        break ;
      }
      enumerator_42933.gotoNextObject () ;
      enumerator_42977.gotoNextObject () ;
    }
  }
  GGS_autoLayoutRegularBindingsGenerationList var_regularBindingsGenerationList_47439 ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_47520 ;
  GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_47595 ;
  GGS_string var_inTableViewBindingGeneration_47634 ;
  GGS_autoLayoutViewGraphicControllerBindingGeneration var_ebViewGraphicControllerBindingGeneration_47723 ;
  {
  const GGS_astComputedViewInstruction temp_21 = this ;
  const GGS_astComputedViewInstruction temp_22 = this ;
  const GGS_astComputedViewInstruction temp_23 = this ;
  const GGS_astComputedViewInstruction temp_24 = this ;
  const GGS_astComputedViewInstruction temp_25 = this ;
  const GGS_astComputedViewInstruction temp_26 = this ;
  const GGS_astComputedViewInstruction temp_27 = this ;
  routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_preferencesActionMap_42587, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, temp_21.readProperty_mAutoLayoutViewClassName (), temp_22.readProperty_mTableValueBinding (), temp_23.readProperty_mRunActionDescriptor (), temp_24.readProperty_mEnabledBindingDescriptor (), temp_25.readProperty_mHiddenBindingDescriptor (), temp_26.readProperty_mGraphicController (), temp_27.readProperty_mRegularBindingList (), var_regularBindingsGenerationList_47439, var_multipleBindingGenerationList_47520, var_runBindingGeneration_47595, var_inTableViewBindingGeneration_47634, var_ebViewGraphicControllerBindingGeneration_47723, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1087)) ;
  }
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_48246 ;
  const GGS_astComputedViewInstruction temp_28 = this ;
  extensionMethod_checkViewFunctionCallList (temp_28.readProperty_mFunctionCallList (), var_functionMap_42499, constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_42587, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_48246, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1112)) ;
  GalgasBool test_29 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_29) {
    const GGS_astComputedViewInstruction temp_30 = this ;
    test_29 = GGS_bool (ComparisonKind::notEqual, temp_30.readProperty_mOutletName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_29) {
      {
      const GGS_astComputedViewInstruction temp_31 = this ;
      const GGS_astComputedViewInstruction temp_32 = this ;
      const GGS_astComputedViewInstruction temp_33 = this ;
      ioArgument_ioOutletMap.setter_insertKey (temp_31.readProperty_mOutletName (), temp_32.readProperty_mAutoLayoutViewClassName ().readProperty_string (), temp_33.readProperty_mOutletIsArray (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1131)) ;
      }
    }
  }
  GalgasBool test_34 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_34) {
    const GGS_astComputedViewInstruction temp_35 = this ;
    test_34 = GGS_bool (ComparisonKind::notEqual, temp_35.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_34) {
      {
      const GGS_astComputedViewInstruction temp_36 = this ;
      const GGS_astComputedViewInstruction temp_37 = this ;
      ioArgument_ioConfiguratorMap.setter_insertKey (temp_36.readProperty_mConfiguratorName (), temp_37.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1135)) ;
      }
    }
  }
  const GGS_astComputedViewInstruction temp_38 = this ;
  const GGS_astComputedViewInstruction temp_39 = this ;
  const GGS_astComputedViewInstruction temp_40 = this ;
  const GGS_astComputedViewInstruction temp_41 = this ;
  outArgument_outInstruction = GGS_autoLayoutComputedViewInstructionGeneration::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_38.readProperty_mAutoLayoutViewClassName (), var_parameterList_42669, var_funcCallList_48246, var_regularBindingsGenerationList_47439, var_multipleBindingGenerationList_47520, var_runBindingGeneration_47595, var_inTableViewBindingGeneration_47634, var_ebViewGraphicControllerBindingGeneration_47723, temp_39.readProperty_mConfiguratorName ().readProperty_string (), temp_40.readProperty_mOutletName ().readProperty_string (), temp_41.readProperty_mOutletIsArray (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutBinding???????????????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const GGS_bool constinArgument_inPreferences,
                                                                                                                       const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                                       const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                                                       const GGS_actionMap constinArgument_inPreferencesActionMap,
                                                                                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                                       const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                                                       const GGS_actionMap constinArgument_inActionMap,
                                                                                                                       const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                                                       const GGS_lstring constinArgument_inTypeName,
                                                                                                                       const GGS_tableValueBinding constinArgument_inTableValueBinding,
                                                                                                                       const GGS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                                                                                                       const GGS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                                                                                                       const GGS_multipleBindingDescriptor constinArgument_inHiddenBindingDescriptor,
                                                                                                                       const GGS_graphicController constinArgument_inGraphicController,
                                                                                                                       const GGS_regularBindingList constinArgument_inRegularBindingList,
                                                                                                                       GGS_autoLayoutRegularBindingsGenerationList & outArgument_outRegularBindingsGenerationList,
                                                                                                                       GGS_autoLayoutMultipleBindingGenerationList & outArgument_outMultipleBindingGenerationList,
                                                                                                                       GGS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                                                                                                       GGS_string & outArgument_outTableViewBindingGeneration,
                                                                                                                       GGS_autoLayoutViewGraphicControllerBindingGeneration & outArgument_outEBViewGraphicControllerBindingGeneration,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGeneration.drop () ; // Release 'out' argument
  GGS_autoLayoutRegularBindingsGenerationList temp_0 = GGS_autoLayoutRegularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1178)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GGS_autoLayoutMultipleBindingGenerationList temp_1 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1179)) ;
  outArgument_outMultipleBindingGenerationList = temp_1 ;
  outArgument_outTableViewBindingGeneration = GGS_string::makeEmptyString () ;
  GGS_bool var_handlesRunAction_50653 ;
  GGS_bool var_handlesTableViewBinding_50686 ;
  GGS_bool var_handlesEnabledBinding_50726 ;
  GGS_bool var_handlesHiddenBinding_50764 ;
  GGS_bool var_handleGraphicControllerBinding_50801 ;
  GGS_lstring joker_50634 ; // Joker input parameter
  GGS_bool joker_50837_3 ; // Joker input parameter
  GGS_autoLayoutClassParameterList joker_50837_2 ; // Joker input parameter
  GGS_astAutoLayoutViewFunctionMap joker_50837_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (constinArgument_inTypeName, joker_50634, var_handlesRunAction_50653, var_handlesTableViewBinding_50686, var_handlesEnabledBinding_50726, var_handlesHiddenBinding_50764, var_handleGraphicControllerBinding_50801, joker_50837_3, joker_50837_2, joker_50837_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1181)) ;
  outArgument_outEBViewGraphicControllerBindingGeneration = GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1192)) ;
  switch (constinArgument_inGraphicController.enumValue ()) {
  case GGS_graphicController::Enumeration::invalid:
    break ;
  case GGS_graphicController::Enumeration::enum_none:
    break ;
  case GGS_graphicController::Enumeration::enum_defined:
    {
      GGS_lstring extractedValue_50991_controllerName_0 ;
      GGS_lstring extractedValue_51016_propertyName_1 ;
      constinArgument_inGraphicController.getAssociatedValuesFor_defined (extractedValue_50991_controllerName_0, extractedValue_51016_propertyName_1) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_handleGraphicControllerBinding_50801.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1196)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1197)).add_operation (GGS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1197)), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1197)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GGS_propertyKind var_kind_51284 ;
        GGS_actionMap joker_51298_2 ; // Joker input parameter
        GGS_bool joker_51298_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_50991_controllerName_0, var_kind_51284, joker_51298_2, joker_51298_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1199)) ;
        switch (var_kind_51284.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_51351__0 ;
            GGS_propertyAccessibility extractedValue_51351__1 ;
            var_kind_51284.getAssociatedValuesFor_property (extractedValue_51351__0, extractedValue_51351__1) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_50991_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1206)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_51455__0 ;
            GGS_propertyAccessibility extractedValue_51455__1 ;
            GGS_bool extractedValue_51455__2 ;
            GGS_toManyRelationshipOptionAST extractedValue_51455__3 ;
            var_kind_51284.getAssociatedValuesFor_toMany (extractedValue_51455__0, extractedValue_51455__1, extractedValue_51455__2, extractedValue_51455__3) ;
            GenericArray <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_50991_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1208)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_51558__0 ;
            GGS_propertyAccessibility extractedValue_51558__1 ;
            GGS_bool extractedValue_51558__2 ;
            GGS_toOneOppositeRelationship extractedValue_51558__3 ;
            GGS_bool extractedValue_51558__4 ;
            var_kind_51284.getAssociatedValuesFor_toOne (extractedValue_51558__0, extractedValue_51558__1, extractedValue_51558__2, extractedValue_51558__3, extractedValue_51558__4) ;
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_50991_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1210)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_51670_entityName_0 ;
            GGS_bool extractedValue_51682_graphic_1 ;
            var_kind_51284.getAssociatedValuesFor_arrayController (extractedValue_51670_entityName_0, extractedValue_51682_graphic_1) ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::equal, extractedValue_51016_propertyName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = extractedValue_51682_graphic_1.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1213)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_50991_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_51670_entityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1214)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1214)), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1214)) ;
                  }
                }
              }
            }
            if (GalgasBool::boolFalse == test_7) {
              GGS_propertyMap var_observablePropertyMap_52005 ;
              GGS_classKind joker_51984 ; // Joker input parameter
              GGS_actionMap joker_52040_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_52040_1 ; // Joker input parameter
              constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_51670_entityName_0, joker_51984, var_observablePropertyMap_52005, joker_52040_2, joker_52040_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1217)) ;
              GGS_propertyKind var_propertyKind_52118 ;
              GGS_actionMap joker_52132_2 ; // Joker input parameter
              GGS_bool joker_52132_1 ; // Joker input parameter
              var_observablePropertyMap_52005.method_searchKey (extractedValue_51016_propertyName_1, var_propertyKind_52118, joker_52132_2, joker_52132_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1223)) ;
              switch (var_propertyKind_52118.enumValue ()) {
              case GGS_propertyKind::Enumeration::invalid:
                break ;
              case GGS_propertyKind::Enumeration::enum_property:
                {
                  GGS_typeKind extractedValue_52194__0 ;
                  GGS_propertyAccessibility extractedValue_52194__1 ;
                  var_propertyKind_52118.getAssociatedValuesFor_property (extractedValue_52194__0, extractedValue_52194__1) ;
                  GenericArray <FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (extractedValue_50991_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1226)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_toMany:
                {
                  GGS_lstring extractedValue_52303_kEntityName_0 ;
                  GGS_propertyAccessibility extractedValue_52316__1 ;
                  GGS_bool extractedValue_52319_isGraphic_2 ;
                  GGS_toManyRelationshipOptionAST extractedValue_52330__3 ;
                  var_propertyKind_52118.getAssociatedValuesFor_toMany (extractedValue_52303_kEntityName_0, extractedValue_52316__1, extractedValue_52319_isGraphic_2, extractedValue_52330__3) ;
                  GalgasBool test_11 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_11) {
                    test_11 = extractedValue_52319_isGraphic_2.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1228)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_11) {
                      GenericArray <FixItDescription> fixItArray12 ;
                      inCompiler->emitSemanticError (extractedValue_50991_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_52303_kEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1229)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1229)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1229)) ;
                    }
                  }
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_toOne:
                {
                  GGS_lstring extractedValue_52518__0 ;
                  GGS_propertyAccessibility extractedValue_52518__1 ;
                  GGS_bool extractedValue_52518__2 ;
                  GGS_toOneOppositeRelationship extractedValue_52518__3 ;
                  GGS_bool extractedValue_52518__4 ;
                  var_propertyKind_52118.getAssociatedValuesFor_toOne (extractedValue_52518__0, extractedValue_52518__1, extractedValue_52518__2, extractedValue_52518__3, extractedValue_52518__4) ;
                  GenericArray <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_50991_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1232)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_arrayController:
                {
                  GGS_lstring extractedValue_52637__0 ;
                  GGS_bool extractedValue_52637__1 ;
                  var_propertyKind_52118.getAssociatedValuesFor_arrayController (extractedValue_52637__0, extractedValue_52637__1) ;
                  GenericArray <FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_50991_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1234)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_selectionController:
                {
                  GGS_string extractedValue_52759__0 ;
                  var_propertyKind_52118.getAssociatedValuesFor_selectionController (extractedValue_52759__0) ;
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (extractedValue_50991_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1236)) ;
                }
                break ;
              }
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_52902__0 ;
            var_kind_51284.getAssociatedValuesFor_selectionController (extractedValue_52902__0) ;
            GenericArray <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_50991_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1240)) ;
          }
          break ;
        }
        outArgument_outEBViewGraphicControllerBindingGeneration = GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_binding (extractedValue_50991_controllerName_0.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1242)) ;
      }
    }
    break ;
  }
  switch (constinArgument_inTableValueBinding.enumValue ()) {
  case GGS_tableValueBinding::Enumeration::invalid:
    break ;
  case GGS_tableValueBinding::Enumeration::enum_noTableValueBinding:
    break ;
  case GGS_tableValueBinding::Enumeration::enum_tableValueBinding:
    {
      GGS_lstring extractedValue_53236_controllerName_0 ;
      constinArgument_inTableValueBinding.getAssociatedValuesFor_tableValueBinding (extractedValue_53236_controllerName_0) ;
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = var_handlesTableViewBinding_50686.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1249)).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1250)).add_operation (GGS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1250)), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1250)) ;
        }
      }
      if (GalgasBool::boolFalse == test_17) {
        GalgasBool test_19 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_19) {
          test_19 = constinArgument_inPreferences.boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            GGS_propertyKind var_kind_53512 ;
            GGS_actionMap joker_53526_2 ; // Joker input parameter
            GGS_bool joker_53526_1 ; // Joker input parameter
            constinArgument_inPreferencesPropertyMap.method_searchKey (extractedValue_53236_controllerName_0, var_kind_53512, joker_53526_2, joker_53526_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1252)) ;
            GalgasBool test_20 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_20) {
              test_20 = var_kind_53512.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1257)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1257)).boolEnum () ;
              if (GalgasBool::boolTrue == test_20) {
                GenericArray <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (extractedValue_53236_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1258)) ;
              }
            }
            outArgument_outTableViewBindingGeneration = extractedValue_53236_controllerName_0.readProperty_string () ;
          }
        }
        if (GalgasBool::boolFalse == test_19) {
          GGS_propertyKind var_kind_53829 ;
          GGS_actionMap joker_53843_2 ; // Joker input parameter
          GGS_bool joker_53843_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_53236_controllerName_0, var_kind_53829, joker_53843_2, joker_53843_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1262)) ;
          GalgasBool test_22 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_22) {
            test_22 = var_kind_53829.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1267)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1267)).boolEnum () ;
            if (GalgasBool::boolTrue == test_22) {
              GenericArray <FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (extractedValue_53236_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1268)) ;
            }
          }
          outArgument_outTableViewBindingGeneration = extractedValue_53236_controllerName_0.readProperty_string () ;
        }
      }
    }
    break ;
  }
  {
  routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (constinArgument_inRunActionDescriptor, var_handlesRunAction_50653, constinArgument_inPreferences, constinArgument_inTypeName, constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inPreferencesActionMap, outArgument_outRunBindingGeneration, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1274)) ;
  }
  GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_54633 ;
  {
  routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (constinArgument_inEnabledBindingDescriptor, var_handlesEnabledBinding_50726, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_54633, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1286)) ;
  }
  switch (var_enabledBindingGeneration_54633.enumValue ()) {
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
    {
      GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_54726_binding_0 ;
      var_enabledBindingGeneration_54633.getAssociatedValuesFor_enabled (extractedValue_54726_binding_0) ;
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GGS_string ("enabled"), extractedValue_54726_binding_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1299)) ;
      }
    }
    break ;
  }
  switch (constinArgument_inHiddenBindingDescriptor.enumValue ()) {
  case GGS_multipleBindingDescriptor::Enumeration::invalid:
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_54937_expression_0 ;
      constinArgument_inHiddenBindingDescriptor.getAssociatedValuesFor_binding (extractedValue_54937_expression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_55221 ;
      GGS_typeKind var_type_55260 ;
      GGS_location var_errorLocation_55287 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_54937_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_55221, var_type_55260, var_errorLocation_55287, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1305)) ;
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = var_type_55260.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1315)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1315)).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          GenericArray <FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (var_errorLocation_55287, GGS_string ("expression is not boolean"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1316)) ;
        }
      }
      GalgasBool test_26 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_26) {
        test_26 = var_handlesHiddenBinding_50764.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1318)).boolEnum () ;
        if (GalgasBool::boolTrue == test_26) {
          GenericArray <FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (var_errorLocation_55287, GGS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1319)) ;
        }
      }
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GGS_string ("hidden"), var_hiddenExpression_55221, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1321)) ;
      }
    }
    break ;
  }
  {
  GGS_string temp_28 ;
  const GalgasBool test_29 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_29) {
    temp_28 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_29) {
    temp_28 = GGS_string ("self.") ;
  }
  routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inTypeName, constinArgument_inRegularBindingList, temp_28, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1327)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutEnableBinding??handlesEnabledBinding?prefs????prefsMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (const GGS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                                                                                               const GGS_bool constinArgument_inHandlesEnabledBinding,
                                                                                                               const GGS_bool constinArgument_inPreferences,
                                                                                                               const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                               const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                                               GGS_autolayoutEnabledBindingForGeneration & outArgument_outEnabledBindingGeneration,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnabledBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inEnabledBindingDescriptor.enumValue ()) {
  case GGS_multipleBindingDescriptor::Enumeration::invalid:
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
    {
      outArgument_outEnabledBindingGeneration = GGS_autolayoutEnabledBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1354)) ;
    }
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_56716_expression_0 ;
      constinArgument_inEnabledBindingDescriptor.getAssociatedValuesFor_binding (extractedValue_56716_expression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_57000 ;
      GGS_typeKind var_type_57039 ;
      GGS_location var_errorLocation_57066 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_56716_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_57000, var_type_57039, var_errorLocation_57066, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1356)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = constinArgument_inHandlesEnabledBinding.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1366)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_errorLocation_57066, GGS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1367)) ;
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_type_57039.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1369)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1369)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_57066, GGS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1370)) ;
        }
      }
      outArgument_outEnabledBindingGeneration = GGS_autolayoutEnabledBindingForGeneration::class_func_enabled (var_enableExpression_57000  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1372)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRunBinding??handlesRunAction??????!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (const GGS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                                                                              const GGS_bool constinArgument_inHandlesRunAction,
                                                                                              const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_lstring constinArgument_inTypeName,
                                                                                              const GGS_actionMap constinArgument_inActionMap,
                                                                                              const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                              const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                              const GGS_actionMap constinArgument_inPreferencesActionMap,
                                                                                              GGS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inRunActionDescriptor.enumValue ()) {
  case GGS_runActionDescriptor::Enumeration::invalid:
    break ;
  case GGS_runActionDescriptor::Enumeration::enum_noAction:
    {
      outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1389)) ;
    }
    break ;
  case GGS_runActionDescriptor::Enumeration::enum_action:
    {
      GGS_lstring extractedValue_58259_target_0 ;
      GGS_lstring extractedValue_58276_action_1 ;
      constinArgument_inRunActionDescriptor.getAssociatedValuesFor_action (extractedValue_58259_target_0, extractedValue_58276_action_1) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = constinArgument_inHandlesRunAction.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1391)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1392)).add_operation (GGS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1392)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1392)) ;
          outArgument_outRunBindingGeneration.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_0) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, extractedValue_58259_target_0.readProperty_string ().objectCompare (GGS_string ("self"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            constinArgument_inActionMap.method_searchKey (extractedValue_58276_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)) ;
            outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (GGS_string ("self"), extractedValue_58276_action_1.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1396)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, extractedValue_58259_target_0.readProperty_string ().objectCompare (GGS_string ("prefs"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              constinArgument_inPreferencesActionMap.method_searchKey (extractedValue_58276_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)) ;
              outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (GGS_string ("g").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1404)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1404)).add_operation (GGS_string ("!"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1404)), extractedValue_58276_action_1.readProperty_string (), function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1406))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1403)) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GGS_actionMap var_controllerActionMap_59072 ;
            GGS_propertyKind joker_59044 ; // Joker input parameter
            GGS_bool joker_59101 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_58259_target_0, joker_59044, var_controllerActionMap_59072, joker_59101, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1409)) ;
            var_controllerActionMap_59072.method_searchKey (extractedValue_58276_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1415)) ;
            GGS_string temp_4 ;
            const GalgasBool test_5 = constinArgument_inPreferences.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              temp_4 = GGS_string ("preferences_") ;
            }else if (GalgasBool::boolFalse == test_5) {
              temp_4 = GGS_string::makeEmptyString () ;
            }
            outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (temp_4.add_operation (extractedValue_58259_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1417)), extractedValue_58276_action_1.readProperty_string (), GGS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1419)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1419)).add_operation (extractedValue_58259_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1419))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1416)) ;
          }
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRegularBinding?prefs???????&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (const GGS_bool constinArgument_inPreferences,
                                                                                       const GGS_propertyMap constinArgument_inRootPropertyMap,
                                                                                       const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                       const GGS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                                                       const GGS_lstring constinArgument_inOutletTypeName,
                                                                                       const GGS_regularBindingList constinArgument_inRegularBindingList,
                                                                                       const GGS_string constinArgument_inSelfSwiftName,
                                                                                       GGS_autoLayoutRegularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_regularBindingList enumerator_60006 (constinArgument_inRegularBindingList) ;
  while (enumerator_60006.hasCurrentObject ()) {
    GGS_outletBindingModelList temp_0 = GGS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1440)) ;
    GGS_outletBindingModelList var_boundModelTypeList_60106 = temp_0 ;
    GGS_boundObjectList temp_1 = GGS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1441)) ;
    GGS_boundObjectList var_boundModelListForGeneration_60155 = temp_1 ;
    UpEnumerator_observablePropertyList enumerator_60197 (enumerator_60006.current_mObservablePropertyList (HERE)) ;
    while (enumerator_60197.hasCurrentObject ()) {
      GGS_propertyKind var_kind_60471 ;
      GGS_string var_swiftTypeStringForTransientFunctionArgument_60505 ;
      GGS_string var_protocolTypeName_60578 ;
      GGS_string var_defaultValueAsString_60624 ;
      GGS_propertyMap temp_2 ;
      const GalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        temp_2 = constinArgument_inPreferencesPropertyMap ;
      }else if (GalgasBool::boolFalse == test_3) {
        temp_2 = constinArgument_inBoundModelPropertyMap ;
      }
      extensionMethod_analyzeObservableProperty (enumerator_60197.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, temp_2, var_kind_60471, var_swiftTypeStringForTransientFunctionArgument_60505, var_protocolTypeName_60578, var_defaultValueAsString_60624, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1443)) ;
      switch (var_kind_60471.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_60724__0 ;
          GGS_propertyAccessibility extractedValue_60724__1 ;
          GGS_bool extractedValue_60724__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_60724__3 ;
          var_kind_60471.getAssociatedValuesFor_toMany (extractedValue_60724__0, extractedValue_60724__1, extractedValue_60724__2, extractedValue_60724__3) ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60197.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1455)), GGS_string ("a toMany property cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1455)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_60828__0 ;
          GGS_propertyAccessibility extractedValue_60828__1 ;
          GGS_bool extractedValue_60828__2 ;
          GGS_toOneOppositeRelationship extractedValue_60828__3 ;
          GGS_bool extractedValue_60828__4 ;
          var_kind_60471.getAssociatedValuesFor_toOne (extractedValue_60828__0, extractedValue_60828__1, extractedValue_60828__2, extractedValue_60828__3, extractedValue_60828__4) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60197.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1457)), GGS_string ("a toOne property cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1457)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_60941__0 ;
          GGS_bool extractedValue_60941__1 ;
          var_kind_60471.getAssociatedValuesFor_arrayController (extractedValue_60941__0, extractedValue_60941__1) ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60197.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1459)), GGS_string ("an array controller cannot be bound"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1459)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_61060__0 ;
          var_kind_60471.getAssociatedValuesFor_selectionController (extractedValue_61060__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60197.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1461)), GGS_string ("a selection controller cannot be bound"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1461)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_60155.setter_append (extensionGetter_modelStringForSelf (enumerator_60197.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1463)), var_kind_60471, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1463)) ;
      }
      {
      var_boundModelTypeList_60106.setter_append (var_kind_60471, extensionGetter_location (enumerator_60197.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1464)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1464)) ;
      }
      enumerator_60197.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationModelList temp_8 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1467)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_61423 = temp_8 ;
    GGS_controllerBindingOptionDecoratedList temp_9 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1468)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_61510 = temp_9 ;
    GGS_lstring var_outletTypeName_61560 = constinArgument_inOutletTypeName ;
    GGS_bool var_continues_61602 = GGS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1471)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1471)).isValid ()) {
      uint32_t variant_61623 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1471)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1471)).uintValue () ;
      bool loop_61623 = true ;
      while (loop_61623) {
        loop_61623 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_61560.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_61602 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1471)).isValid () ;
        if (loop_61623) {
          loop_61623 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_61560.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_61602 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1471)).boolValue () ;
        }
        if (loop_61623 && (0 == variant_61623)) {
          loop_61623 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("auto-layout-view.ggs", 1471)) ;
        }
        if (loop_61623) {
          variant_61623 -= 1 ;
          var_continues_61602 = GGS_bool (false) ;
          GGS_lstring var_superOutletClassName_61865 ;
          GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_61900 ;
          constinArgument_inSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().method_searchKey (var_outletTypeName_61560, var_superOutletClassName_61865, var_bindingMap_61900, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1473)) ;
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = var_bindingMap_61900.getter_hasKey (enumerator_60006.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1478)).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              var_bindingMap_61900.method_searchKey (enumerator_60006.current_mBindingName (HERE), var_outletBindingSpecificationModelList_61423, var_controllerBindingOptionDecoratedList_61510, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1479)) ;
            }
          }
          if (GalgasBool::boolFalse == test_10) {
            var_continues_61602 = GGS_bool (true) ;
            var_outletTypeName_61560 = var_superOutletClassName_61865 ;
          }
        }
      }
    }
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = var_continues_61602.boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_60006.current_mBindingName (HERE).readProperty_location (), GGS_string ("this binding is not defined"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1490)) ;
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, var_boundModelTypeList_60106.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1491)).objectCompare (var_outletBindingSpecificationModelList_61423.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1491)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_60006.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_61423.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1493)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1493)).add_operation (GGS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1493)).add_operation (var_boundModelTypeList_60106.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1495)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1494)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1494)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1495)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1492)) ;
        }
      }
      if (GalgasBool::boolFalse == test_13) {
        UpEnumerator_outletBindingSpecificationModelList enumerator_62619 (var_outletBindingSpecificationModelList_61423) ;
        UpEnumerator_outletBindingModelList enumerator_62714 (var_boundModelTypeList_60106) ;
        while (enumerator_62619.hasCurrentObject () && enumerator_62714.hasCurrentObject ()) {
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            GGS_bool test_16 = enumerator_62619.current_mModelShouldBeWritableProperty (HERE) ;
            if (GalgasBool::boolTrue == test_16.boolEnum ()) {
              test_16 = extensionGetter_isTransient (enumerator_62714.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1498)) ;
            }
            test_15 = test_16.boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              GenericArray <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_62714.current_mErrorLocation (HERE), GGS_string ("the model is transient and the binding requires an writable model"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1499)) ;
            }
          }
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            GGS_bool test_19 = enumerator_62619.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1501)) ;
            if (GalgasBool::boolTrue == test_19.boolEnum ()) {
              test_19 = extensionGetter_isEnumType (enumerator_62714.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1501)) ;
            }
            test_18 = test_19.boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
            }
          }
          if (GalgasBool::boolFalse == test_18) {
            GalgasBool test_20 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_20) {
              test_20 = GGS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_62619.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1502)).objectCompare (extensionGetter_swiftTypeName (enumerator_62714.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1502)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_20) {
                GenericArray <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_62714.current_mErrorLocation (HERE), GGS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_62619.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1503)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1503)), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1503)) ;
              }
            }
          }
          enumerator_62619.gotoNextObject () ;
          enumerator_62714.gotoNextObject () ;
        }
      }
    }
    GGS_string var_bindingOptionString_63286 = GGS_string::makeEmptyString () ;
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = GGS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_61510.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1509)).objectCompare (enumerator_60006.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1509)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        GGS_string var_s_63412 ;
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          test_23 = GGS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_61510.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1511)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            var_s_63412 = GGS_string ("this binding has no option") ;
          }
        }
        if (GalgasBool::boolFalse == test_23) {
          var_s_63412 = GGS_string ("this binding requires the following options:") ;
          UpEnumerator_controllerBindingOptionDecoratedList enumerator_63614 (var_controllerBindingOptionDecoratedList_61510) ;
          while (enumerator_63614.hasCurrentObject ()) {
            var_s_63412.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_63614.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1516)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1516)).add_operation (extensionGetter_swiftTypeName (enumerator_63614.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1516)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1516)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1516)) ;
            enumerator_63614.gotoNextObject () ;
          }
        }
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_60006.current_mBindingName (HERE).readProperty_location (), var_s_63412, fixItArray24  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1519)) ;
      }
    }
    if (GalgasBool::boolFalse == test_22) {
      UpEnumerator_controllerBindingOptionDecoratedList enumerator_63839 (var_controllerBindingOptionDecoratedList_61510) ;
      UpEnumerator_bindingOptionList enumerator_63926 (enumerator_60006.current_mBindingOptionList (HERE)) ;
      while (enumerator_63839.hasCurrentObject () && enumerator_63926.hasCurrentObject ()) {
        GalgasBool test_25 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_25) {
          test_25 = GGS_bool (ComparisonKind::notEqual, enumerator_63839.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_63926.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_25) {
            GenericArray <FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_63926.current_mOptionName (HERE).readProperty_location (), GGS_string ("the option name should be '").add_operation (enumerator_63839.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1523)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1523)), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1523)) ;
          }
        }
        GGS_string var_optionValueAsString_64313 ;
        GGS_typeKindList temp_27 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1526)) ;
        temp_27.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (enumerator_63839.current_mOptionType (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1526)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_63926.current_mOptionValue (HERE).ptr (), temp_27, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_64313, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1525)) ;
        var_bindingOptionString_63286.plusAssignOperation(GGS_string (", ").add_operation (enumerator_63839.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1530)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1530)).add_operation (var_optionValueAsString_64313, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1530)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1530)) ;
        enumerator_63839.gotoNextObject () ;
        enumerator_63926.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (enumerator_60006.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_60155, var_bindingOptionString_63286, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1534)) ;
    }
    enumerator_60006.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astHStackViewInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astHStackViewInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GGS_bool constinArgument_inPreferences,
                                                                        const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                        const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                        const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                        const GGS_actionMap constinArgument_inActionMap,
                                                                        const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                        const GGS_classMap constinArgument_inClassMap,
                                                                        GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                        GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                        GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                        GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_preferencesActionMap_65754 ;
  GGS_classKind joker_65744_2 ; // Joker input parameter
  GGS_propertyMap joker_65744_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_65776 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::class_func_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1558)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 1558)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1558)), joker_65744_2, joker_65744_1, var_preferencesActionMap_65754, joker_65776, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1558)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1559)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_65827 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_66362 ;
  const GGS_astHStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_65754, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_66362, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1560)) ;
  GGS_autoLayoutMultipleBindingGenerationList temp_2 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1577)) ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_66426 = temp_2 ;
  const GGS_astHStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GGS_optionalHiddenBinding::Enumeration::invalid:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_noBinding:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_66534_hiddenBindingExpression_0 ;
      temp_3.readProperty_mOptionalHiddenBinding ().getAssociatedValuesFor_binding (extractedValue_66534_hiddenBindingExpression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_66844 ;
      GGS_typeKind var_type_66883 ;
      GGS_location var_errorLocation_66910 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_66534_hiddenBindingExpression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_66844, var_type_66883, var_errorLocation_66910, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1581)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_type_66883.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1591)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1591)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_66910, GGS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1592)) ;
        }
      }
      {
      var_multipleBindingGenerationList_66426.setter_append (GGS_string ("hidden"), var_hiddenExpression_66844, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1594)) ;
      }
    }
    break ;
  }
  const GGS_astHStackViewInstructionDeclaration temp_6 = this ;
  UpEnumerator_astViewInstructionList enumerator_67131 (temp_6.readProperty_mInstructionList ()) ;
  while (enumerator_67131.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_67558 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_67131.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_67558, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1600)) ;
    {
    var_instructionList_65827.setter_append (var_generatedInstruction_67558, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1615)) ;
    }
    enumerator_67131.gotoNextObject () ;
  }
  const GGS_astHStackViewInstructionDeclaration temp_7 = this ;
  outArgument_outInstruction = GGS_hStackViewInstructionGeneration::init_21__21__21__21_ (var_funcCallList_66362, var_instructionList_65827, var_multipleBindingGenerationList_66426, temp_7.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astVStackViewInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astVStackViewInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GGS_bool constinArgument_inPreferences,
                                                                        const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                        const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                        const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                        const GGS_actionMap constinArgument_inActionMap,
                                                                        const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                        const GGS_classMap constinArgument_inClassMap,
                                                                        GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                        GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                        GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                        GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_preferencesActionMap_68939 ;
  GGS_classKind joker_68929_2 ; // Joker input parameter
  GGS_propertyMap joker_68929_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_68961 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::class_func_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1641)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 1641)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1641)), joker_68929_2, joker_68929_1, var_preferencesActionMap_68939, joker_68961, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1641)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1642)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_69012 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_69547 ;
  const GGS_astVStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_68939, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_69547, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1643)) ;
  GGS_autoLayoutMultipleBindingGenerationList temp_2 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1660)) ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_69611 = temp_2 ;
  const GGS_astVStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GGS_optionalHiddenBinding::Enumeration::invalid:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_noBinding:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_69719_hiddenBindingExpression_0 ;
      temp_3.readProperty_mOptionalHiddenBinding ().getAssociatedValuesFor_binding (extractedValue_69719_hiddenBindingExpression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_70029 ;
      GGS_typeKind var_type_70068 ;
      GGS_location var_errorLocation_70095 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_69719_hiddenBindingExpression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_70029, var_type_70068, var_errorLocation_70095, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1664)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_type_70068.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1674)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1674)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_70095, GGS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1675)) ;
        }
      }
      {
      var_multipleBindingGenerationList_69611.setter_append (GGS_string ("hidden"), var_hiddenExpression_70029, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1677)) ;
      }
    }
    break ;
  }
  const GGS_astVStackViewInstructionDeclaration temp_6 = this ;
  UpEnumerator_astViewInstructionList enumerator_70296 (temp_6.readProperty_mInstructionList ()) ;
  while (enumerator_70296.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_70724 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_70296.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_70724, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1680)) ;
    {
    var_instructionList_69012.setter_append (var_generatedInstruction_70724, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1695)) ;
    }
    enumerator_70296.gotoNextObject () ;
  }
  const GGS_astVStackViewInstructionDeclaration temp_7 = this ;
  const GGS_astVStackViewInstructionDeclaration temp_8 = this ;
  const GGS_astVStackViewInstructionDeclaration temp_9 = this ;
  outArgument_outInstruction = GGS_vStackViewInstructionGeneration::init_21__21__21__21__21__21_ (temp_7.readProperty_mHasVerticalScroller (), temp_8.readProperty_mConfiguratorName (), var_funcCallList_69547, var_instructionList_69012, var_multipleBindingGenerationList_69611, temp_9.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSeparatorInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutSeparatorInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1787)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1787)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.VerticalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1787)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1789)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1789)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.HorizontalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1789)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSeparatorInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1796)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1796)).add_operation (GGS_string (".appendSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1796)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutGutterInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutGutterInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                       const GGS_string constinArgument_inName,
                                                                                       const GGS_string constinArgument_inIndentation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutGutterInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1811)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1811)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.GutterSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1811)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1813)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1813)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.GutterSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1813)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutGutterInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutGutterInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                             const GGS_string constinArgument_inReceiverViewName,
                                                                                             const GGS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1820)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1820)).add_operation (GGS_string (".appendGutter ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1820)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedHorizontalViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedHorizontalViewGeneration::getter_generateViewBuilder (const GGS_bool constinArgument_inPreferences,
                                                                              const GGS_string constinArgument_inViewName,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1931)).add_operation (GGS_string (" () -> AutoLayoutHorizontalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1931)) ;
  result_result.plusAssignOperation(GGS_string ("    let hStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1932)) ;
  const GGS_computedHorizontalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GGS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)) ;
  const GGS_computedHorizontalViewGeneration temp_1 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_81222 (temp_1.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_81222.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("    let ").add_operation (enumerator_81222.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1935)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1935)).add_operation (enumerator_81222.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1935)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1935)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1935)) ;
    enumerator_81222.gotoNextObject () ;
  }
  const GGS_computedHorizontalViewGeneration temp_2 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_81347 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_81347.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_81347.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, GGS_string ("hStackView"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1938)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1938)) ;
    enumerator_81347.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string ("    return hStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1940)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1941)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedVerticalViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedVerticalViewGeneration::getter_generateViewBuilder (const GGS_bool constinArgument_inPreferences,
                                                                            const GGS_string constinArgument_inViewName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1948)).add_operation (GGS_string (" () -> AutoLayoutVerticalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1948)) ;
  result_result.plusAssignOperation(GGS_string ("    let vStackView = "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1949)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_computedVerticalViewGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1951)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1953)) ;
  }
  result_result.plusAssignOperation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1955)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_computedVerticalViewGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_computedVerticalViewGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.configure_").add_operation (temp_4.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1957)).add_operation (GGS_string (" (vStackView)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1957)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1957)) ;
    }
  }
  const GGS_computedVerticalViewGeneration temp_5 = this ;
  extensionMethod_generate (temp_5.readProperty_mFuncCallList (), GGS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1959)) ;
  const GGS_computedVerticalViewGeneration temp_6 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_82380 (temp_6.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_82380.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("    let ").add_operation (enumerator_82380.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1961)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1961)).add_operation (enumerator_82380.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1961)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1961)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1961)) ;
    enumerator_82380.gotoNextObject () ;
  }
  const GGS_computedVerticalViewGeneration temp_7 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_82505 (temp_7.readProperty_mInstructionList ()) ;
  while (enumerator_82505.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_82505.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, GGS_string ("vStackView"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1964)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1964)) ;
    enumerator_82505.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string ("    return vStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1966)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1967)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSpaceViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1976)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1976)).add_operation (GGS_string (" = AutoLayoutFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1976)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSpaceViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1985)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1985)).add_operation (GGS_string (".appendFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1985)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDividerInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutDividerInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                        const GGS_string constinArgument_inName,
                                                                                        const GGS_string constinArgument_inIndentation,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutDividerInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1995)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1995)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.VerticalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1995)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1997)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1997)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.HorizontalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1997)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDividerInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutDividerInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                              const GGS_string constinArgument_inReceiverViewName,
                                                                                              const GGS_string constinArgument_inIndentation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2004)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2004)).add_operation (GGS_string (".appendDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2004)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutLocalViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2013)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2013)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2013)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2013)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2013)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutLocalViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2019)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2019)).add_operation (GGS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2019)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2019)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2019)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutComputedViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_string constinArgument_inName,
                                                                                             const GGS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2028)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2028)).add_operation (GGS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2028)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2028)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2028)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_86090 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_86090.hasCurrentObject ()) {
    result_result.plusAssignOperation(enumerator_86090.current (HERE).readProperty_mParameterName ().add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2031)).add_operation (enumerator_86090.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2031)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2031)) ;
    enumerator_86090.gotoNextObject () ;
    if (enumerator_86090.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2033)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2035)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2036)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutRegularBindingsGenerationList enumerator_86334 (temp_3.readProperty_mRegularBindingsGenerationList ()) ;
  while (enumerator_86334.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2038)).add_operation (enumerator_86334.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2038)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2038)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2038)) ;
    UpEnumerator_boundObjectList enumerator_86484 (enumerator_86334.current_mBoundObjectList (HERE)) ;
    while (enumerator_86484.hasCurrentObject ()) {
      result_result.plusAssignOperation(enumerator_86484.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2040)) ;
      enumerator_86484.gotoNextObject () ;
      if (enumerator_86484.hasCurrentObject ()) {
        result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2041)) ;
      }
    }
    result_result.plusAssignOperation(enumerator_86334.current_mBindingOptionsString (HERE).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2043)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2043)) ;
    enumerator_86334.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_86645 (temp_4.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_86645.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2046)).add_operation (enumerator_86645.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2046)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2046)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_86645.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2046)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2046)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2046)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2046)) ;
    enumerator_86645.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
    {
      GGS_string extractedValue_86862_targetName_0 ;
      GGS_string extractedValue_86874_actionName_1 ;
      GGS_string extractedValue_86886_targetTypeName_2 ;
      temp_5.readProperty_mRunBindingGeneration ().getAssociatedValuesFor_run (extractedValue_86862_targetName_0, extractedValue_86874_actionName_1, extractedValue_86886_targetTypeName_2) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2051)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2051)) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2052)).add_operation (extractedValue_86862_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2052)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2052)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2052)) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2053)).add_operation (extractedValue_86886_targetTypeName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2053)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2053)).add_operation (extractedValue_86874_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2053)).add_operation (GGS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2053)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2053)) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2054)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2054)) ;
    }
    break ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_6 = this ;
  switch (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().enumValue ()) {
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::invalid:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_none:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_binding:
    {
      GGS_string extractedValue_87255_controllerName_0 ;
      temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().getAssociatedValuesFor_binding (extractedValue_87255_controllerName_0) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2059)).add_operation (extractedValue_87255_controllerName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2059)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2059)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2059)) ;
    }
    break ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mTableViewBindingGeneration ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_string temp_9 ;
      const GalgasBool test_10 = constinArgument_inPreferences.boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("preferences_") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string ("self.") ;
      }
      GGS_string var_prefix_87427 = temp_9 ;
      const GGS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (var_prefix_87427, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2063)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2063)).add_operation (GGS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2063)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2063)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2063)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2063)) ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_13 = this ;
    test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOutletName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_15 = this ;
        test_14 = temp_15.readProperty_mOutletIsArray ().boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          const GGS_autoLayoutComputedViewInstructionGeneration temp_16 = this ;
          result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2067)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2067)).add_operation (GGS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2067)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2067)).add_operation (GGS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2067)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2067)) ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2069)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2069)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2069)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2069)).add_operation (GGS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2069)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2069)) ;
      }
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2073)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2073)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2073)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2073)).add_operation (GGS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2073)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2073)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutComputedViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                                   const GGS_string constinArgument_inReceiverViewName,
                                                                                                   const GGS_string constinArgument_inIndentation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2082)) ;
  GGS_string var_indentation_88498 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2083)) ;
  GGS_string var_name_88539 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2084)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result.plusAssignOperation(var_indentation_88498.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2085)).add_operation (var_name_88539, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2085)).add_operation (GGS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2085)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2085)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2085)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2085)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_88703 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_88703.hasCurrentObject ()) {
    result_result.plusAssignOperation(enumerator_88703.current (HERE).readProperty_mParameterName ().add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2088)).add_operation (enumerator_88703.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2088)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2088)) ;
    enumerator_88703.gotoNextObject () ;
    if (enumerator_88703.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2090)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2092)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), var_indentation_88498, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2093)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutRegularBindingsGenerationList enumerator_88945 (temp_3.readProperty_mRegularBindingsGenerationList ()) ;
  while (enumerator_88945.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_88498.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2095)).add_operation (enumerator_88945.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2095)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2095)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2095)) ;
    UpEnumerator_boundObjectList enumerator_89093 (enumerator_88945.current_mBoundObjectList (HERE)) ;
    while (enumerator_89093.hasCurrentObject ()) {
      result_result.plusAssignOperation(enumerator_89093.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2097)) ;
      enumerator_89093.gotoNextObject () ;
      if (enumerator_89093.hasCurrentObject ()) {
        result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2098)) ;
      }
    }
    result_result.plusAssignOperation(enumerator_88945.current_mBindingOptionsString (HERE).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2100)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2100)) ;
    enumerator_88945.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_89254 (temp_4.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_89254.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_88498.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2103)).add_operation (enumerator_89254.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2103)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2103)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_89254.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2103)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2103)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2103)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2103)) ;
    enumerator_89254.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
    {
      GGS_string extractedValue_89469_targetName_0 ;
      GGS_string extractedValue_89481_actionName_1 ;
      GGS_string extractedValue_89493_targetTypeName_2 ;
      temp_5.readProperty_mRunBindingGeneration ().getAssociatedValuesFor_run (extractedValue_89469_targetName_0, extractedValue_89481_actionName_1, extractedValue_89493_targetTypeName_2) ;
      result_result.plusAssignOperation(var_indentation_88498.add_operation (GGS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2108)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2108)) ;
      result_result.plusAssignOperation(var_indentation_88498.add_operation (GGS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2109)).add_operation (extractedValue_89469_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2109)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2109)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2109)) ;
      result_result.plusAssignOperation(var_indentation_88498.add_operation (GGS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2110)).add_operation (extractedValue_89493_targetTypeName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2110)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2110)).add_operation (extractedValue_89481_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2110)).add_operation (GGS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2110)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2110)) ;
      result_result.plusAssignOperation(var_indentation_88498.add_operation (GGS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2111)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2111)) ;
    }
    break ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_6 = this ;
  switch (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().enumValue ()) {
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::invalid:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_none:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_binding:
    {
      GGS_string extractedValue_89854_controllerName_0 ;
      temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().getAssociatedValuesFor_binding (extractedValue_89854_controllerName_0) ;
      result_result.plusAssignOperation(var_indentation_88498.add_operation (GGS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2116)).add_operation (extractedValue_89854_controllerName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2116)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2116)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2116)) ;
    }
    break ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mTableViewBindingGeneration ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_string temp_9 ;
      const GalgasBool test_10 = constinArgument_inPreferences.boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("preferences_") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string ("self.") ;
      }
      GGS_string var_prefix_90024 = temp_9 ;
      const GGS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssignOperation(var_indentation_88498.add_operation (var_prefix_90024, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2120)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2120)).add_operation (GGS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2120)).add_operation (var_name_88539, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2120)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2120)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2120)) ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_13 = this ;
    test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOutletName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_15 = this ;
        test_14 = temp_15.readProperty_mOutletIsArray ().boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          const GGS_autoLayoutComputedViewInstructionGeneration temp_16 = this ;
          result_result.plusAssignOperation(var_indentation_88498.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2124)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2124)).add_operation (GGS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2124)).add_operation (var_name_88539, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2124)).add_operation (GGS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2124)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2124)) ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssignOperation(var_indentation_88498.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2126)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2126)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2126)).add_operation (var_name_88539, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2126)).add_operation (GGS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2126)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2126)) ;
      }
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssignOperation(var_indentation_88498.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2130)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2130)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2130)).add_operation (var_name_88539, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2130)).add_operation (GGS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2130)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2130)) ;
    }
  }
  result_result.plusAssignOperation(var_indentation_88498.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2132)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2132)).add_operation (GGS_string (" .appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2132)).add_operation (var_name_88539, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2132)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2132)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2132)) ;
  result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hStackViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_hStackViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                 const GGS_string constinArgument_inName,
                                                                                 const GGS_string constinArgument_inIndentation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2142)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2142)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2142)) ;
  const GGS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2143)) ;
  const GGS_hStackViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_91263 (temp_1.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_91263.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2145)).add_operation (enumerator_91263.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2145)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2145)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_91263.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2145)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2145)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2145)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2145)) ;
    enumerator_91263.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_2 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_91435 (temp_2.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_91435.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)).add_operation (enumerator_91435.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)).add_operation (enumerator_91435.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)) ;
    enumerator_91435.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_91572 (temp_3.readProperty_mInstructionList ()) ;
  while (enumerator_91572.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_91572.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, constinArgument_inName, constinArgument_inIndentation, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2151)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2151)) ;
    enumerator_91572.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hStackViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_hStackViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                       const GGS_string constinArgument_inReceiverViewName,
                                                                                       const GGS_string constinArgument_inIndentation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2160)) ;
  GGS_string var_indentation_92172 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2161)) ;
  GGS_string var_name_92213 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2162)) ;
  result_result.plusAssignOperation(var_indentation_92172.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2163)).add_operation (var_name_92213, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2163)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2163)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2163)) ;
  const GGS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), var_indentation_92172, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2164)) ;
  const GGS_hStackViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_92405 (temp_1.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_92405.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_92172.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)).add_operation (enumerator_92405.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_92405.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)) ;
    enumerator_92405.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_2 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_92575 (temp_2.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_92575.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_92172.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)).add_operation (enumerator_92575.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)).add_operation (enumerator_92575.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)) ;
    enumerator_92575.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_92710 (temp_3.readProperty_mInstructionList ()) ;
  while (enumerator_92710.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_92710.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_92213, var_indentation_92172, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2172)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2172)) ;
    enumerator_92710.gotoNextObject () ;
  }
  result_result.plusAssignOperation(var_indentation_92172.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2174)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2174)).add_operation (GGS_string (" .appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2174)).add_operation (var_name_92213, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2174)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2174)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2174)) ;
  result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2175)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2175)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vStackViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_vStackViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                 const GGS_string constinArgument_inName,
                                                                                 const GGS_string constinArgument_inIndentation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2184)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2184)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2184)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_vStackViewInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2186)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2188)) ;
  }
  result_result.plusAssignOperation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2190)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_vStackViewInstructionGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_vStackViewInstructionGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.configure_").add_operation (temp_4.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2192)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2192)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2192)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2192)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2192)) ;
    }
  }
  const GGS_vStackViewInstructionGeneration temp_5 = this ;
  extensionMethod_generate (temp_5.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2194)) ;
  const GGS_vStackViewInstructionGeneration temp_6 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_93774 (temp_6.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_93774.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2196)).add_operation (enumerator_93774.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2196)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2196)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_93774.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2196)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2196)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2196)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2196)) ;
    enumerator_93774.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_7 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_93946 (temp_7.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_93946.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)).add_operation (enumerator_93946.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)).add_operation (enumerator_93946.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)) ;
    enumerator_93946.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_8 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_94083 (temp_8.readProperty_mInstructionList ()) ;
  while (enumerator_94083.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_94083.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, constinArgument_inName, constinArgument_inIndentation, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2202)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2202)) ;
    enumerator_94083.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vStackViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_vStackViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                       const GGS_string constinArgument_inReceiverViewName,
                                                                                       const GGS_string constinArgument_inIndentation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2211)) ;
  GGS_string var_indentation_94683 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2212)) ;
  GGS_string var_name_94724 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2213)) ;
  result_result.plusAssignOperation(var_indentation_94683.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2214)).add_operation (var_name_94724, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2214)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2214)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2214)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_vStackViewInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2216)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2218)) ;
  }
  result_result.plusAssignOperation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2220)) ;
  const GGS_vStackViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFuncCallList (), var_indentation_94683, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2221)) ;
  const GGS_vStackViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_95052 (temp_3.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_95052.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_94683.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2223)).add_operation (enumerator_95052.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2223)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2223)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_95052.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2223)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2223)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2223)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2223)) ;
    enumerator_95052.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_4 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_95222 (temp_4.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_95222.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_94683.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)).add_operation (enumerator_95222.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)).add_operation (enumerator_95222.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)) ;
    enumerator_95222.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_5 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_95357 (temp_5.readProperty_mInstructionList ()) ;
  while (enumerator_95357.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_95357.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_94724, var_indentation_94683, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2229)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2229)) ;
    enumerator_95357.gotoNextObject () ;
  }
  result_result.plusAssignOperation(var_indentation_94683.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2231)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2231)).add_operation (GGS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2231)).add_operation (var_name_94724, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2231)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2231)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2231)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_vStackViewInstructionGeneration temp_7 = this ;
    test_6 = GGS_bool (ComparisonKind::notEqual, temp_7.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_vStackViewInstructionGeneration temp_8 = this ;
      result_result.plusAssignOperation(var_indentation_94683.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2233)).add_operation (temp_8.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2233)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2233)).add_operation (var_name_94724, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2233)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2233)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2233)) ;
    }
  }
  result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2235)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2235)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_enumerationDeclarationAST temp_0 = this ;
  const GGS_enumerationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 13)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_enumerationDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_enumerationDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumerationDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & ioArgument_ioGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantMap var_enumConstantMap_4270 = GGS_enumConstantMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumerationDeclarationAST temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4298 (temp_0.readProperty_mEnumConstantNameList ()) ;
  while (enumerator_4298.hasCurrentObject ()) {
    {
    var_enumConstantMap_4270.setter_insertKey (enumerator_4298.current_mValue (HERE), var_enumConstantMap_4270.getter_count (SOURCE_FILE ("enumeration.ggs", 124)), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 124)) ;
    }
    enumerator_4298.gotoNextObject () ;
  }
  GGS_enumFuncMap var_enumFuncMap_4419 = GGS_enumFuncMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_enumerationFunctionListAST enumerator_4467 (ioArgument_ioSemanticContext.readProperty_mEnumerationFunctionListAST ()) ;
  while (enumerator_4467.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_enumerationDeclarationAST temp_2 = this ;
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_4467.current_mEnumName (HERE).readProperty_string ().objectCompare (temp_2.readProperty_mClassName ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 129)) ;
        GGS_stringset var_definedConstantNameSet_4615 = temp_3 ;
        GGS_enumFunAssociationSortedList temp_4 = GGS_enumFunAssociationSortedList::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 130)) ;
        GGS_enumFunAssociationSortedList var_associationSortedList_4683 = temp_4 ;
        UpEnumerator__32_lstringlist enumerator_4735 (enumerator_4467.current_mAssociationList (HERE)) ;
        while (enumerator_4735.hasCurrentObject ()) {
          GGS_uint var_idx_4829 ;
          var_enumConstantMap_4270.method_searchKey (enumerator_4735.current_mValue_30_ (HERE), var_idx_4829, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 132)) ;
          {
          var_associationSortedList_4683.setter_insert (var_idx_4829, enumerator_4735.current_mValue_31_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 133)) ;
          }
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_definedConstantNameSet_4615.getter_hasKey (enumerator_4735.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.ggs", 134)).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_4735.current_mValue_30_ (HERE).readProperty_location (), GGS_string ("Duplicated constant"), fixItArray6  COMMA_SOURCE_FILE ("enumeration.ggs", 135)) ;
            }
          }
          {
          var_definedConstantNameSet_4615.setter_insert (enumerator_4735.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 137)) ;
          }
          enumerator_4735.gotoNextObject () ;
        }
        const GGS_enumerationDeclarationAST temp_7 = this ;
        UpEnumerator_lstringlist enumerator_5106 (temp_7.readProperty_mEnumConstantNameList ()) ;
        while (enumerator_5106.hasCurrentObject ()) {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_definedConstantNameSet_4615.getter_hasKey (enumerator_5106.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.ggs", 140)).operator_not (SOURCE_FILE ("enumeration.ggs", 140)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_4467.current_mFunctionName (HERE).readProperty_location (), GGS_string ("No association for '").add_operation (enumerator_5106.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 141)).add_operation (GGS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 141)), fixItArray9  COMMA_SOURCE_FILE ("enumeration.ggs", 141)) ;
            }
          }
          enumerator_5106.gotoNextObject () ;
        }
        {
        var_enumFuncMap_4419.setter_insertKey (enumerator_4467.current_mFunctionName (HERE), var_associationSortedList_4683, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 144)) ;
        }
      }
    }
    enumerator_4467.gotoNextObject () ;
  }
  {
  const GGS_enumerationDeclarationAST temp_10 = this ;
  const GGS_enumerationDeclarationAST temp_11 = this ;
  GGS_propertyGenerationList temp_12 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 152)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_10.readProperty_mClassName (), GGS_classKind::class_func_atomic (GGS_typeKind::class_func_enumType (temp_11.readProperty_mClassName ().readProperty_string (), var_enumConstantMap_4270, var_enumFuncMap_4419  COMMA_SOURCE_FILE ("enumeration.ggs", 149))  COMMA_SOURCE_FILE ("enumeration.ggs", 149)), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_actionMap::init (inCompiler COMMA_HERE), temp_12, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 147)) ;
  }
  {
  const GGS_enumerationDeclarationAST temp_13 = this ;
  const GGS_enumerationDeclarationAST temp_14 = this ;
  const GGS_enumerationDeclarationAST temp_15 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_enumForGeneration::init_21__21__21__21_ (temp_13.readProperty_mClassName ().readProperty_string (), temp_14.readProperty_mEnumConstantNameList (), var_enumFuncMap_4419, temp_15.readProperty_mCaseIterable (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 155)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_enumGenerationTemplate_3,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_enumGenerationTemplate_1,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_enumGenerationTemplate_2,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_enumGenerationTemplate,
  & gWrapperDirectory_1_enumGenerationTemplate,
  & gWrapperDirectory_2_enumGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  3,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (Compiler * /* inCompiler */,
                                                                             const GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                             const GGS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                             const GGS_bool & in_CASE_5F_ITERABLE
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport Foundation\n\n//--------------------------------------------------------------------------------------------------\n\nenum ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" : Int, Sendable") ;
  const GalgasBool test_0 = in_CASE_5F_ITERABLE.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (", CaseIterable") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n") ;
  GGS_uint index_513_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    UpEnumerator_lstringlist enumerator_513 (in_CONSTANT_5F_ORDERED_5F_LIST) ;
    while (enumerator_513.hasCurrentObject ()) {
      result.appendString ("  case ") ;
      result.appendString (enumerator_513.current_mValue (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (index_513_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 12)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_513.gotoNextObject () ;
      index_513_idx.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumEBExtensionGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumEBExtensionGenerationInSwift (Compiler * inCompiler,
                                                                                        const GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                        const GGS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                                        const GGS_enumFuncMap & in_FUNCTION_5F_MAP
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" : EBEnumPropertyProtocol, Hashable {\n\n") ;
  GGS_uint index_500_ (0) ;
  if (in_FUNCTION_5F_MAP.isValid ()) {
    UpEnumerator_enumFuncMap enumerator_500 (in_FUNCTION_5F_MAP) ;
    while (enumerator_500.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Function ") ;
      result.appendString (enumerator_500.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func ") ;
      result.appendString (enumerator_500.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" () -> [String] {\n    return [") ;
      GGS_uint index_872_ (0) ;
      if (enumerator_500.current_mAssociationSortedList (HERE).isValid ()) {
        UpEnumerator_enumFunAssociationSortedList enumerator_872 (enumerator_500.current_mAssociationSortedList (HERE)) ;
        while (enumerator_872.hasCurrentObject ()) {
          result.appendString (enumerator_872.current_mAssociatedString (HERE).getter_utf_38_Representation (SOURCE_FILE ("enum.ebExtension.swift.galgasTemplate", 19)).stringValue ()) ;
          enumerator_872.gotoNextObject () ;
          if (enumerator_872.hasCurrentObject ()) {
            result.appendString (", ") ;
          }
          index_872_.increment () ;
        }
      }
      result.appendString ("]\n  }\n\n") ;
      enumerator_500.gotoNextObject () ;
      index_500_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Enum generic bindings utility functions\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func buildfromRawValue (rawValue : Int) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? {\n    if let v = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue:rawValue) {\n      return v\n    }else{\n      return nil\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n /* func enumfromRawValue (rawValue : Int) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n    var result = self\n    let v : ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue:rawValue) ;\n    if let unwrappedV = v {\n      result = unwrappedV\n    }\n    return result\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  EBStoredPropertyProtocol\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func ebHashValue () -> UInt32 {\n    return UInt32 (self.rawValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func convertToNSObject () -> NSObject {\n    return NSNumber (value: self.rawValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func convertFromNSObject (object : NSObject) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n    var result = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_CONSTANT_5F_ORDERED_5F_LIST.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("enum.ebExtension.swift.galgasTemplate", 66)).readProperty_string ().stringValue ()) ;
  result.appendString ("\n    if let number = object as\? NSNumber, let v = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue: number.intValue) {\n      result = v\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func unarchiveFromDataRange (_ inData : Data, _ inRange : NSRange) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? {\n    if let rawValue = inData.base62EncodedInt (range: inRange), let enumValue = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue: rawValue) {\n      return enumValue\n    }else{\n      return nil\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func appendPropertyValueTo (_ ioData : inout Data) {\n    ioData.append (base62Encoded: self.rawValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\ntypealias EBReadWriteProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("  = EBEnumReadWriteProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBStoredProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("     = EBEnumStoredProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBStandAloneProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" = EBEnumStandAloneProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBComputedProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("   = EBEnumGenericComputedProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBPreferenceProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" = EBEnumPreferenceProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumForGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_enumForGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                           const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                           GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                           GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumForGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_enumForGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                           const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                           const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                           GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_enumForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mEnumConstantList ().getter_count (SOURCE_FILE ("enumeration.ggs", 208)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_enumForGeneration temp_2 = this ;
      const GGS_enumForGeneration temp_3 = this ;
      const GGS_enumForGeneration temp_4 = this ;
      GGS_string var_sA_7437 = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (inCompiler, temp_2.readProperty_mEnumName (), temp_3.readProperty_mEnumConstantList (), temp_4.readProperty_mCaseIterable () COMMA_SOURCE_FILE ("enumeration.ggs", 209))) ;
      const GGS_enumForGeneration temp_5 = this ;
      GGS_string var_fileNameA_7592 = GGS_string ("enum-").add_operation (temp_5.readProperty_mEnumName (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 214)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 214)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileNameA_7592, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 215)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileNameA_7592, var_sA_7437, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 216)) ;
      }
      const GGS_enumForGeneration temp_6 = this ;
      const GGS_enumForGeneration temp_7 = this ;
      const GGS_enumForGeneration temp_8 = this ;
      GGS_string var_sB_7776 = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumEBExtensionGenerationInSwift (inCompiler, temp_6.readProperty_mEnumName (), temp_7.readProperty_mEnumConstantList (), temp_8.readProperty_mEnumFuncMap () COMMA_SOURCE_FILE ("enumeration.ggs", 221))) ;
      const GGS_enumForGeneration temp_9 = this ;
      GGS_string var_fileNameB_7941 = GGS_string ("enum-").add_operation (temp_9.readProperty_mEnumName (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 226)).add_operation (GGS_string ("-ebExtension.swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 226)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileNameB_7941, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 227)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileNameB_7941, var_sB_7776, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 228)) ;
      }
    }
  }
}

#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "LexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "eb",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .easyBindings extension",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "0.0.1" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astDeclarationStruct var_declarationStruct_1070 = GGS_astDeclarationStruct::init (inCompiler COMMA_HERE) ;
  GGS_location joker_1242 ; // Joker input parameter
  cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (inCompiler, GGS_string (filewrapperTemplate_predefinedOutletClasses_sourceFile (inCompiler COMMA_SOURCE_FILE ("program.ggs", 25))), GGS_string::makeEmptyString (), var_declarationStruct_1070, joker_1242  COMMA_SOURCE_FILE ("program.ggs", 25)) ;
  GGS_location var_endOfSourceFile_1438 ;
  var_endOfSourceFile_1438.drop () ;
  cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_declarationStruct_1070, var_endOfSourceFile_1438  COMMA_SOURCE_FILE ("program.ggs", 27)) ;
  {
  var_declarationStruct_1070.mProperty_mUnifiedDeclarationList.setter_append (GGS_prefsDeclarationAST::init_21__21_ (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("program.ggs", 30)), GGS_location::class_func_nowhere (SOURCE_FILE ("program.ggs", 30)), inCompiler COMMA_HERE), var_declarationStruct_1070.readProperty_mPreferences (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("program.ggs", 29)) ;
  }
  {
  routine_enterAtomicClassesIn_26_declarationList (var_declarationStruct_1070.mProperty_mUnifiedDeclarationList, inCompiler  COMMA_SOURCE_FILE ("program.ggs", 35)) ;
  }
  GGS_declarationListAST var_sortedDeclarationListAST_1980 ;
  {
  routine_sortProperties_3F__3F__21_ (constinArgument_inSourceFile.readProperty_string (), var_declarationStruct_1070.readProperty_mUnifiedDeclarationList (), var_sortedDeclarationListAST_1980, inCompiler  COMMA_SOURCE_FILE ("program.ggs", 37)) ;
  }
  GGS_semanticContext var_semanticContext_2086 = GGS_semanticContext::init (inCompiler COMMA_HERE) ;
  var_semanticContext_2086.mProperty_mAutoLayoutVStackFunctionMap = var_declarationStruct_1070.readProperty_mAutoLayoutVStackFunctionMap () ;
  var_semanticContext_2086.mProperty_mAutoLayoutHStackFunctionMap = var_declarationStruct_1070.readProperty_mAutoLayoutHStackFunctionMap () ;
  var_semanticContext_2086.mProperty_mEnumerationFunctionListAST = var_declarationStruct_1070.readProperty_mEnumerationFunctionListAST () ;
  GGS_generationStruct var_generation_2416 = GGS_generationStruct::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationListAST enumerator_2457 (var_sortedDeclarationListAST_1980) ;
  bool bool_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 44)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_2457.hasCurrentObject () && bool_0) {
    while (enumerator_2457.hasCurrentObject () && bool_0) {
      callExtensionMethod_firstAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_2457.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2086, var_generation_2416, inCompiler COMMA_SOURCE_FILE ("program.ggs", 45)) ;
      enumerator_2457.gotoNextObject () ;
      if (enumerator_2457.hasCurrentObject ()) {
        bool_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 44)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 48)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      routine_buildBindingSpecificationMap_26__3F_ (var_semanticContext_2086, var_declarationStruct_1070.readProperty_mBindingSpecificationListMap (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 49)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 54)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (var_semanticContext_2086, var_declarationStruct_1070.readProperty_mAutoLayoutBindingSpecificationList (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 55)) ;
      }
    }
  }
  UpEnumerator_declarationListAST enumerator_3092 (var_sortedDeclarationListAST_1980) ;
  bool bool_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 61)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3092.hasCurrentObject () && bool_3) {
    while (enumerator_3092.hasCurrentObject () && bool_3) {
      callExtensionMethod_secondAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3092.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2086, var_generation_2416, inCompiler COMMA_SOURCE_FILE ("program.ggs", 62)) ;
      enumerator_3092.gotoNextObject () ;
      if (enumerator_3092.hasCurrentObject ()) {
        bool_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 61)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  UpEnumerator_declarationListAST enumerator_3321 (var_sortedDeclarationListAST_1980) ;
  bool bool_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 65)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3321.hasCurrentObject () && bool_4) {
    while (enumerator_3321.hasCurrentObject () && bool_4) {
      callExtensionMethod_thirdAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3321.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2086, var_generation_2416, inCompiler COMMA_SOURCE_FILE ("program.ggs", 66)) ;
      enumerator_3321.gotoNextObject () ;
      if (enumerator_3321.hasCurrentObject ()) {
        bool_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 65)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  UpEnumerator_declarationListAST enumerator_3550 (var_sortedDeclarationListAST_1980) ;
  bool bool_5 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 69)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3550.hasCurrentObject () && bool_5) {
    while (enumerator_3550.hasCurrentObject () && bool_5) {
      callExtensionMethod_fourthAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3550.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2086, var_generation_2416, inCompiler COMMA_SOURCE_FILE ("program.ggs", 70)) ;
      enumerator_3550.gotoNextObject () ;
      if (enumerator_3550.hasCurrentObject ()) {
        bool_5 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 69)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 73)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      UpEnumerator_enumerationFunctionListAST enumerator_3849 (var_semanticContext_2086.readProperty_mEnumerationFunctionListAST ()) ;
      while (enumerator_3849.hasCurrentObject ()) {
        GGS_classKind var_type_3964 ;
        GGS_propertyMap joker_3970_3 ; // Joker input parameter
        GGS_actionMap joker_3970_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_3970_1 ; // Joker input parameter
        var_semanticContext_2086.readProperty_mClassMap ().method_searchKey (enumerator_3849.current_mEnumName (HERE), var_type_3964, joker_3970_3, joker_3970_2, joker_3970_1, inCompiler COMMA_SOURCE_FILE ("program.ggs", 75)) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = var_type_3964.getter_isAtomic (SOURCE_FILE ("program.ggs", 76)).operator_not (SOURCE_FILE ("program.ggs", 76)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GenericArray <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_3849.current_mEnumName (HERE).readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray8  COMMA_SOURCE_FILE ("program.ggs", 77)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GGS_typeKind var_typeKind_4120 ;
          var_type_3964.method_extractAtomic (var_typeKind_4120, inCompiler COMMA_SOURCE_FILE ("program.ggs", 79)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_typeKind_4120.getter_isEnumType (SOURCE_FILE ("program.ggs", 80)).operator_not (SOURCE_FILE ("program.ggs", 80)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_3849.current_mEnumName (HERE).readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray10  COMMA_SOURCE_FILE ("program.ggs", 81)) ;
            }
          }
        }
        enumerator_3849.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 87)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      {
      routine_graphvizAnalysis_3F__3F__3F_ (constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.ggs", 88)), var_semanticContext_2086, var_declarationStruct_1070.readProperty_mGraphvizList (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 88)) ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 91)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      {
      routine_generateCode_3F__3F__3F_ (var_declarationStruct_1070.readProperty_mXcodeProject ().readProperty_string (), var_generation_2416, constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 92)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  GenericUniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
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
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
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
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
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

