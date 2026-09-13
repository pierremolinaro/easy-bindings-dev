#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

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
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mEnumConstantList ().getter_count (SOURCE_FILE ("enumeration.galgas4", 208)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_enumForGeneration temp_2 = this ;
      const GGS_enumForGeneration temp_3 = this ;
      const GGS_enumForGeneration temp_4 = this ;
      GGS_string var_sA_7440 = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (inCompiler, temp_2.readProperty_mEnumName (), temp_3.readProperty_mEnumConstantList (), temp_4.readProperty_mCaseIterable () COMMA_SOURCE_FILE ("enumeration.galgas4", 209))) ;
      const GGS_enumForGeneration temp_5 = this ;
      GGS_string var_fileNameA_7595 = GGS_string ("enum-").add_operation (temp_5.readProperty_mEnumName (), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 214)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 214)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileNameA_7595, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 215)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileNameA_7595, var_sA_7440, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 216)) ;
      }
      const GGS_enumForGeneration temp_6 = this ;
      const GGS_enumForGeneration temp_7 = this ;
      const GGS_enumForGeneration temp_8 = this ;
      GGS_string var_sB_7779 = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumEBExtensionGenerationInSwift (inCompiler, temp_6.readProperty_mEnumName (), temp_7.readProperty_mEnumConstantList (), temp_8.readProperty_mEnumFuncMap () COMMA_SOURCE_FILE ("enumeration.galgas4", 221))) ;
      const GGS_enumForGeneration temp_9 = this ;
      GGS_string var_fileNameB_7944 = GGS_string ("enum-").add_operation (temp_9.readProperty_mEnumName (), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 226)).add_operation (GGS_string ("-ebExtension.swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 226)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileNameB_7944, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 227)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileNameB_7944, var_sB_7779, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 228)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_entityDeclarationAST temp_0 = this ;
  const GGS_entityDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 21)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_entityDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_entityDeclarationAST temp_4 = this ;
      const GGS_entityDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperEntityName () COMMA_SOURCE_FILE ("entity.galgas4", 23)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@entityDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_entityDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_entityDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_5246 ;
  {
  const GGS_entityDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mActionDeclarationList (), var_actionMap_5246, inCompiler  COMMA_SOURCE_FILE ("entity.galgas4", 162)) ;
  }
  {
  const GGS_entityDeclarationAST temp_1 = this ;
  const GGS_entityDeclarationAST temp_2 = this ;
  const GGS_entityDeclarationAST temp_3 = this ;
  const GGS_entityDeclarationAST temp_4 = this ;
  const GGS_entityDeclarationAST temp_5 = this ;
  GGS_propertyGenerationList temp_6 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 173)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GGS_classKind::class_func_entity (temp_2.readProperty_mSuperEntityName ().readProperty_string (), temp_3.readProperty_mIsGraphicEntity (), temp_4.readProperty_mIsAbstract (), temp_5.readProperty_mHandlingOpposite ()  COMMA_SOURCE_FILE ("entity.galgas4", 165)), GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_5246, temp_6, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 163)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityDeclarationAST secondAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_secondAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                            GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_entityDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_propertyMap var_inheritedPropertyMap_6054 ;
      const GGS_entityDeclarationAST temp_2 = this ;
      GGS_classKind joker_6026 ; // Joker input parameter
      GGS_actionMap joker_6082_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_6082_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSuperEntityName (), joker_6026, var_inheritedPropertyMap_6054, joker_6082_2, joker_6082_1, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 183)) ;
      GGS_propertyMap var_propertyMap_6241 ;
      const GGS_entityDeclarationAST temp_3 = this ;
      GGS_classKind joker_6213 ; // Joker input parameter
      GGS_actionMap joker_6260_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_6260_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_3.readProperty_mClassName (), joker_6213, var_propertyMap_6241, joker_6260_2, joker_6260_1, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 190)) ;
      GGS_propertyMap var_newPropertyMap_6302 = var_inheritedPropertyMap_6054 ;
      UpEnumerator_propertyMap enumerator_6372 (var_propertyMap_6241) ;
      while (enumerator_6372.hasCurrentObject ()) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = enumerator_6372.current_mIsOverriding (HERE).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GGS_propertyKind joker_6477_3 ; // Joker input parameter
            GGS_actionMap joker_6477_2 ; // Joker input parameter
            GGS_bool joker_6477_1 ; // Joker input parameter
            var_inheritedPropertyMap_6054.method_searchKey (enumerator_6372.current_lkey (HERE), joker_6477_3, joker_6477_2, joker_6477_1, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 200)) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          {
          var_newPropertyMap_6302.setter_insertKey (enumerator_6372.current_lkey (HERE), enumerator_6372.current_mKind (HERE), enumerator_6372.current_mActionMap (HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 202)) ;
          }
        }
        enumerator_6372.gotoNextObject () ;
      }
      const GGS_entityDeclarationAST temp_5 = this ;
      GGS_classMap_2E_element var_entry_6613 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_5.readProperty_mClassName (), inCompiler COMMA_HERE) ;
      var_entry_6613.mProperty_mPropertyMap = var_newPropertyMap_6302 ;
      {
      ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_6613, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 208)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                            GGS_generationStruct & ioArgument_ioGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_propertyMap_7167 ;
  GGS_propertyGenerationList var_propertyGenerationList_7221 ;
  const GGS_entityDeclarationAST temp_0 = this ;
  GGS_classKind joker_7141 ; // Joker input parameter
  GGS_actionMap joker_7184 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), joker_7141, var_propertyMap_7167, joker_7184, var_propertyGenerationList_7221, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 216)) ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 224)) ;
  GGS_stringset var_overridenTransients_7366 = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_entityDeclarationAST temp_3 = this ;
    const GGS_entityDeclarationAST temp_4 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (temp_4.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.galgas4", 225)) COMMA_SOURCE_FILE ("entity.galgas4", 225)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_classKind var_superClassKind_7555 ;
      GGS_propertyMap var_superPropertyMap_7595 ;
      const GGS_entityDeclarationAST temp_5 = this ;
      GGS_actionMap joker_7619_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7619_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_5.readProperty_mSuperEntityName (), var_superClassKind_7555, var_superPropertyMap_7595, joker_7619_2, joker_7619_1, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 226)) ;
      switch (var_superClassKind_7555.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          const GGS_entityDeclarationAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSuperEntityName ().readProperty_location (), GGS_string ("prefs cannot be a super entity"), fixItArray7  COMMA_SOURCE_FILE ("entity.galgas4", 234)) ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_7760__0 ;
          var_superClassKind_7555.getAssociatedValuesFor_atomic (extractedValue_7760__0) ;
          const GGS_entityDeclarationAST temp_8 = this ;
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.readProperty_mSuperEntityName ().readProperty_location (), GGS_string ("an atomic class cannot be a super entity"), fixItArray9  COMMA_SOURCE_FILE ("entity.galgas4", 236)) ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_7865__0 ;
          var_superClassKind_7555.getAssociatedValuesFor_document (extractedValue_7865__0) ;
          const GGS_entityDeclarationAST temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mSuperEntityName ().readProperty_location (), GGS_string ("a document cannot be a super entity"), fixItArray11  COMMA_SOURCE_FILE ("entity.galgas4", 238)) ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_7963__0 ;
          GGS_bool extractedValue_7972_isGraphic_1 ;
          GGS_bool extractedValue_7989_isAbstract_2 ;
          GGS_bool extractedValue_8001__3 ;
          var_superClassKind_7555.getAssociatedValuesFor_entity (extractedValue_7963__0, extractedValue_7972_isGraphic_1, extractedValue_7989_isAbstract_2, extractedValue_8001__3) ;
          GalgasBool test_12 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_12) {
            const GGS_entityDeclarationAST temp_13 = this ;
            test_12 = extractedValue_7972_isGraphic_1.operator_and (temp_13.readProperty_mIsGraphicEntity ().operator_not (SOURCE_FILE ("entity.galgas4", 240)) COMMA_SOURCE_FILE ("entity.galgas4", 240)).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              const GGS_entityDeclarationAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GGS_string ("this entity should be declared with 'graphic', as super entity is graphic"), fixItArray15  COMMA_SOURCE_FILE ("entity.galgas4", 241)) ;
            }
          }
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_entityDeclarationAST temp_17 = this ;
            test_16 = extractedValue_7989_isAbstract_2.operator_and (temp_17.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.galgas4", 243)) COMMA_SOURCE_FILE ("entity.galgas4", 243)).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              UpEnumerator_propertyMap enumerator_8300 (var_superPropertyMap_7595) ;
              while (enumerator_8300.hasCurrentObject ()) {
                GalgasBool test_18 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_18) {
                  test_18 = extensionGetter_isAbstract (enumerator_8300.current (HERE), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 245)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_18) {
                    GalgasBool test_19 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_19) {
                      test_19 = var_propertyMap_7167.getter_hasKey (enumerator_8300.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("entity.galgas4", 246)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_19) {
                        {
                        var_overridenTransients_7366.setter_insert (enumerator_8300.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 247)) ;
                        }
                        GGS_propertyKind var_propertyKind_8577 ;
                        GGS_actionMap joker_8591_2 ; // Joker input parameter
                        GGS_bool joker_8591_1 ; // Joker input parameter
                        var_propertyMap_7167.method_searchKey (enumerator_8300.current (HERE).readProperty_lkey (), var_propertyKind_8577, joker_8591_2, joker_8591_1, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 248)) ;
                        GGS_string var_typeName_8614 = extensionGetter_typeName (var_propertyKind_8577, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 249)) ;
                        GGS_string var_superTypeName_8665 = extensionGetter_typeName (enumerator_8300.current (HERE).readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 250)) ;
                        GalgasBool test_20 = GalgasBool::boolTrue ;
                        if (GalgasBool::boolTrue == test_20) {
                          test_20 = GGS_bool (ComparisonKind::notEqual, var_typeName_8614.objectCompare (var_superTypeName_8665)).boolEnum () ;
                          if (GalgasBool::boolTrue == test_20) {
                            GenericArray <FixItDescription> fixItArray21 ;
                            inCompiler->emitSemanticError (var_propertyMap_7167.getter_locationForKey (enumerator_8300.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 252)), GGS_string ("type '").add_operation (var_superTypeName_8665, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 253)).add_operation (GGS_string ("' is required by declaration in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 253)), fixItArray21  COMMA_SOURCE_FILE ("entity.galgas4", 252)) ;
                          }
                        }
                      }
                    }
                    if (GalgasBool::boolFalse == test_19) {
                      const GGS_entityDeclarationAST temp_22 = this ;
                      GenericArray <FixItDescription> fixItArray23 ;
                      inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GGS_string ("transient '").add_operation (enumerator_8300.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 258)).add_operation (GGS_string ("' should be defined, it is declared abstract in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 258)), fixItArray23  COMMA_SOURCE_FILE ("entity.galgas4", 257)) ;
                    }
                  }
                }
                enumerator_8300.gotoNextObject () ;
              }
            }
          }
        }
        break ;
      }
    }
  }
  GGS_bool var_canCopyAndPaste_5F_option_9240 = GGS_bool (false) ;
  GGS_bool var_cannotBeDeleted_5F_option_9277 = GGS_bool (false) ;
  const GGS_entityDeclarationAST temp_24 = this ;
  UpEnumerator_lstringlist enumerator_9318 (temp_24.readProperty_mGraphicOptionArray ()) ;
  while (enumerator_9318.hasCurrentObject ()) {
    GalgasBool test_25 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_25) {
      test_25 = GGS_bool (ComparisonKind::equal, enumerator_9318.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("canCopyAndPaste"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_25) {
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = var_canCopyAndPaste_5F_option_9240.boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            GenericArray <FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (enumerator_9318.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated option"), fixItArray27  COMMA_SOURCE_FILE ("entity.galgas4", 273)) ;
          }
        }
        var_canCopyAndPaste_5F_option_9240 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_25) {
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_bool (ComparisonKind::equal, enumerator_9318.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("cannotBeDeleted"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          GalgasBool test_29 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_29) {
            test_29 = var_cannotBeDeleted_5F_option_9277.boolEnum () ;
            if (GalgasBool::boolTrue == test_29) {
              GenericArray <FixItDescription> fixItArray30 ;
              inCompiler->emitSemanticError (enumerator_9318.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated option"), fixItArray30  COMMA_SOURCE_FILE ("entity.galgas4", 278)) ;
            }
          }
          var_cannotBeDeleted_5F_option_9277 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_28) {
        GenericArray <FixItDescription> fixItArray31 ;
        appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, GGS_string ("acceptedTranslation")) ;
        appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, GGS_string ("canCopyAndPaste")) ;
        appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, GGS_string ("cannotBeDeleted")) ;
        inCompiler->emitSemanticError (enumerator_9318.current_mValue (HERE).readProperty_location (), GGS_string ("unkown graphic option"), fixItArray31  COMMA_SOURCE_FILE ("entity.galgas4", 282)) ;
      }
    }
    enumerator_9318.gotoNextObject () ;
  }
  GGS_bool var_hasSubClass_9988 = GGS_bool (false) ;
  UpEnumerator_classMap enumerator_10052 (ioArgument_ioSemanticContext.readProperty_mClassMap ()) ;
  bool bool_32 = var_hasSubClass_9988.operator_not (SOURCE_FILE ("entity.galgas4", 291)).isValidAndTrue () ;
  if (enumerator_10052.hasCurrentObject () && bool_32) {
    while (enumerator_10052.hasCurrentObject () && bool_32) {
      GalgasBool test_33 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_33) {
        test_33 = enumerator_10052.current (HERE).readProperty_mClassKind ().getter_isEntity (SOURCE_FILE ("entity.galgas4", 292)).boolEnum () ;
        if (GalgasBool::boolTrue == test_33) {
          GGS_string var_superEntityName_10207 ;
          GGS_bool joker_10224_3 ; // Joker input parameter
          GGS_bool joker_10224_2 ; // Joker input parameter
          GGS_bool joker_10224_1 ; // Joker input parameter
          enumerator_10052.current (HERE).readProperty_mClassKind ().method_extractEntity (var_superEntityName_10207, joker_10224_3, joker_10224_2, joker_10224_1, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 293)) ;
          const GGS_entityDeclarationAST temp_34 = this ;
          var_hasSubClass_9988 = GGS_bool (ComparisonKind::equal, temp_34.readProperty_mClassName ().readProperty_string ().objectCompare (var_superEntityName_10207)) ;
        }
      }
      enumerator_10052.gotoNextObject () ;
      if (enumerator_10052.hasCurrentObject ()) {
        bool_32 = var_hasSubClass_9988.operator_not (SOURCE_FILE ("entity.galgas4", 291)).isValidAndTrue () ;
      }
    }
  }
  {
  const GGS_entityDeclarationAST temp_35 = this ;
  const GGS_entityDeclarationAST temp_36 = this ;
  ioArgument_ioGeneration.mProperty_mEntityListForGeneration.setter_append (temp_35.readProperty_mClassName ().readProperty_string (), temp_36.readProperty_mObsoleteEntityNames (), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 298)) ;
  }
  {
  const GGS_entityDeclarationAST temp_37 = this ;
  const GGS_entityDeclarationAST temp_38 = this ;
  const GGS_entityDeclarationAST temp_39 = this ;
  const GGS_entityDeclarationAST temp_40 = this ;
  const GGS_entityDeclarationAST temp_41 = this ;
  const GGS_entityDeclarationAST temp_42 = this ;
  const GGS_entityDeclarationAST temp_43 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_entityForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_37.readProperty_mClassName ().readProperty_string (), temp_38.readProperty_mSuperEntityName ().readProperty_string (), temp_39.readProperty_mHandlingOpposite (), var_propertyGenerationList_7221, temp_40.readProperty_mSignatureList (), temp_41.readProperty_mIsGraphicEntity (), temp_42.readProperty_mIsAbstract (), var_overridenTransients_7366, temp_43.readProperty_mExternSwiftDelegateList (), var_hasSubClass_9988, var_canCopyAndPaste_5F_option_9240, var_cannotBeDeleted_5F_option_9277, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 302)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityForGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                             const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                             GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                             GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityForGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                             const GGS_generationStruct constinArgument_inGenerationStruct,
                                                             const GGS_stringset constinArgument_inUsedProtocolSet,
                                                             GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_atomicPropertyGenerationList temp_0 = GGS_atomicPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 358)) ;
  GGS_atomicPropertyGenerationList var_atomicPropertyGenerationList_12686 = temp_0 ;
  GGS_transientPropertyGenerationList temp_1 = GGS_transientPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 359)) ;
  GGS_transientPropertyGenerationList var_transientPropertyGenerationList_12761 = temp_1 ;
  GGS_computedPropertyGenerationList temp_2 = GGS_computedPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 360)) ;
  GGS_computedPropertyGenerationList var_computedPropertyGenerationList_12838 = temp_2 ;
  GGS_toOnePropertyGenerationList temp_3 = GGS_toOnePropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 361)) ;
  GGS_toOnePropertyGenerationList var_toOnePropertyGenerationList_12911 = temp_3 ;
  GGS_toManyPropertyGenerationList temp_4 = GGS_toManyPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 362)) ;
  GGS_toManyPropertyGenerationList var_toManyPropertyGenerationList_12982 = temp_4 ;
  GGS_atomicProxyGenerationList temp_5 = GGS_atomicProxyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 363)) ;
  GGS_atomicProxyGenerationList var_proxyGenerationList_13051 = temp_5 ;
  GGS_toManyProxyGenerationList temp_6 = GGS_toManyProxyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 364)) ;
  GGS_toManyProxyGenerationList var_toManyProxyGenerationList_13111 = temp_6 ;
  const GGS_entityForGeneration temp_7 = this ;
  UpEnumerator_propertyGenerationList enumerator_13151 (temp_7.readProperty_mPropertyGenerationList ()) ;
  while (enumerator_13151.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_atomicPropertyGeneration var_atomicProperty_13209 (dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_13151.current_mProperty (HERE).ptr ())) ;
      if (nullptr == var_atomicProperty_13209.ptr ()) {
        test_8 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_8) {
        {
        var_atomicPropertyGenerationList_12686.setter_append (var_atomicProperty_13209, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 367)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        GGS_transientPropertyGeneration var_transientProperty_13348 (dynamic_cast <const cPtr_transientPropertyGeneration *> (enumerator_13151.current_mProperty (HERE).ptr ())) ;
        if (nullptr == var_transientProperty_13348.ptr ()) {
          test_9 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_9) {
          {
          var_transientPropertyGenerationList_12761.setter_append (var_transientProperty_13348, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 369)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          GGS_computedPropertyGeneration var_computedProperty_13499 (dynamic_cast <const cPtr_computedPropertyGeneration *> (enumerator_13151.current_mProperty (HERE).ptr ())) ;
          if (nullptr == var_computedProperty_13499.ptr ()) {
            test_10 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_10) {
            {
            var_computedPropertyGenerationList_12838.setter_append (var_computedProperty_13499, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 371)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            GGS_toManyProxyGeneration var_toManyProxy_13646 (dynamic_cast <const cPtr_toManyProxyGeneration *> (enumerator_13151.current_mProperty (HERE).ptr ())) ;
            if (nullptr == var_toManyProxy_13646.ptr ()) {
              test_11 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_11) {
              {
              var_toManyProxyGenerationList_13111.setter_append (var_toManyProxy_13646, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 373)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              GGS_atomicProxyGeneration var_proxyProperty_13773 (dynamic_cast <const cPtr_atomicProxyGeneration *> (enumerator_13151.current_mProperty (HERE).ptr ())) ;
              if (nullptr == var_proxyProperty_13773.ptr ()) {
                test_12 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_12) {
                {
                var_proxyGenerationList_13051.setter_append (var_proxyProperty_13773, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 375)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                GGS_toOnePropertyGeneration var_toOneProperty_13898 (dynamic_cast <const cPtr_toOnePropertyGeneration *> (enumerator_13151.current_mProperty (HERE).ptr ())) ;
                if (nullptr == var_toOneProperty_13898.ptr ()) {
                  test_13 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_13) {
                  {
                  var_toOnePropertyGenerationList_12911.setter_append (var_toOneProperty_13898, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 377)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                GalgasBool test_14 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_14) {
                  GGS_toManyPropertyGeneration var_toOneProperty_14033 (dynamic_cast <const cPtr_toManyPropertyGeneration *> (enumerator_13151.current_mProperty (HERE).ptr ())) ;
                  if (nullptr == var_toOneProperty_14033.ptr ()) {
                    test_14 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_14) {
                    {
                    var_toManyPropertyGenerationList_12982.setter_append (var_toOneProperty_14033, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 379)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_13151.gotoNextObject () ;
  }
  GGS_string var_superEntityName_14180 = GGS_string::makeEmptyString () ;
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    const GGS_entityForGeneration temp_16 = this ;
    test_15 = GGS_bool (ComparisonKind::notEqual, temp_16.readProperty_mSuperEntityName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      const GGS_entityForGeneration temp_17 = this ;
      var_superEntityName_14180 = temp_17.readProperty_mSuperEntityName () ;
    }
  }
  if (GalgasBool::boolFalse == test_15) {
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_entityForGeneration temp_19 = this ;
      test_18 = temp_19.readProperty_mIsGraphicEntity ().boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        var_superEntityName_14180 = GGS_string ("EBGraphicManagedObject") ;
      }
    }
    if (GalgasBool::boolFalse == test_18) {
      var_superEntityName_14180 = GGS_string ("EBManagedObject") ;
    }
  }
  const GGS_entityForGeneration temp_20 = this ;
  const GGS_entityForGeneration temp_21 = this ;
  const GGS_entityForGeneration temp_22 = this ;
  const GGS_entityForGeneration temp_23 = this ;
  const GGS_entityForGeneration temp_24 = this ;
  const GGS_entityForGeneration temp_25 = this ;
  const GGS_entityForGeneration temp_26 = this ;
  const GGS_entityForGeneration temp_27 = this ;
  const GGS_entityForGeneration temp_28 = this ;
  const GGS_entityForGeneration temp_29 = this ;
  const GGS_entityForGeneration temp_30 = this ;
  GGS_string var_s_14440 = GGS_string (filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (inCompiler, temp_20.readProperty_mEntityName (), var_superEntityName_14180, temp_21.readProperty_mPropertyGenerationList (), constinArgument_inUsedProtocolSet, var_proxyGenerationList_13051, var_toManyProxyGenerationList_13111, var_atomicPropertyGenerationList_12686, var_transientPropertyGenerationList_12761, var_computedPropertyGenerationList_12838, var_toOnePropertyGenerationList_12911, var_toManyPropertyGenerationList_12982, temp_22.readProperty_mSignatureSet (), temp_23.readProperty_mIsGraphicEntity (), temp_24.readProperty_mIsAbstract (), temp_25.readProperty_mOverridenTransients (), temp_26.readProperty_mExternSwiftDelegateList (), temp_27.readProperty_mHasSubEntity (), temp_28.readProperty_mCanCopyAndPaste_5F_option (), temp_29.readProperty_mCannotBeDeleted_5F_option (), constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_30.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.galgas4", 410)) COMMA_SOURCE_FILE ("entity.galgas4", 390))) ;
  const GGS_entityForGeneration temp_31 = this ;
  GGS_string var_fileName_15221 = GGS_string ("entity-").add_operation (temp_31.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 412)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 412)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_15221, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 413)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15221, var_s_14440, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 414)) ;
  }
  GalgasBool test_32 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_32) {
    const GGS_entityForGeneration temp_33 = this ;
    test_32 = constinArgument_inGenerationStruct.readProperty_mToOneClassImplementations ().getter_hasKey (temp_33.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.galgas4", 419)).boolEnum () ;
    if (GalgasBool::boolTrue == test_32) {
      const GGS_entityForGeneration temp_34 = this ;
      const GGS_entityForGeneration temp_35 = this ;
      const GGS_entityForGeneration temp_36 = this ;
      const GGS_entityForGeneration temp_37 = this ;
      const GGS_entityForGeneration temp_38 = this ;
      const GGS_entityForGeneration temp_39 = this ;
      const GGS_entityForGeneration temp_40 = this ;
      const GGS_entityForGeneration temp_41 = this ;
      var_s_14440 = GGS_string (filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (inCompiler, temp_34.readProperty_mEntityName (), var_superEntityName_14180, temp_35.readProperty_mHandlingOpposite (), temp_36.readProperty_mPropertyGenerationList (), var_proxyGenerationList_13051, var_toManyProxyGenerationList_13111, var_atomicPropertyGenerationList_12686, var_transientPropertyGenerationList_12761, var_computedPropertyGenerationList_12838, var_toOnePropertyGenerationList_12911, var_toManyPropertyGenerationList_12982, temp_37.readProperty_mSignatureSet (), temp_38.readProperty_mIsGraphicEntity (), temp_39.readProperty_mIsAbstract (), temp_40.readProperty_mOverridenTransients (), temp_41.readProperty_mExternSwiftDelegateList () COMMA_SOURCE_FILE ("entity.galgas4", 420))) ;
    }
  }
  if (GalgasBool::boolFalse == test_32) {
    var_s_14440 = GGS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GGS_entityForGeneration temp_42 = this ;
  var_fileName_15221 = GGS_string ("toone-").add_operation (temp_42.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 441)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 441)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_15221, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 442)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15221, var_s_14440, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 443)) ;
  }
  GalgasBool test_43 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_43) {
    const GGS_entityForGeneration temp_44 = this ;
    test_43 = constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_44.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.galgas4", 448)).boolEnum () ;
    if (GalgasBool::boolTrue == test_43) {
      const GGS_entityForGeneration temp_45 = this ;
      const GGS_entityForGeneration temp_46 = this ;
      const GGS_entityForGeneration temp_47 = this ;
      const GGS_entityForGeneration temp_48 = this ;
      const GGS_entityForGeneration temp_49 = this ;
      const GGS_entityForGeneration temp_50 = this ;
      const GGS_entityForGeneration temp_51 = this ;
      const GGS_entityForGeneration temp_52 = this ;
      const GGS_entityForGeneration temp_53 = this ;
      const GGS_entityForGeneration temp_54 = this ;
      const GGS_entityForGeneration temp_55 = this ;
      const GGS_entityForGeneration temp_56 = this ;
      const GGS_entityForGeneration temp_57 = this ;
      var_s_14440 = GGS_string (filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (inCompiler, temp_45.readProperty_mEntityName (), var_superEntityName_14180, temp_46.readProperty_mHandlingOpposite (), temp_47.readProperty_mPropertyGenerationList (), var_proxyGenerationList_13051, var_toManyProxyGenerationList_13111, var_atomicPropertyGenerationList_12686, var_transientPropertyGenerationList_12761, var_computedPropertyGenerationList_12838, var_toOnePropertyGenerationList_12911, var_toManyPropertyGenerationList_12982, temp_48.readProperty_mSignatureSet (), temp_49.readProperty_mIsGraphicEntity (), temp_50.readProperty_mIsAbstract (), temp_51.readProperty_mOverridenTransients (), temp_52.readProperty_mExternSwiftDelegateList (), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ().getter_hasKey (temp_53.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.galgas4", 466)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ().getter_hasKey (temp_54.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.galgas4", 467)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ().getter_hasKey (temp_55.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.galgas4", 468)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOf_5F_ ().getter_hasKey (temp_56.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.galgas4", 469)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_StoredArrayOf_5F_ ().getter_hasKey (temp_57.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.galgas4", 470)), constinArgument_inUsedProtocolSet COMMA_SOURCE_FILE ("entity.galgas4", 449))) ;
    }
  }
  if (GalgasBool::boolFalse == test_43) {
    var_s_14440 = GGS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GGS_entityForGeneration temp_58 = this ;
  var_fileName_15221 = GGS_string ("tomany-").add_operation (temp_58.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 476)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 476)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_15221, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 477)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15221, var_s_14440, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 478)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateEBManagedObjectContext??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateEBManagedObjectContext_3F__3F__26_ (const GGS_entityListForGeneratingEBManagedObjectContext constinArgument_inEntityListForGeneration,
                                                         const GGS_string constinArgument_inOutputDirectory,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inEntityListForGeneration.getter_count (SOURCE_FILE ("entity.galgas4", 494)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_fileName_18343 = GGS_string ("EBManagedObjectFactory.swift") ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_18343, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 496)) ;
      }
      GGS_string var_s_18436 = GGS_string (filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (inCompiler, constinArgument_inEntityListForGeneration COMMA_SOURCE_FILE ("entity.galgas4", 497))) ;
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_18343, var_s_18436, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 498)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'entityGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_entityGenerationTemplate_3,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_entityGenerationTemplate_1,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_entityGenerationTemplate_2,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_entityGenerationTemplate,
  & gWrapperDirectory_1_entityGenerationTemplate,
  & gWrapperDirectory_2_entityGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_entityGenerationTemplate_0,
  3,
  gWrapperAllDirectories_entityGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (Compiler * inCompiler,
                                                                                     const GGS_string & in_ENTITY_5F_NAME,
                                                                                     const GGS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                     const GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const GGS_stringset & in_USED_5F_PROTOCOL_5F_SET,
                                                                                     const GGS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const GGS_toManyProxyGenerationList & /* in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                     const GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const GGS_computedPropertyGenerationList & /* in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION */,
                                                                                     const GGS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                     const GGS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                     const GGS_stringset & in_SIGNATURE_5F_SET,
                                                                                     const GGS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                     const GGS_bool & in_IS_5F_ABSTRACT,
                                                                                     const GGS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                     const GGS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const GGS_bool & in_HAS_5F_SUB_5F_ENTITY,
                                                                                     const GGS_bool & in_OPTION_5F_CanCopyAndPaste,
                                                                                     const GGS_bool & in_OPTION_5F_CannotBeDeleted,
                                                                                     const GGS_bool & in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n") ;
  const GalgasBool test_0 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    GGS_uint index_387_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_387 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_387.hasCurrentObject ()) {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
        const GalgasBool test_1 = in_USED_5F_PROTOCOL_5F_SET.getter_hasKey (in_ENTITY_5F_NAME.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 12)).add_operation (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 12)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 12)).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("@MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n  var ") ;
          result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_387.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" { get }\n}\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("// Commented out, not used\n// @MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n//   var ") ;
          result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_387.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 19)).stringValue ()) ;
          result.appendString (" { get }\n// }\n\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_387.gotoNextObject () ;
        index_387_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_2 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    GGS_uint index_1033_ (0) ;
    if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicProxyGenerationList enumerator_1033 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_1033.hasCurrentObject ()) {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
        const GalgasBool test_3 = in_USED_5F_PROTOCOL_5F_SET.getter_hasKey (in_ENTITY_5F_NAME.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 30)).add_operation (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 30)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 30)).boolEnum () ;
        switch (test_3) {
        case GalgasBool::boolTrue : {
          result.appendString ("@MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n  var ") ;
          result.appendString (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1033.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 32)).stringValue ()) ;
          result.appendString ("\? { get }\n}\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("// Commented out, not used\n// @MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n//  var ") ;
          result.appendString (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1033.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 36)).stringValue ()) ;
          result.appendString ("\? { get }\n// }\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_1033.gotoNextObject () ;
        index_1033_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_4 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    GGS_uint index_1686_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_transientPropertyGenerationList enumerator_1686 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_1686.hasCurrentObject ()) {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
        const GalgasBool test_5 = in_USED_5F_PROTOCOL_5F_SET.getter_hasKey (in_ENTITY_5F_NAME.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 46)).add_operation (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 46)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 46)).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("@MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n  var ") ;
          result.appendString (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1686.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 48)).stringValue ()) ;
          result.appendString ("\? { get }\n}\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("// Commented out, not used\n// @MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n//   var ") ;
          result.appendString (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1686.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 53)).stringValue ()) ;
          result.appendString ("\? { get }\n// }\n\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_1686.gotoNextObject () ;
        index_1686_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Entity: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 61)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_6 = in_HAS_5F_SUB_5F_ENTITY.operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 65)).boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("final ") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("class ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_SUPER_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n") ;
  const GalgasBool test_7 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    GGS_uint index_2668_ (0) ;
    if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_propertyGenerationList enumerator_2668 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_2668.hasCurrentObject ()) {
        const GalgasBool test_8 = GGS_bool (enumerator_2668.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2668.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 71)).operator_or (GGS_bool (enumerator_2668.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 71)).boolEnum () ;
        switch (test_8) {
        case GalgasBool::boolTrue : {
          const GalgasBool test_9 = in_USED_5F_PROTOCOL_5F_SET.getter_hasKey (in_ENTITY_5F_NAME.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 72)).add_operation (enumerator_2668.current_mProperty (HERE).readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 72)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 72)).boolEnum () ;
          switch (test_9) {
          case GalgasBool::boolTrue : {
            result.appendString ("    , ") ;
            result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
            result.appendString ("_") ;
            result.appendString (enumerator_2668.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
            result.appendString ("\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("    // ") ;
            result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
            result.appendString ("_") ;
            result.appendString (enumerator_2668.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
            result.appendString (" // Commented out, not used\n") ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_2668.gotoNextObject () ;
        index_2668_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    {\n\n") ;
  GGS_uint index_3151_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_3151 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3151.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_3151.current_mProperty (HERE).ptr (), GGS_bool (false), in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS, in_OVERRIDEN_5F_TRANSIENTS, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 84)).stringValue ()) ;
      enumerator_3151.gotoNextObject () ;
      index_3151_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  required init (_ inUndoManager : UndoManager\?) {\n") ;
  GGS_uint index_3580_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_3580 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3580.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_initCode ((const cPtr_propertyGeneration *) enumerator_3580.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 93)).stringValue ()) ;
      enumerator_3580.gotoNextObject () ;
      index_3580_.increment () ;
    }
  }
  result.appendString ("    super.init (inUndoManager)\n") ;
  GGS_uint index_3689_ (0) ;
  if (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    UpEnumerator_toOnePropertyGenerationList enumerator_3689 (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST) ;
    while (enumerator_3689.hasCurrentObject ()) {
      result.appendString ("    self.") ;
      result.appendString (enumerator_3689.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_none.mReadModelFunction = { [weak self] in\n      if let uwSelf = self {\n        return .single (uwSelf.") ;
      result.appendString (enumerator_3689.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.propval == nil)\n      }else{\n        return .empty\n      }\n    }\n    self.") ;
      result.appendString (enumerator_3689.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: self.") ;
      result.appendString (enumerator_3689.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_none)\n") ;
      enumerator_3689.gotoNextObject () ;
      index_3689_.increment () ;
    }
  }
  GGS_uint index_4124_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_4124 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_4124.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_4124.current_mProperty (HERE).ptr (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 108)).stringValue ()) ;
      enumerator_4124.gotoNextObject () ;
      index_4124_.increment () ;
    }
  }
  result.appendString ("  //--- Install undoers and opposite setter for relationships\n") ;
  GGS_uint index_4281_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    UpEnumerator_toManyPropertyGenerationList enumerator_4281 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
    while (enumerator_4281.hasCurrentObject ()) {
      switch (enumerator_4281.current_mProperty (HERE).readProperty_mOption ().enumValue ()) {
      case GGS_toManyRelationshipOptionGeneration::Enumeration::invalid :
        break ;
      case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_none :
        {
        }
        break ;
      case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasDependance :
        {
          GGS_string extractedValue_4356_masterPropertyName_0 ;
          GGS_string extractedValue_4375__1 ;
          enumerator_4281.current_mProperty (HERE).readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_4356_masterPropertyName_0, extractedValue_4375__1) ;
          result.appendString ("    self.") ;
          result.appendString (enumerator_4281.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.setDataProvider (self.") ;
          result.appendString (extractedValue_4356_masterPropertyName_0.stringValue ()) ;
          result.appendString ("_property)\n") ;
        }
        break ;
      case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasOpposite :
        {
          GGS_string extractedValue_4515_oppositeName_0 ;
          enumerator_4281.current_mProperty (HERE).readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_4515_oppositeName_0) ;
          result.appendString ("    self.") ;
          result.appendString (enumerator_4281.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.setOppositeRelationShipFunctions (\n      setter: { [weak self] inObject in if let me = self { inObject.") ;
          result.appendString (extractedValue_4515_oppositeName_0.stringValue ()) ;
          result.appendString ("_property.setProp (me) } },\n      resetter: { inObject in inObject.") ;
          result.appendString (extractedValue_4515_oppositeName_0.stringValue ()) ;
          result.appendString ("_property.setProp (nil) }\n    )\n") ;
        }
        break ;
      }
      enumerator_4281.gotoNextObject () ;
      index_4281_.increment () ;
    }
  }
  result.appendString ("  //--- Register properties for handling signature\n") ;
  GGS_uint index_4931_ (0) ;
  if (in_SIGNATURE_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_4931 (in_SIGNATURE_5F_SET) ;
    while (enumerator_4931.hasCurrentObject ()) {
      result.appendString ("    self.") ;
      result.appendString (enumerator_4931.current_key (HERE).stringValue ()) ;
      result.appendString ("_property.setSignatureObserver (observer: self)\n") ;
      enumerator_4931.gotoNextObject () ;
      index_4931_.increment () ;
    }
  }
  result.appendString ("  //--- Extern delegates\n") ;
  GGS_uint index_5115_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_externSwiftDelegateList enumerator_5115 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_5115.hasCurrentObject ()) {
      result.appendString ("    self.mExternDelegate") ;
      result.appendString (index_5115_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 133)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_5115.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (object: self)\n") ;
      enumerator_5115.gotoNextObject () ;
      index_5115_idx.increment () ;
    }
  }
  result.appendString ("   }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Extern delegates\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_5545_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_externSwiftDelegateList enumerator_5545 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_5545.hasCurrentObject ()) {
      result.appendString ("  final var mExternDelegate") ;
      result.appendString (index_5545_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 143)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_5545.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_5545.gotoNextObject () ;
      index_5545_idx.increment () ;
    }
  }
  result.appendString ("\n") ;
  const GalgasBool test_10 = GGS_bool (ComparisonKind::greaterThan, in_SIGNATURE_5F_SET.getter_count (SOURCE_FILE ("entity.swift.galgasTemplate", 147)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_10) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   computeSignature\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func computeSignature () -> UInt32 {\n    var crc = super.computeSignature ()\n") ;
    GGS_uint index_6034_ (0) ;
    if (in_SIGNATURE_5F_SET.isValid ()) {
      UpEnumerator_stringset enumerator_6034 (in_SIGNATURE_5F_SET) ;
      while (enumerator_6034.hasCurrentObject ()) {
        result.appendString ("    crc.accumulate (u32: self.") ;
        result.appendString (enumerator_6034.current_key (HERE).stringValue ()) ;
        result.appendString ("_property.signature ())\n") ;
        enumerator_6034.gotoNextObject () ;
        index_6034_.increment () ;
      }
    }
    result.appendString ("    return crc\n  }\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_11 = in_IS_5F_GRAPHIC_5F_ENTITY.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 163)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 163)).boolEnum () ;
  switch (test_11) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func cursorForKnob (knob inKnobIndex: Int) -> NSCursor\? {\n    return self.cursorForKnob_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (knob: inKnobIndex)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Translate\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func acceptedTranslation (xBy inDx: Int, yBy inDy: Int) -> CanariPoint {\n    return self.acceptedTranslation_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (xBy: inDx, yBy: inDy)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func acceptToTranslate (xBy inDx: Int, yBy inDy: Int) -> Bool {\n    return self.acceptToTranslate_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (xBy: inDx, yBy: inDy)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func translate (xBy inDx: Int, yBy inDy: Int,\n                           userSet ioSet : inout EBReferenceSet <EBManagedObject>) {\n    self.translate_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (xBy: inDx, yBy: inDy, userSet: &ioSet)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Move\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canMove (knob inKnobIndex : Int,\n                         proposedUnalignedAlignedTranslation inProposedUnalignedTranslation : CanariPoint,\n                         proposedAlignedTranslation inProposedAlignedTranslation : CanariPoint,\n                         unalignedMouseDraggedLocation inUnalignedMouseDraggedLocation : CanariPoint,\n                         shift inShift : Bool) -> CanariPoint {\n    return self.canMove_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (\n      knob: inKnobIndex,\n      proposedUnalignedAlignedTranslation: inProposedUnalignedTranslation,\n      proposedAlignedTranslation: inProposedAlignedTranslation,\n      unalignedMouseDraggedLocation: inUnalignedMouseDraggedLocation,\n      shift: inShift\n    )\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func move (knob inKnobIndex: Int,\n                      proposedDx inDx: Int,\n                      proposedDy inDy: Int,\n                      unalignedMouseLocationX inUnlignedMouseLocationX : Int,\n                      unalignedMouseLocationY inUnlignedMouseLocationY : Int,\n                      alignedMouseLocationX inAlignedMouseLocationX : Int,\n                      alignedMouseLocationY inAlignedMouseLocationY : Int,\n                      shift inShift : Bool) {\n    self.move_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (\n      knob: inKnobIndex,\n      proposedDx: inDx,\n      proposedDy: inDy,\n      unalignedMouseLocationX: inUnlignedMouseLocationX,\n      unalignedMouseLocationY: inUnlignedMouseLocationY,\n      alignedMouseLocationX: inAlignedMouseLocationX,\n      alignedMouseLocationY: inAlignedMouseLocationY,\n      shift: inShift\n    )\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Snap to grid\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func snapToGrid (_ inGrid : Int) {\n    self.snapToGrid_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (inGrid)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canSnapToGrid (_ inGrid : Int) -> Bool {\n    return self.canSnapToGrid_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (inGrid)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  HORIZONTAL FLIP\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func flipHorizontally () {\n    self.flipHorizontally_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canFlipHorizontally () -> Bool {\n    return self.canFlipHorizontally_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  VERTICAL FLIP\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func flipVertically () {\n    self.flipVertically_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canFlipVertically () -> Bool {\n    return self.canFlipVertically_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  ROTATE 90\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canRotate90 (accumulatedPoints : inout Set <CanariPoint>) -> Bool {\n    return self.canRotate90_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (accumulatedPoints: &accumulatedPoints)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func rotate90Clockwise (from inRotationCenter : CanariPoint,\n                                   userSet ioSet : inout EBReferenceSet <EBManagedObject>) {\n    self.rotate90Clockwise_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (from: inRotationCenter, userSet: &ioSet)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func rotate90CounterClockwise (from inRotationCenter : CanariPoint,\n                                          userSet ioSet : inout EBReferenceSet <EBManagedObject>) {\n    self.rotate90CounterClockwise_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (from: inRotationCenter, userSet: &ioSet)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Save into additional dictionary\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func saveIntoAdditionalDictionary (_ ioDictionary : inout [String : Any]) {\n    self.saveIntoAdditionalDictionary_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (&ioDictionary)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  operationAfterPasting\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func operationAfterPasting (additionalDictionary inDictionary : [String : Any],\n                                       optionalDocument inOptionalDocument : EBAutoLayoutManagedDocument\?,\n                                       objectArray inObjectArray : [EBGraphicManagedObject]) -> String {\n    return self.operationAfterPasting_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (additionalDictionary: inDictionary,\n                                                      optionalDocument: inOptionalDocument,\n                                                      objectArray: inObjectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Alignment Points\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func alignmentPoints () -> Set <CanariPoint> {\n    return self.alignmentPoints_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  operationBeforeRemoving\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func operationBeforeRemoving () {\n    self.operationBeforeRemoving_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n") ;
    const GalgasBool test_12 = in_OPTION_5F_CanCopyAndPaste.boolEnum () ;
    switch (test_12) {
    case GalgasBool::boolTrue : {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  COPY AND PASTE\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canCopyAndPaste () -> Bool {\n    return true\n  }\n\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    const GalgasBool test_13 = in_OPTION_5F_CannotBeDeleted.boolEnum () ;
    switch (test_13) {
    case GalgasBool::boolTrue : {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Can be deleted\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canBeDeleted () -> Bool {\n    return false\n  }\n\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToManyImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (Compiler * inCompiler,
                                                                                           const GGS_string & in_ENTITY_5F_NAME,
                                                                                           const GGS_string & /* in_SUPER_5F_CLASS_5F_NAME */,
                                                                                           const GGS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                           const GGS_propertyGenerationList & /* in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                           const GGS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const GGS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const GGS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const GGS_toOnePropertyGenerationList & /* in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST */,
                                                                                           const GGS_toManyPropertyGenerationList & /* in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST */,
                                                                                           const GGS_stringset & /* in_SIGNATURE_5F_SET */,
                                                                                           const GGS_bool & /* in_IS_5F_GRAPHIC_5F_ENTITY */,
                                                                                           const GGS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                           const GGS_stringset & /* in_OVERRIDEN_5F_TRANSIENTS */,
                                                                                           const GGS_externSwiftDelegateList & /* in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION */,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOf_5F_,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_,
                                                                                           const GGS_stringset & /* in_USED_5F_PROTOCOL_5F_SET */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("ReadOnlyArrayOf_").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 8)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass ReadOnlyArrayOf_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : EBReadOnlyAbstractArrayProperty <") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (">,                            \n                                 addedSet inAddedSet : EBReferenceSet <") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (">) {\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n  //--- Remove observers from removed objects\n    for managedObject in inRemovedSet.values {\n") ;
  GGS_uint index_1159_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_1159 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_1159.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_1159.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Stored property\n        managedObject.") ;
      result.appendString (enumerator_1159.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
      enumerator_1159.gotoNextObject () ;
      index_1159_.increment () ;
    }
  }
  GGS_uint index_1421_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_1421 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_1421.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_1421.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Transient property\n        managedObject.") ;
      result.appendString (enumerator_1421.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
      enumerator_1421.gotoNextObject () ;
      index_1421_.increment () ;
    }
  }
  GGS_uint index_1694_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_1694 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_1694.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_1694.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Computed property\n        managedObject.") ;
      result.appendString (enumerator_1694.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
      enumerator_1694.gotoNextObject () ;
      index_1694_.increment () ;
    }
  }
  GGS_uint index_1958_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_toManyProxyGenerationList enumerator_1958 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_1958.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_1958.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Tomany proxy\n        managedObject.") ;
      result.appendString (enumerator_1958.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
      enumerator_1958.gotoNextObject () ;
      index_1958_.increment () ;
    }
  }
  result.appendString ("    }\n  //--- Add observers to added objects\n    for managedObject in inAddedSet.values {\n") ;
  GGS_uint index_2318_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_2318 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_2318.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_2318.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Stored property\n        managedObject.") ;
      result.appendString (enumerator_2318.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
      enumerator_2318.gotoNextObject () ;
      index_2318_.increment () ;
    }
  }
  GGS_uint index_2581_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_2581 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_2581.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_2581.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Transient property\n        managedObject.") ;
      result.appendString (enumerator_2581.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
      enumerator_2581.gotoNextObject () ;
      index_2581_.increment () ;
    }
  }
  GGS_uint index_2855_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_2855 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_2855.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_2855.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Computed property\n        managedObject.") ;
      result.appendString (enumerator_2855.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
      enumerator_2855.gotoNextObject () ;
      index_2855_.increment () ;
    }
  }
  GGS_uint index_3120_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_toManyProxyGenerationList enumerator_3120 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3120.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_3120.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Tomany proxy\n        managedObject.") ;
      result.appendString (enumerator_3120.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
      enumerator_3120.gotoNextObject () ;
      index_3120_.increment () ;
    }
  }
  result.appendString ("    }\n  }\n\n") ;
  GGS_uint index_3403_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_3403 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3403.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' stored property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_3403.gotoNextObject () ;
      index_3403_.increment () ;
    }
  }
  GGS_uint index_4806_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_toManyProxyGenerationList enumerator_4806 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_4806.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' toMany proxy\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_4806.gotoNextObject () ;
      index_4806_.increment () ;
    }
  }
  GGS_uint index_6198_ (0) ;
  if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicProxyGenerationList enumerator_6198 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_6198.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' proxy property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_6198.gotoNextObject () ;
      index_6198_.increment () ;
    }
  }
  GGS_uint index_7600_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_7600 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_7600.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' transient property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by:  inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_7600.gotoNextObject () ;
      index_7600_.increment () ;
    }
  }
  GGS_uint index_9015_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_9015 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_9015.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' computed property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_9015.gotoNextObject () ;
      index_9015_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n//    TransientArrayOf ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = in_GENERATE_5F_CLASS_5F_TransientArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 235)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("// TransientArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class TransientArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Sort\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mIsOrderedBefore : Optional < (_ left : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (", _ right : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Bool > = nil\n  private var mSortObserver : EBModelNotifierEvent\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Data provider\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mDataProvider : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\? = nil // SHOULD BE WEAK\n  private var mTransientKind : PropertyKind = .empty\n  private var mModelArrayShouldBeComputed = true\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setDataProvider (_ inProvider : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (",\n                        sortCallback inSortCallBack : Optional < (_ left : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (", _ right : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Bool >,\n                        addSortObserversCallback inAddSortObserversCallback : (EBModelNotifierEvent) -> Void,\n                        removeSortObserversCallback inRemoveSortObserversCallback : @escaping (EBModelNotifierEvent) -> Void) {\n    if self.mDataProvider !== inProvider {\n      self.mSortObserver\?.removeSortObservers ()\n      self.mSortObserver = nil\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mIsOrderedBefore = inSortCallBack\n      self.mDataProvider\?.attachClient (self)\n      if inSortCallBack != nil {\n        self.mSortObserver = EBModelNotifierEvent (\n          self,\n          addSortObserversCallback: inAddSortObserversCallback,\n          removeSortObserversCallback: inRemoveSortObserversCallback\n        )\n      }else{\n        self.mInternalArrayValue = EBReferenceArray ()\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    if !self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = true\n      DispatchQueue.main.async {\n        self.computeModelArray ()\n      }\n    }\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      let newArray : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">\n      if let dataProvider = self.mDataProvider {\n        switch dataProvider.selection {\n        case .empty :\n          newArray = EBReferenceArray ()\n          self.mTransientKind = .empty\n        case .single (let v) :\n          if let sortFunction = self.mIsOrderedBefore {\n            newArray = EBReferenceArray (v.sorted { sortFunction ($0, $1) })\n          }else{\n            newArray = EBReferenceArray (v)\n          }\n          self.mTransientKind = .single\n        case .multiple :\n          newArray = EBReferenceArray ()\n          self.mTransientKind = .multiple\n        }\n      }else{\n        newArray = EBReferenceArray ()\n        self.mTransientKind = .empty\n      }\n      self.mInternalArrayValue = newArray\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    self.computeModelArray ()\n    switch self.mTransientKind {\n    case .empty :\n      return .empty\n    case .single :\n      return .single (self.propval.values)\n    case .multiple :\n      return .multiple\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    self.computeModelArray ()\n    return self.mInternalArrayValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    TransientArrayOfSuperOf ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_1 = in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 351)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("// TransientArrayOfSuperOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class TransientArrayOfSuperOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" <SUPER : EBManagedObject> : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Data provider\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mDataProvider : EBReadOnlyAbstractArrayProperty <SUPER>\? = nil // SHOULD BE WEAK\n  private var mTransientKind : PropertyKind = .empty\n  private var mModelArrayShouldBeComputed = true\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setDataProvider (_ inProvider : EBReadOnlyAbstractArrayProperty <SUPER>\?) {\n    if self.mDataProvider !== inProvider {\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mDataProvider\?.attachClient (self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    if !self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = true\n      DispatchQueue.main.async {\n        self.computeModelArray ()\n      }\n    }\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      var newModelArray : EBReferenceArray <SUPER>\n      if let dataProvider = self.mDataProvider {\n        switch dataProvider.selection {\n        case .empty :\n          newModelArray = EBReferenceArray ()\n          self.mTransientKind = .empty\n        case .single (let v) :\n          newModelArray = EBReferenceArray (v)\n          self.mTransientKind = .single\n         case .multiple :\n          newModelArray = EBReferenceArray ()\n          self.mTransientKind = .multiple\n        }\n      }else{\n        newModelArray = EBReferenceArray ()\n        self.mTransientKind = .empty\n      }\n      var newArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n      for superObject in newModelArray.values {\n        if let object = superObject as\? ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n          newArray.append (object)\n        }\n      }\n      self.mInternalArrayValue = newArray\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    self.computeModelArray ()\n    switch self.mTransientKind {\n    case .empty :\n      return .empty\n    case .single :\n      return .single (self.mInternalArrayValue.values)\n    case .multiple :\n      return .multiple\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    self.computeModelArray ()\n    return self.mInternalArrayValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("To many relationship read write: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 444)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_2 = in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)).operator_and (in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)) COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)).operator_and (in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)) COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("// ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("class ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setProp (_ value :  EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) { } // Abstract method\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    Proxy: ProxyArrayOf_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_3 = in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 464)).boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("// ProxyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class ProxyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setModel (_ inModel : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\?) {\n    if self.mModel !== inModel {\n      self.mModel\?.detachClient (self)\n      self.mModel = inModel\n      self.mModel\?.attachClient (self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    let newModelArray : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty :\n        newModelArray = EBReferenceArray ()\n      case .single (let v) :\n        newModelArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> (v)\n      case .multiple :\n        newModelArray = EBReferenceArray ()\n      }\n    }else{\n      newModelArray = EBReferenceArray ()\n    }\n    self.mInternalArrayValue = newModelArray\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func setProp (_ inArrayValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n    self.mModel\?.setProp (inArrayValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    if let model = self.mModel {\n      return model.selection\n    }else{\n      return .empty\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        return EBReferenceArray ()\n      case .single (let v) :\n        return EBReferenceArray (v)\n      }\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("StandAlone Array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 539)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_4 = in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 542)).boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("// StandAloneArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("class StandAloneArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" { // , EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol, Sendable {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  weak final var undoManager : UndoManager\? = nil // SOULD BE WEAK\n\n") ;
    const GalgasBool test_5 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
    switch (test_5) {
    case GalgasBool::boolTrue : {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Opposite relationship management\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mSetOppositeRelationship : Optional < (_ inManagedObject : ") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (") -> Void > = nil\n  private final var mResetOppositeRelationship : Optional < (_ inManagedObject : ") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (") -> Void > = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setOppositeRelationShipFunctions (setter inSetter : @escaping (_ inManagedObject : ") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (") -> Void,\n                                               resetter inResetter : @escaping (_ inManagedObject : ") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (") -> Void) {\n    self.mSetOppositeRelationship = inSetter\n    self.mResetOppositeRelationship = inResetter\n  }\n\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model will change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n  //--- Register old value in undo manager\n    self.undoManager\?.registerUndo (withTarget: self) { selfTarget in\n      selfTarget.setProp (inOldValue) // Ok in Swift 6.2\n      // MainActor.assumeIsolated { selfTarget.setProp (inOldValue) }\n    }\n  //---\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model did change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n  //--- Notify observers\n    self.observedObjectDidChange ()\n  //---\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Update observers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
    const GalgasBool test_6 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
    switch (test_6) {
    case GalgasBool::boolTrue : {
      result.appendString ("  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (">,\n                                 addedSet inAddedSet : EBReferenceSet <") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (">) {\n    for managedObject in inRemovedSet.values {\n      self.mResetOppositeRelationship\? (managedObject)\n    }\n    for managedObject in inAddedSet.values {\n      self.mSetOppositeRelationship\? (managedObject)\n    }\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n }\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override final var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    return .single (self.mInternalArrayValue.values)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func setProp (_ inValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n    self.mInternalArrayValue = inValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    return self.mInternalArrayValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func remove (_ inObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") {\n    if let idx = self.mInternalArrayValue.firstIndex (of: inObject) {\n      self.mInternalArrayValue.remove (at: idx)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func add (_ inObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") {\n    if !self.internalSetValue.contains (inObject) {\n      self.mInternalArrayValue.append (inObject)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Stored Array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 651)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_7 = in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 654)).boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("// StoredArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("class StoredArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : StandAloneArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (", EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol, Sendable {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init (usedForSignature inUsedForSignature : Bool, key inKey : String) {\n    self.mUsedForSignature = inUsedForSignature\n    self.key = inKey\n    super.init ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  \n  final let key : String\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromValueDictionary inDictionary : [String : Any],\n                   managedObjectArray inManagedObjectArray : [EBManagedObject]) {\n    if let objectSavingIndexArray = inDictionary [self.key] as\? [Int] {\n      var objectArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n      for idx in objectSavingIndexArray {\n        objectArray.append (inManagedObjectArray [idx] as! ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (")\n      }\n      self.setProp (objectArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromRange inRange : NSRange, ofData inData : Data, _ inRawObjectArray : [RawObject]) {\n    var objectArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n    let indexArray = inData.base62EncodedIntArray (fromRange: inRange)\n    for idx in indexArray {\n      objectArray.append (inRawObjectArray [idx].object as! ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (")\n    }\n    self.setProp (objectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func store (inDictionary ioDictionary : inout [String : Any]) {\n    if self.mInternalArrayValue.count > 0 {\n      var array = [Int] ()\n      for object in self.mInternalArrayValue.values {\n        array.append (object.savingIndex)\n      }\n      ioDictionary [self.key] = array\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func enterRelationshipObjects (intoArray ioArray : inout [EBManagedObject]) {\n    if self.mInternalArrayValue.count > 0 {\n      for object in self.mInternalArrayValue.values {\n        ioArray.append (object)\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func appendValueTo (data ioData : inout Data) {\n    enterToManyRelationshipObjectIndexes (from: self.propval.values, into: &ioData)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Signature \?\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private let mUsedForSignature : Bool\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">,\n                                 addedSet inAddedSet : EBReferenceSet <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n    if self.mUsedForSignature {\n      for managedObject in inRemovedSet.values {\n        managedObject.setSignatureObserver (observer: nil)\n      }\n      for managedObject in inAddedSet.values {\n        managedObject.setSignatureObserver (observer: self)\n      }\n    }\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   signature\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak final var mSignatureObserver : (any EBSignatureObserverProtocol)\? = nil // SOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mSignatureCache : UInt32\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setSignatureObserver (observer inObserver : (any EBSignatureObserverProtocol)\?) {\n    self.mSignatureObserver\?.clearSignatureCache ()\n    self.mSignatureObserver = inObserver\n    inObserver\?.clearSignatureCache ()\n    self.clearSignatureCache ()\n }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func signature () -> UInt32 {\n    let computedSignature : UInt32\n    if let s = self.mSignatureCache {\n      computedSignature = s\n    }else{\n      computedSignature = self.computeSignature ()\n      self.mSignatureCache = computedSignature\n    }\n    return computedSignature\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func computeSignature () -> UInt32 {\n    var crc : UInt32 = 0\n    for object in self.mInternalArrayValue.values {\n      crc.accumulate (u32: object.signature ())\n    }\n    return crc\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func clearSignatureCache () {\n    if self.mSignatureCache != nil {\n      self.mSignatureCache = nil\n      self.mSignatureObserver\?.clearSignatureCache ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Preferences array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 800)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_8 = in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 803)).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("// PreferencesArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class PreferencesArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : StandAloneArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mPrefKey : String\n  private let mObserverForWritingPreferences = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init (prefKey inPrefKey : String) {\n    self.mPrefKey = inPrefKey\n    super.init ()\n    if let array = UserDefaults.standard.array (forKey: inPrefKey) as\? [[String : Any]] {\n      var objectArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n      for dictionary in array {\n        let object = newInstanceOfEntityNamed (self.undoManager, \"") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\") as! ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\n        object.setUpProperties (fromValueDictionary: dictionary, managedObjectArray: [])\n        objectArray.append (object)\n      }\n      self.setProp (objectArray)\n    }\n") ;
    GGS_uint index_33741_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_33741 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_33741.hasCurrentObject ()) {
        result.appendString ("    self.toMany_") ;
        result.appendString (enumerator_33741.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.mObserverForWritingPreferences)\n") ;
        enumerator_33741.gotoNextObject () ;
        index_33741_.increment () ;
      }
    }
    result.appendString ("    self.mObserverForWritingPreferences.mEventCallBack = { [weak self] in self\?.writeInPreferences () }\n }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func writeInPreferences () {\n    var dictionaryArray = [[String  : Any]] ()\n    for object in self.mInternalArrayValue.values {\n      var d = [String  : Any] ()\n      object.savePropertiesAndRelationshipsIntoDictionary (&d)\n      d [ENTITY_KEY] = nil // Remove entity key, not used in preferences\n      dictionaryArray.append (d)\n    }\n    UserDefaults.standard.set (dictionaryArray, forKey: self.mPrefKey)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToOneImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (Compiler * inCompiler,
                                                                                          const GGS_string & in_ENTITY_5F_NAME,
                                                                                          const GGS_string & /* in_SUPER_5F_CLASS_5F_NAME */,
                                                                                          const GGS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                          const GGS_propertyGenerationList & /* in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                          const GGS_atomicProxyGenerationList & /* in_PROXY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                          const GGS_toManyProxyGenerationList & /* in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                          const GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                          const GGS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                          const GGS_toOnePropertyGenerationList & /* in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST */,
                                                                                          const GGS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                          const GGS_stringset & /* in_SIGNATURE_5F_SET */,
                                                                                          const GGS_bool & /* in_IS_5F_GRAPHIC_5F_ENTITY */,
                                                                                          const GGS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                          const GGS_stringset & /* in_OVERRIDEN_5F_TRANSIENTS */,
                                                                                          const GGS_externSwiftDelegateList & /* in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    ReadOnlyObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass ReadOnlyObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : EBReadOnlyAbstractObjectProperty <") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\?) {\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  //--- Remove observers from removed objects\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).add_operation (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).add_operation (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("    if let oldValue = inOldValue {\n") ;
    GGS_uint index_1161_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_1161 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_1161.hasCurrentObject ()) {
        result.appendString ("      oldValue.") ;
        result.appendString (enumerator_1161.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.stopsBeingObserved (by: self.") ;
        result.appendString (enumerator_1161.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Stored property\n") ;
        enumerator_1161.gotoNextObject () ;
        index_1161_.increment () ;
      }
    }
    GGS_uint index_1363_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_transientPropertyGenerationList enumerator_1363 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_1363.hasCurrentObject ()) {
        result.appendString ("      oldValue.") ;
        result.appendString (enumerator_1363.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.stopsBeingObserved (by: self.") ;
        result.appendString (enumerator_1363.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Transient property\n") ;
        enumerator_1363.gotoNextObject () ;
        index_1363_.increment () ;
      }
    }
    GGS_uint index_1576_ (0) ;
    if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_computedPropertyGenerationList enumerator_1576 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_1576.hasCurrentObject ()) {
        result.appendString ("      oldValue.") ;
        result.appendString (enumerator_1576.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.stopsBeingObserved (by: self.") ;
        result.appendString (enumerator_1576.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Computed property\n") ;
        enumerator_1576.gotoNextObject () ;
        index_1576_.increment () ;
      }
    }
    GGS_uint index_1772_ (0) ;
    if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
      UpEnumerator_toManyPropertyGenerationList enumerator_1772 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
      while (enumerator_1772.hasCurrentObject ()) {
        result.appendString ("      if let relay = self.mObserversOf_") ;
        result.appendString (enumerator_1772.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" { // to Many\n        oldValue.") ;
        result.appendString (enumerator_1772.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
        enumerator_1772.gotoNextObject () ;
        index_1772_.increment () ;
      }
    }
    result.appendString ("    }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  //--- Add observers to added objects\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).add_operation (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).add_operation (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("    if let newValue = self.mWeakInternalValue {\n") ;
    GGS_uint index_2297_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_2297 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_2297.hasCurrentObject ()) {
        result.appendString ("      newValue.") ;
        result.appendString (enumerator_2297.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.startsBeingObserved (by: self.") ;
        result.appendString (enumerator_2297.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Stored property\n") ;
        enumerator_2297.gotoNextObject () ;
        index_2297_.increment () ;
      }
    }
    GGS_uint index_2500_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_transientPropertyGenerationList enumerator_2500 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_2500.hasCurrentObject ()) {
        result.appendString ("      newValue.") ;
        result.appendString (enumerator_2500.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.startsBeingObserved (by: self.") ;
        result.appendString (enumerator_2500.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Transient property\n") ;
        enumerator_2500.gotoNextObject () ;
        index_2500_.increment () ;
      }
    }
    GGS_uint index_2714_ (0) ;
    if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_computedPropertyGenerationList enumerator_2714 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_2714.hasCurrentObject ()) {
        result.appendString ("      newValue.") ;
        result.appendString (enumerator_2714.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.startsBeingObserved (by: self.") ;
        result.appendString (enumerator_2714.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Computed property\n") ;
        enumerator_2714.gotoNextObject () ;
        index_2714_.increment () ;
      }
    }
    GGS_uint index_2911_ (0) ;
    if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
      UpEnumerator_toManyPropertyGenerationList enumerator_2911 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
      while (enumerator_2911.hasCurrentObject ()) {
        result.appendString ("      if let relay = self.mObserversOf_") ;
        result.appendString (enumerator_2911.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" { // to Many\n        newValue.") ;
        result.appendString (enumerator_2911.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
        enumerator_2911.gotoNextObject () ;
        index_2911_.increment () ;
      }
    }
    result.appendString ("    }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n") ;
  GGS_uint index_3192_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_3192 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3192.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_3192.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' stored property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final let ") ;
      result.appendString (enumerator_3192.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property = EBTransientProperty <") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_3192.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 64)).stringValue ()) ;
      result.appendString ("\?> ()\n\n") ;
      enumerator_3192.gotoNextObject () ;
      index_3192_.increment () ;
    }
  }
  GGS_uint index_3636_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_3636 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_3636.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_3636.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' transient property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final let ") ;
      result.appendString (enumerator_3636.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property = EBTransientProperty <") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_3636.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 73)).stringValue ()) ;
      result.appendString ("\?> ()\n\n") ;
      enumerator_3636.gotoNextObject () ;
      index_3636_.increment () ;
    }
  }
  GGS_uint index_4090_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_4090 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_4090.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_4090.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' computed property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final let ") ;
      result.appendString (enumerator_4090.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property = EBTransientProperty <") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_4090.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 82)).stringValue ()) ;
      result.appendString ("\?> ()\n\n") ;
      enumerator_4090.gotoNextObject () ;
      index_4090_.increment () ;
    }
  }
  GGS_uint index_4527_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    UpEnumerator_toManyPropertyGenerationList enumerator_4527 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
    while (enumerator_4527.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observable toMany property: ") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.mWeakInternalValue\?.") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      self.mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_4527.gotoNextObject () ;
      index_4527_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   INIT\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n") ;
  GGS_uint index_6224_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_6224 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_6224.hasCurrentObject ()) {
      result.appendString ("  //--- Configure ") ;
      result.appendString (enumerator_6224.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" simple stored property\n    self.") ;
      result.appendString (enumerator_6224.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?.") ;
      result.appendString (enumerator_6224.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.optionalSelection \?\? .single (nil)\n    }\n") ;
      enumerator_6224.gotoNextObject () ;
      index_6224_.increment () ;
    }
  }
  GGS_uint index_6567_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_6567 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_6567.hasCurrentObject ()) {
      result.appendString ("  //--- Configure ") ;
      result.appendString (enumerator_6567.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" transient property\n    self.") ;
      result.appendString (enumerator_6567.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?.") ;
      result.appendString (enumerator_6567.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.optionalSelection \?\? .single (nil)\n    }\n") ;
      enumerator_6567.gotoNextObject () ;
      index_6567_.increment () ;
    }
  }
  GGS_uint index_6914_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_6914 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_6914.hasCurrentObject ()) {
      result.appendString ("  //--- Configure ") ;
      result.appendString (enumerator_6914.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" computed property\n    self.") ;
      result.appendString (enumerator_6914.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?.") ;
      result.appendString (enumerator_6914.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.optionalSelection \?\? .single (nil)\n    }\n") ;
      enumerator_6914.gotoNextObject () ;
      index_6914_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n//    StoredObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class StoredObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : ReadOnlyObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (", EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol {\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init (usedForSignature inUsedForSignature : Bool, strongRef inStrongReference : Bool, key inKey : String) {\n    self.mUsedForSignature = inUsedForSignature\n    self.mIsStrongReference = inStrongReference\n    self.mKey = inKey\n    super.init ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mKey : String\n  var key : String { return self.mKey }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromValueDictionary inDictionary : [String : Any],\n                   managedObjectArray inManagedObjectArray : [EBManagedObject]) {\n    if let objectSavingIndex = inDictionary [self.mKey] as\? Int {\n      let object = inManagedObjectArray [objectSavingIndex] as! ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n      self.setProp (object)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromRange inRange : NSRange, ofData inData : Data, _ inRawObjectArray : [RawObject]) {\n    if let idx = inData.base62EncodedInt (range: inRange) {\n      let object = inRawObjectArray [idx].object as! ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n      self.setProp (object)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func store (inDictionary ioDictionary : inout [String : Any]) {\n    if let idx = self.mWeakInternalValue\?.savingIndex {\n      ioDictionary [self.mKey] = idx\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func enterRelationshipObjects (intoArray ioArray : inout [EBManagedObject]) {\n    if let object = self.mWeakInternalValue {\n      ioArray.append (object)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func appendValueTo (data ioData : inout Data) {\n    if let object = self.propval {\n      ioData.append (base62Encoded: object.savingIndex)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Signature \?\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mUsedForSignature : Bool\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  weak var undoManager : UndoManager\? = nil // SOULD BE WEAK\n\n") ;
  const GalgasBool test_2 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Opposite relationship management\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSetOppositeRelationship : Optional < (_ inManagedObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Void > = nil\n  private var mResetOppositeRelationship : Optional < (_ inManagedObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Void > = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setOppositeRelationShipFunctions (setter inSetter : @escaping (_ inManagedObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Void,\n                                         resetter inResetter : @escaping (_ inManagedObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Void) {\n    self.mSetOppositeRelationship = inSetter\n    self.mResetOppositeRelationship = inResetter\n  }\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model will change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\?) {\n  //--- Register old value in undo manager\n    self.undoManager\?.registerUndo (withTarget: self) { selfTarget in\n      selfTarget.setProp (inOldValue) // Ok in Swift 6.2\n      // MainActor.assumeIsolated { selfTarget.setProp (inOldValue) }\n    }\n  //---\n    if let object = inOldValue {\n      if self.mUsedForSignature {\n        object.setSignatureObserver (observer: nil)\n      }\n") ;
  const GalgasBool test_3 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("      self.mResetOppositeRelationship\? (object)\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    }\n  //---\n    if let object = self.mWeakInternalValue {\n      if self.mUsedForSignature {\n        object.setSignatureObserver (observer: self)\n      }\n") ;
  const GalgasBool test_4 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("      self.mSetOppositeRelationship\? (object)\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    }\n  //---\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model did change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n  //--- Notify observers\n    self.observedObjectDidChange ()\n    self.clearSignatureCache ()\n  //---\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var selection : EBSelection < ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\? > {\n    if let object = self.mWeakInternalValue {\n      return .single (object)\n    }else{\n      return .empty\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var propval : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\? { return self.mWeakInternalValue }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   setProp\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mIsStrongReference : Bool\n  private var mStrongInternalValue : EBManagedObject\? = nil // Only used for retaining\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setProp (_ inValue : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\?) {\n    self.mWeakInternalValue = inValue\n    if self.mIsStrongReference {\n      self.mStrongInternalValue = inValue\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   signature\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mSignatureObserver : (any EBSignatureObserverProtocol)\? = nil // SOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSignatureCache : UInt32\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSignatureObserver (observer inObserver : (any EBSignatureObserverProtocol)\?) {\n    self.mSignatureObserver\?.clearSignatureCache ()\n    self.mSignatureObserver = inObserver\n    inObserver\?.clearSignatureCache ()\n    self.clearSignatureCache ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func signature () -> UInt32 {\n    let computedSignature : UInt32\n    if let s = self.mSignatureCache {\n      computedSignature = s\n    }else{\n      computedSignature = self.computeSignature ()\n      self.mSignatureCache = computedSignature\n    }\n    return computedSignature\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func computeSignature () -> UInt32 {\n    var crc : UInt32 = 0\n    if let object = self.mWeakInternalValue {\n      crc.accumulate (u32: object.signature ())\n    }\n    return crc\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func clearSignatureCache () {\n    if self.mSignatureCache != nil {\n      self.mSignatureCache = nil\n      self.mSignatureObserver\?.clearSignatureCache ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate managedObjectFactory'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (Compiler * /* inCompiler */,
                                                                              const GGS_entityListForGeneratingEBManagedObjectContext & in_ENTITY_5F_LIST
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let kEntityDictionary : [String : EBManagedObject.Type] = [\n") ;
  GGS_uint index_510_ (0) ;
  if (in_ENTITY_5F_LIST.isValid ()) {
    UpEnumerator_entityListForGeneratingEBManagedObjectContext enumerator_510 (in_ENTITY_5F_LIST) ;
    while (enumerator_510.hasCurrentObject ()) {
      result.appendString ("  \"") ;
      result.appendString (enumerator_510.current_mEntityName (HERE).stringValue ()) ;
      result.appendString ("\" : ") ;
      result.appendString (enumerator_510.current_mEntityName (HERE).stringValue ()) ;
      result.appendString (".self") ;
      GGS_uint index_597_ (0) ;
      if (enumerator_510.current_mObsoleteEntityNames (HERE).isValid ()) {
        UpEnumerator_lstringlist enumerator_597 (enumerator_510.current_mObsoleteEntityNames (HERE)) ;
        while (enumerator_597.hasCurrentObject ()) {
          result.appendString (",\n  \"") ;
          result.appendString (enumerator_597.current_mValue (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("\" : ") ;
          result.appendString (enumerator_510.current_mEntityName (HERE).stringValue ()) ;
          result.appendString (".self") ;
          enumerator_597.gotoNextObject () ;
          index_597_.increment () ;
        }
      }
      enumerator_510.gotoNextObject () ;
      if (enumerator_510.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_510_.increment () ;
    }
  }
  result.appendString ("\n]\n\n//--------------------------------------------------------------------------------------------------\n//  newInstanceOfEntityNamed\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func newInstanceOfEntityNamed (_ inUndoManager : UndoManager\?,\n                                          _ inEntityTypeName : String) -> EBManagedObject {\n  let T = kEntityDictionary [inEntityTypeName]!\n  return T.init (inUndoManager)\n}\n\n//--------------------------------------------------------------------------------------------------\n//   makeManagedObjectFromDictionary\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func makeManagedObjectFromDictionary (_ inUndoManager : UndoManager\?,\n                                                 _ inDictionary : [String : Any]) -> EBManagedObject {\n  let entityName = inDictionary [ENTITY_KEY] as! String\n  let object = newInstanceOfEntityNamed (inUndoManager, entityName)\n  object.setUpProperties (fromValueDictionary: inDictionary, managedObjectArray: [])\n  return object\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@proxyDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_proxyDeclarationAST temp_0 = this ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  const GGS_proxyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_830 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 23)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 23)), temp_2.readProperty_mProxyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_proxyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_830, temp_3, inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 24)) ;
  }
  {
  const GGS_proxyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_830, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("proxy.galgas4", 25)) ;
  }
  {
  const GGS_proxyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_830, temp_5.readProperty_mProxyTypeName () COMMA_SOURCE_FILE ("proxy.galgas4", 26)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@proxyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_proxyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_proxyDeclarationAST temp_0 = this ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  const GGS_proxyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 32)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 32)), temp_2.readProperty_mProxyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@proxyDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                          GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_proxyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_3061 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_proxyKind_3275 ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_3286_3 ; // Joker input parameter
  GGS_actionMap joker_3286_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_3286_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mProxyTypeName (), var_proxyKind_3275, joker_3286_3, joker_3286_2, joker_3286_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 90)) ;
  switch (var_proxyKind_3275.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_proxyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("an atomic type is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.galgas4", 93)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_3416__0 ;
      GGS_bool extractedValue_3425_isGraphic_1 ;
      GGS_bool extractedValue_3437__2 ;
      GGS_bool extractedValue_3437__3 ;
      var_proxyKind_3275.getAssociatedValuesFor_entity (extractedValue_3416__0, extractedValue_3425_isGraphic_1, extractedValue_3437__2, extractedValue_3437__3) ;
      const GGS_proxyDeclarationAST temp_4 = this ;
      switch (temp_4.readProperty_mProxyKind ().enumValue ()) {
      case GGS_proxyKind::Enumeration::invalid:
        break ;
      case GGS_proxyKind::Enumeration::enum_toManyProxy:
        {
          const GGS_proxyDeclarationAST temp_5 = this ;
          GGS_propertyKind var_k_3507 = GGS_propertyKind::class_func_toMany (temp_5.readProperty_mProxyTypeName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("proxy.galgas4", 99)), extractedValue_3425_isGraphic_1, GGS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("proxy.galgas4", 101))  COMMA_SOURCE_FILE ("proxy.galgas4", 97)) ;
          {
          const GGS_proxyDeclarationAST temp_6 = this ;
          var_entry_3061.mProperty_mPropertyMap.setter_insertKey (temp_6.readProperty_mProxyName (), var_k_3507, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 103)) ;
          }
        }
        break ;
      case GGS_proxyKind::Enumeration::enum_propertyProxy:
        {
          const GGS_proxyDeclarationAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("this type should be an entity"), fixItArray8  COMMA_SOURCE_FILE ("proxy.galgas4", 105)) ;
        }
        break ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_3866__0 ;
      var_proxyKind_3275.getAssociatedValuesFor_document (extractedValue_3866__0) ;
      const GGS_proxyDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("an atomic type is required here"), fixItArray10  COMMA_SOURCE_FILE ("proxy.galgas4", 108)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_3958_type_0 ;
      var_proxyKind_3275.getAssociatedValuesFor_atomic (extractedValue_3958_type_0) ;
      {
      const GGS_proxyDeclarationAST temp_11 = this ;
      var_entry_3061.mProperty_mPropertyMap.setter_insertKey (temp_11.readProperty_mProxyName (), GGS_propertyKind::class_func_property (extractedValue_3958_type_0, GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("proxy.galgas4", 110))  COMMA_SOURCE_FILE ("proxy.galgas4", 110)), GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 110)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_3061, inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 112)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@proxyDeclarationAST secondAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_secondAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_proxyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_4448 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_propertyKind var_relationshipKind_4661 ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  GGS_actionMap joker_4679_2 ; // Joker input parameter
  GGS_bool joker_4679_1 ; // Joker input parameter
  var_entry_4448.readProperty_mPropertyMap ().method_searchKey (temp_1.readProperty_mToOneRelationshipName (), var_relationshipKind_4661, joker_4679_2, joker_4679_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 122)) ;
  switch (var_relationshipKind_4661.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_4739__0 ;
      GGS_bool extractedValue_4739__1 ;
      var_relationshipKind_4661.getAssociatedValuesFor_arrayController (extractedValue_4739__0, extractedValue_4739__1) ;
      const GGS_proxyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.galgas4", 125)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_4858__0 ;
      var_relationshipKind_4661.getAssociatedValuesFor_selectionController (extractedValue_4858__0) ;
      const GGS_proxyDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("proxy.galgas4", 127)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_4967__0 ;
      GGS_propertyAccessibility extractedValue_4967__1 ;
      var_relationshipKind_4661.getAssociatedValuesFor_property (extractedValue_4967__0, extractedValue_4967__1) ;
      const GGS_proxyDeclarationAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("proxy.galgas4", 129)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_5074__0 ;
      GGS_propertyAccessibility extractedValue_5074__1 ;
      GGS_bool extractedValue_5074__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_5074__3 ;
      var_relationshipKind_4661.getAssociatedValuesFor_toMany (extractedValue_5074__0, extractedValue_5074__1, extractedValue_5074__2, extractedValue_5074__3) ;
      const GGS_proxyDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("proxy.galgas4", 131)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_5179_toOneTypeName_0 ;
      GGS_propertyAccessibility extractedValue_5195__1 ;
      GGS_bool extractedValue_5195__2 ;
      GGS_toOneOppositeRelationship extractedValue_5195__3 ;
      GGS_bool extractedValue_5195__4 ;
      var_relationshipKind_4661.getAssociatedValuesFor_toOne (extractedValue_5179_toOneTypeName_0, extractedValue_5195__1, extractedValue_5195__2, extractedValue_5195__3, extractedValue_5195__4) ;
      GGS_propertyMap var_propertyMap_5269 ;
      GGS_classKind joker_5260 ; // Joker input parameter
      GGS_actionMap joker_5282_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5282_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5179_toOneTypeName_0, joker_5260, var_propertyMap_5269, joker_5282_2, joker_5282_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 133)) ;
      GGS_propertyKind var_propertyKind_5341 ;
      const GGS_proxyDeclarationAST temp_10 = this ;
      GGS_actionMap joker_5355_2 ; // Joker input parameter
      GGS_bool joker_5355_1 ; // Joker input parameter
      var_propertyMap_5269.method_searchKey (temp_10.readProperty_mPropertyName (), var_propertyKind_5341, joker_5355_2, joker_5355_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 134)) ;
      switch (var_propertyKind_5341.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_5407_propertyType_0 ;
          GGS_propertyAccessibility extractedValue_5422__1 ;
          var_propertyKind_5341.getAssociatedValuesFor_property (extractedValue_5407_propertyType_0, extractedValue_5422__1) ;
          {
          const GGS_proxyDeclarationAST temp_11 = this ;
          const GGS_proxyDeclarationAST temp_12 = this ;
          const GGS_proxyDeclarationAST temp_13 = this ;
          const GGS_proxyDeclarationAST temp_14 = this ;
          var_entry_4448.mProperty_mPropertyGenerationList.setter_append (GGS_atomicProxyGeneration::init_21__21__21__21__21_ (temp_11.readProperty_mProxyName ().readProperty_string (), temp_12.readProperty_mProxyKind (), extractedValue_5407_propertyType_0, temp_13.readProperty_mToOneRelationshipName ().readProperty_string (), temp_14.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 137)) ;
          }
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_proxyDeclarationAST temp_16 = this ;
            test_15 = GGS_bool (ComparisonKind::notEqual, temp_16.readProperty_mProxyKind ().objectCompare (GGS_proxyKind::class_func_propertyProxy (SOURCE_FILE ("proxy.galgas4", 145)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_proxyDeclarationAST temp_17 = this ;
              GenericArray <FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (temp_17.readProperty_mPropertyName ().readProperty_location (), GGS_string ("this property is not atomic"), fixItArray18  COMMA_SOURCE_FILE ("proxy.galgas4", 146)) ;
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_5837_toManyTypeName_0 ;
          GGS_propertyAccessibility extractedValue_5854__1 ;
          GGS_bool extractedValue_5854__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_5854__3 ;
          var_propertyKind_5341.getAssociatedValuesFor_toMany (extractedValue_5837_toManyTypeName_0, extractedValue_5854__1, extractedValue_5854__2, extractedValue_5854__3) ;
          GGS_classKind joker_5922_4 ; // Joker input parameter
          GGS_propertyMap joker_5922_3 ; // Joker input parameter
          GGS_actionMap joker_5922_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_5922_1 ; // Joker input parameter
          ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5837_toManyTypeName_0, joker_5922_4, joker_5922_3, joker_5922_2, joker_5922_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 149)) ;
          {
          const GGS_proxyDeclarationAST temp_19 = this ;
          const GGS_proxyDeclarationAST temp_20 = this ;
          const GGS_proxyDeclarationAST temp_21 = this ;
          const GGS_proxyDeclarationAST temp_22 = this ;
          var_entry_4448.mProperty_mPropertyGenerationList.setter_append (GGS_toManyProxyGeneration::init_21__21__21__21__21_ (temp_19.readProperty_mProxyName ().readProperty_string (), temp_20.readProperty_mProxyKind (), extractedValue_5837_toManyTypeName_0.readProperty_string (), temp_21.readProperty_mToOneRelationshipName ().readProperty_string (), temp_22.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 150)) ;
          }
          {
          ioArgument_ioGeneration.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.setter_insert (extractedValue_5837_toManyTypeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 158)) ;
          }
          GalgasBool test_23 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_23) {
            const GGS_proxyDeclarationAST temp_24 = this ;
            test_23 = GGS_bool (ComparisonKind::notEqual, temp_24.readProperty_mProxyKind ().objectCompare (GGS_proxyKind::class_func_toManyProxy (SOURCE_FILE ("proxy.galgas4", 159)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_23) {
              const GGS_proxyDeclarationAST temp_25 = this ;
              GenericArray <FixItDescription> fixItArray26 ;
              inCompiler->emitSemanticError (temp_25.readProperty_mPropertyName ().readProperty_location (), GGS_string ("this property is not atomic"), fixItArray26  COMMA_SOURCE_FILE ("proxy.galgas4", 160)) ;
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_6413__0 ;
          GGS_propertyAccessibility extractedValue_6413__1 ;
          GGS_bool extractedValue_6413__2 ;
          GGS_toOneOppositeRelationship extractedValue_6413__3 ;
          GGS_bool extractedValue_6413__4 ;
          var_propertyKind_5341.getAssociatedValuesFor_toOne (extractedValue_6413__0, extractedValue_6413__1, extractedValue_6413__2, extractedValue_6413__3, extractedValue_6413__4) ;
          const GGS_proxyDeclarationAST temp_27 = this ;
          switch (temp_27.readProperty_mProxyKind ().enumValue ()) {
          case GGS_proxyKind::Enumeration::invalid:
            break ;
          case GGS_proxyKind::Enumeration::enum_propertyProxy:
            {
              const GGS_proxyDeclarationAST temp_28 = this ;
              GenericArray <FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (temp_28.readProperty_mPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray29  COMMA_SOURCE_FILE ("proxy.galgas4", 165)) ;
            }
            break ;
          case GGS_proxyKind::Enumeration::enum_toManyProxy:
            {
              const GGS_proxyDeclarationAST temp_30 = this ;
              GenericArray <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray31  COMMA_SOURCE_FILE ("proxy.galgas4", 167)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_6699__0 ;
          GGS_bool extractedValue_6699__1 ;
          var_propertyKind_5341.getAssociatedValuesFor_arrayController (extractedValue_6699__0, extractedValue_6699__1) ;
          const GGS_proxyDeclarationAST temp_32 = this ;
          switch (temp_32.readProperty_mProxyKind ().enumValue ()) {
          case GGS_proxyKind::Enumeration::invalid:
            break ;
          case GGS_proxyKind::Enumeration::enum_propertyProxy:
            {
              const GGS_proxyDeclarationAST temp_33 = this ;
              GenericArray <FixItDescription> fixItArray34 ;
              inCompiler->emitSemanticError (temp_33.readProperty_mPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray34  COMMA_SOURCE_FILE ("proxy.galgas4", 172)) ;
            }
            break ;
          case GGS_proxyKind::Enumeration::enum_toManyProxy:
            {
              const GGS_proxyDeclarationAST temp_35 = this ;
              GenericArray <FixItDescription> fixItArray36 ;
              inCompiler->emitSemanticError (temp_35.readProperty_mPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray36  COMMA_SOURCE_FILE ("proxy.galgas4", 174)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_6988__0 ;
          var_propertyKind_5341.getAssociatedValuesFor_selectionController (extractedValue_6988__0) ;
          const GGS_proxyDeclarationAST temp_37 = this ;
          switch (temp_37.readProperty_mProxyKind ().enumValue ()) {
          case GGS_proxyKind::Enumeration::invalid:
            break ;
          case GGS_proxyKind::Enumeration::enum_propertyProxy:
            {
              const GGS_proxyDeclarationAST temp_38 = this ;
              GenericArray <FixItDescription> fixItArray39 ;
              inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray39  COMMA_SOURCE_FILE ("proxy.galgas4", 179)) ;
            }
            break ;
          case GGS_proxyKind::Enumeration::enum_toManyProxy:
            {
              const GGS_proxyDeclarationAST temp_40 = this ;
              GenericArray <FixItDescription> fixItArray41 ;
              inCompiler->emitSemanticError (temp_40.readProperty_mPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray41  COMMA_SOURCE_FILE ("proxy.galgas4", 181)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_4448, inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 185)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.galgas4", 209)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 209)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 209)) ;
  const GGS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 210)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 210)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 210)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.galgas4", 211)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 211)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 211)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 211)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 212)).add_operation (GGS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 212)).add_operation (temp_2.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 212)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 212)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 212)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_initCode (Compiler */* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_bindPropertyInSelectionController (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                       const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                       const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.galgas4", 234)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 234)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 234)) ;
  const GGS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 235)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 235)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 235)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.galgas4", 236)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 236)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 236)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 236)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("  var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 237)).add_operation (GGS_string ("_modelDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 237)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 237)) ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  const GGS_toManyProxyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 238)).add_operation (GGS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 238)).add_operation (temp_3.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 238)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 238)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 238)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.galgas4", 239)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 239)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 239)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 239)) ;
  const GGS_toManyProxyGeneration temp_4 = this ;
  const GGS_toManyProxyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("  var ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 240)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 240)).add_operation (temp_5.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 240)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 240)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 240)) ;
  result_result.plusAssignOperation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 241)) ;
  const GGS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssignOperation(GGS_string ("      switch self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 242)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 242)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 242)) ;
  result_result.plusAssignOperation(GGS_string ("      case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 243)) ;
  result_result.plusAssignOperation(GGS_string ("        return EBReferenceArray ()\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 244)) ;
  result_result.plusAssignOperation(GGS_string ("      case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 245)) ;
  result_result.plusAssignOperation(GGS_string ("        return EBReferenceArray (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 246)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 247)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 248)) ;
  result_result.plusAssignOperation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 249)) ;
  const GGS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 250)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 250)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 250)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 251)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 252)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toManyProxyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 258)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 258)) ;
  result_result.plusAssignOperation(GGS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 259)) ;
  result_result.plusAssignOperation(GGS_string ("      let controller = EBObservablePropertyController (\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 260)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("        observedObjects: [self.").add_operation (temp_1.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 261)).add_operation (GGS_string ("_property],\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 261)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 261)) ;
  result_result.plusAssignOperation(GGS_string ("        callBack: { [weak self] in\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 262)) ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("          if let me = self, let model = me.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 263)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 263)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 263)) ;
  const GGS_toManyProxyGeneration temp_3 = this ;
  const GGS_toManyProxyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("            me.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 264)).add_operation (GGS_string ("_property.setModel (model."), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 264)).add_operation (temp_4.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 264)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 264)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 264)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 265)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 266)) ;
  result_result.plusAssignOperation(GGS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 267)) ;
  const GGS_toManyProxyGeneration temp_5 = this ;
  const GGS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssignOperation(GGS_string ("      self.").add_operation (temp_5.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 268)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 268)).add_operation (temp_6.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 268)).add_operation (GGS_string ("_StartsBeingObserved (by: controller)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 268)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 268)) ;
  const GGS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 269)).add_operation (GGS_string ("_modelDidChangeController = controller\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 269)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 269)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 270)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.galgas4", 293)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 293)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 293)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 294)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 294)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 294)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.galgas4", 295)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 295)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 295)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 295)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 296)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 296)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 296)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 296)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 296)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 296)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_initCode (Compiler */* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.galgas4", 308)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 308)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 308)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 309)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 309)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 309)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 310)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 310)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 310)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 310)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 310)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 311)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 311)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 311)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 312)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 313)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 314)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 315)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 316)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 317)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 318)) ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 319)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 319)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 319)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 319)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 320)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 321)) ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 322)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 322)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 322)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 323)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 324)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 325)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 326)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 327)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 328)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 329)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 330)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 331)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 332)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 333)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 334)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 335)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 336)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 337)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 338)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 339)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 340)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 341)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 342)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 343)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 344)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  const GGS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 346)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 346)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 346)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 346)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 346)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 346)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 347)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 348)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 349)) ;
  result_result.plusAssignOperation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 350)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 351)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 352)) ;
  const GGS_atomicProxyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 353)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 353)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 353)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 354)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 355)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 356)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 357)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 358)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                       const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                       const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.galgas4", 368)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 368)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 368)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 369)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 369)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 369)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.galgas4", 370)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 370)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 370)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 370)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 371)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 371)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 371)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 371)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 371)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 371)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.galgas4", 372)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 372)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 372)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 372)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("  var ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 373)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 373)).add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 373)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 373)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 373)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 373)) ;
  result_result.plusAssignOperation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 374)) ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("      return self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 375)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 375)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 375)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 376)) ;
  result_result.plusAssignOperation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 377)) ;
  result_result.plusAssignOperation(GGS_string ("      if let unwrappedNewValue = newValue {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 378)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  result_result.plusAssignOperation(GGS_string ("        self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 379)).add_operation (GGS_string ("_property.setProp (unwrappedNewValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 379)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 379)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 380)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 381)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 382)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 388)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 388)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 389)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 389)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 389)) ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("      if let object = self\?.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 390)).add_operation (GGS_string ("_property {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 390)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 390)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("        switch object.").add_operation (temp_3.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 391)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 391)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 391)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 392)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 393)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 394)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 395)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let optionalV) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 396)) ;
  result_result.plusAssignOperation(GGS_string ("          if let v = optionalV {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 397)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 398)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 399)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 400)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 401)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 402)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 403)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 404)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 405)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 406)) ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 407)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (_ inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 407)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 407)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 407)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 407)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 407)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  const GGS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("      self\?.").add_operation (temp_6.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 408)).add_operation (GGS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 408)).add_operation (temp_7.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 408)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 408)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 408)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 409)) ;
  const GGS_atomicProxyGeneration temp_8 = this ;
  const GGS_atomicProxyGeneration temp_9 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_8.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 410)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 410)).add_operation (temp_9.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 410)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 410)) ;
  const GGS_atomicProxyGeneration temp_10 = this ;
  result_result.plusAssignOperation(GGS_string ("_property.startsBeingObserved (by: self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 411)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 411)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas4", 411)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computedPropertyDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  const GGS_computedPropertyDeclarationAST temp_1 = this ;
  const GGS_computedPropertyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_686 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 15)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 15)), temp_2.readProperty_mComputedPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_computedPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_686, temp_3, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 16)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_686, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("computed-property.galgas4", 17)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_686, temp_5.readProperty_mComputedPropertyTypeName () COMMA_SOURCE_FILE ("computed-property.galgas4", 18)) ;
  }
  const GGS_computedPropertyDeclarationAST temp_6 = this ;
  UpEnumerator_observablePropertyList enumerator_984 (temp_6.readProperty_mDependencyList ()) ;
  while (enumerator_984.hasCurrentObject ()) {
    switch (enumerator_984.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GGS_observablePropertyAST::Enumeration::invalid:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
      {
        GGS_lstring extractedValue_1068_propertyName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootProperty (extractedValue_1068_propertyName_0) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_computedPropertyDeclarationAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            {
            const GGS_computedPropertyDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 23)).add_operation (extractedValue_1068_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 23)), extractedValue_1068_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 23)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
      {
        GGS_lstring extractedValue_1296_propertyName_0 ;
        GGS_lstring extractedValue_1310__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyWithOption (extractedValue_1296_propertyName_0, extractedValue_1310__1) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_computedPropertyDeclarationAST temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            {
            const GGS_computedPropertyDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 27)).add_operation (extractedValue_1296_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 27)), extractedValue_1296_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 27)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
      {
        GGS_lstring extractedValue_1529_relationshipName_0 ;
        GGS_lstring extractedValue_1547__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyRelationship (extractedValue_1529_relationshipName_0, extractedValue_1547__1) ;
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_computedPropertyDeclarationAST temp_14 = this ;
          test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            {
            const GGS_computedPropertyDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 31)).add_operation (extractedValue_1529_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 31)), extractedValue_1529_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 31)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
      {
        GGS_lstring extractedValue_1766_relationshipName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyNone (extractedValue_1766_relationshipName_0) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_computedPropertyDeclarationAST temp_17 = this ;
          test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            {
            const GGS_computedPropertyDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 35)).add_operation (extractedValue_1766_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 35)), extractedValue_1766_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 35)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
      {
        GGS_lstring extractedValue_2031_propertyName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfProperty (extractedValue_2031_propertyName_0) ;
        {
        const GGS_computedPropertyDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 39)).add_operation (extractedValue_2031_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 39)), extractedValue_2031_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 39)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
      {
        GGS_lstring extractedValue_2203_propertyName_0 ;
        GGS_lstring extractedValue_2217__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyWithOption (extractedValue_2203_propertyName_0, extractedValue_2217__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 41)).add_operation (extractedValue_2203_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 41)), extractedValue_2203_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 41)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
      {
        GGS_lstring extractedValue_2373_propertyName_0 ;
        GGS_lstring extractedValue_2387__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyArray (extractedValue_2373_propertyName_0, extractedValue_2387__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 43)).add_operation (extractedValue_2373_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 43)), extractedValue_2373_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 43)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
      {
        GGS_lstring extractedValue_2544_propertyName_0 ;
        GGS_lstring extractedValue_2558__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyObject (extractedValue_2544_propertyName_0, extractedValue_2558__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 45)).add_operation (extractedValue_2544_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 45)), extractedValue_2544_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 45)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
      {
        GGS_lstring extractedValue_2713_propertyName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyNone (extractedValue_2713_propertyName_0) ;
        {
        const GGS_computedPropertyDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 47)).add_operation (extractedValue_2713_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 47)), extractedValue_2713_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 47)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
      {
        GGS_lstring extractedValue_2876_propertyName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsProperty (extractedValue_2876_propertyName_0) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 49)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 49)).add_operation (extractedValue_2876_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 49)), extractedValue_2876_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 49)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
      {
        GGS_lstring extractedValue_3045_propertyName_0 ;
        GGS_lstring extractedValue_3059__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_3045_propertyName_0, extractedValue_3059__1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 51)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 51)).add_operation (extractedValue_3045_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 51)), extractedValue_3045_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 51)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
      {
        GGS_lstring extractedValue_3216_controllerName_0 ;
        GGS_lstring extractedValue_3239_propertyName_1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerProperty (extractedValue_3216_controllerName_0, extractedValue_3239_propertyName_1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 53)).add_operation (extractedValue_3216_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 53)), extractedValue_3216_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 53)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
      {
        GGS_lstring extractedValue_3425_controllerName_0 ;
        GGS_lstring extractedValue_3448_propertyName_1 ;
        GGS_lstring extractedValue_3469_secondaryPropertyName_2 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_3425_controllerName_0, extractedValue_3448_propertyName_1, extractedValue_3469_secondaryPropertyName_2) ;
        {
        const GGS_computedPropertyDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 55)).add_operation (extractedValue_3425_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 55)), extractedValue_3425_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 55)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
      {
        GGS_lstring extractedValue_3660_controllerName_0 ;
        GGS_lstring extractedValue_3683_propertyName_1 ;
        GGS_lstring extractedValue_3704_secondaryPropertyName_2 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerAllProperties (extractedValue_3660_controllerName_0, extractedValue_3683_propertyName_1, extractedValue_3704_secondaryPropertyName_2) ;
        {
        const GGS_computedPropertyDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 57)).add_operation (extractedValue_3660_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 57)), extractedValue_3660_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 57)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
      {
        GGS_lstring extractedValue_3893_controllerName_0 ;
        GGS_lstring extractedValue_3916_propertyName_1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerOneProperty (extractedValue_3893_controllerName_0, extractedValue_3916_propertyName_1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 59)).add_operation (extractedValue_3893_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 59)), extractedValue_3893_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 59)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superProperty:
      {
        GGS_lstring extractedValue_4191_superEntityName_0 ;
        GGS_lstring extractedValue_4217_propertyName_1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superProperty (extractedValue_4191_superEntityName_0, extractedValue_4217_propertyName_1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (extractedValue_4191_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 64)).add_operation (extractedValue_4217_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 64)), extractedValue_4217_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 64)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
      {
        GGS_lstring extractedValue_4396_superEntityName_0 ;
        GGS_lstring extractedValue_4422_propertyName_1 ;
        GGS_abstractDefaultValue extractedValue_4436__2 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_4396_superEntityName_0, extractedValue_4422_propertyName_1, extractedValue_4436__2) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (extractedValue_4396_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 66)).add_operation (extractedValue_4422_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 66)), extractedValue_4422_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.galgas4", 66)) ;
        }
      }
      break ;
    }
    enumerator_984.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_computedPropertyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  const GGS_computedPropertyDeclarationAST temp_1 = this ;
  const GGS_computedPropertyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 74)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 74)), temp_2.readProperty_mComputedPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computedPropertyDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_6555 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_6701 ;
  const GGS_computedPropertyDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_6712_3 ; // Joker input parameter
  GGS_actionMap joker_6712_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6712_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mComputedPropertyTypeName (), var_classKind_6701, joker_6712_3, joker_6712_2, joker_6712_1, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 130)) ;
  switch (var_classKind_6701.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_computedPropertyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("computed-property.galgas4", 133)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_6854_kind_0 ;
      var_classKind_6701.getAssociatedValuesFor_atomic (extractedValue_6854_kind_0) ;
      {
      const GGS_computedPropertyDeclarationAST temp_4 = this ;
      var_entry_6555.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mComputedPropertyName (), GGS_propertyKind::class_func_property (extractedValue_6854_kind_0, GGS_propertyAccessibility::class_func_computed (SOURCE_FILE ("computed-property.galgas4", 137))  COMMA_SOURCE_FILE ("computed-property.galgas4", 137)), GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 135)) ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_7050__0 ;
      var_classKind_6701.getAssociatedValuesFor_document (extractedValue_7050__0) ;
      const GGS_computedPropertyDeclarationAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.galgas4", 142)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_7155__0 ;
      GGS_bool extractedValue_7155__1 ;
      GGS_bool extractedValue_7155__2 ;
      GGS_bool extractedValue_7155__3 ;
      var_classKind_6701.getAssociatedValuesFor_entity (extractedValue_7155__0, extractedValue_7155__1, extractedValue_7155__2, extractedValue_7155__3) ;
      const GGS_computedPropertyDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("computed-property.galgas4", 144)) ;
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_6555, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 146)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computedPropertyDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GGS_generationStruct & ioArgument_ioGeneration,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_classKind_7797 ;
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  GGS_propertyMap joker_7808_3 ; // Joker input parameter
  GGS_actionMap joker_7808_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_7808_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mComputedPropertyTypeName (), var_classKind_7797, joker_7808_3, joker_7808_2, joker_7808_1, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 159)) ;
  GGS_typeKind var_typeKind_7845 ;
  switch (var_classKind_7797.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_computedPropertyDeclarationAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("computed-property.galgas4", 164)) ;
      var_typeKind_7845.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_8007_kind_0 ;
      var_classKind_7797.getAssociatedValuesFor_atomic (extractedValue_8007_kind_0) ;
      var_typeKind_7845 = extractedValue_8007_kind_0 ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_8052__0 ;
      var_classKind_7797.getAssociatedValuesFor_document (extractedValue_8052__0) ;
      const GGS_computedPropertyDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("computed-property.galgas4", 168)) ;
      var_typeKind_7845.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_8167__0 ;
      GGS_bool extractedValue_8167__1 ;
      GGS_bool extractedValue_8167__2 ;
      GGS_bool extractedValue_8167__3 ;
      var_classKind_7797.getAssociatedValuesFor_entity (extractedValue_8167__0, extractedValue_8167__1, extractedValue_8167__2, extractedValue_8167__3) ;
      const GGS_computedPropertyDeclarationAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.galgas4", 170)) ;
      var_typeKind_7845.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_propertyMap var_rootProperties_8312 ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_computedPropertyDeclarationAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      var_rootProperties_8312 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    const GGS_computedPropertyDeclarationAST temp_9 = this ;
    GGS_classKind joker_8467 ; // Joker input parameter
    GGS_actionMap joker_8488_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_8488_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_8467, var_rootProperties_8312, joker_8488_2, joker_8488_1, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 177)) ;
  }
  GGS_classKind var_currentClassKind_8592 ;
  GGS_propertyMap var_properties_8615 ;
  const GGS_computedPropertyDeclarationAST temp_10 = this ;
  GGS_actionMap joker_8627_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8627_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_8592, var_properties_8615, joker_8627_2, joker_8627_1, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 180)) ;
  GGS_transientDependencyListForGeneration temp_11 = GGS_transientDependencyListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 182)) ;
  GGS_transientDependencyListForGeneration var_dependencies_8707 = temp_11 ;
  const GGS_computedPropertyDeclarationAST temp_12 = this ;
  UpEnumerator_observablePropertyList enumerator_8732 (temp_12.readProperty_mDependencyList ()) ;
  while (enumerator_8732.hasCurrentObject ()) {
    GGS_propertyKind var_dependencyKind_8922 ;
    GGS_string var_swiftTypeStringForTransientFunctionArgument_8957 ;
    GGS_string var_protocolTypeName_9021 ;
    GGS_string var_defaultValueAsString_9058 ;
    extensionMethod_analyzeObservableProperty (enumerator_8732.current_mObservableProperty (HERE), var_rootProperties_8312, ioArgument_ioSemanticContext, var_properties_8615, var_dependencyKind_8922, var_swiftTypeStringForTransientFunctionArgument_8957, var_protocolTypeName_9021, var_defaultValueAsString_9058, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 184)) ;
    switch (var_dependencyKind_8922.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_9208__0 ;
        GGS_bool extractedValue_9208__1 ;
        var_dependencyKind_8922.getAssociatedValuesFor_arrayController (extractedValue_9208__0, extractedValue_9208__1) ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8732.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 198)), GGS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("computed-property.galgas4", 198)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_9330__0 ;
        var_dependencyKind_8922.getAssociatedValuesFor_selectionController (extractedValue_9330__0) ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8732.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 200)), GGS_string ("only an atomic property can be observed"), fixItArray14  COMMA_SOURCE_FILE ("computed-property.galgas4", 200)) ;
      }
      break ;
    }
    {
    var_dependencies_8707.setter_append (enumerator_8732.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_8732.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 204)), var_swiftTypeStringForTransientFunctionArgument_8957, var_defaultValueAsString_9058, var_protocolTypeName_9021, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 202)) ;
    }
    enumerator_8732.gotoNextObject () ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_15 = this ;
  const GGS_computedPropertyDeclarationAST temp_16 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_transientRoutineGeneration::init_21__21__21__21__21_ (temp_15.readProperty_mClassName ().readProperty_string (), temp_16.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7845, GGS_string ("computed"), var_dependencies_8707, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 210)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_17 = this ;
  const GGS_computedPropertyDeclarationAST temp_18 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_computeRoutineGeneration::init_21__21__21__21_ (temp_17.readProperty_mClassName ().readProperty_string (), temp_18.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7845, var_dependencies_8707, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 219)) ;
  }
  const GGS_computedPropertyDeclarationAST temp_19 = this ;
  GGS_classMap_2E_element var_entry_10055 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_19.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_bool var_generate_10135 ;
  switch (var_currentClassKind_8592.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      var_generate_10135 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_10230__0 ;
      var_currentClassKind_8592.getAssociatedValuesFor_document (extractedValue_10230__0) ;
      var_generate_10135 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_10274__0 ;
      var_currentClassKind_8592.getAssociatedValuesFor_atomic (extractedValue_10274__0) ;
      var_generate_10135 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_10318__0 ;
      GGS_bool extractedValue_10321_graphic_1 ;
      GGS_bool extractedValue_10331__2 ;
      GGS_bool extractedValue_10331__3 ;
      var_currentClassKind_8592.getAssociatedValuesFor_entity (extractedValue_10318__0, extractedValue_10321_graphic_1, extractedValue_10331__2, extractedValue_10331__3) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = extractedValue_10321_graphic_1.boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          const GGS_computedPropertyDeclarationAST temp_21 = this ;
          const GGS_computedPropertyDeclarationAST temp_22 = this ;
          var_generate_10135 = GGS_bool (ComparisonKind::notEqual, temp_21.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GGS_string ("selectionDisplay"))).operator_and (GGS_bool (ComparisonKind::notEqual, temp_22.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GGS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("computed-property.galgas4", 238)) ;
        }
      }
      if (GalgasBool::boolFalse == test_20) {
        var_generate_10135 = GGS_bool (true) ;
      }
    }
    break ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_23 = this ;
  const GGS_computedPropertyDeclarationAST temp_24 = this ;
  var_entry_10055.mProperty_mPropertyGenerationList.setter_append (GGS_computedPropertyGeneration::init_21__21__21__21__21_ (temp_23.readProperty_mComputedPropertyName ().readProperty_string (), temp_24.readProperty_mClassName ().readProperty_string (), var_typeKind_7845, var_dependencies_8707, var_generate_10135, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 243)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_10055, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 251)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 275)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 275)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 275)) ;
  const GGS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 276)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 276)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 276)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 277)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 277)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 277)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 277)) ;
  const GGS_computedPropertyGeneration temp_1 = this ;
  const GGS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 278)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 278)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 278)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 278)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 278)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 278)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 290)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 290)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 290)) ;
  const GGS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 291)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 291)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 291)) ;
  const GGS_computedPropertyGeneration temp_1 = this ;
  const GGS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 292)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 292)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 292)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 292)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 292)) ;
  const GGS_computedPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 293)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 293)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 293)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 294)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 295)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 296)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 297)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 298)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 299)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 300)) ;
  const GGS_computedPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 301)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 301)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 301)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 301)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 302)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 303)) ;
  const GGS_computedPropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 304)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 304)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 304)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 305)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 306)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 307)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 308)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 309)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 310)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 311)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 312)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 313)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 314)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 315)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 316)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 317)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 318)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 319)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 320)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 321)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 322)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 323)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 324)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 325)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 326)) ;
  const GGS_computedPropertyGeneration temp_6 = this ;
  const GGS_computedPropertyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 328)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 328)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 328)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 328)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 328)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 328)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 329)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 330)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 331)) ;
  result_result.plusAssignOperation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 332)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 333)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 334)) ;
  const GGS_computedPropertyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 335)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 335)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 335)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 336)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 337)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 338)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 339)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 340)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                            const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                            const GGS_stringset constinArgument_inOverriddenTransients,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_computedPropertyGeneration temp_1 = this ;
    const GGS_computedPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("computed-property.galgas4", 349)).operator_not (SOURCE_FILE ("computed-property.galgas4", 349)) COMMA_SOURCE_FILE ("computed-property.galgas4", 349)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 351)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 351)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 351)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 351)) ;
          const GGS_computedPropertyGeneration temp_4 = this ;
          result_result.plusAssignOperation(GGS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 352)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 352)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 352)) ;
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 353)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 353)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 353)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 353)) ;
          const GGS_computedPropertyGeneration temp_5 = this ;
          const GGS_computedPropertyGeneration temp_6 = this ;
          result_result.plusAssignOperation(GGS_string ("  let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 354)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 354)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 354)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 354)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 354)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 354)) ;
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 355)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 355)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 355)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 355)) ;
          const GGS_computedPropertyGeneration temp_7 = this ;
          const GGS_computedPropertyGeneration temp_8 = this ;
          result_result.plusAssignOperation(GGS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 356)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 356)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 356)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 356)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 356)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 356)) ;
          const GGS_computedPropertyGeneration temp_9 = this ;
          result_result.plusAssignOperation(GGS_string ("    return preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 357)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 357)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 357)) ;
          result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 358)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 360)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 360)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 360)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 360)) ;
        const GGS_computedPropertyGeneration temp_10 = this ;
        result_result.plusAssignOperation(GGS_string ("//   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 361)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 361)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 361)) ;
        result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 362)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 362)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 362)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 362)) ;
        const GGS_computedPropertyGeneration temp_11 = this ;
        const GGS_computedPropertyGeneration temp_12 = this ;
        result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 363)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 363)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 363)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 363)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 363)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 363)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_16767 = temp_0 ;
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_computedPropertyGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.galgas4", 373)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_computedPropertyGeneration temp_4 = this ;
      GGS_bool var_needs_5F_unwSelf_16894 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 374)) ;
      const GGS_computedPropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("  //--- Computed property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 375)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 375)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 375)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16894.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_computedPropertyGeneration temp_7 = this ;
          result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16767, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 377)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 377)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 377)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 377)) ;
          result_result.plusAssignOperation(GGS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 378)) ;
          const GGS_computedPropertyGeneration temp_8 = this ;
          const GGS_computedPropertyGeneration temp_9 = this ;
          const GGS_computedPropertyGeneration temp_10 = this ;
          result_result.plusAssignOperation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GGS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 379)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 379)) ;
          result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 380)) ;
          result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 381)) ;
          result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 382)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_computedPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16767, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 384)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 384)).add_operation (GGS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 384)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 384)) ;
        const GGS_computedPropertyGeneration temp_12 = this ;
        const GGS_computedPropertyGeneration temp_13 = this ;
        const GGS_computedPropertyGeneration temp_14 = this ;
        result_result.plusAssignOperation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GGS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 385)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 385)) ;
      }
      result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 387)) ;
      const GGS_computedPropertyGeneration temp_15 = this ;
      const GGS_computedPropertyGeneration temp_16 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16767, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 388)).add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 388)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] in self\?.compute_"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 388)).add_operation (temp_16.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 388)).add_operation (GGS_string ("_property ($0) }\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 388)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 388)) ;
      const GGS_computedPropertyGeneration temp_17 = this ;
      UpEnumerator_transientDependencyListForGeneration enumerator_17900 (temp_17.readProperty_mDependencyList ()) ;
      while (enumerator_17900.hasCurrentObject ()) {
        GGS_string var_s_17940 = extensionGetter_generateAddObserverCall (enumerator_17900.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 390)) ;
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::notEqual, var_s_17940.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            const GGS_computedPropertyGeneration temp_19 = this ;
            result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_s_17940, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 392)).add_operation (GGS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 392)).add_operation (var_prefix_16767, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 392)).add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 392)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 392)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 392)) ;
          }
        }
        enumerator_17900.gotoNextObject () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computeRoutineGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                  const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                  GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                  GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computeRoutineGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                  const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                  const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                  GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_computeRoutineGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.galgas4", 425)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_computeRoutineGeneration temp_2 = this ;
      const GGS_computeRoutineGeneration temp_3 = this ;
      const GGS_computeRoutineGeneration temp_4 = this ;
      GGS_string var_s_19343 = GGS_string (filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mTransientType () COMMA_SOURCE_FILE ("computed-property.galgas4", 426))) ;
      const GGS_computeRoutineGeneration temp_5 = this ;
      const GGS_computeRoutineGeneration temp_6 = this ;
      GGS_string var_fileName_19507 = GGS_string ("compute-").add_operation (temp_5.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 431)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 431)).add_operation (temp_6.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 431)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 431)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_19507, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 432)) ;
      }
      GGS_string var_header_19637 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 433)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 433)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 433)) ;
      var_header_19637.plusAssignOperation(GGS_string ("//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 434)) ;
      var_header_19637.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 435)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 435)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 435)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 435)) ;
      var_header_19637.plusAssignOperation(GGS_string ("import AppKit\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 436)) ;
      var_header_19637.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 437)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 437)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 437)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 437)) ;
      GGS_string var_generatedZone_33__20007 = GGS_string ("  }\n\n") ;
      var_generatedZone_33__20007.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 439)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 439)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 439)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 439)) ;
      var_generatedZone_33__20007.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 440)) ;
      var_generatedZone_33__20007.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.galgas4", 441)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 441)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 441)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas4", 441)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_19507, GGS_string ("//"), var_header_19637, GGS_string ("\n\n"), var_s_19343, GGS_string ("\n"), var_generatedZone_33__20007, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 442)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'computedPropertyManager'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_computedPropertyManager (
  "controllers",
  0,
  gWrapperAllFiles_computedPropertyManager_3,
  0,
  gWrapperAllDirectories_computedPropertyManager_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_computedPropertyManager (
  "standard-properties",
  0,
  gWrapperAllFiles_computedPropertyManager_1,
  0,
  gWrapperAllDirectories_computedPropertyManager_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_2 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_0 [4] = {
  & gWrapperDirectory_3_computedPropertyManager,
  & gWrapperDirectory_1_computedPropertyManager,
  & gWrapperDirectory_2_computedPropertyManager,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_computedPropertyManager (
  "",
  0,
  gWrapperAllFiles_computedPropertyManager_0,
  3,
  gWrapperAllDirectories_computedPropertyManager_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'computedPropertyManager computedComputationFunctionFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (Compiler * inCompiler,
                                                                                        const GGS_string & in_OWNER_5F_NAME,
                                                                                        const GGS_string & in_COMPUTED_5F_PROPERTY_5F_NAME,
                                                                                        const GGS_typeKind & in_TRANSIENT_5F_TYPE
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func compute_") ;
  result.appendString (in_COMPUTED_5F_PROPERTY_5F_NAME.stringValue ()) ;
  result.appendString ("_property (_ inValue : ") ;
  result.appendString (extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("compute-property-function.swift.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") {\n") ;
  return GGS_string (result) ;
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
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("transient-property-class.galgas4", 12)) ;
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
  GGS_propertyGenerationList temp_2 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("transient-property-class.galgas4", 66)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GGS_classKind::class_func_atomic (GGS_typeKind::class_func_transientPropertyExternType (temp_1.readProperty_mClassName ().readProperty_string ()  COMMA_SOURCE_FILE ("transient-property-class.galgas4", 63))  COMMA_SOURCE_FILE ("transient-property-class.galgas4", 63)), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_actionMap::init (inCompiler COMMA_HERE), temp_2, inCompiler COMMA_SOURCE_FILE ("transient-property-class.galgas4", 61)) ;
  }
  {
  const GGS_transientClassDeclarationAST temp_3 = this ;
  const GGS_transientClassDeclarationAST temp_4 = this ;
  ioArgument_ioGeneration.mProperty_mTransientPropertyTypeList.setter_append (temp_3.readProperty_mClassName ().readProperty_string (), temp_4.readProperty_mIsClass (), inCompiler COMMA_SOURCE_FILE ("transient-property-class.galgas4", 68)) ;
  }
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
    outArgument_outActionMap.setter_insertKey (enumerator_1756.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.galgas4", 48)) ;
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
  GGS_string var_s_2884 = GGS_string (filewrapperTemplate_actionGenerationTemplate_actionGeneration (inCompiler, temp_0.readProperty_mClassName (), temp_1.readProperty_mActionName () COMMA_SOURCE_FILE ("run-action.galgas4", 77))) ;
  const GGS_actionFileGeneration temp_2 = this ;
  const GGS_actionFileGeneration temp_3 = this ;
  GGS_string var_fileName_2996 = GGS_string ("action-").add_operation (temp_2.readProperty_mClassName (), inCompiler COMMA_SOURCE_FILE ("run-action.galgas4", 81)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas4", 81)).add_operation (temp_3.readProperty_mActionName (), inCompiler COMMA_SOURCE_FILE ("run-action.galgas4", 81)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas4", 81)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_2996, inCompiler COMMA_SOURCE_FILE ("run-action.galgas4", 82)) ;
  }
  {
  GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_2996, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_s_2884, GGS_string ("    ENTER USER CODE HERE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("run-action.galgas4", 91)), inCompiler COMMA_SOURCE_FILE ("run-action.galgas4", 91)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas4", 91)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("run-action.galgas4", 83)) ;
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
//Overriding extension method '@toOneRelationshipAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toOneRelationshipAST temp_0 = this ;
  const GGS_toOneRelationshipAST temp_1 = this ;
  const GGS_toOneRelationshipAST temp_2 = this ;
  GGS_lstring var_node_958 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 24)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 24)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_toOneRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_958, temp_3, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 25)) ;
  }
  {
  const GGS_toOneRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_958, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 26)) ;
  }
  {
  const GGS_toOneRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_958, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 27)) ;
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
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 33)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 33)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
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
  GGS_classMap_2E_element var_entry_3942 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  {
  const GGS_toOneRelationshipAST temp_1 = this ;
  ioArgument_ioGeneration.mProperty_mToOneClassImplementations.setter_insert (temp_1.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 106)) ;
  }
  GGS_classKind var_classKind_4247 ;
  const GGS_toOneRelationshipAST temp_2 = this ;
  GGS_propertyMap joker_4258_3 ; // Joker input parameter
  GGS_actionMap joker_4258_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_4258_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_4247, joker_4258_3, joker_4258_2, joker_4258_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 107)) ;
  switch (var_classKind_4247.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_toOneRelationshipAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 110)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_4391__0 ;
      var_classKind_4247.getAssociatedValuesFor_atomic (extractedValue_4391__0) ;
      const GGS_toOneRelationshipAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 112)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_4488__0 ;
      var_classKind_4247.getAssociatedValuesFor_document (extractedValue_4488__0) ;
      const GGS_toOneRelationshipAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 114)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_4583__0 ;
      GGS_bool extractedValue_4586_graphic_1 ;
      GGS_bool extractedValue_4595__2 ;
      GGS_bool extractedValue_4598_handleOpposite_3 ;
      var_classKind_4247.getAssociatedValuesFor_entity (extractedValue_4583__0, extractedValue_4586_graphic_1, extractedValue_4595__2, extractedValue_4598_handleOpposite_3) ;
      const GGS_toOneRelationshipAST temp_9 = this ;
      const GGS_toOneRelationshipAST temp_10 = this ;
      const GGS_toOneRelationshipAST temp_11 = this ;
      GGS_propertyKind var_kind_4626 = GGS_propertyKind::class_func_toOne (temp_9.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-one-relationship.galgas4", 118)), extractedValue_4586_graphic_1, temp_10.readProperty_mOpposite (), temp_11.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 116)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_toOneRelationshipAST temp_13 = this ;
        test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOpposite ().objectCompare (GGS_toOneOppositeRelationship::class_func_none (SOURCE_FILE ("to-one-relationship.galgas4", 123)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = extractedValue_4598_handleOpposite_3.operator_not (SOURCE_FILE ("to-one-relationship.galgas4", 123)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            const GGS_toOneRelationshipAST temp_14 = this ;
            const GGS_toOneRelationshipAST temp_15 = this ;
            GenericArray <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (temp_14.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("the '").add_operation (temp_15.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 124)).add_operation (GGS_string ("' entity does not handle opposite relationship"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 124)), fixItArray16  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 124)) ;
          }
        }
      }
      {
      const GGS_toOneRelationshipAST temp_17 = this ;
      var_entry_3942.mProperty_mPropertyMap.setter_insertKey (temp_17.readProperty_mToOneRelationshipName (), var_kind_4626, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 126)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_3942, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 128)) ;
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
  GGS_classMap_2E_element var_entry_5494 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_5635 ;
  GGS_propertyMap var_destinationEntityPropertyMap_5651 ;
  const GGS_toOneRelationshipAST temp_1 = this ;
  GGS_actionMap joker_5681_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_5681_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mDestinationEntityName (), var_classKind_5635, var_destinationEntityPropertyMap_5651, joker_5681_2, joker_5681_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 137)) ;
  switch (var_classKind_5635.enumValue ()) {
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
      GGS_string extractedValue_5777__0 ;
      GGS_bool extractedValue_5780_graphic_1 ;
      GGS_bool extractedValue_5790__2 ;
      GGS_bool extractedValue_5790__3 ;
      var_classKind_5635.getAssociatedValuesFor_entity (extractedValue_5777__0, extractedValue_5780_graphic_1, extractedValue_5790__2, extractedValue_5790__3) ;
      const GGS_toOneRelationshipAST temp_2 = this ;
      const GGS_toOneRelationshipAST temp_3 = this ;
      const GGS_toOneRelationshipAST temp_4 = this ;
      GGS_propertyKind var_kind_5803 = GGS_propertyKind::class_func_toOne (temp_2.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-one-relationship.galgas4", 145)), extractedValue_5780_graphic_1, temp_3.readProperty_mOpposite (), temp_4.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 143)) ;
      {
      const GGS_toOneRelationshipAST temp_5 = this ;
      const GGS_toOneRelationshipAST temp_6 = this ;
      const GGS_toOneRelationshipAST temp_7 = this ;
      const GGS_toOneRelationshipAST temp_8 = this ;
      const GGS_toOneRelationshipAST temp_9 = this ;
      var_entry_5494.mProperty_mPropertyGenerationList.setter_append (GGS_toOnePropertyGeneration::init_21__21__21__21__21__21__21_ (temp_5.readProperty_mToOneRelationshipName ().readProperty_string (), temp_6.readProperty_mClassName ().readProperty_string (), var_kind_5803, temp_7.readProperty_mOpposite (), var_destinationEntityPropertyMap_5651, temp_8.readProperty_mUsedForSignature (), temp_9.readProperty_mWeak ().operator_not (SOURCE_FILE ("to-one-relationship.galgas4", 158)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 151)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_5494, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 163)) ;
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
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 191)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 191)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 191)) ;
  const GGS_toOnePropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 192)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 192)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 192)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 193)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 193)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 193)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 193)) ;
  const GGS_toOnePropertyGeneration temp_1 = this ;
  const GGS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 194)).add_operation (GGS_string ("_property = StoredObject_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 194)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 194)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 194)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 194)) ;
  const GGS_toOnePropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string (" (usedForSignature: ").add_operation (temp_3.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-one-relationship.galgas4", 195)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 195)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 195)) ;
  const GGS_toOnePropertyGeneration temp_4 = this ;
  const GGS_toOnePropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string (", strongRef: ").add_operation (temp_4.readProperty_mStrongRef ().getter_cString (SOURCE_FILE ("to-one-relationship.galgas4", 196)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 196)).add_operation (GGS_string (", key: \""), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 196)).add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 196)).add_operation (GGS_string ("\")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 196)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 196)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 197)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 197)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 197)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 197)) ;
  const GGS_toOnePropertyGeneration temp_6 = this ;
  const GGS_toOnePropertyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 198)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 198)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 198)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 198)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 198)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 198)) ;
  result_result.plusAssignOperation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 199)) ;
  const GGS_toOnePropertyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("      return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 200)).add_operation (GGS_string ("_property.propval\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 200)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 200)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 201)) ;
  result_result.plusAssignOperation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 202)) ;
  const GGS_toOnePropertyGeneration temp_9 = this ;
  result_result.plusAssignOperation(GGS_string ("      // self.").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 203)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 203)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 203)) ;
  const GGS_toOnePropertyGeneration temp_10 = this ;
  result_result.plusAssignOperation(GGS_string ("      if self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 204)).add_operation (GGS_string ("_property.propval !== newValue {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 204)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 204)) ;
  const GGS_toOnePropertyGeneration temp_11 = this ;
  result_result.plusAssignOperation(GGS_string ("        if self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 205)).add_operation (GGS_string ("_property.propval != nil {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 205)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 205)) ;
  const GGS_toOnePropertyGeneration temp_12 = this ;
  result_result.plusAssignOperation(GGS_string ("          self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 206)).add_operation (GGS_string ("_property.setProp (nil)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 206)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 206)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 207)) ;
  result_result.plusAssignOperation(GGS_string ("        if newValue != nil {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 208)) ;
  const GGS_toOnePropertyGeneration temp_13 = this ;
  result_result.plusAssignOperation(GGS_string ("          self.").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 209)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 209)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 209)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 210)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 211)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 212)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 213)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 214)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 214)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 214)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 214)) ;
  const GGS_toOnePropertyGeneration temp_14 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 215)).add_operation (GGS_string ("_none = EBTransientProperty <Bool> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 215)) ;
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
      GGS_lstring extractedValue_9615_oppositeName_0 ;
      temp_0.readProperty_mOpposite ().getAssociatedValuesFor_oppositeIsToMany (extractedValue_9615_oppositeName_0) ;
      const GGS_toOnePropertyGeneration temp_1 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 229)).add_operation (GGS_string (" (has opposite to many relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 229)).add_operation (extractedValue_9615_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 229)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 229)) ;
      const GGS_toOnePropertyGeneration temp_2 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 230)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 230)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 230)) ;
      const GGS_toOnePropertyGeneration temp_3 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 231)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 231)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 231)) ;
      result_result.plusAssignOperation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9615_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 232)).add_operation (GGS_string ("_property.add (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 232)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 232)) ;
      result_result.plusAssignOperation(GGS_string ("      resetter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9615_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 233)).add_operation (GGS_string ("_property.remove (me) } }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 233)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 233)) ;
      result_result.plusAssignOperation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 234)) ;
    }
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
    {
      const GGS_toOnePropertyGeneration temp_4 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 236)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 236)) ;
      const GGS_toOnePropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 237)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 237)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 237)) ;
    }
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
    {
      GGS_lstring extractedValue_10435_oppositeName_0 ;
      temp_0.readProperty_mOpposite ().getAssociatedValuesFor_oppositeIsToOne (extractedValue_10435_oppositeName_0) ;
      const GGS_toOnePropertyGeneration temp_6 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 239)).add_operation (GGS_string (" (has opposite to one relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 239)).add_operation (extractedValue_10435_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 239)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 239)) ;
      const GGS_toOnePropertyGeneration temp_7 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 240)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 240)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 240)) ;
      const GGS_toOnePropertyGeneration temp_8 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 241)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 241)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 241)) ;
      result_result.plusAssignOperation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_10435_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 242)).add_operation (GGS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 242)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 242)) ;
      result_result.plusAssignOperation(GGS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_10435_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 243)).add_operation (GGS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 243)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 243)) ;
      result_result.plusAssignOperation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 244)) ;
    }
    break ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = constinArgument_inPreferences.operator_not (SOURCE_FILE ("to-one-relationship.galgas4", 246)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_toOnePropertyGeneration temp_10 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.accumulateProperty (self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 247)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 247)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 247)) ;
    }
  }
//---
  return result_result ;
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
  GGS_astDeclarationStruct var_declarationStruct_1039 = GGS_astDeclarationStruct::init (inCompiler COMMA_HERE) ;
  GGS_location joker_1211 ; // Joker input parameter
  cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (inCompiler, GGS_string (filewrapperTemplate_predefinedOutletClasses_sourceFile (inCompiler COMMA_SOURCE_FILE ("program.galgas4", 25))), GGS_string::makeEmptyString (), var_declarationStruct_1039, joker_1211  COMMA_SOURCE_FILE ("program.galgas4", 25)) ;
  GGS_location var_endOfSourceFile_1407 ;
  var_endOfSourceFile_1407.drop () ;
  cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_declarationStruct_1039, var_endOfSourceFile_1407  COMMA_SOURCE_FILE ("program.galgas4", 27)) ;
  {
  var_declarationStruct_1039.mProperty_mUnifiedDeclarationList.setter_append (GGS_prefsDeclarationAST::init_21__21_ (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("program.galgas4", 30)), GGS_location::class_func_nowhere (SOURCE_FILE ("program.galgas4", 30)), inCompiler COMMA_HERE), var_declarationStruct_1039.readProperty_mPreferences (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas4", 29)) ;
  }
  {
  routine_enterAtomicClassesIn_26_declarationList (var_declarationStruct_1039.mProperty_mUnifiedDeclarationList, inCompiler  COMMA_SOURCE_FILE ("program.galgas4", 35)) ;
  }
  GGS_declarationListAST var_sortedDeclarationListAST_1949 ;
  {
  routine_sortProperties_3F__3F__21_ (constinArgument_inSourceFile.readProperty_string (), var_declarationStruct_1039.readProperty_mUnifiedDeclarationList (), var_sortedDeclarationListAST_1949, inCompiler  COMMA_SOURCE_FILE ("program.galgas4", 37)) ;
  }
  GGS_semanticContext var_semanticContext_2055 = GGS_semanticContext::init (inCompiler COMMA_HERE) ;
  var_semanticContext_2055.mProperty_mAutoLayoutVStackFunctionMap = var_declarationStruct_1039.readProperty_mAutoLayoutVStackFunctionMap () ;
  var_semanticContext_2055.mProperty_mAutoLayoutHStackFunctionMap = var_declarationStruct_1039.readProperty_mAutoLayoutHStackFunctionMap () ;
  var_semanticContext_2055.mProperty_mEnumerationFunctionListAST = var_declarationStruct_1039.readProperty_mEnumerationFunctionListAST () ;
  GGS_generationStruct var_generation_2385 = GGS_generationStruct::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationListAST enumerator_2426 (var_sortedDeclarationListAST_1949) ;
  bool bool_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 44)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_2426.hasCurrentObject () && bool_0) {
    while (enumerator_2426.hasCurrentObject () && bool_0) {
      callExtensionMethod_firstAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_2426.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2055, var_generation_2385, inCompiler COMMA_SOURCE_FILE ("program.galgas4", 45)) ;
      enumerator_2426.gotoNextObject () ;
      if (enumerator_2426.hasCurrentObject ()) {
        bool_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 44)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 48)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      routine_buildBindingSpecificationMap_26__3F_ (var_semanticContext_2055, var_declarationStruct_1039.readProperty_mBindingSpecificationListMap (), inCompiler  COMMA_SOURCE_FILE ("program.galgas4", 49)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 54)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (var_semanticContext_2055, var_declarationStruct_1039.readProperty_mAutoLayoutBindingSpecificationList (), inCompiler  COMMA_SOURCE_FILE ("program.galgas4", 55)) ;
      }
    }
  }
  UpEnumerator_declarationListAST enumerator_3061 (var_sortedDeclarationListAST_1949) ;
  bool bool_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 61)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3061.hasCurrentObject () && bool_3) {
    while (enumerator_3061.hasCurrentObject () && bool_3) {
      callExtensionMethod_secondAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3061.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2055, var_generation_2385, inCompiler COMMA_SOURCE_FILE ("program.galgas4", 62)) ;
      enumerator_3061.gotoNextObject () ;
      if (enumerator_3061.hasCurrentObject ()) {
        bool_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 61)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  UpEnumerator_declarationListAST enumerator_3290 (var_sortedDeclarationListAST_1949) ;
  bool bool_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 65)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3290.hasCurrentObject () && bool_4) {
    while (enumerator_3290.hasCurrentObject () && bool_4) {
      callExtensionMethod_thirdAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3290.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2055, var_generation_2385, inCompiler COMMA_SOURCE_FILE ("program.galgas4", 66)) ;
      enumerator_3290.gotoNextObject () ;
      if (enumerator_3290.hasCurrentObject ()) {
        bool_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 65)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  UpEnumerator_declarationListAST enumerator_3519 (var_sortedDeclarationListAST_1949) ;
  bool bool_5 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 69)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3519.hasCurrentObject () && bool_5) {
    while (enumerator_3519.hasCurrentObject () && bool_5) {
      callExtensionMethod_fourthAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3519.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2055, var_generation_2385, inCompiler COMMA_SOURCE_FILE ("program.galgas4", 70)) ;
      enumerator_3519.gotoNextObject () ;
      if (enumerator_3519.hasCurrentObject ()) {
        bool_5 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 69)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 73)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      UpEnumerator_enumerationFunctionListAST enumerator_3818 (var_semanticContext_2055.readProperty_mEnumerationFunctionListAST ()) ;
      while (enumerator_3818.hasCurrentObject ()) {
        GGS_classKind var_type_3933 ;
        GGS_propertyMap joker_3939_3 ; // Joker input parameter
        GGS_actionMap joker_3939_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_3939_1 ; // Joker input parameter
        var_semanticContext_2055.readProperty_mClassMap ().method_searchKey (enumerator_3818.current_mEnumName (HERE), var_type_3933, joker_3939_3, joker_3939_2, joker_3939_1, inCompiler COMMA_SOURCE_FILE ("program.galgas4", 75)) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = var_type_3933.getter_isAtomic (SOURCE_FILE ("program.galgas4", 76)).operator_not (SOURCE_FILE ("program.galgas4", 76)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GenericArray <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_3818.current_mEnumName (HERE).readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray8  COMMA_SOURCE_FILE ("program.galgas4", 77)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GGS_typeKind var_typeKind_4091 ;
          var_type_3933.method_extractAtomic (var_typeKind_4091, inCompiler COMMA_SOURCE_FILE ("program.galgas4", 79)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_typeKind_4091.getter_isEnumType (SOURCE_FILE ("program.galgas4", 80)).operator_not (SOURCE_FILE ("program.galgas4", 80)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_3818.current_mEnumName (HERE).readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray10  COMMA_SOURCE_FILE ("program.galgas4", 81)) ;
            }
          }
        }
        enumerator_3818.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 87)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      {
      routine_graphvizAnalysis_3F__3F__3F_ (constinArgument_inSourceFile.readProperty_string ().getter_deletingLastPathComponent (SOURCE_FILE ("program.galgas4", 88)), var_semanticContext_2055, var_declarationStruct_1039.readProperty_mGraphvizList (), inCompiler  COMMA_SOURCE_FILE ("program.galgas4", 88)) ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 91)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      {
      routine_generateCode_3F__3F__3F_ (var_declarationStruct_1039.readProperty_mXcodeProject ().readProperty_string (), var_generation_2385, constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("program.galgas4", 92)) ;
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

