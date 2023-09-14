#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'transientManager'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'indexes' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_4 [1] = {
  NULL
} ;

//--- Directory 'indexes'

const cDirectoryWrapper gWrapperDirectory_4_transientManager (
  "indexes",
  0,
  gWrapperAllFiles_transientManager_4,
  0,
  gWrapperAllDirectories_transientManager_4
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_3 [2] = {
  & gWrapperDirectory_4_transientManager,
  NULL
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_3_transientManager (
  "build",
  0,
  gWrapperAllFiles_transientManager_3,
  1,
  gWrapperAllDirectories_transientManager_3
) ;

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_5 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_5_transientManager (
  "controllers",
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

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_0 [5] = {
  & gWrapperDirectory_3_transientManager,
  & gWrapperDirectory_5_transientManager,
  & gWrapperDirectory_1_transientManager,
  & gWrapperDirectory_2_transientManager,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_transientManager (
  "",
  0,
  gWrapperAllFiles_transientManager_0,
  4,
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
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor func " ;
  result << in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX.stringValue () ;
  result << "_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_TRANSIENT_5F_NAME.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_300_ (0) ;
  if (in_DEPENDENCY_5F_LIST.isValid ()) {
    cEnumerator_transientDependencyListForGeneration enumerator_300 (in_DEPENDENCY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_300.hasCurrentObject ()) {
      result << "\n       _ " ;
      result << enumerator_300.current_mFunctionArgumentName (HERE).stringValue () ;
      result << " : " ;
      result << enumerator_300.current_mFunctionArgumentTypeString (HERE).stringValue () ;
      if (enumerator_300.hasNextObject ()) {
        result << "," ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_300_.increment () ;
      enumerator_300.gotoNextObject () ;
    }
  }
  result << "\n) -> " ;
  result << extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("transient-computation-function.swift.galgasTemplate", 10)).stringValue () ;
  result << " {\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_proxyDeclarationAST temp_0 = this ;
  const GALGAS_proxyDeclarationAST temp_1 = this ;
  const GALGAS_proxyDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_909 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)), temp_2.readProperty_mProxyName ().readProperty_location ()  COMMA_SOURCE_FILE ("proxy.ggs", 23)) ;
  {
  const GALGAS_proxyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_909, temp_3, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 24)) ;
  }
  {
  const GALGAS_proxyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_909, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("proxy.ggs", 25)) ;
  }
  {
  const GALGAS_proxyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_909, temp_5.readProperty_mProxyTypeName () COMMA_SOURCE_FILE ("proxy.ggs", 26)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@proxyDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_proxyDeclarationAST::getter_nodeKey (C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_proxyDeclarationAST temp_0 = this ;
  const GALGAS_proxyDeclarationAST temp_1 = this ;
  const GALGAS_proxyDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 32)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 32)), temp_2.readProperty_mProxyName ().readProperty_location ()  COMMA_SOURCE_FILE ("proxy.ggs", 32)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                          GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_proxyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_3265 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.ggs", 87)) ;
  if (NULL != objectArray_3265) {
    macroValidSharedObject (objectArray_3265, cMapElement_classMap) ;
    GALGAS_classKind var_proxyKind_3427 ;
    const GALGAS_proxyDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_3429_3 ; // Joker input parameter
    GALGAS_actionMap joker_3429_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_3429_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mProxyTypeName (), var_proxyKind_3427, joker_3429_3, joker_3429_2, joker_3429_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 90)) ;
    switch (var_proxyKind_3427.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_proxyDeclarationAST temp_2 = this ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mProxyTypeName ().readProperty_location (), GALGAS_string ("an atomic type is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 93)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_3977 = (const cEnumAssociatedValues_classKind_entity *) (var_proxyKind_3427.unsafePointer ()) ;
        const GALGAS_bool extractedValue_3573_isGraphic = extractPtr_3977->mAssociatedValue1 ;
        const GALGAS_proxyDeclarationAST temp_4 = this ;
        switch (temp_4.readProperty_mProxyKind ().enumValue ()) {
        case GALGAS_proxyKind::kNotBuilt:
          break ;
        case GALGAS_proxyKind::kEnum_toManyProxy:
          {
            const GALGAS_proxyDeclarationAST temp_5 = this ;
            GALGAS_propertyKind var_k_3646 = GALGAS_propertyKind::constructor_toMany (temp_5.readProperty_mProxyTypeName (), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("proxy.ggs", 99)), extractedValue_3573_isGraphic, GALGAS_toManyRelationshipOptionAST::constructor_none (SOURCE_FILE ("proxy.ggs", 101))  COMMA_SOURCE_FILE ("proxy.ggs", 97)) ;
            {
            const GALGAS_proxyDeclarationAST temp_6 = this ;
            objectArray_3265->mProperty_mPropertyMap.setter_insertKey (temp_6.readProperty_mProxyName (), var_k_3646, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("proxy.ggs", 103)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 103)) ;
            }
          }
          break ;
        case GALGAS_proxyKind::kEnum_propertyProxy:
          {
            const GALGAS_proxyDeclarationAST temp_7 = this ;
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (temp_7.readProperty_mProxyTypeName ().readProperty_location (), GALGAS_string ("this type should be an entity"), fixItArray8  COMMA_SOURCE_FILE ("proxy.ggs", 105)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_proxyDeclarationAST temp_9 = this ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mProxyTypeName ().readProperty_location (), GALGAS_string ("an atomic type is required here"), fixItArray10  COMMA_SOURCE_FILE ("proxy.ggs", 108)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_4205 = (const cEnumAssociatedValues_classKind_atomic *) (var_proxyKind_3427.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_4091_type = extractPtr_4205->mAssociatedValue0 ;
        {
        const GALGAS_proxyDeclarationAST temp_11 = this ;
        objectArray_3265->mProperty_mPropertyMap.setter_insertKey (temp_11.readProperty_mProxyName (), GALGAS_propertyKind::constructor_property (extractedValue_4091_type, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("proxy.ggs", 110))  COMMA_SOURCE_FILE ("proxy.ggs", 110)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("proxy.ggs", 110)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 110)) ;
        }
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST secondAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_secondAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                           GALGAS_generationStruct & ioArgument_ioGeneration,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_proxyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_4537 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.ggs", 119)) ;
  if (NULL != objectArray_4537) {
    macroValidSharedObject (objectArray_4537, cMapElement_classMap) ;
    GALGAS_propertyKind var_relationshipKind_4699 ;
    const GALGAS_proxyDeclarationAST temp_1 = this ;
    GALGAS_actionMap joker_4701_2 ; // Joker input parameter
    GALGAS_bool joker_4701_1 ; // Joker input parameter
    objectArray_4537->mProperty_mPropertyMap.method_searchKey (temp_1.readProperty_mToOneRelationshipName (), var_relationshipKind_4699, joker_4701_2, joker_4701_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 122)) ;
    switch (var_relationshipKind_4699.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        const GALGAS_proxyDeclarationAST temp_2 = this ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 125)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        const GALGAS_proxyDeclarationAST temp_4 = this ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("proxy.ggs", 127)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        const GALGAS_proxyDeclarationAST temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("proxy.ggs", 129)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        const GALGAS_proxyDeclarationAST temp_8 = this ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("proxy.ggs", 131)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        const cEnumAssociatedValues_propertyKind_toOne * extractPtr_7204 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_relationshipKind_4699.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_5205_toOneTypeName = extractPtr_7204->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_5291 ;
        GALGAS_classKind joker_5273 ; // Joker input parameter
        GALGAS_actionMap joker_5293_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_5293_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5205_toOneTypeName, joker_5273, var_propertyMap_5291, joker_5293_2, joker_5293_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 133)) ;
        GALGAS_propertyKind var_propertyKind_5363 ;
        const GALGAS_proxyDeclarationAST temp_10 = this ;
        GALGAS_actionMap joker_5365_2 ; // Joker input parameter
        GALGAS_bool joker_5365_1 ; // Joker input parameter
        var_propertyMap_5291.method_searchKey (temp_10.readProperty_mPropertyName (), var_propertyKind_5363, joker_5365_2, joker_5365_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 134)) ;
        switch (var_propertyKind_5363.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            const cEnumAssociatedValues_propertyKind_property * extractPtr_5806 = (const cEnumAssociatedValues_propertyKind_property *) (var_propertyKind_5363.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_5428_propertyType = extractPtr_5806->mAssociatedValue0 ;
            const GALGAS_proxyDeclarationAST temp_11 = this ;
            const GALGAS_proxyDeclarationAST temp_12 = this ;
            const GALGAS_proxyDeclarationAST temp_13 = this ;
            const GALGAS_proxyDeclarationAST temp_14 = this ;
            objectArray_4537->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_atomicProxyGeneration::constructor_new (temp_11.readProperty_mProxyName ().readProperty_string (), temp_12.readProperty_mProxyKind (), extractedValue_5428_propertyType, temp_13.readProperty_mToOneRelationshipName ().readProperty_string (), temp_14.readProperty_mPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("proxy.ggs", 137))  COMMA_SOURCE_FILE ("proxy.ggs", 137)) ;
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              const GALGAS_proxyDeclarationAST temp_16 = this ;
              test_15 = GALGAS_bool (kIsNotEqual, temp_16.readProperty_mProxyKind ().objectCompare (GALGAS_proxyKind::constructor_propertyProxy (SOURCE_FILE ("proxy.ggs", 144)))).boolEnum () ;
              if (kBoolTrue == test_15) {
                const GALGAS_proxyDeclarationAST temp_17 = this ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("this property is not atomic"), fixItArray18  COMMA_SOURCE_FILE ("proxy.ggs", 145)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_6355 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_5363.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_5840_toManyTypeName = extractPtr_6355->mAssociatedValue0 ;
            GALGAS_classKind joker_5911_4 ; // Joker input parameter
            GALGAS_propertyMap joker_5911_3 ; // Joker input parameter
            GALGAS_actionMap joker_5911_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_5911_1 ; // Joker input parameter
            ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5840_toManyTypeName, joker_5911_4, joker_5911_3, joker_5911_2, joker_5911_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 148)) ;
            const GALGAS_proxyDeclarationAST temp_19 = this ;
            const GALGAS_proxyDeclarationAST temp_20 = this ;
            const GALGAS_proxyDeclarationAST temp_21 = this ;
            const GALGAS_proxyDeclarationAST temp_22 = this ;
            objectArray_4537->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toManyProxyGeneration::constructor_new (temp_19.readProperty_mProxyName ().readProperty_string (), temp_20.readProperty_mProxyKind (), extractedValue_5840_toManyTypeName.readProperty_string (), temp_21.readProperty_mToOneRelationshipName ().readProperty_string (), temp_22.readProperty_mPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("proxy.ggs", 149))  COMMA_SOURCE_FILE ("proxy.ggs", 149)) ;
            ioArgument_ioGeneration.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.addAssign_operation (extractedValue_5840_toManyTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("proxy.ggs", 156)) ;
            enumGalgasBool test_23 = kBoolTrue ;
            if (kBoolTrue == test_23) {
              const GALGAS_proxyDeclarationAST temp_24 = this ;
              test_23 = GALGAS_bool (kIsNotEqual, temp_24.readProperty_mProxyKind ().objectCompare (GALGAS_proxyKind::constructor_toManyProxy (SOURCE_FILE ("proxy.ggs", 157)))).boolEnum () ;
              if (kBoolTrue == test_23) {
                const GALGAS_proxyDeclarationAST temp_25 = this ;
                TC_Array <C_FixItDescription> fixItArray26 ;
                inCompiler->emitSemanticError (temp_25.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("this property is not atomic"), fixItArray26  COMMA_SOURCE_FILE ("proxy.ggs", 158)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            const GALGAS_proxyDeclarationAST temp_27 = this ;
            switch (temp_27.readProperty_mProxyKind ().enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_28 = this ;
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (temp_28.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray29  COMMA_SOURCE_FILE ("proxy.ggs", 163)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_30 = this ;
                TC_Array <C_FixItDescription> fixItArray31 ;
                inCompiler->emitSemanticError (temp_30.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray31  COMMA_SOURCE_FILE ("proxy.ggs", 165)) ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const GALGAS_proxyDeclarationAST temp_32 = this ;
            switch (temp_32.readProperty_mProxyKind ().enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_33 = this ;
                TC_Array <C_FixItDescription> fixItArray34 ;
                inCompiler->emitSemanticError (temp_33.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray34  COMMA_SOURCE_FILE ("proxy.ggs", 170)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_35 = this ;
                TC_Array <C_FixItDescription> fixItArray36 ;
                inCompiler->emitSemanticError (temp_35.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray36  COMMA_SOURCE_FILE ("proxy.ggs", 172)) ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            const GALGAS_proxyDeclarationAST temp_37 = this ;
            switch (temp_37.readProperty_mProxyKind ().enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_38 = this ;
                TC_Array <C_FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray39  COMMA_SOURCE_FILE ("proxy.ggs", 177)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_40 = this ;
                TC_Array <C_FixItDescription> fixItArray41 ;
                inCompiler->emitSemanticError (temp_40.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray41  COMMA_SOURCE_FILE ("proxy.ggs", 179)) ;
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
//
//Overriding extension getter '@toManyProxyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_declarationInSelectionControllerCode (C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 206)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 206)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 206)) ;
  const GALGAS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 207)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 207)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 207)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 208)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 208)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 208)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 208)) ;
  const GALGAS_toManyProxyGeneration temp_1 = this ;
  const GALGAS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)).add_operation (GALGAS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)).add_operation (temp_2.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 209)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_bindPropertyInSelectionController (C_Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                          const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                          const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 231)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 231)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 231)) ;
  const GALGAS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 232)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 232)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 232)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 233)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 233)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 233)) ;
  const GALGAS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 234)).add_operation (GALGAS_string ("_modelDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 234)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 234)) ;
  const GALGAS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  // var ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 235)).add_operation (GALGAS_string ("_boundObjectDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 235)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 235)) ;
  const GALGAS_toManyProxyGeneration temp_3 = this ;
  const GALGAS_toManyProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)).add_operation (GALGAS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)).add_operation (temp_4.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 236)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 237)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 237)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 237)) ;
  const GALGAS_toManyProxyGeneration temp_5 = this ;
  const GALGAS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (GALGAS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (temp_6.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 238)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 239)) ;
  const GALGAS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      switch self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 240)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 241)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return EBReferenceArray ()\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 242)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 243)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return EBReferenceArray (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 244)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 245)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 246)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 247)) ;
  const GALGAS_toManyProxyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 248)).add_operation (GALGAS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 248)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 248)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 249)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 250)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toManyProxyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 256)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 256)) ;
  result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 257)) ;
  result_result.plusAssign_operation(GALGAS_string ("      let controller = EBObservablePropertyController (\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 258)) ;
  const GALGAS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        observedObjects: [self.").add_operation (temp_1.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 259)).add_operation (GALGAS_string ("_property],\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 259)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 259)) ;
  result_result.plusAssign_operation(GALGAS_string ("        callBack: { [weak self] in\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 260)) ;
  const GALGAS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          if let me = self, let model = me.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 261)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 261)) ;
  const GALGAS_toManyProxyGeneration temp_3 = this ;
  const GALGAS_toManyProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            me.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 262)).add_operation (GALGAS_string ("_property.setModel (model."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 262)).add_operation (temp_4.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 262)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 262)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 262)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 263)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 264)) ;
  result_result.plusAssign_operation(GALGAS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 265)) ;
  const GALGAS_toManyProxyGeneration temp_5 = this ;
  const GALGAS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_5.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 266)).add_operation (GALGAS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 266)).add_operation (temp_6.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 266)).add_operation (GALGAS_string ("_StartsToBeObserved (by: controller)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 266)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 266)) ;
  const GALGAS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 267)).add_operation (GALGAS_string ("_modelDidChangeController = controller\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 267)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 267)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 268)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_declarationInSelectionControllerCode (C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 291)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 291)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 291)) ;
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 292)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 292)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 292)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 293)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 293)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 293)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 293)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 294)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_bindPropertyInSelectionController (C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 306)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 306)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 306)) ;
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 307)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 307)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 307)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 308)).add_operation (GALGAS_string ("_StartsToBeObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 308)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 308)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 308)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 308)) ;
  const GALGAS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 309)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 310)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 311)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 312)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 313)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 314)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 315)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 316)) ;
  const GALGAS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 317)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 317)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 317)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 317)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 318)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 319)) ;
  const GALGAS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 320)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 320)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 320)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 321)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 322)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 323)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 324)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 325)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 326)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 327)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 328)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 329)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 331)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 332)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 333)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 334)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 335)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 336)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 337)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 338)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 339)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 340)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 341)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 342)) ;
  const GALGAS_atomicProxyGeneration temp_6 = this ;
  const GALGAS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 344)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 344)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 344)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 344)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 344)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 344)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 345)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 346)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 347)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 348)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 349)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 350)) ;
  const GALGAS_atomicProxyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 351)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 351)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 351)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 352)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 353)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 354)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 355)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 356)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                          const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                          const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 366)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 366)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 366)) ;
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 367)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 367)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 367)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 368)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 368)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 368)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 368)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 369)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 370)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 370)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 370)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 370)) ;
  const GALGAS_atomicProxyGeneration temp_3 = this ;
  const GALGAS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 371)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 372)) ;
  const GALGAS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      return self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)).add_operation (GALGAS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 373)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 374)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 375)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let unwrappedNewValue = newValue {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 376)) ;
  const GALGAS_atomicProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 377)).add_operation (GALGAS_string ("_property.setProp (unwrappedNewValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 377)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 377)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 378)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 379)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 380)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 386)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 386)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 387)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 387)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 387)) ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      if let object = self\?.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 388)).add_operation (GALGAS_string ("_property {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 388)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 388)) ;
  const GALGAS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        switch object.").add_operation (temp_3.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 389)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 389)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 389)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 390)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 391)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 392)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 393)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let optionalV) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 394)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if let v = optionalV {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 395)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 396)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 397)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 398)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 399)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 400)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 401)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 402)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 403)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 404)) ;
  const GALGAS_atomicProxyGeneration temp_4 = this ;
  const GALGAS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 405)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (_ inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 405)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 405)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 405)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 405)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 405)) ;
  const GALGAS_atomicProxyGeneration temp_6 = this ;
  const GALGAS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self\?.").add_operation (temp_6.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 406)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 406)).add_operation (temp_7.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 406)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 406)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 406)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 407)) ;
  const GALGAS_atomicProxyGeneration temp_8 = this ;
  const GALGAS_atomicProxyGeneration temp_9 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_8.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (temp_9.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 408)) ;
  const GALGAS_atomicProxyGeneration temp_10 = this ;
  result_result.plusAssign_operation(GALGAS_string ("_property.startsToBeObserved (by: self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 409)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 409)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 409)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicPropertyDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_atomicPropertyDeclarationAST temp_0 = this ;
  const GALGAS_atomicPropertyDeclarationAST temp_1 = this ;
  const GALGAS_atomicPropertyDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_1089 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 25)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 25)), temp_2.readProperty_mPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 25)) ;
  {
  const GALGAS_atomicPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1089, temp_3, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 26)) ;
  }
  {
  const GALGAS_atomicPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1089, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 27)) ;
  }
  {
  const GALGAS_atomicPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1089, temp_5.readProperty_mPropertyTypeName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 28)) ;
  }
  const GALGAS_atomicPropertyDeclarationAST temp_6 = this ;
  callExtensionMethod_enterDefaultValuePrecedence ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), var_node_1089, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 29)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_atomicPropertyDeclarationAST::getter_nodeKey (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_atomicPropertyDeclarationAST temp_0 = this ;
  const GALGAS_atomicPropertyDeclarationAST temp_1 = this ;
  const GALGAS_atomicPropertyDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 35)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 35)), temp_2.readProperty_mPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 35)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicPropertyDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_atomicPropertyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_4956 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 124)) ;
  if (NULL != objectArray_4956) {
    macroValidSharedObject (objectArray_4956, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_5121 ;
    const GALGAS_atomicPropertyDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_5123_3 ; // Joker input parameter
    GALGAS_actionMap joker_5123_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_5123_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mPropertyTypeName (), var_classKind_5121, joker_5123_3, joker_5123_2, joker_5123_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 127)) ;
    GALGAS_propertyMap var_preferencesPropertyMap_5256 ;
    GALGAS_classKind joker_5221 ; // Joker input parameter
    GALGAS_actionMap joker_5264_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_5264_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 129)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("simple-stored-property.ggs", 129))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 129)), joker_5221, var_preferencesPropertyMap_5256, joker_5264_2, joker_5264_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 128)) ;
    switch (var_classKind_5121.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_atomicPropertyDeclarationAST temp_2 = this ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 136)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_6035 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5121.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_5404_kind = extractPtr_6035->mAssociatedValue0 ;
        {
        const GALGAS_atomicPropertyDeclarationAST temp_4 = this ;
        objectArray_4956->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mPropertyName (), GALGAS_propertyKind::constructor_property (extractedValue_5404_kind, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("simple-stored-property.ggs", 138))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 138)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("simple-stored-property.ggs", 138)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 138)) ;
        }
        GALGAS_string var_swiftDefaultValueAsString_5674 ;
        const GALGAS_atomicPropertyDeclarationAST temp_5 = this ;
        GALGAS_typeKindList temp_6 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.ggs", 140)) ;
        temp_6.addAssign_operation (extractedValue_5404_kind  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 140)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) temp_5.readProperty_mDefaultValue ().ptr (), temp_6, var_preferencesPropertyMap_5256, var_swiftDefaultValueAsString_5674, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 140)) ;
        const GALGAS_atomicPropertyDeclarationAST temp_7 = this ;
        const GALGAS_atomicPropertyDeclarationAST temp_8 = this ;
        const GALGAS_atomicPropertyDeclarationAST temp_9 = this ;
        const GALGAS_atomicPropertyDeclarationAST temp_10 = this ;
        const GALGAS_atomicPropertyDeclarationAST temp_11 = this ;
        objectArray_4956->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_atomicPropertyGeneration::constructor_new (temp_7.readProperty_mPropertyName ().readProperty_string (), temp_8.readProperty_mGenerateResetMethod (), temp_9.readProperty_mGenerateDirectRead (), temp_10.readProperty_mGenerateDirectAccess (), extractedValue_5404_kind, GALGAS_bool (false), var_swiftDefaultValueAsString_5674, GALGAS_bool (kIsEqual, temp_11.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 150))))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 142))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 142)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_atomicPropertyDeclarationAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray13  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 153)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_atomicPropertyDeclarationAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray15  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 155)) ;
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration prefKeyDefinitionCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_prefKeyDefinitionCode (C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  result_result = GALGAS_string ("@MainActor let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 183)).add_operation (GALGAS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 183)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 183)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 183)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_declarationInSelectionControllerCode (C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 189)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 189)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 189)) ;
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 190)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 190)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 190)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 191)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 191)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 191)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 191)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  const GALGAS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_bindPropertyInSelectionController (C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 198)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 198)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 198)) ;
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 199)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 199)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 199)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  const GALGAS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 200)).add_operation (GALGAS_string ("_StartsToBeObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 200)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 200)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 200)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 200)) ;
  const GALGAS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 201)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 201)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 201)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 202)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 203)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 204)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 205)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 206)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 207)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 208)) ;
  const GALGAS_atomicPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 209)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 209)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 209)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 209)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 210)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 211)) ;
  const GALGAS_atomicPropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 212)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 212)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 213)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 214)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 215)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 216)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 217)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 218)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 219)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 220)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 222)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 223)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 224)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 225)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 226)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 231)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 232)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 233)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 234)) ;
  const GALGAS_atomicPropertyGeneration temp_6 = this ;
  const GALGAS_atomicPropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 237)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 240)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 241)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 242)) ;
  const GALGAS_atomicPropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 244)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 245)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 248)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                             const GALGAS_bool constinArgument_inGenerationDirectAccess,
                                                                             const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mInPreferences ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 259)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 259)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 259)) ;
      const GALGAS_atomicPropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GALGAS_string ("//   Atomic property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 260)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 260)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 260)) ;
      result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 261)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 261)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 261)) ;
      const GALGAS_atomicPropertyGeneration temp_3 = this ;
      const GALGAS_atomicPropertyGeneration temp_4 = this ;
      result_result.plusAssign_operation(GALGAS_string ("@MainActor let preferences_").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)).add_operation (GALGAS_string ("_property = EBPreferencesProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)).add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)) ;
      const GALGAS_atomicPropertyGeneration temp_5 = this ;
      const GALGAS_atomicPropertyGeneration temp_6 = this ;
      result_result.plusAssign_operation(GALGAS_string (" (defaultValue: ").add_operation (temp_5.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)).add_operation (GALGAS_string (", prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)).add_operation (GALGAS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)) ;
    const GALGAS_atomicPropertyGeneration temp_7 = this ;
    result_result.plusAssign_operation(GALGAS_string ("  //   Atomic property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)) ;
    result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 267)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 267)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 267)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 267)) ;
    const GALGAS_atomicPropertyGeneration temp_8 = this ;
    const GALGAS_atomicPropertyGeneration temp_9 = this ;
    result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)).add_operation (GALGAS_string ("_property : EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)).add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_atomicPropertyGeneration temp_11 = this ;
      test_10 = temp_11.readProperty_mGenerateResetMethod ().boolEnum () ;
      if (kBoolTrue == test_10) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)) ;
        const GALGAS_atomicPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final func reset_").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)).add_operation (GALGAS_string ("_toDefaultValue () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)) ;
        const GALGAS_atomicPropertyGeneration temp_13 = this ;
        const GALGAS_atomicPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 272)).add_operation (GALGAS_string ("_property.setProp ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 272)).add_operation (temp_14.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 272)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 272)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 272)) ;
        result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)) ;
      }
    }
    GALGAS_bool test_15 = constinArgument_inGenerationDirectAccess ;
    if (kBoolTrue != test_15.boolEnum ()) {
      const GALGAS_atomicPropertyGeneration temp_16 = this ;
      test_15 = temp_16.readProperty_mGenerateDirectRead () ;
    }
    GALGAS_bool test_17 = test_15 ;
    if (kBoolTrue != test_17.boolEnum ()) {
      const GALGAS_atomicPropertyGeneration temp_18 = this ;
      test_17 = temp_18.readProperty_mGenerateDirectAccess () ;
    }
    GALGAS_bool var_generateAccess_12291 = test_17 ;
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = var_generateAccess_12291.boolEnum () ;
      if (kBoolTrue == test_19) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 277)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 277)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 277)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 277)) ;
        const GALGAS_atomicPropertyGeneration temp_20 = this ;
        const GALGAS_atomicPropertyGeneration temp_21 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_20.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 278)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 278)).add_operation (extensionGetter_swiftTypeName (temp_21.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 278)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 278)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 278)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 278)) ;
        const GALGAS_atomicPropertyGeneration temp_22 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (temp_22.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 279)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 279)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 279)) ;
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          const GALGAS_atomicPropertyGeneration temp_24 = this ;
          test_23 = temp_24.readProperty_mGenerateDirectAccess ().boolEnum () ;
          if (kBoolTrue == test_23) {
            const GALGAS_atomicPropertyGeneration temp_25 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (temp_25.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)) ;
          }
        }
        result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 283)) ;
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_initCode (C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  result_result = GALGAS_string ("    self.").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 291)).add_operation (GALGAS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 291)).add_operation (extensionGetter_swiftTypeName (temp_1.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 291)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 291)) ;
  const GALGAS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string (" (defaultValue: ").add_operation (temp_2.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 292)).add_operation (GALGAS_string (", undoManager: inUndoManager, key: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 292)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 292)) ;
  const GALGAS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(temp_3.readProperty_mPropertyName ().add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 293)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 293)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                       C_Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipAST temp_0 = this ;
  const GALGAS_toOneRelationshipAST temp_1 = this ;
  const GALGAS_toOneRelationshipAST temp_2 = this ;
  GALGAS_lstring var_node_1037 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)) ;
  {
  const GALGAS_toOneRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1037, temp_3, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 25)) ;
  }
  {
  const GALGAS_toOneRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1037, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 26)) ;
  }
  {
  const GALGAS_toOneRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1037, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 27)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOneRelationshipAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_toOneRelationshipAST::getter_nodeKey (C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_toOneRelationshipAST temp_0 = this ;
  const GALGAS_toOneRelationshipAST temp_1 = this ;
  const GALGAS_toOneRelationshipAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 33)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 33)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 33)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                           GALGAS_generationStruct & ioArgument_ioGeneration,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipAST temp_0 = this ;
  cMapElement_classMap * objectArray_4132 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 103)) ;
  if (NULL != objectArray_4132) {
    macroValidSharedObject (objectArray_4132, cMapElement_classMap) ;
    const GALGAS_toOneRelationshipAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mToOneClassImplementations.addAssign_operation (temp_1.readProperty_mDestinationEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 106)) ;
    GALGAS_classKind var_classKind_4378 ;
    const GALGAS_toOneRelationshipAST temp_2 = this ;
    GALGAS_propertyMap joker_4380_3 ; // Joker input parameter
    GALGAS_actionMap joker_4380_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4380_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_4378, joker_4380_3, joker_4380_2, joker_4380_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 107)) ;
    switch (var_classKind_4378.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_toOneRelationshipAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 110)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const GALGAS_toOneRelationshipAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 112)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_toOneRelationshipAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 114)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_5223 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_4378.unsafePointer ()) ;
        const GALGAS_bool extractedValue_4707_graphic = extractPtr_5223->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_4724_handleOpposite = extractPtr_5223->mAssociatedValue3 ;
        const GALGAS_toOneRelationshipAST temp_9 = this ;
        const GALGAS_toOneRelationshipAST temp_10 = this ;
        const GALGAS_toOneRelationshipAST temp_11 = this ;
        GALGAS_propertyKind var_kind_4742 = GALGAS_propertyKind::constructor_toOne (temp_9.readProperty_mDestinationEntityName (), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.ggs", 118)), extractedValue_4707_graphic, temp_10.readProperty_mOpposite (), temp_11.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 116)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          const GALGAS_toOneRelationshipAST temp_13 = this ;
          test_12 = GALGAS_bool (kIsNotEqual, temp_13.readProperty_mOpposite ().objectCompare (GALGAS_toOneOppositeRelationship::constructor_none (SOURCE_FILE ("to-one-relationship.ggs", 123)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            test_12 = extractedValue_4724_handleOpposite.operator_not (SOURCE_FILE ("to-one-relationship.ggs", 123)).boolEnum () ;
            if (kBoolTrue == test_12) {
              const GALGAS_toOneRelationshipAST temp_14 = this ;
              const GALGAS_toOneRelationshipAST temp_15 = this ;
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_15.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 124)).add_operation (GALGAS_string ("' entity does not handle opposite relationship"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 124)), fixItArray16  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 124)) ;
            }
          }
        }
        {
        const GALGAS_toOneRelationshipAST temp_17 = this ;
        objectArray_4132->mProperty_mPropertyMap.setter_insertKey (temp_17.readProperty_mToOneRelationshipName (), var_kind_4742, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-one-relationship.ggs", 126)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 126)) ;
        }
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_thirdAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                           GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipAST temp_0 = this ;
  cMapElement_classMap * objectArray_5562 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 135)) ;
  if (NULL != objectArray_5562) {
    macroValidSharedObject (objectArray_5562, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_5732 ;
    GALGAS_propertyMap var_destinationEntityPropertyMap_5766 ;
    const GALGAS_toOneRelationshipAST temp_1 = this ;
    GALGAS_actionMap joker_5768_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_5768_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mDestinationEntityName (), var_classKind_5732, var_destinationEntityPropertyMap_5766, joker_5768_2, joker_5768_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 138)) ;
    switch (var_classKind_5732.enumValue ()) {
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
        const cEnumAssociatedValues_classKind_entity * extractPtr_6405 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_5732.unsafePointer ()) ;
        const GALGAS_bool extractedValue_5882_graphic = extractPtr_6405->mAssociatedValue1 ;
        const GALGAS_toOneRelationshipAST temp_2 = this ;
        const GALGAS_toOneRelationshipAST temp_3 = this ;
        const GALGAS_toOneRelationshipAST temp_4 = this ;
        GALGAS_propertyKind var_kind_5903 = GALGAS_propertyKind::constructor_toOne (temp_2.readProperty_mDestinationEntityName (), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.ggs", 146)), extractedValue_5882_graphic, temp_3.readProperty_mOpposite (), temp_4.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 144)) ;
        const GALGAS_toOneRelationshipAST temp_5 = this ;
        const GALGAS_toOneRelationshipAST temp_6 = this ;
        const GALGAS_toOneRelationshipAST temp_7 = this ;
        const GALGAS_toOneRelationshipAST temp_8 = this ;
        const GALGAS_toOneRelationshipAST temp_9 = this ;
        objectArray_5562->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toOnePropertyGeneration::constructor_new (temp_5.readProperty_mToOneRelationshipName ().readProperty_string (), temp_6.readProperty_mClassName ().readProperty_string (), var_kind_5903, temp_7.readProperty_mOpposite (), var_destinationEntityPropertyMap_5766, temp_8.readProperty_mUsedForSignature (), temp_9.readProperty_mWeak ().operator_not (SOURCE_FILE ("to-one-relationship.ggs", 159))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 152))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 152)) ;
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                            const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                            const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 190)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 190)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 190)) ;
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 191)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 191)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 191)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = this ;
  const GALGAS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)).add_operation (GALGAS_string ("_property = StoredObject_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)) ;
  const GALGAS_toOnePropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string (" (usedForSignature: ").add_operation (temp_3.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-one-relationship.ggs", 194)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)) ;
  const GALGAS_toOnePropertyGeneration temp_4 = this ;
  const GALGAS_toOnePropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string (", strongRef: ").add_operation (temp_4.readProperty_mStrongRef ().getter_cString (SOURCE_FILE ("to-one-relationship.ggs", 195)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)).add_operation (GALGAS_string (", key: \""), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)).add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)).add_operation (GALGAS_string ("\")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)) ;
  const GALGAS_toOnePropertyGeneration temp_6 = this ;
  const GALGAS_toOnePropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)) ;
  const GALGAS_toOnePropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)).add_operation (GALGAS_string ("_property.propval\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 200)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 201)) ;
  const GALGAS_toOnePropertyGeneration temp_9 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      if self.").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 202)).add_operation (GALGAS_string ("_property.propval !== newValue {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 202)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 202)) ;
  const GALGAS_toOnePropertyGeneration temp_10 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        if self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 203)).add_operation (GALGAS_string ("_property.propval != nil {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 203)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 203)) ;
  const GALGAS_toOnePropertyGeneration temp_11 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)).add_operation (GALGAS_string ("_property.setProp (nil)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)) ;
  result_result.plusAssign_operation(GALGAS_string ("        if newValue != nil {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)) ;
  const GALGAS_toOnePropertyGeneration temp_12 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 207)).add_operation (GALGAS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 207)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 207)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 208)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 210)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 211)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 212)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 212)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 212)) ;
  const GALGAS_toOnePropertyGeneration temp_13 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 213)).add_operation (GALGAS_string ("_none = EBTransientProperty <Bool> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 213)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 213)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  switch (temp_0.readProperty_mOpposite ().enumValue ()) {
  case GALGAS_toOneOppositeRelationship::kNotBuilt:
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
    {
      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany * extractPtr_10357 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *) (temp_0.readProperty_mOpposite ().unsafePointer ()) ;
      const GALGAS_lstring extractedValue_9749_oppositeName = extractPtr_10357->mAssociatedValue0 ;
      const GALGAS_toOnePropertyGeneration temp_1 = this ;
      result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 227)).add_operation (GALGAS_string (" (has opposite to many relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 227)).add_operation (extractedValue_9749_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 227)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 227)) ;
      const GALGAS_toOnePropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 228)).add_operation (GALGAS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 228)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 228)) ;
      const GALGAS_toOnePropertyGeneration temp_3 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (GALGAS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)) ;
      result_result.plusAssign_operation(GALGAS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9749_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)).add_operation (GALGAS_string ("_property.add (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)) ;
      result_result.plusAssign_operation(GALGAS_string ("      resetter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9749_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)).add_operation (GALGAS_string ("_property.remove (me) } }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)) ;
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_none:
    {
      const GALGAS_toOnePropertyGeneration temp_4 = this ;
      result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 234)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 234)) ;
      const GALGAS_toOnePropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 235)).add_operation (GALGAS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 235)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 235)) ;
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
    {
      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_11149 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (temp_0.readProperty_mOpposite ().unsafePointer ()) ;
      const GALGAS_lstring extractedValue_10569_oppositeName = extractPtr_11149->mAssociatedValue0 ;
      const GALGAS_toOnePropertyGeneration temp_6 = this ;
      result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)).add_operation (GALGAS_string (" (has opposite to one relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)).add_operation (extractedValue_10569_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)) ;
      const GALGAS_toOnePropertyGeneration temp_7 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 238)).add_operation (GALGAS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 238)) ;
      const GALGAS_toOnePropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (GALGAS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)) ;
      result_result.plusAssign_operation(GALGAS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_10569_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)).add_operation (GALGAS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)) ;
      result_result.plusAssign_operation(GALGAS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_10569_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)).add_operation (GALGAS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration setupRelationshipFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_setupRelationshipFromDictionaryCode (C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 249)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 249)) ;
  result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 250)) ;
  result_result.plusAssign_operation(GALGAS_string ("      let possibleEntity = readEntityFromDictionary (\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 251)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        relationshipName: \"").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 252)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 252)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 252)) ;
  result_result.plusAssign_operation(GALGAS_string ("        dictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 253)) ;
  result_result.plusAssign_operation(GALGAS_string ("        managedObjectArray: inManagedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 254)) ;
  result_result.plusAssign_operation(GALGAS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 255)) ;
  const GALGAS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      if let entity = possibleEntity as\? ").add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 256)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 256)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 256)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 256)) ;
  const GALGAS_toOnePropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 257)).add_operation (GALGAS_string ("_property.setProp (entity)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 257)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 257)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 258)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 259)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration objectAccessibilityCodeForSaveOperation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_objectAccessibilityCodeForSaveOperation (C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 286)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 286)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    if let object = self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 287)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 287)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 287)) ;
  result_result.plusAssign_operation(GALGAS_string ("      ioObjectArray.append (object)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 288)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 289)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toManyRelationshipAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipAST temp_0 = this ;
  const GALGAS_toManyRelationshipAST temp_1 = this ;
  const GALGAS_toManyRelationshipAST temp_2 = this ;
  GALGAS_lstring var_node_1104 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)) ;
  {
  const GALGAS_toManyRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1104, temp_3, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 27)) ;
  }
  {
  const GALGAS_toManyRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1104, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 28)) ;
  }
  {
  const GALGAS_toManyRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1104, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 29)) ;
  }
  const GALGAS_toManyRelationshipAST temp_6 = this ;
  switch (temp_6.readProperty_mOption ().enumValue ()) {
  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_1581 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (temp_6.readProperty_mOption ().unsafePointer ()) ;
      const GALGAS_lstring extractedValue_1416_masterPropertyName = extractPtr_1581->mAssociatedValue0 ;
      const GALGAS_toManyRelationshipAST temp_7 = this ;
      GALGAS_lstring var_dependanceNode_1442 = GALGAS_lstring::constructor_new (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)).add_operation (extractedValue_1416_masterPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)), extractedValue_1416_masterPropertyName.readProperty_location ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_node_1104, var_dependanceNode_1442 COMMA_SOURCE_FILE ("to-many-relationship.ggs", 33)) ;
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
//
//Overriding extension getter '@toManyRelationshipAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_toManyRelationshipAST::getter_nodeKey (C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_toManyRelationshipAST temp_0 = this ;
  const GALGAS_toManyRelationshipAST temp_1 = this ;
  const GALGAS_toManyRelationshipAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 42)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 42)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 42)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toManyRelationshipAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                            GALGAS_generationStruct & ioArgument_ioGeneration,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipAST temp_0 = this ;
  cMapElement_classMap * objectArray_5508 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 138)) ;
  if (NULL != objectArray_5508) {
    macroValidSharedObject (objectArray_5508, cMapElement_classMap) ;
    const GALGAS_toManyRelationshipAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mToManyClassImplementations.addAssign_operation (temp_1.readProperty_mDestinationEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 141)) ;
    GALGAS_classKind var_classKind_5755 ;
    const GALGAS_toManyRelationshipAST temp_2 = this ;
    GALGAS_propertyMap joker_5757_3 ; // Joker input parameter
    GALGAS_actionMap joker_5757_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_5757_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_5755, joker_5757_3, joker_5757_2, joker_5757_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 142)) ;
    switch (var_classKind_5755.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_toManyRelationshipAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 145)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const GALGAS_toManyRelationshipAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 147)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_toManyRelationshipAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 149)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_7868 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_5755.unsafePointer ()) ;
        const GALGAS_bool extractedValue_6084_graphic = extractPtr_7868->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_6101_handleOpposite = extractPtr_7868->mAssociatedValue3 ;
        const GALGAS_toManyRelationshipAST temp_9 = this ;
        const GALGAS_toManyRelationshipAST temp_10 = this ;
        GALGAS_propertyKind var_kind_6119 = GALGAS_propertyKind::constructor_toMany (temp_9.readProperty_mDestinationEntityName (), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-many-relationship.ggs", 153)), extractedValue_6084_graphic, temp_10.readProperty_mOption ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 151)) ;
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = extractedValue_6101_handleOpposite.operator_not (SOURCE_FILE ("to-many-relationship.ggs", 157)).boolEnum () ;
          if (kBoolTrue == test_11) {
            const GALGAS_toManyRelationshipAST temp_12 = this ;
            GALGAS_lstring var_unused_0_6370 ;
            const bool optionalResult6353 = temp_12.readProperty_mOption ().optional_hasOpposite (var_unused_0_6370) ;
            if (!optionalResult6353) {
              test_11 = kBoolFalse ;
            }
            if (kBoolTrue == test_11) {
              const GALGAS_toManyRelationshipAST temp_13 = this ;
              const GALGAS_toManyRelationshipAST temp_14 = this ;
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_13.readProperty_mToManyRelationshipName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_14.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 158)).add_operation (GALGAS_string ("' entity does not handle opposite relationship"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 158)), fixItArray15  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 158)) ;
            }
          }
        }
        {
        const GALGAS_toManyRelationshipAST temp_16 = this ;
        objectArray_5508->mProperty_mPropertyMap.setter_insertKey (temp_16.readProperty_mToManyRelationshipName (), var_kind_6119, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-many-relationship.ggs", 160)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 160)) ;
        }
        const GALGAS_toManyRelationshipAST temp_17 = this ;
        GALGAS_bool var_inPrefs_6658 = GALGAS_bool (kIsEqual, temp_17.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 162)))) ;
        GALGAS_toManyRelationshipOptionGeneration var_optionForGeneration_6787 ;
        const GALGAS_toManyRelationshipAST temp_18 = this ;
        switch (temp_18.readProperty_mOption ().enumValue ()) {
        case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
          break ;
        case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
          {
            const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_7133 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (temp_18.readProperty_mOption ().unsafePointer ()) ;
            const GALGAS_lstring extractedValue_6858_masterPropertyName = extractPtr_7133->mAssociatedValue0 ;
            GALGAS_propertyKind var_masterPropertyKind_6937 ;
            GALGAS_actionMap joker_6939_2 ; // Joker input parameter
            GALGAS_bool joker_6939_1 ; // Joker input parameter
            objectArray_5508->mProperty_mPropertyMap.method_searchKey (extractedValue_6858_masterPropertyName, var_masterPropertyKind_6937, joker_6939_2, joker_6939_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 167)) ;
            var_optionForGeneration_6787 = GALGAS_toManyRelationshipOptionGeneration::constructor_hasDependance (extractedValue_6858_masterPropertyName.readProperty_string (), extensionGetter_swiftTypeName (var_masterPropertyKind_6937, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 170))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 168)) ;
          }
          break ;
        case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
          {
            const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_7253 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (temp_18.readProperty_mOption ().unsafePointer ()) ;
            const GALGAS_lstring extractedValue_7170_oppositeName = extractPtr_7253->mAssociatedValue0 ;
            var_optionForGeneration_6787 = GALGAS_toManyRelationshipOptionGeneration::constructor_hasOpposite (extractedValue_7170_oppositeName.readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 173)) ;
          }
          break ;
        case GALGAS_toManyRelationshipOptionAST::kEnum_none:
          {
            var_optionForGeneration_6787 = GALGAS_toManyRelationshipOptionGeneration::constructor_none (SOURCE_FILE ("to-many-relationship.ggs", 175)) ;
          }
          break ;
        }
        const GALGAS_toManyRelationshipAST temp_19 = this ;
        const GALGAS_toManyRelationshipAST temp_20 = this ;
        const GALGAS_toManyRelationshipAST temp_21 = this ;
        const GALGAS_toManyRelationshipAST temp_22 = this ;
        const GALGAS_toManyRelationshipAST temp_23 = this ;
        objectArray_5508->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toManyPropertyGeneration::constructor_new (temp_19.readProperty_mToManyRelationshipName ().readProperty_string (), temp_20.readProperty_mGenerateDirectAccess (), temp_21.readProperty_mGenerateDirectRead (), var_kind_6119, var_optionForGeneration_6787, var_inPrefs_6658, temp_22.readProperty_mCustomStore (), temp_23.readProperty_mUsedForSignature ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 178))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 178)) ;
        const GALGAS_toManyRelationshipAST temp_24 = this ;
        ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.addAssign_operation (temp_24.readProperty_mDestinationEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 188)) ;
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_inPrefs_6658.boolEnum () ;
          if (kBoolTrue == test_25) {
            const GALGAS_toManyRelationshipAST temp_26 = this ;
            ioArgument_ioGeneration.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.addAssign_operation (temp_26.readProperty_mDestinationEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 190)) ;
          }
        }
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                             const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                             const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 227)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 228)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 228)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 228)) ;
      const GALGAS_toManyPropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //   To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 229)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 229)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 229)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 230)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 230)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 230)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 230)) ;
      GALGAS_string var_masterPropertyTypeName_9685 ;
      const GALGAS_toManyPropertyGeneration temp_3 = this ;
      GALGAS_string joker_9626_1 ; // Joker input parameter
      temp_3.readProperty_mOption ().method_hasDependance (joker_9626_1, var_masterPropertyTypeName_9685, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)) ;
      const GALGAS_toManyPropertyGeneration temp_4 = this ;
      const GALGAS_toManyPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)).add_operation (GALGAS_string ("_property = TransientArrayOfSuperOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)).add_operation (GALGAS_string (" <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)).add_operation (var_masterPropertyTypeName_9685, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)).add_operation (GALGAS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)) ;
      const GALGAS_toManyPropertyGeneration temp_6 = this ;
      const GALGAS_toManyPropertyGeneration temp_7 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (GALGAS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)) ;
      const GALGAS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_toManyPropertyGeneration temp_10 = this ;
        test_9 = temp_10.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 237)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 237)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_toManyPropertyGeneration temp_11 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)) ;
        }
      }
      result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 240)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_toManyPropertyGeneration temp_13 = this ;
      test_12 = temp_13.readProperty_mInPreferences ().boolEnum () ;
      if (kBoolTrue == test_12) {
        result_result = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 242)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 242)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 242)) ;
        const GALGAS_toManyPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(GALGAS_string ("//   To many property: ").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 243)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 243)) ;
        result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 244)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 244)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 244)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 244)) ;
        const GALGAS_toManyPropertyGeneration temp_15 = this ;
        const GALGAS_toManyPropertyGeneration temp_16 = this ;
        result_result.plusAssign_operation(GALGAS_string ("@MainActor let preferences_").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)).add_operation (GALGAS_string ("_property = PreferencesArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)) ;
        const GALGAS_toManyPropertyGeneration temp_17 = this ;
        result_result.plusAssign_operation(GALGAS_string (" (prefKey: Preferences_").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)).add_operation (GALGAS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)) ;
      }
    }
    if (kBoolFalse == test_12) {
      result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)) ;
      const GALGAS_toManyPropertyGeneration temp_18 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //   To many property: ").add_operation (temp_18.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 249)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 249)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 249)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 250)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 250)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 250)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 250)) ;
      const GALGAS_toManyPropertyGeneration temp_19 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)).add_operation (GALGAS_string ("_property = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        const GALGAS_toManyPropertyGeneration temp_21 = this ;
        test_20 = temp_21.readProperty_mCustomStore ().boolEnum () ;
        if (kBoolTrue == test_20) {
          const GALGAS_toManyPropertyGeneration temp_22 = this ;
          result_result.plusAssign_operation(GALGAS_string ("Custom_").add_operation (extensionGetter_swiftTypeName (temp_22.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)) ;
        }
      }
      const GALGAS_toManyPropertyGeneration temp_23 = this ;
      result_result.plusAssign_operation(GALGAS_string ("StoredArrayOf_").add_operation (extensionGetter_swiftTypeName (temp_23.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 255)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 255)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 255)) ;
      const GALGAS_toManyPropertyGeneration temp_24 = this ;
      result_result.plusAssign_operation(GALGAS_string (" (usedForSignature: ").add_operation (temp_24.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-many-relationship.ggs", 256)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)).add_operation (GALGAS_string (", key: "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)) ;
      enumGalgasBool test_25 = kBoolTrue ;
      if (kBoolTrue == test_25) {
        const GALGAS_toManyPropertyGeneration temp_26 = this ;
        test_25 = temp_26.readProperty_mCustomStore ().boolEnum () ;
        if (kBoolTrue == test_25) {
          const GALGAS_toManyPropertyGeneration temp_27 = this ;
          const GALGAS_toManyPropertyGeneration temp_28 = this ;
          result_result.plusAssign_operation(GALGAS_string ("KEY_FOR_").add_operation (extensionGetter_swiftTypeName (temp_27.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)).add_operation (temp_28.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)) ;
        }
      }
      if (kBoolFalse == test_25) {
        const GALGAS_toManyPropertyGeneration temp_29 = this ;
        result_result.plusAssign_operation(GALGAS_string ("\"").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 260)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 260)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 260)) ;
      }
      result_result.plusAssign_operation(GALGAS_string (")\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 262)) ;
      enumGalgasBool test_30 = kBoolTrue ;
      if (kBoolTrue == test_30) {
        const GALGAS_toManyPropertyGeneration temp_31 = this ;
        GALGAS_bool test_32 = temp_31.readProperty_mGenerateDirectAccess () ;
        if (kBoolTrue != test_32.boolEnum ()) {
          const GALGAS_toManyPropertyGeneration temp_33 = this ;
          test_32 = temp_33.readProperty_mGenerateDirectRead () ;
        }
        test_30 = test_32.boolEnum () ;
        if (kBoolTrue == test_30) {
          result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 264)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 264)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 264)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 264)) ;
          const GALGAS_toManyPropertyGeneration temp_34 = this ;
          const GALGAS_toManyPropertyGeneration temp_35 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 265)).add_operation (GALGAS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 265)).add_operation (extensionGetter_swiftTypeName (temp_35.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 265)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 265)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 265)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 265)) ;
          const GALGAS_toManyPropertyGeneration temp_36 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (temp_36.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 266)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 266)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 266)) ;
          enumGalgasBool test_37 = kBoolTrue ;
          if (kBoolTrue == test_37) {
            const GALGAS_toManyPropertyGeneration temp_38 = this ;
            test_37 = temp_38.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 267)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 267)).boolEnum () ;
            if (kBoolTrue == test_37) {
              const GALGAS_toManyPropertyGeneration temp_39 = this ;
              test_37 = temp_39.readProperty_mGenerateDirectAccess ().boolEnum () ;
              if (kBoolTrue == test_37) {
                const GALGAS_toManyPropertyGeneration temp_40 = this ;
                result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (temp_40.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)) ;
              }
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 270)) ;
        }
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration prefKeyDefinitionCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_prefKeyDefinitionCode (C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toManyPropertyGeneration temp_0 = this ;
  const GALGAS_toManyPropertyGeneration temp_1 = this ;
  result_result = GALGAS_string ("fileprivate let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 284)).add_operation (GALGAS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 284)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 284)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 284)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_configurationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_12967 = temp_0 ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("self.undoManager") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string ("inUndoManager") ;
  }
  GALGAS_string var_undoManager_13041 = temp_2 ;
  const GALGAS_toManyPropertyGeneration temp_4 = this ;
  switch (temp_4.readProperty_mOption ().enumValue ()) {
  case GALGAS_toManyRelationshipOptionGeneration::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_none:
    {
      const GALGAS_toManyPropertyGeneration temp_5 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 294)).add_operation (GALGAS_string (" (no option)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 294)) ;
      const GALGAS_toManyPropertyGeneration temp_6 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_12967, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 295)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 295)).add_operation (GALGAS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 295)).add_operation (var_undoManager_13041, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 295)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 295)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 295)) ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasDependance:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasOpposite:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * extractPtr_13980 = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) (temp_4.readProperty_mOption ().unsafePointer ()) ;
      const GALGAS_string extractedValue_13414_oppositeName = extractPtr_13980->mAssociatedValue0 ;
      const GALGAS_toManyPropertyGeneration temp_7 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 299)).add_operation (GALGAS_string (" (has opposite relationship)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 299)) ;
      const GALGAS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_12967, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 300)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 300)).add_operation (GALGAS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 300)).add_operation (var_undoManager_13041, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 300)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 300)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 300)) ;
      const GALGAS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_12967, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 301)).add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 301)).add_operation (GALGAS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 301)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 301)) ;
      result_result.plusAssign_operation(GALGAS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_13414_oppositeName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (GALGAS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)) ;
      result_result.plusAssign_operation(GALGAS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_13414_oppositeName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (GALGAS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration setupRelationshipFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_setupRelationshipFromDictionaryCode (C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 311)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      const GALGAS_toManyPropertyGeneration temp_3 = this ;
      test_2 = temp_3.readProperty_mCustomStore ().boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_toManyPropertyGeneration temp_4 = this ;
        result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 314)).add_operation (GALGAS_string (" (Custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 314)) ;
        const GALGAS_toManyPropertyGeneration temp_5 = this ;
        const GALGAS_toManyPropertyGeneration temp_6 = this ;
        const GALGAS_toManyPropertyGeneration temp_7 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 315)).add_operation (GALGAS_string ("_property.setProp (EBReferenceArray (customRead_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 315)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 315)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 315)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 315)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 315)).add_operation (GALGAS_string (" (fromDictionary: inDictionary, with: self.undoManager)))\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 315)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 315)) ;
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_toManyPropertyGeneration temp_8 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)) ;
      result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 318)) ;
      result_result.plusAssign_operation(GALGAS_string ("      let array = readEntityArrayFromDictionary (\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 319)) ;
      const GALGAS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssign_operation(GALGAS_string ("        inRelationshipName: \"").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 320)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 320)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 320)) ;
      result_result.plusAssign_operation(GALGAS_string ("        inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 321)) ;
      result_result.plusAssign_operation(GALGAS_string ("        managedObjectArray: inManagedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 322)) ;
      const GALGAS_toManyPropertyGeneration temp_10 = this ;
      result_result.plusAssign_operation(GALGAS_string ("      ) as! [").add_operation (extensionGetter_swiftTypeName (temp_10.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 323)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 323)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 323)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 323)) ;
      const GALGAS_toManyPropertyGeneration temp_11 = this ;
      result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 324)).add_operation (GALGAS_string ("_property.setProp (EBReferenceArray (array))\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 324)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 324)) ;
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 325)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration objectAccessibilityCodeForSaveOperation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_objectAccessibilityCodeForSaveOperation (C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mCustomStore ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_toManyPropertyGeneration temp_2 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 351)).add_operation (GALGAS_string (" (custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 351)) ;
      const GALGAS_toManyPropertyGeneration temp_3 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    /* for managedObject in self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 352)).add_operation (GALGAS_string ("_property.propval.values {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 352)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 352)) ;
      result_result.plusAssign_operation(GALGAS_string ("      ioObjectArray.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 353)) ;
      result_result.plusAssign_operation(GALGAS_string ("    } */\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 354)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_toManyPropertyGeneration temp_4 = this ;
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 356)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 356)) ;
    const GALGAS_toManyPropertyGeneration temp_5 = this ;
    result_result.plusAssign_operation(GALGAS_string ("    for managedObject in self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 357)).add_operation (GALGAS_string (".values {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 357)) ;
    result_result.plusAssign_operation(GALGAS_string ("      ioObjectArray.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 358)) ;
    result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 359)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration resetToManyRelationships'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_resetToManyRelationships (C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 366)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_toManyPropertyGeneration temp_2 = this ;
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 369)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 369)) ;
    const GALGAS_toManyPropertyGeneration temp_3 = this ;
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 370)).add_operation (GALGAS_string ("_property.setProp ([])\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 370)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 370)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'validationStubExtension'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'indexes' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_4 [1] = {
  NULL
} ;

//--- Directory 'indexes'

const cDirectoryWrapper gWrapperDirectory_4_validationStubExtension (
  "indexes",
  0,
  gWrapperAllFiles_validationStubExtension_4,
  0,
  gWrapperAllDirectories_validationStubExtension_4
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_3 [2] = {
  & gWrapperDirectory_4_validationStubExtension,
  NULL
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension (
  "build",
  0,
  gWrapperAllFiles_validationStubExtension_3,
  1,
  gWrapperAllDirectories_validationStubExtension_3
) ;

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_5 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_5_validationStubExtension (
  "controllers",
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

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_0 [5] = {
  & gWrapperDirectory_3_validationStubExtension,
  & gWrapperDirectory_5_validationStubExtension,
  & gWrapperDirectory_1_validationStubExtension,
  & gWrapperDirectory_2_validationStubExtension,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension (
  "",
  0,
  gWrapperAllFiles_validationStubExtension_0,
  4,
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
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension " ;
  result << in_OBJECT_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n  func validate_" ;
  result << in_MODEL_5F_NAME.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "currentValue : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ",\n                 " ;
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
  cEnumerator_validationStubRoutineListForGeneration enumerator_1327 (constinArgument_inValidationStubRoutineListForGeneration, kENUMERATION_UP) ;
  while (enumerator_1327.hasCurrentObject ()) {
    GALGAS_string var_s_1385 = GALGAS_string (filewrapperTemplate_validationStubExtension_actionGeneration (inCompiler, enumerator_1327.current_mObjectTypeName (HERE), enumerator_1327.current_mModelName (HERE), enumerator_1327.current_mModelTypeName (HERE) COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 32))) ;
    GALGAS_string var_fileName_1530 = GALGAS_string ("validation-").add_operation (enumerator_1327.current_mObjectTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 37)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 37)).add_operation (enumerator_1327.current_mModelName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 37)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 37)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_1530  COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)) ;
    GALGAS_string var_defaultUserZone_32__1655 = GALGAS_string ("    var result : EBValidationResult <").add_operation (enumerator_1327.current_mModelTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 40)).add_operation (GALGAS_string (">\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 40)).add_operation (GALGAS_string ("    let validates = false // Add your validation condition here\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 40)).add_operation (GALGAS_string ("    if validates {\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GALGAS_string ("      result = .ok (proposedValue)\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 42)).add_operation (GALGAS_string ("    }else{\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 43)).add_operation (GALGAS_string ("      result = .rejectWithAlert (\"Rejected in \\(#file), line \\(#line)\")\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 44)).add_operation (GALGAS_string ("    }\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 45)).add_operation (GALGAS_string ("    return result\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 46)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_1530, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_s_1385, var_defaultUserZone_32__1655, GALGAS_string ("  }\n}\n\n//---------------------------------------------------------------------------------------------------------------------*\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 48)) ;
    }
    enumerator_1327.gotoNextObject () ;
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
  outArgument_outActionMap = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("run-action.ggs", 46)) ;
  cEnumerator_lstringlist enumerator_1930 (constinArgument_inActionDeclarationList, kENUMERATION_UP) ;
  while (enumerator_1930.hasCurrentObject ()) {
    {
    outArgument_outActionMap.setter_insertKey (enumerator_1930.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 48)) ;
    }
    enumerator_1930.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@actionFileGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                     const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
                                                     GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_actionFileGeneration temp_0 = this ;
  const GALGAS_actionFileGeneration temp_1 = this ;
  GALGAS_string var_s_2721 = GALGAS_string (filewrapperTemplate_actionGenerationTemplate_actionGeneration (inCompiler, temp_0.readProperty_mClassName (), temp_1.readProperty_mActionName () COMMA_SOURCE_FILE ("run-action.ggs", 67))) ;
  const GALGAS_actionFileGeneration temp_2 = this ;
  const GALGAS_actionFileGeneration temp_3 = this ;
  GALGAS_string var_fileName_2842 = GALGAS_string ("action-").add_operation (temp_2.readProperty_mClassName (), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)).add_operation (temp_3.readProperty_mActionName (), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_2842  COMMA_SOURCE_FILE ("run-action.ggs", 72)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_2842, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_s_2721, GALGAS_string ("    ENTER USER CODE HERE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("run-action.ggs", 81)), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 73)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'actionGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'indexes' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_4 [1] = {
  NULL
} ;

//--- Directory 'indexes'

const cDirectoryWrapper gWrapperDirectory_4_actionGenerationTemplate (
  "indexes",
  0,
  gWrapperAllFiles_actionGenerationTemplate_4,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_4
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_3 [2] = {
  & gWrapperDirectory_4_actionGenerationTemplate,
  NULL
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_3_actionGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_actionGenerationTemplate_3,
  1,
  gWrapperAllDirectories_actionGenerationTemplate_3
) ;

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_5_actionGenerationTemplate (
  "controllers",
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

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_0 [5] = {
  & gWrapperDirectory_3_actionGenerationTemplate,
  & gWrapperDirectory_5_actionGenerationTemplate,
  & gWrapperDirectory_1_actionGenerationTemplate,
  & gWrapperDirectory_2_actionGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_actionGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_actionGenerationTemplate_0,
  4,
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
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension " ;
  result << in_EXTENDED_5F_CLASS_5F_NAME.stringValue () ;
  result << " {\n  @objc func " ;
  result << in_ACTION_5F_NAME.stringValue () ;
  result << " (_ inSender : NSObject\?) {\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                              const GALGAS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                              const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                              const GALGAS_propertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                                                                              const GALGAS_propertyMap /* constinArgument_inPreferencesObservablePropertyMap */,
                                                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GALGAS_typeKind & outArgument_outType,
                                                                                              GALGAS_location & outArgument_outErrorLocation,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalIntMultipleBindingExpressionAST temp_0 = this ;
  outArgument_outEnableExpression = GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (temp_0.readProperty_mValue ().readProperty_uint ()  COMMA_SOURCE_FILE ("multiple-binding.ggs", 273)) ;
  outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("multiple-binding.ggs", 274)) ;
  const GALGAS_literalIntMultipleBindingExpressionAST temp_1 = this ;
  outArgument_outErrorLocation = temp_1.readProperty_mValue ().readProperty_location () ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_observablePropertyInMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool constinArgument_inPreferences,
                                                                                                        const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        const GALGAS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GALGAS_typeKind & outArgument_outType,
                                                                                                        GALGAS_location & outArgument_outErrorLocation,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyKind var_kind_13177 ;
  GALGAS_string var_swiftTypeStringForTransientFunctionArgument_13245 ;
  GALGAS_string var_defaultValueAsString_13290 ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_0 = this ;
  GALGAS_propertyMap temp_1 ;
  const enumGalgasBool test_2 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = constinArgument_inPreferencesObservablePropertyMap ;
  }else if (kBoolFalse == test_2) {
    temp_1 = constinArgument_inCurrentObservablePropertyMap ;
  }
  extensionMethod_analyzeObservableProperty (temp_0.readProperty_mProperty (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, temp_1, var_kind_13177, var_swiftTypeStringForTransientFunctionArgument_13245, var_defaultValueAsString_13290, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 290)) ;
  switch (var_kind_13177.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_13354 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_13177.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_13330_type = extractPtr_13354->mAssociatedValue0 ;
      outArgument_outType = extractedValue_13330_type ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 302)), GALGAS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.ggs", 302)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_5.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 304)), GALGAS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.ggs", 304)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_7.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 306)), GALGAS_string ("only an atomic property can be observed"), fixItArray8  COMMA_SOURCE_FILE ("multiple-binding.ggs", 306)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_9.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 308)), GALGAS_string ("only an atomic property can be observed"), fixItArray10  COMMA_SOURCE_FILE ("multiple-binding.ggs", 308)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_11 = this ;
  GALGAS_string temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_string ("self.") ;
  }
  outArgument_outEnableExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (extensionGetter_modelStringForSelf (temp_11.readProperty_mProperty (), temp_12, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 311))  COMMA_SOURCE_FILE ("multiple-binding.ggs", 310)) ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_14 = this ;
  outArgument_outErrorLocation = extensionGetter_location (temp_14.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 313)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool constinArgument_inPreferences,
                                                                                                 const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                 const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                 const GALGAS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                 GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                 GALGAS_typeKind & outArgument_outType,
                                                                                                 GALGAS_location & outArgument_outErrorLocation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_14965 ;
  const GALGAS_negateBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_expression_14965, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 328)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 338)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 338)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GALGAS_string ("cannot apply negation: operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 339)) ;
    }
  }
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression_14965  COMMA_SOURCE_FILE ("multiple-binding.ggs", 341)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool constinArgument_inPreferences,
                                                                                             const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                             const GALGAS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                             GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                             GALGAS_typeKind & outArgument_outType,
                                                                                             GALGAS_location & outArgument_outErrorLocation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16092 ;
  GALGAS_typeKind var_outLeftType_16113 ;
  GALGAS_location var_outLeftLocation_16138 ;
  const GALGAS_orBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_16092, var_outLeftType_16113, var_outLeftLocation_16138, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 356)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_16113.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 366)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 366)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_16138, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 367)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_16561 ;
  GALGAS_typeKind var_outRightType_16583 ;
  GALGAS_location var_outRightLocation_16609 ;
  const GALGAS_orBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_16561, var_outRightType_16583, var_outRightLocation_16609, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 369)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_16583.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 379)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 379)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_16609, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 380)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.ggs", 382)) ;
  outArgument_outErrorLocation = var_outRightLocation_16609 ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_16092, var_rightExpression_16561  COMMA_SOURCE_FILE ("multiple-binding.ggs", 384)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool constinArgument_inPreferences,
                                                                                              const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GALGAS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GALGAS_typeKind & outArgument_outType,
                                                                                              GALGAS_location & outArgument_outErrorLocation,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_17786 ;
  GALGAS_typeKind var_outLeftType_17807 ;
  GALGAS_location var_outLeftLocation_17832 ;
  const GALGAS_xorBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_17786, var_outLeftType_17807, var_outLeftLocation_17832, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 399)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_17807.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 409)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 409)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_17832, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 410)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_18255 ;
  GALGAS_typeKind var_outRightType_18277 ;
  GALGAS_location var_outRightLocation_18303 ;
  const GALGAS_xorBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_18255, var_outRightType_18277, var_outRightLocation_18303, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 412)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_18277.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 422)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 422)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_18303, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 423)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.ggs", 425)) ;
  outArgument_outErrorLocation = var_outRightLocation_18303 ;
  outArgument_outEnableExpression = GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_17786, var_rightExpression_18255  COMMA_SOURCE_FILE ("multiple-binding.ggs", 427)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool constinArgument_inPreferences,
                                                                                              const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GALGAS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GALGAS_typeKind & outArgument_outType,
                                                                                              GALGAS_location & outArgument_outErrorLocation,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_19481 ;
  GALGAS_typeKind var_outLeftType_19502 ;
  GALGAS_location var_outLeftLocation_19527 ;
  const GALGAS_andBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_19481, var_outLeftType_19502, var_outLeftLocation_19527, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 442)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_19502.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 452)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 452)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_19527, GALGAS_string ("cannot apply 'and': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 453)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_19951 ;
  GALGAS_typeKind var_outRightType_19973 ;
  GALGAS_location var_outRightLocation_19999 ;
  const GALGAS_andBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_19951, var_outRightType_19973, var_outRightLocation_19999, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 455)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_19973.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 465)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 465)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_19999, GALGAS_string ("cannot apply 'and': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 466)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.ggs", 468)) ;
  outArgument_outErrorLocation = var_outRightLocation_19999 ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_19481, var_rightExpression_19951  COMMA_SOURCE_FILE ("multiple-binding.ggs", 470)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool constinArgument_inPreferences,
                                                                                              const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GALGAS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GALGAS_typeKind & outArgument_outType,
                                                                                              GALGAS_location & outArgument_outErrorLocation,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_21178 ;
  GALGAS_typeKind var_outLeftType_21199 ;
  GALGAS_location var_outLeftLocation_21224 ;
  const GALGAS_comparisonMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_21178, var_outLeftType_21199, var_outLeftLocation_21224, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 485)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_21524 ;
  GALGAS_typeKind var_outRightType_21546 ;
  GALGAS_location var_outRightLocation_21572 ;
  const GALGAS_comparisonMultipleBindingExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_1.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_21524, var_outRightType_21546, var_outRightLocation_21572, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 495)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = var_outLeftType_21199.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 505)) ;
    if (kBoolTrue != test_3.boolEnum ()) {
      test_3 = var_outLeftType_21199.getter_isIntegerType (SOURCE_FILE ("multiple-binding.ggs", 505)) ;
    }
    test_2 = test_3.operator_not (SOURCE_FILE ("multiple-binding.ggs", 505)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_outLeftLocation_21224, GALGAS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.ggs", 506)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_outRightType_21546.objectCompare (var_outLeftType_21199)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (var_outRightLocation_21572, GALGAS_string ("cannot compare: right operand type is different than left operand type"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.ggs", 509)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.ggs", 511)) ;
  outArgument_outErrorLocation = var_outRightLocation_21572 ;
  const GALGAS_comparisonMultipleBindingExpressionAST temp_7 = this ;
  outArgument_outEnableExpression = GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_21178, temp_7.readProperty_mOperator (), var_rightExpression_21524  COMMA_SOURCE_FILE ("multiple-binding.ggs", 513)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@booleanMultipleBindingLiteralIntForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_booleanMultipleBindingLiteralIntForGeneration::getter_expressionString (C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outExpressionString ; // Returned variable
  const GALGAS_booleanMultipleBindingLiteralIntForGeneration temp_0 = this ;
  result_outExpressionString = GALGAS_string (".literalInt (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("multiple-binding.ggs", 528)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 528)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 528)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::getter_expressionString (C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outExpressionString ; // Returned variable
  const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GALGAS_string (".prop (").add_operation (temp_0.readProperty_mObservedModelString (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 536)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 536)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@negateBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_negateBooleanMultipleBindingExpressionForGeneration::getter_expressionString (C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outExpressionString ; // Returned variable
  const GALGAS_negateBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GALGAS_string (".not (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 544)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 544)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 544)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@orBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_orBooleanMultipleBindingExpressionForGeneration::getter_expressionString (C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outExpressionString ; // Returned variable
  const GALGAS_orBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GALGAS_orBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GALGAS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 552)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 552)).add_operation (GALGAS_string (", .or, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 552)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 552)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 552)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 552)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@xorBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_xorBooleanMultipleBindingExpressionForGeneration::getter_expressionString (C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outExpressionString ; // Returned variable
  const GALGAS_xorBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GALGAS_xorBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GALGAS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 560)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 560)).add_operation (GALGAS_string (", .xor, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 560)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 560)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 560)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 560)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@andBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_andBooleanMultipleBindingExpressionForGeneration::getter_expressionString (C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outExpressionString ; // Returned variable
  const GALGAS_andBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GALGAS_andBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GALGAS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 568)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 568)).add_operation (GALGAS_string (", .and, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 568)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 568)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 568)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 568)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@comparisonMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_comparisonMultipleBindingExpressionForGeneration::getter_expressionString (C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outExpressionString ; // Returned variable
  const GALGAS_comparisonMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GALGAS_string (".intcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 576)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 576)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 576)) ;
  const GALGAS_comparisonMultipleBindingExpressionForGeneration temp_1 = this ;
  switch (temp_1.readProperty_mOperator ().enumValue ()) {
  case GALGAS_multipleBindingComparisonAST::kNotBuilt:
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_equal:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (".eq"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 579)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_notEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (".ne"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 580)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lower:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (".lt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 581)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lowerOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (".le"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 582)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greater:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (".gt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 583)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greaterOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (".ge"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 584)) ;
    }
    break ;
  }
  const GALGAS_comparisonMultipleBindingExpressionForGeneration temp_2 = this ;
  result_outExpressionString.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_2.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 586)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 586)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 586)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 586)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayControllerDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_arrayControllerDeclarationAST temp_0 = this ;
  const GALGAS_arrayControllerDeclarationAST temp_1 = this ;
  const GALGAS_arrayControllerDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_1217 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 28)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 28)), temp_2.readProperty_mControllerName ().readProperty_location ()  COMMA_SOURCE_FILE ("array-controller.ggs", 28)) ;
  {
  const GALGAS_arrayControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1217, temp_3, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 29)) ;
  }
  {
  const GALGAS_arrayControllerDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1217, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("array-controller.ggs", 30)) ;
  }
  const GALGAS_arrayControllerDeclarationAST temp_5 = this ;
  switch (temp_5.readProperty_mModel ().enumValue ()) {
  case GALGAS_arrayControllerBoundModelAST::kNotBuilt:
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * extractPtr_1652 = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) (temp_5.readProperty_mModel ().unsafePointer ()) ;
      const GALGAS_lstring extractedValue_1470_rootEntityName = extractPtr_1652->mAssociatedValue0 ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, extractedValue_1470_rootEntityName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          {
          const GALGAS_arrayControllerDeclarationAST temp_7 = this ;
          const GALGAS_arrayControllerDeclarationAST temp_8 = this ;
          ioArgument_ioGraph.setter_addEdge (var_node_1217, GALGAS_lstring::constructor_new (extractedValue_1470_rootEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 34)).add_operation (temp_7.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 34)), temp_8.readProperty_mToManyPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("array-controller.ggs", 34)) COMMA_SOURCE_FILE ("array-controller.ggs", 34)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_selfToManyRelationship:
    {
      {
      const GALGAS_arrayControllerDeclarationAST temp_9 = this ;
      const GALGAS_arrayControllerDeclarationAST temp_10 = this ;
      const GALGAS_arrayControllerDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_addEdge (var_node_1217, GALGAS_lstring::constructor_new (temp_9.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 37)).add_operation (temp_10.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 37)), temp_11.readProperty_mToManyPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("array-controller.ggs", 37)) COMMA_SOURCE_FILE ("array-controller.ggs", 37)) ;
      }
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_arrayControllerDeclarationAST::getter_nodeKey (C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_arrayControllerDeclarationAST temp_0 = this ;
  const GALGAS_arrayControllerDeclarationAST temp_1 = this ;
  const GALGAS_arrayControllerDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 44)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 44)), temp_2.readProperty_mControllerName ().readProperty_location ()  COMMA_SOURCE_FILE ("array-controller.ggs", 44)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayControllerDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_arrayControllerDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_4343 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("array-controller.ggs", 106)) ;
  if (NULL != objectArray_4343) {
    macroValidSharedObject (objectArray_4343, cMapElement_classMap) ;
    GALGAS_actionMap temp_1 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.ggs", 109)) ;
    temp_1.addAssign_operation (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.ggs", 109)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 109)) ;
    temp_1.addAssign_operation (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.ggs", 109)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 109)) ;
    GALGAS_actionMap var_controllerActions_4463 = temp_1 ;
    const GALGAS_arrayControllerDeclarationAST temp_2 = this ;
    switch (temp_2.readProperty_mModel ().enumValue ()) {
    case GALGAS_arrayControllerBoundModelAST::kNotBuilt:
      break ;
    case GALGAS_arrayControllerBoundModelAST::kEnum_rootToManyRelationship:
      {
        const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * extractPtr_5671 = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) (temp_2.readProperty_mModel ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4588_rootEntityName = extractPtr_5671->mAssociatedValue0 ;
        GALGAS_propertyMap var_rootProperties_4675 ;
        GALGAS_classKind joker_4654 ; // Joker input parameter
        GALGAS_actionMap joker_4677_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_4677_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_4588_rootEntityName, joker_4654, var_rootProperties_4675, joker_4677_2, joker_4677_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 112)) ;
        GALGAS_propertyKind var_classKind_4753 ;
        const GALGAS_arrayControllerDeclarationAST temp_3 = this ;
        GALGAS_actionMap joker_4755_2 ; // Joker input parameter
        GALGAS_bool joker_4755_1 ; // Joker input parameter
        var_rootProperties_4675.method_searchKey (temp_3.readProperty_mToManyPropertyName (), var_classKind_4753, joker_4755_2, joker_4755_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 113)) ;
        switch (var_classKind_4753.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_4588_rootEntityName.readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.ggs", 116)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_5350 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_4753.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_4908_typeName = extractPtr_5350->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_4918_graphic = extractPtr_5350->mAssociatedValue2 ;
            GALGAS_propertyKind var_kind_4940 = GALGAS_propertyKind::constructor_arrayController (extractedValue_4908_typeName, extractedValue_4918_graphic  COMMA_SOURCE_FILE ("array-controller.ggs", 118)) ;
            {
            const GALGAS_arrayControllerDeclarationAST temp_5 = this ;
            objectArray_4343->mProperty_mPropertyMap.setter_insertKey (temp_5.readProperty_mControllerName (), var_kind_4940, var_controllerActions_4463, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 122)) ;
            }
            const GALGAS_arrayControllerDeclarationAST temp_6 = this ;
            const GALGAS_arrayControllerDeclarationAST temp_7 = this ;
            const GALGAS_arrayControllerDeclarationAST temp_8 = this ;
            objectArray_4343->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (temp_6.readProperty_mControllerName ().readProperty_string (), GALGAS_string ("rootObject.").add_operation (temp_7.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 126)), temp_8.readProperty_mClassName ().readProperty_string ()  COMMA_SOURCE_FILE ("array-controller.ggs", 124))  COMMA_SOURCE_FILE ("array-controller.ggs", 124)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_4588_rootEntityName.readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.ggs", 130)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_4588_rootEntityName.readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.ggs", 132)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_4588_rootEntityName.readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray11  COMMA_SOURCE_FILE ("array-controller.ggs", 134)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_arrayControllerBoundModelAST::kEnum_selfToManyRelationship:
      {
        GALGAS_propertyKind var_classKind_5776 ;
        const GALGAS_arrayControllerDeclarationAST temp_12 = this ;
        GALGAS_actionMap joker_5778_2 ; // Joker input parameter
        GALGAS_bool joker_5778_1 ; // Joker input parameter
        objectArray_4343->mProperty_mPropertyMap.method_searchKey (temp_12.readProperty_mToManyPropertyName (), var_classKind_5776, joker_5778_2, joker_5778_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 137)) ;
        switch (var_classKind_5776.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            const GALGAS_arrayControllerDeclarationAST temp_13 = this ;
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mToManyPropertyName ().readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray14  COMMA_SOURCE_FILE ("array-controller.ggs", 140)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_6367 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_5776.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_5941_typeName = extractPtr_6367->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_5951_graphic = extractPtr_6367->mAssociatedValue2 ;
            GALGAS_propertyKind var_kind_5973 = GALGAS_propertyKind::constructor_arrayController (extractedValue_5941_typeName, extractedValue_5951_graphic  COMMA_SOURCE_FILE ("array-controller.ggs", 142)) ;
            {
            const GALGAS_arrayControllerDeclarationAST temp_15 = this ;
            objectArray_4343->mProperty_mPropertyMap.setter_insertKey (temp_15.readProperty_mControllerName (), var_kind_5973, var_controllerActions_4463, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 146)) ;
            }
            const GALGAS_arrayControllerDeclarationAST temp_16 = this ;
            const GALGAS_arrayControllerDeclarationAST temp_17 = this ;
            const GALGAS_arrayControllerDeclarationAST temp_18 = this ;
            objectArray_4343->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (temp_16.readProperty_mControllerName ().readProperty_string (), temp_17.readProperty_mToManyPropertyName ().readProperty_string (), temp_18.readProperty_mClassName ().readProperty_string ()  COMMA_SOURCE_FILE ("array-controller.ggs", 148))  COMMA_SOURCE_FILE ("array-controller.ggs", 148)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            const GALGAS_arrayControllerDeclarationAST temp_19 = this ;
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (temp_19.readProperty_mToManyPropertyName ().readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray20  COMMA_SOURCE_FILE ("array-controller.ggs", 154)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const GALGAS_arrayControllerDeclarationAST temp_21 = this ;
            TC_Array <C_FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (temp_21.readProperty_mToManyPropertyName ().readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray22  COMMA_SOURCE_FILE ("array-controller.ggs", 156)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            const GALGAS_arrayControllerDeclarationAST temp_23 = this ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_23.readProperty_mToManyPropertyName ().readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray24  COMMA_SOURCE_FILE ("array-controller.ggs", 158)) ;
          }
          break ;
        }
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayControllerDeclarationAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_thirdAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap var_boundModelPropertyMap_7198 ;
  const GALGAS_arrayControllerDeclarationAST temp_0 = this ;
  switch (temp_0.readProperty_mModel ().enumValue ()) {
  case GALGAS_arrayControllerBoundModelAST::kNotBuilt:
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * extractPtr_7401 = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) (temp_0.readProperty_mModel ().unsafePointer ()) ;
      const GALGAS_lstring extractedValue_7274_rootEntityName = extractPtr_7401->mAssociatedValue0 ;
      GALGAS_classKind joker_7352 ; // Joker input parameter
      GALGAS_actionMap joker_7393_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_7393_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_7274_rootEntityName, joker_7352, var_boundModelPropertyMap_7198, joker_7393_2, joker_7393_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 175)) ;
    }
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_selfToManyRelationship:
    {
      const GALGAS_arrayControllerDeclarationAST temp_1 = this ;
      GALGAS_classKind joker_7509 ; // Joker input parameter
      GALGAS_actionMap joker_7550_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_7550_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mClassName (), joker_7509, var_boundModelPropertyMap_7198, joker_7550_2, joker_7550_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 182)) ;
    }
    break ;
  }
  GALGAS_propertyKind var_boundModelClassKind_7663 ;
  const GALGAS_arrayControllerDeclarationAST temp_2 = this ;
  GALGAS_actionMap joker_7670_2 ; // Joker input parameter
  GALGAS_bool joker_7670_1 ; // Joker input parameter
  var_boundModelPropertyMap_7198.method_searchKey (temp_2.readProperty_mToManyPropertyName (), var_boundModelClassKind_7663, joker_7670_2, joker_7670_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 189)) ;
  GALGAS_arrayControllerModelKind var_arrayControllerModelKind_7820 ;
  GALGAS_bool var_graphic_7840 ;
  GALGAS_string var_elementTypeName_7870 ;
  switch (var_boundModelClassKind_7663.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const GALGAS_arrayControllerDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mToManyPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.ggs", 200)) ;
      var_graphic_7840.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7820.drop () ; // Release error dropped variable
      var_elementTypeName_7870.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_8358 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_boundModelClassKind_7663.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_8091_typeName = extractPtr_8358->mAssociatedValue0 ;
      const GALGAS_propertyAccessibility extractedValue_8105_accessibility = extractPtr_8358->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_8115_isGraphic = extractPtr_8358->mAssociatedValue2 ;
      var_elementTypeName_7870 = extractedValue_8091_typeName.readProperty_string () ;
      var_graphic_7840 = extractedValue_8115_isGraphic ;
      GALGAS_arrayControllerModelKind temp_5 ;
      const enumGalgasBool test_6 = extractedValue_8105_accessibility.getter_isTransient (SOURCE_FILE ("array-controller.ggs", 206)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_arrayControllerModelKind::constructor_transientArray (SOURCE_FILE ("array-controller.ggs", 207)) ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_arrayControllerModelKind::constructor_entityArray (SOURCE_FILE ("array-controller.ggs", 208)) ;
      }
      var_arrayControllerModelKind_7820 = temp_5 ;
      GALGAS_classKind joker_8352 ; // Joker input parameter
      GALGAS_propertyMap joker_8355_3 ; // Joker input parameter
      GALGAS_actionMap joker_8355_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_8355_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_8091_typeName, joker_8352, joker_8355_3, joker_8355_2, joker_8355_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 210)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const GALGAS_arrayControllerDeclarationAST temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mToManyPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.ggs", 212)) ;
      var_graphic_7840.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7820.drop () ; // Release error dropped variable
      var_elementTypeName_7870.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const GALGAS_arrayControllerDeclarationAST temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mToManyPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.ggs", 216)) ;
      var_graphic_7840.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7820.drop () ; // Release error dropped variable
      var_elementTypeName_7870.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const GALGAS_arrayControllerDeclarationAST temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mToManyPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray12  COMMA_SOURCE_FILE ("array-controller.ggs", 220)) ;
      var_graphic_7840.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7820.drop () ; // Release error dropped variable
      var_elementTypeName_7870.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_arrayControllerDeclarationAST temp_13 = this ;
  const GALGAS_arrayControllerDeclarationAST temp_14 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_arrayControllerGeneration::constructor_new (temp_13.readProperty_mClassName ().readProperty_string (), temp_14.readProperty_mControllerName (), GALGAS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_7870, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 228)), var_arrayControllerModelKind_7820, var_elementTypeName_7870, var_graphic_7840  COMMA_SOURCE_FILE ("array-controller.ggs", 225))  COMMA_SOURCE_FILE ("array-controller.ggs", 225)) ;
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.addAssign_operation (var_elementTypeName_7870  COMMA_SOURCE_FILE ("array-controller.ggs", 233)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_arrayControllerPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                                      const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                      const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("array-controller.ggs", 252)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 252)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 252)) ;
      const GALGAS_arrayControllerPropertyGeneration temp_1 = this ;
      result_result.plusAssign_operation(GALGAS_string ("//   Array controller: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 253)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 253)) ;
      result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("array-controller.ggs", 254)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 254)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 254)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 254)) ;
      const GALGAS_arrayControllerPropertyGeneration temp_2 = this ;
      const GALGAS_arrayControllerPropertyGeneration temp_3 = this ;
      const GALGAS_arrayControllerPropertyGeneration temp_4 = this ;
      result_result.plusAssign_operation(GALGAS_string ("@MainAction let preferences_").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 255)).add_operation (GALGAS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 255)).add_operation (temp_3.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 255)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 255)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 255)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 255)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 255)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("array-controller.ggs", 257)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 257)) ;
    const GALGAS_arrayControllerPropertyGeneration temp_5 = this ;
    result_result.plusAssign_operation(GALGAS_string ("  //   Array controller: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 258)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 258)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 258)) ;
    result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("array-controller.ggs", 259)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 259)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 259)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 259)) ;
    const GALGAS_arrayControllerPropertyGeneration temp_6 = this ;
    const GALGAS_arrayControllerPropertyGeneration temp_7 = this ;
    const GALGAS_arrayControllerPropertyGeneration temp_8 = this ;
    result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 260)).add_operation (GALGAS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 260)).add_operation (temp_7.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 260)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 260)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 260)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 260)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 260)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_arrayControllerPropertyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_arrayControllerPropertyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_arrayControllerPropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 273)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 273)) ;
  const GALGAS_arrayControllerPropertyGeneration temp_1 = this ;
  const GALGAS_arrayControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 274)).add_operation (GALGAS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 274)).add_operation (temp_2.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 274)).add_operation (GALGAS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 274)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 274)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration populateExplorerWindowCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_arrayControllerPropertyGeneration::getter_populateExplorerWindowCode (C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_arrayControllerPropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("    //--- Array controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 280)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 280)) ;
  const GALGAS_arrayControllerPropertyGeneration temp_1 = this ;
  const GALGAS_arrayControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 281)).add_operation (GALGAS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 281)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 281)).add_operation (GALGAS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 281)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 281)) ;
//---
  return result_result ;
}


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
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    " ;
  result << GALGAS_string ("Array controller ").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nfinal class Controller_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " : ReadOnlyAbstractGenericRelationshipProperty" ;
  const enumGalgasBool test_0 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << ", EBGraphicViewControllerProtocol" ;
  }else if (kBoolFalse == test_0) {
  }
  result << ", HiddenEBProtocol {\n\n  //····················································································································\n  //    Undo manager\n  //····················································································································\n\n  private weak var mUndoManager : UndoManager\? = nil // SHOULD BE WEAK\n  var undoManager : UndoManager\? { return self.mUndoManager }\n\n  //····················································································································\n  // Model\n  //····················································································································\n\n  private weak var mModel : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? = nil // SHOULD BE WEAK\n\n  //····················································································································\n\n  var objects : EBReferenceArray <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> {\n    if let objects = self.mModel\?.propval {\n      return objects\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  //····················································································································\n\n  var selectedSet : EBReferenceSet <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> {\n    set {\n" ;
  const enumGalgasBool test_1 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "    //--- Add observers to newly selected set\n      for object in newValue.subtracting (self.mPrivateSelectedSet).values {\n        object.selectionDisplay_property.startsToBeObserved (by: self.mObjectSelectionObserver)\n      }\n    //--- Remove observers to deselected set\n      let deselectedSet = self.mPrivateSelectedSet.subtracting (newValue)\n      for object in deselectedSet.values {\n        object.selectionDisplay_property.stopsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n      if deselectedSet.count > 0 {\n        self.mObjectSelectionObserver.observedObjectDidChange () // Required, as removing observer does not post event\n      }\n    //---\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "      self.mPrivateSelectedSet = newValue\n    }\n    get {\n      return self.selectedArray_property.propset\n    }\n  }\n\n  //····················································································································\n\n  private var mPrivateSelectedSet = EBReferenceSet <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> () {\n    didSet {\n      self.selectedArray_property.observedObjectDidChange ()\n      self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (self.mPrivateSelectedSet.values)))\n    }\n  }\n\n  //····················································································································\n  // Selected Array\n  //····················································································································\n\n  private let mInternalSelectedArrayProperty = StoredArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " (usedForSignature: false, key: nil)\n\n  //····················································································································\n\n  var selectedArrayDidChange_property : EBObservedObserver { return self.mInternalSelectedArrayProperty } // EBGraphicViewControllerProtocol\n  var selectedArray_property : ReadOnlyArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " { return self.mInternalSelectedArrayProperty }\n\n  //····················································································································\n\n  var selectedArray : EBReferenceArray <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> { return self.selectedArray_property.propval }\n\n" ;
  const enumGalgasBool test_2 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  //····················································································································\n  //   Init\n  //····················································································································\n\n  override init () {\n    super.init ()\n   //--- Selection observers\n    self.canBringForward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringForward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsToBeObserved (by: self.canBringToFront_property)\n  //---\n    self.canBringToFront_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringToFront)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsToBeObserved (by: self.canBringToFront_property)\n  //---\n    self.canSendBackward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendBackward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsToBeObserved (by: self.canSendBackward_property)\n  //---\n    self.canSendToBack_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendToBack)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsToBeObserved (by: self.canSendToBack_property)\n  //---\n    self.canFlipHorizontally_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipHorizontally)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsToBeObserved (by: self.canFlipHorizontally_property)\n  //---\n    self.canFlipVertically_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipVertically)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsToBeObserved (by: self.canFlipVertically_property)\n  //---\n    self.canRotate90_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canRotate90)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsToBeObserved (by: self.canRotate90_property)\n  }\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "\n  //····················································································································\n\n  var objectCount : Int {\n    if let n = self.mModel\?.propval.count {\n      return n\n    }else{\n      return 0\n    }\n  }\n\n  //····················································································································\n\n  final func bind_model (_ inModel : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ", _ inUndoManager : UndoManager\?) {\n    self.mModel = inModel\n    self.mUndoManager = inUndoManager\n    inModel.attachClient (self)\n" ;
  const enumGalgasBool test_3 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "    self.startObservingObjectShape ()\n    self.startObservingSelectionShape ()\n    self.inspectorViewManagerStartsObservingSelection ()\n" ;
  }else if (kBoolFalse == test_3) {
  }
  result << "  }\n\n  //····················································································································\n\n  final func unbind_model () {\n" ;
  const enumGalgasBool test_4 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "    self.stopObservingObjectShape ()\n    self.stopObservingSelectionShape ()\n    self.inspectorViewManagerStopsObservingSelection ()\n" ;
  }else if (kBoolFalse == test_4) {
  }
  result << "    self.mModel\?.detachClient (self)\n    self.selectedSet = EBReferenceSet ()\n    self.mModel = nil\n    self.mUndoManager = nil\n  }\n\n  //····················································································································\n\n  override func notifyModelDidChange () {\n    super.notifyModelDidChange ()\n    let currentSelectedSet = self.selectedSet\n    let objectArray = self.objectArray\n    let newSelectedSet = currentSelectedSet.intersection (objectArray.values)\n    self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (newSelectedSet.values)))\n  }\n\n   //····················································································································\n\n   var objectArray : EBReferenceArray <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> {\n     if let values = self.mModel\?.propval {\n       return values\n     }else{\n       return EBReferenceArray ()\n     }\n   }\n\n  //····················································································································\n  //   SELECTION\n  // MARK: -\n  //····················································································································\n\n  var selectedIndexesSet : Set <Int> {\n    var result = Set <Int> ()\n    var idx = 0\n    for object in self.objectArray.values {\n      if self.selectedArray_property.propset.contains (object) {\n        result.insert (idx)\n      }\n      idx += 1\n    }\n    return result\n  }\n\n  //····················································································································\n\n  func setSelection (_ inObjects : [" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "]) {\n    self.selectedSet = EBReferenceSet (inObjects)\n  }\n" ;
  const enumGalgasBool test_5 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "\n  //····················································································································\n  //  Graphic view interface\n  //····················································································································\n\n  var selectedGraphicObjectSet : EBReferenceSet <EBGraphicManagedObject> {\n    var result = EBReferenceSet <EBGraphicManagedObject> (minimumCapacity: self.selectedArray_property.propval.count)\n    for object in self.selectedArray_property.propval.values {\n      result.insert (object)\n    }\n    return result\n  }\n\n   //····················································································································\n\n   var graphicObjectArray : [EBGraphicManagedObject] {\n     if let v = self.mModel\?.propval {\n       return v.values\n     }else{\n       return []\n     }\n   }\n\n  //····················································································································\n  // MARK: -\n  // Compute selection shape\n  //····················································································································\n\n  private var mObjectSelectionObserver = EBOutletEvent ()\n\n  //····················································································································\n\n  private func startObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StartsToBeObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = { [weak self] in self\?.computeSelectionShape () }\n  }\n\n  //····················································································································\n\n  func computeSelectionShape () {\n    var selectionDisplayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if !self.selectedArray_property.propset.contains (object) {\n        selectionDisplayArray.append (EBShape ())\n      }else if let shape = object.selectionDisplay {\n        selectionDisplayArray.append (shape)\n      }else{\n        selectionDisplayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateSelectionShape (selectionDisplayArray)\n    }\n  }\n\n  //····················································································································\n\n  private func stopObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StopsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = nil\n  }\n\n  //····················································································································\n  // MARK: -\n  // Compute object shape\n  //····················································································································\n\n  private var mObjectDisplayObserver = EBOutletEvent ()\n\n  //····················································································································\n\n  private func startObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StartsToBeObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = { [weak self] in self\?.updateObjectDisplay () }\n  }\n\n  //····················································································································\n\n  private func stopObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StopsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = nil\n  }\n\n  //····················································································································\n\n  func updateObjectDisplay () {\n    var displayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if let shape = object.objectDisplay {\n        displayArray.append (shape)\n      }else{\n        displayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateObjectDisplay (displayArray)\n    }\n  }\n\n  //····················································································································\n  // MARK: -\n  //····················································································································\n\n  func alignmentPointSetArray () -> [Set<CanariPoint>] {\n    var result = [Set<CanariPoint>] ()\n    for object in self.objectArray.values {\n      result.append (object.alignmentPoints ())\n    }\n    return result\n  }\n\n  //····················································································································\n  // MARK: -\n  // EBGraphicViews\n  //····················································································································\n\n  private var mEBGraphicViews = Set <EBGraphicView> ()\n  private var mPasteboardTypes = Set <NSPasteboard.PasteboardType> ()\n\n  //····················································································································\n\n  func addPasteBoardType (_ inType : NSPasteboard.PasteboardType) {\n    if !self.mPasteboardTypes.contains (inType) {\n      self.mPasteboardTypes.insert (inType)\n      for ebView in self.mEBGraphicViews {\n        ebView.register (draggedTypes: [inType])\n      }\n    }\n  }\n\n  //····················································································································\n\n  func boundViews () -> [EBGraphicView] {\n    return Array (self.mEBGraphicViews)\n  }\n\n  //····················································································································\n\n  final func setBackgroundImageAffineTransform (_ inAffineTransform : NSAffineTransform) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mBackgroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  //····················································································································\n\n  final func setForegroundImageAffineTransform (_ inAffineTransform : NSAffineTransform) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mForegroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  //····················································································································\n\n  final func bind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.register (draggedTypes: Array (self.mPasteboardTypes))\n      self.mEBGraphicViews.insert (ebView)\n      ebView.set (controller: self)\n    }\n  }\n\n  //····················································································································\n\n  /* final func unbind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.updateObjectDisplay ([])\n      ebView.updateSelectionShape ([])\n      self.mEBGraphicViews.remove (ebView)\n    }\n  } */\n" ;
  }else if (kBoolFalse == test_5) {
  }
  result << "\n  //····················································································································\n\n  func selectedObjectIndexSet () -> NSIndexSet {\n    let modelObjects = self.objectArray\n    let selectedObjects = self.selectedArray_property.propset\n    let indexSet = NSMutableIndexSet ()\n    for object in selectedObjects.values {\n      if let index = modelObjects.firstIndex (of: object) {\n        indexSet.add (index)\n      }\n    }\n    return indexSet\n  }\n\n" ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GALGAS_arrayControllerModelKind::kNotBuilt :
    break ;
  case GALGAS_arrayControllerModelKind::kEnum_transientArray :
    {
    }
    break ;
  case GALGAS_arrayControllerModelKind::kEnum_entityArray :
    {
      result << "  //····················································································································\n  //    select\n  //····················································································································\n\n  func select (object inObject : " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << ") {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let objectArray) :\n       let array = EBReferenceArray (objectArray)\n       if array.contains (inObject) {\n           self.selectedSet = EBReferenceSet (inObject)\n        }\n      }\n    }\n  }\n\n  //····················································································································\n  //    add\n  //····················································································································\n\n   @objc func add (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let v) :\n        let newObject = " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " (self.undoManager)\n        var array = EBReferenceArray (v)\n        array.append (newObject)\n      //--- New object is the selection\n        self.selectedSet = EBReferenceSet ([newObject])\n        model.setProp (array)\n      }\n    }\n  }\n\n  //····················································································································\n  //    remove\n  //····················································································································\n\n  @objc func remove (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let model_prop) :\n      //------------- Find the object to be selected after selected object removing\n      //--- Dictionary of object sorted indexes\n        var sortedObjectDictionary = EBReferenceDictionary <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << ", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          sortedObjectDictionary [object] = index\n        }\n        var indexArrayOfSelectedObjects = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = sortedObjectDictionary [object]\n          if let idx = index {\n            indexArrayOfSelectedObjects.append (idx)\n          }\n        }\n      //--- Sort\n        indexArrayOfSelectedObjects.sort { $0 < $1 }\n      //--- Find the first index of a non selected object\n        var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n        for index in indexArrayOfSelectedObjects {\n          if newSelectionIndex < index {\n            break\n          }else{\n            newSelectionIndex = index + 1\n          }\n        }\n        var newSelectedObject : " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "\? = nil\n        if (newSelectionIndex >= 0) && (newSelectionIndex < model_prop.count) {\n          newSelectedObject = model_prop [newSelectionIndex]\n        }\n      //----------------------------------------- Remove selected object\n      //--- Dictionary of object absolute indexes\n        var objectDictionary = EBReferenceDictionary <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << ", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          objectDictionary [object] = index\n        }\n      //--- Build selected objects index array\n        var selectedObjectIndexArray = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = objectDictionary [object]\n          if let idx = index {\n            selectedObjectIndexArray.append (idx)\n          }\n        }\n      //--- Sort in reverse order\n        selectedObjectIndexArray.sort { $1 < $0 }\n      //--- Remove objects, in reverse of order of their index\n        var newObjectArray = EBReferenceArray (model_prop)\n        for index in selectedObjectIndexArray {\n          newObjectArray.remove (at: index)\n        }\n      //----------------------------------------- Set new selection\n        var newSelectionSet = EBReferenceSet <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "> ()\n        if let object = newSelectedObject {\n          newSelectionSet.insert (object)\n        }\n        self.selectedSet = newSelectionSet\n      //----------------------------------------- Set new object array\n        model.setProp (newObjectArray)\n      }\n    }\n  }\n" ;
    }
    break ;
  }
  const enumGalgasBool test_6 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "\n  //····················································································································\n  //  SELECTION OPERATIONS\n  //····················································································································\n\n  private func sortedIndexArrayOfSelectedObjects () -> [Int] {\n    var result = [Int] ()\n    let objects = self.objectArray\n    for object in self.selectedArray_property.propset.values {\n      let idx = objects.firstIndex (of: object)!\n      result.append (idx)\n    }\n    return result.sorted ()\n  }\n\n  //····················································································································\n  // MARK: -\n  //····················································································································\n\n  func canCut (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if (inPasteboardType == nil) || (self.selectedArray_property.propset.count == 0) {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canCopyAndPaste () || !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  //····················································································································\n  // MARK: -\n  //····················································································································\n\n  func cutSelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, pasteOffset : CanariPoint) {\n    self.copySelectedObjectsIntoPasteboard (inPasteboardType, pasteOffset: pasteOffset)\n    self.deleteSelectedObjects ()\n  }\n\n  //····················································································································\n\n  func canCopy (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    return self.canCut (inPasteboardType)\n  }\n\n  //····················································································································\n  // MARK: -\n  //····················································································································\n\n  func copySelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?,\n                                          pasteOffset : CanariPoint) {\n    if let pasteboardType = inPasteboardType {\n    //--- Declare pasteboard types\n      let pb = NSPasteboard.general\n      pb.declareTypes ([pasteboardType, .pdf], owner: self)\n    //--- Build PDF representation\n      let indexArray = self.sortedIndexArrayOfSelectedObjects ()\n      let objects = self.objectArray\n      var shape = EBShape ()\n      for idx in indexArray {\n        let object = objects [idx]\n        if let s = object.objectDisplay {\n          shape.add (s)\n        }\n      }\n      let pdfData = buildPDFimageData (frame: shape.boundingBox, shape: shape)\n      pb.setData (pdfData, forType: .pdf)\n   //--- Build private representation\n      var objectDictionaryArray = [[String : Any]] ()\n      var objectAdditionalDictionaryArray = [[String : Any]] ()\n      for idx in indexArray {\n        let object = objects [idx]\n        var dict = [String : Any] ()\n        object.savePropertiesIntoDictionary (&dict)\n        objectDictionaryArray.append (dict)\n        var additionalDict = [String : Any] ()\n        object.saveIntoAdditionalDictionary (&additionalDict)\n        objectAdditionalDictionaryArray.append (additionalDict)\n      }\n    //--- Copy private representation\n      let dataDictionary : [String : Any] = [\n        OBJECT_DICTIONARY_KEY : objectDictionaryArray,\n        OBJECT_ADDITIONAL_DICTIONARY_KEY : objectAdditionalDictionaryArray,\n        X_KEY : pasteOffset.x,\n        Y_KEY : pasteOffset.y\n      ]\n      pb.setPropertyList (dataDictionary, forType: pasteboardType)\n    }\n  }\n\n  //····················································································································\n  // MARK: -\n  //····················································································································\n\n  func canPaste (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if let pasteboardType = inPasteboardType {\n      let pb = NSPasteboard.general\n      return pb.availableType (from: [pasteboardType]) != nil\n    }else{\n      return false\n    }\n  }\n\n  //····················································································································\n\n   func pasteFromPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, _ inWindow : NSWindow) {\n    let pb = NSPasteboard.general\n    if let pasteboardType = inPasteboardType,\n           pb.availableType (from: [pasteboardType]) != nil,\n           let dataDictionary = pb.propertyList (forType: pasteboardType) as\? [String : Any],\n           let dictionaryArray = dataDictionary [OBJECT_DICTIONARY_KEY] as\? [[String : Any]],\n           let additionalDictionaryArray = dataDictionary [OBJECT_ADDITIONAL_DICTIONARY_KEY] as\? [[String : Any]],\n           let X = dataDictionary [X_KEY] as\? Int,\n           let Y = dataDictionary [Y_KEY] as\? Int {\n      var newObjects = [" ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << "] ()\n      var userSet = EBReferenceSet <EBManagedObject> ()\n      var idx = -1\n      var errorMessage = \"\"\n      for dictionary in dictionaryArray {\n        idx += 1\n        if let object = makeManagedObjectFromDictionary (self.undoManager, dictionary) as\? " ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << " {\n          if errorMessage.isEmpty {\n            errorMessage = object.operationAfterPasting (additionalDictionary: additionalDictionaryArray [idx],\n                                                         optionalDocument: self.document,\n                                                         objectArray: self.objectArray.values)\n          }\n          if errorMessage.isEmpty {\n            object.translate (xBy: X, yBy: Y, userSet: &userSet)\n            newObjects.append (object)\n          }\n        }\n      }\n      if errorMessage.isEmpty {\n        var objects = self.objectArray\n        objects.append (objects: newObjects)\n        self.mModel\?.setProp (objects)\n        self.selectedSet = EBReferenceSet (newObjects)\n      }else{\n         let alert = NSAlert ()\n         alert.messageText = errorMessage\n         _ = alert.addButton (withTitle: \"Ok\")\n         alert.beginSheetModal (for: inWindow) { (inReturnCode : NSApplication.ModalResponse) in }\n      }\n    }\n  }\n\n  //····················································································································\n  // MARK: -\n  //····················································································································\n\n  func canDelete () -> Bool {\n    if self.selectedArray_property.propset.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  //····················································································································\n\n  final var mAfterObjectRemovingCallback : Optional < () -> Void > = nil\n\n  //····················································································································\n\n  func deleteSelectedObjects () {\n    if self.canDelete (), let model = self.mModel {\n    //--- Remove selected objects\n      let objectsToRemove = self.selectedArray_property.propset\n      for object in objectsToRemove.values {\n        object.operationBeforeRemoving ()\n        var objects = model.propval\n        if let idx = objects.firstIndex (of: object) {\n          objects.remove (at: idx)\n          model.setProp (objects)\n        }\n      }\n    //---\n      self.mAfterObjectRemovingCallback\? ()\n    }\n  }\n\n  //····················································································································\n  // MARK: -\n  //····················································································································\n\n  func selectAllObjects () {\n    self.selectedSet = EBReferenceSet (self.objectArray.values)\n  }\n\n  //····················································································································\n  // BRING FORWARD\n  // MARK: -\n  //····················································································································\n\n  var canBringForward_property = EBTransientProperty_Bool ()\n\n  //····················································································································\n\n  var canBringForward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray.last! < (objects.count - 1)\n    }\n    return result\n  }\n\n  //····················································································································\n\n  func bringForward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n       let object = objects [idx]\n       objects.remove (at: idx)\n       objects.insert (object, at: idx+1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  //····················································································································\n  // BRING TO FRONT\n  // MARK: -\n  //····················································································································\n\n  var canBringToFront_property = EBTransientProperty_Bool ()\n\n  //····················································································································\n\n  var canBringToFront : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var top = objects.count - 1\n      for idx in sortedIndexArray.reversed () {\n        if idx < top {\n          return true\n        }\n        top -= 1\n      }\n    }\n    return false\n  }\n\n  //····················································································································\n\n  func bringToFront () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.append (object)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  //····················································································································\n  // SEND BACKWARD\n   // MARK: -\n //····················································································································\n\n  var canSendBackward_property = EBTransientProperty_Bool ()\n\n  //····················································································································\n\n  var canSendBackward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray [0] > 0\n    }\n    return result\n  }\n\n  //····················································································································\n\n  func sendBackward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.insert (object, at: idx-1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  //····················································································································\n  // SEND TO BACK\n  // MARK: -\n  //····················································································································\n\n  var canSendToBack_property = EBTransientProperty_Bool ()\n\n  //····················································································································\n\n  func sendToBack () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    var newObjectArray = EBReferenceArray <" ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << "> ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      newObjectArray.append (object)\n    }\n    newObjectArray.reverse ()\n    newObjectArray.append (objects: objects)\n    self.mModel\?.setProp (newObjectArray)\n  }\n\n  //····················································································································\n\n  var canSendToBack : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var bottom = 0\n      for idx in sortedIndexArray {\n        if idx > bottom {\n          return true\n        }\n        bottom += 1\n      }\n    }\n    return false\n  }\n\n  //····················································································································\n  // SNAP TO GRID\n  // MARK: -\n  //····················································································································\n\n  func snapToGrid (_ inGrid : Int) {\n    for object in self.selectedArray_property.propset.values {\n      object.snapToGrid (inGrid)\n    }\n  }\n\n  //····················································································································\n\n  func canSnapToGrid (_ inGrid : Int) -> Bool {\n    for object in self.selectedArray_property.propset.values {\n      if object.canSnapToGrid (inGrid) {\n        return true\n      }\n    }\n    return false\n  }\n\n\n //····················································································································\n  // HORIZONTAL FLIP\n  // MARK: -\n  //····················································································································\n\n  var canFlipHorizontally_property = EBTransientProperty_Bool ()\n\n  //····················································································································\n\n  func flipHorizontally () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipHorizontally ()\n    }\n  }\n\n  //····················································································································\n\n  var canFlipHorizontally : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipHorizontally () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  //····················································································································\n  // VERTICAL FLIP\n  // MARK: -\n  //····················································································································\n\n  var canFlipVertically_property = EBTransientProperty_Bool ()\n\n  //····················································································································\n\n  func flipVertically () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipVertically ()\n    }\n  }\n\n  //····················································································································\n\n  var canFlipVertically : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipVertically () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  //····················································································································\n  // ROTATE 90\n  // MARK: -\n  //····················································································································\n\n  var canRotate90_property = EBTransientProperty_Bool ()\n  private var mRotate90PointSet = Set <CanariPoint> ()\n\n //····················································································································\n\n  var canRotate90 : Bool {\n    self.mRotate90PointSet.removeAll ()\n    if self.selectedArray.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray.values {\n        if !object.canRotate90 (accumulatedPoints: &self.mRotate90PointSet) {\n          return false\n        }\n      }\n      return !self.mRotate90PointSet.isEmpty\n    }\n  }\n\n  //····················································································································\n\n  func rotate90Clockwise () {\n    let r = CanariRect (points: Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90Clockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  //····················································································································\n\n  func rotate90CounterClockwise () {\n    let r = CanariRect (points: Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90CounterClockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  //····················································································································\n  // MARK: -\n  //····················································································································\n\n  func addToSelection (objects inObjects : [" ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << "]) {\n    if let objectSet = self.mModel\?.propset {\n      var newSelectedSet = self.selectedArray_property.propset\n      for object in inObjects {\n        if objectSet.contains (object) {\n          newSelectedSet.insert (object)\n        }\n      }\n      self.selectedSet = newSelectedSet\n    }\n  }\n\n  //····················································································································\n\n /* func addToSelection (objectsWithIndex inIndexes : [Int]) {\n    let objects = self.objectArray\n    var newSelectedSet = self.selectedArray_property.propset\n    for idx in inIndexes {\n      let newSelectedObject = objects [idx]\n      newSelectedSet.insert (newSelectedObject)\n    }\n    self.selectedSet = newSelectedSet\n  } */\n\n  //····················································································································\n\n/*  func removeFromSelection (objectWithIndex inIndex : Int) {\n    let objects = self.objectArray\n    let object = objects [inIndex]\n    var newSelectedSet = self.selectedArray_property.propset\n    newSelectedSet.remove (object)\n    self.selectedSet = newSelectedSet\n  } */\n\n  //····················································································································\n\n  func clearSelection () {\n    self.selectedSet = EBReferenceSet ()\n  }\n\n  //····················································································································\n\n  func setSelection (objectsWithIndexes inIndexes : [Int]) {\n    let objects = self.objectArray\n    var selectedObjects = [" ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << "] ()\n    for index in inIndexes {\n      let newSelectedObject = objects [index]\n      selectedObjects.append (newSelectedObject)\n    }\n    self.selectedSet = EBReferenceSet (selectedObjects)\n  }\n" ;
  }else if (kBoolFalse == test_6) {
  }
  result << "\n  //····················································································································\n  // MARK: -\n  //  INSPECTOR\n  //····················································································································\n\n  private var mInspectorReceivingView : NSView\? = nil\n  private var mCurrentAttachedView : NSView\? = nil\n  private var mInspectorDictionary = [ObjectIdentifier : NSView] ()\n  private var mInspectorObserver = EBOutletEvent ()\n\n  //····················································································································\n\n  func register (inspectorReceivingView : NSView\?) {\n    self.mInspectorReceivingView = inspectorReceivingView\n    self.updateInspectorViews ()\n  }\n\n  //····················································································································\n\n  func register (inspectorView : NSView\?, for inEntity : EBGraphicManagedObject.Type) {\n    self.mInspectorDictionary [ObjectIdentifier (inEntity)] = inspectorView\n    self.updateInspectorViews ()\n  }\n\n  //····················································································································\n\n  private func inspectorViewManagerStartsObservingSelection () {\n    self.selectedArray_property.startsToBeObserved (by: self.mInspectorObserver)\n    self.mInspectorObserver.mEventCallBack = { [weak self] in self\?.updateInspectorViews () }\n  }\n\n  //····················································································································\n\n  private func inspectorViewManagerStopsObservingSelection () {\n    self.mInspectorObserver.mEventCallBack = nil\n    self.selectedArray_property.stopsBeingObserved (by: self.mInspectorObserver)\n  }\n\n  //····················································································································\n\n  private func updateInspectorViews () {\n    if let inspectorView = self.mInspectorReceivingView {\n    //--- Remove current attached view\n      self.mCurrentAttachedView\?.removeFromSuperview ()\n    //--- Add the new attached view\n      if self.mViewIsHidden {\n        self.mCurrentAttachedView = nil\n      }else if self.selectedArray.count == 0 {\n        let tf = self.textField (\"Empty Selection\", inspectorView.frame)\n        inspectorView.addSubview (tf)\n        self.mCurrentAttachedView = tf\n      }else{\n        var selectionTypes = Set <ObjectIdentifier> ()\n        for object in self.selectedArray.values {\n          let T = ObjectIdentifier (type (of: object))\n          selectionTypes.insert (T)\n        }\n        if selectionTypes.count > 1 {\n          let tf = self.textField (\"Multiple Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }else if let selectionInspectorView = self.mInspectorDictionary [selectionTypes.first!] {\n          selectionInspectorView.autoresizingMask = [.width, .minYMargin]\n          selectionInspectorView.frame = inspectorView.frame\n          inspectorView.addSubview (selectionInspectorView)\n          self.mCurrentAttachedView = selectionInspectorView\n        }else{\n          let tf = self.textField (\"No Inspector for this Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }\n      }\n    }\n  }\n\n  //····················································································································\n\n  private func textField (_ inString : String, _ inspectorFrame : NSRect) -> NSTextField {\n    let textHeight : CGFloat = 30.0\n    let r = NSRect (\n      x: 0.0,\n      y: inspectorFrame.origin.y + (inspectorFrame.size.height - textHeight) / 2.0,\n      width: inspectorFrame.size.width,\n      height: textHeight\n    )\n    let tf = NSTextField (frame: r)\n    tf.alignment = .center\n    tf.isBezeled = false\n    tf.isBordered = false\n    tf.drawsBackground = false\n    tf.isEnabled = true\n    tf.isEditable = false\n    tf.autoresizingMask = [.width, .minYMargin, .maxYMargin]\n    tf.stringValue = inString\n    tf.font = NSFont.boldSystemFont (ofSize: NSFont.systemFontSize * 1.25)\n    tf.textColor = NSColor.lightGray\n    return tf\n  }\n\n  //····················································································································\n\n  private var mViewIsHidden = false {\n    didSet { self.updateInspectorViews () }\n  }\n\n  //····················································································································\n\n  var isHidden : Bool {\n    get { return self.mViewIsHidden }\n    set { self.mViewIsHidden = newValue }\n  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayControllerGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                          const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
                                                          GALGAS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_arrayControllerGeneration temp_0 = this ;
  const GALGAS_arrayControllerGeneration temp_1 = this ;
  const GALGAS_arrayControllerGeneration temp_2 = this ;
  const GALGAS_arrayControllerGeneration temp_3 = this ;
  const GALGAS_arrayControllerGeneration temp_4 = this ;
  const GALGAS_arrayControllerGeneration temp_5 = this ;
  GALGAS_string var_s_13734 = GALGAS_string (filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (inCompiler, temp_0.readProperty_mOwnerName (), temp_1.readProperty_mControllerName ().readProperty_string (), temp_2.readProperty_mArrayControllerModelKind (), temp_3.readProperty_mModelTypeName (), temp_4.readProperty_mElementTypeName (), temp_5.readProperty_mElementTypeIsGraphic () COMMA_SOURCE_FILE ("array-controller.ggs", 327))) ;
  {
  const GALGAS_arrayControllerGeneration temp_6 = this ;
  const GALGAS_arrayControllerGeneration temp_7 = this ;
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, GALGAS_string ("controller-array-").add_operation (temp_6.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 337)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 337)).add_operation (temp_7.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 337)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 337)), var_s_13734, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 335)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_1 = this ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_1561 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 33)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 33)), temp_2.readProperty_mControllerName ().readProperty_location ()  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 33)) ;
  {
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1561, temp_3, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 34)) ;
  }
  {
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1561, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 35)) ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_mIsRoot ().operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 36)).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_7 = this ;
      const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_8 = this ;
      const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_9 = this ;
      ioArgument_ioGraph.setter_addEdge (var_node_1561, GALGAS_lstring::constructor_new (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)).add_operation (temp_8.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)), temp_9.readProperty_mToManyPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)) ;
      }
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_11 = this ;
      test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_10) {
        {
        const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_12 = this ;
        const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
        const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_14 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_1561, GALGAS_lstring::constructor_new (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 39)).add_operation (temp_13.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 39)), temp_14.readProperty_mToManyPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 39)) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 39)) ;
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_autoLayoutTableViewControllerDeclarationAST::getter_nodeKey (C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_1 = this ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 46)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 46)), temp_2.readProperty_mControllerName ().readProperty_location ()  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 46)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_5413 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 142)) ;
  if (NULL != objectArray_5413) {
    macroValidSharedObject (objectArray_5413, cMapElement_classMap) ;
    GALGAS_actionMap temp_1 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 145)) ;
    temp_1.addAssign_operation (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 145)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 145)) ;
    temp_1.addAssign_operation (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 145)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 145)) ;
    GALGAS_actionMap var_controllerActions_5533 = temp_1 ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_3 = this ;
      test_2 = temp_3.readProperty_mIsRoot ().boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_propertyMap var_rootProperties_5693 ;
        const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
        GALGAS_classKind joker_5672 ; // Joker input parameter
        GALGAS_actionMap joker_5695_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_5695_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_4.readProperty_mRootEntityName (), joker_5672, var_rootProperties_5693, joker_5695_2, joker_5695_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 147)) ;
        GALGAS_propertyKind var_classKind_5771 ;
        const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_5 = this ;
        GALGAS_actionMap joker_5773_2 ; // Joker input parameter
        GALGAS_bool joker_5773_1 ; // Joker input parameter
        var_rootProperties_5693.method_searchKey (temp_5.readProperty_mToManyPropertyName (), var_classKind_5771, joker_5773_2, joker_5773_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 148)) ;
        switch (var_classKind_5771.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_6 = this ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.readProperty_mRootEntityName ().readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 151)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_6388 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_5771.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_5932_typeName = extractPtr_6388->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_5942_graphic = extractPtr_6388->mAssociatedValue2 ;
            GALGAS_propertyKind var_kind_5964 = GALGAS_propertyKind::constructor_arrayController (extractedValue_5932_typeName, extractedValue_5942_graphic  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 153)) ;
            {
            const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_8 = this ;
            objectArray_5413->mProperty_mPropertyMap.setter_insertKey (temp_8.readProperty_mControllerName (), var_kind_5964, var_controllerActions_5533, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 157)) ;
            }
            const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_9 = this ;
            const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_10 = this ;
            const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_11 = this ;
            objectArray_5413->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_autoLayoutTableViewControllerPropertyGeneration::constructor_new (temp_9.readProperty_mControllerName ().readProperty_string (), GALGAS_string ("rootObject.").add_operation (temp_10.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 161)), temp_11.readProperty_mClassName ().readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 159))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 159)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_12 = this ;
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_mRootEntityName ().readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 165)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_14 = this ;
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (temp_14.readProperty_mRootEntityName ().readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 167)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_16 = this ;
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (temp_16.readProperty_mRootEntityName ().readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 169)) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_2) {
      GALGAS_propertyKind var_classKind_6807 ;
      const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_18 = this ;
      GALGAS_actionMap joker_6809_2 ; // Joker input parameter
      GALGAS_bool joker_6809_1 ; // Joker input parameter
      objectArray_5413->mProperty_mPropertyMap.method_searchKey (temp_18.readProperty_mToManyPropertyName (), var_classKind_6807, joker_6809_2, joker_6809_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 172)) ;
      switch (var_classKind_6807.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_19 = this ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_19.readProperty_mRootEntityName ().readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray20  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 175)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_7408 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_6807.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_6968_typeName = extractPtr_7408->mAssociatedValue0 ;
          const GALGAS_bool extractedValue_6978_graphic = extractPtr_7408->mAssociatedValue2 ;
          GALGAS_propertyKind var_kind_7000 = GALGAS_propertyKind::constructor_arrayController (extractedValue_6968_typeName, extractedValue_6978_graphic  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 177)) ;
          {
          const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_21 = this ;
          objectArray_5413->mProperty_mPropertyMap.setter_insertKey (temp_21.readProperty_mControllerName (), var_kind_7000, var_controllerActions_5533, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 181)) ;
          }
          const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_22 = this ;
          const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_23 = this ;
          const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_24 = this ;
          objectArray_5413->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_autoLayoutTableViewControllerPropertyGeneration::constructor_new (temp_22.readProperty_mControllerName ().readProperty_string (), temp_23.readProperty_mToManyPropertyName ().readProperty_string (), temp_24.readProperty_mClassName ().readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 183))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 183)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_25 = this ;
          TC_Array <C_FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_25.readProperty_mRootEntityName ().readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 189)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_27 = this ;
          TC_Array <C_FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mRootEntityName ().readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray28  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 191)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_29 = this ;
          TC_Array <C_FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (temp_29.readProperty_mRootEntityName ().readProperty_location (), GALGAS_string ("a toMany relationship is required here"), fixItArray30  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 193)) ;
        }
        break ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_thirdAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap var_preferencesPropertyMap_8322 ;
  GALGAS_classKind joker_8289 ; // Joker input parameter
  GALGAS_actionMap joker_8328_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8328_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 208)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 208))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 208)), joker_8289, var_preferencesPropertyMap_8322, joker_8328_2, joker_8328_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 207)) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 214)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsEmptySelection")  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 214)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsMultipleSelection")  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 214)) ;
  GALGAS_stringset var_attributes_8447 = temp_0 ;
  GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 215)) ;
  temp_1.addAssign_operation (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 215))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 215)) ;
  GALGAS_typeKindList var_allowedTypes_8533 = temp_1 ;
  GALGAS_stringset var_definedAttributes_8597 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 216)) ;
  GALGAS__32_stringlist var_attributeListForGeneration_8648 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 217)) ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
  cEnumerator_autoLayoutTableViewControllerAttributListAST enumerator_8671 (temp_2.readProperty_mTableViewControllerAttributListAST (), kENUMERATION_UP) ;
  while (enumerator_8671.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_attributes_8447.getter_hasKey (enumerator_8671.current_mAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 219)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 219)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_8671.current_mAttributeName (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 220)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_definedAttributes_8597.getter_hasKey (enumerator_8671.current_mAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 221)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_8671.current_mAttributeName (HERE).readProperty_location (), GALGAS_string ("attribute multiply defined"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 222)) ;
        }
      }
      if (kBoolFalse == test_5) {
        var_definedAttributes_8597.addAssign_operation (enumerator_8671.current_mAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 224)) ;
      }
    }
    GALGAS_string var_valueAsString_9057 ;
    callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_8671.current_mAttributeValue (HERE).ptr (), var_allowedTypes_8533, var_preferencesPropertyMap_8322, var_valueAsString_9057, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 226)) ;
    var_attributeListForGeneration_8648.addAssign_operation (enumerator_8671.current_mAttributeName (HERE).readProperty_string (), var_valueAsString_9057  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 227)) ;
    enumerator_8671.gotoNextObject () ;
  }
  cEnumerator_stringset enumerator_9148 (var_attributes_8447, kENUMERATION_UP) ;
  while (enumerator_9148.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_definedAttributes_8597.getter_hasKey (enumerator_9148.current (HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 230)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 230)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_8 = this ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mControllerName ().readProperty_location (), GALGAS_string ("attribute '").add_operation (enumerator_9148.current (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 231)).add_operation (GALGAS_string ("' not defined"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 231)), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 231)) ;
      }
    }
    enumerator_9148.gotoNextObject () ;
  }
  GALGAS_propertyMap var_boundModelPropertyMap_9330 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_11 = this ;
    test_10 = temp_11.readProperty_mIsRoot ().boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_12 = this ;
      GALGAS_classKind joker_9434 ; // Joker input parameter
      GALGAS_actionMap joker_9475_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_9475_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_12.readProperty_mRootEntityName (), joker_9434, var_boundModelPropertyMap_9330, joker_9475_2, joker_9475_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 237)) ;
    }
  }
  if (kBoolFalse == test_10) {
    const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
    GALGAS_classKind joker_9567 ; // Joker input parameter
    GALGAS_actionMap joker_9608_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_9608_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_13.readProperty_mClassName (), joker_9567, var_boundModelPropertyMap_9330, joker_9608_2, joker_9608_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 244)) ;
  }
  GALGAS_propertyKind var_boundModelClassKind_9735 ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_14 = this ;
  GALGAS_actionMap joker_9742_2 ; // Joker input parameter
  GALGAS_bool joker_9742_1 ; // Joker input parameter
  var_boundModelPropertyMap_9330.method_searchKey (temp_14.readProperty_mToManyPropertyName (), var_boundModelClassKind_9735, joker_9742_2, joker_9742_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 251)) ;
  GALGAS_propertyMap var_propertyMap_9866 ;
  GALGAS_autoLayoutTableViewControllerModelKind var_arrayControllerModelKind_9937 ;
  GALGAS_bool var_graphic_9957 ;
  GALGAS_string var_elementTypeName_9987 ;
  switch (var_boundModelClassKind_9735.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_15 = this ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mToManyPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 263)) ;
      var_graphic_9957.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9937.drop () ; // Release error dropped variable
      var_propertyMap_9866.drop () ; // Release error dropped variable
      var_elementTypeName_9987.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_10503 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_boundModelClassKind_9735.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_10221_typeName = extractPtr_10503->mAssociatedValue0 ;
      const GALGAS_propertyAccessibility extractedValue_10235_accessibility = extractPtr_10503->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_10245_isGraphic = extractPtr_10503->mAssociatedValue2 ;
      var_elementTypeName_9987 = extractedValue_10221_typeName.readProperty_string () ;
      var_graphic_9957 = extractedValue_10245_isGraphic ;
      GALGAS_autoLayoutTableViewControllerModelKind temp_17 ;
      const enumGalgasBool test_18 = extractedValue_10235_accessibility.getter_isTransient (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 269)).boolEnum () ;
      if (kBoolTrue == test_18) {
        temp_17 = GALGAS_autoLayoutTableViewControllerModelKind::constructor_transientArray (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 270)) ;
      }else if (kBoolFalse == test_18) {
        temp_17 = GALGAS_autoLayoutTableViewControllerModelKind::constructor_entityArray (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 271)) ;
      }
      var_arrayControllerModelKind_9937 = temp_17 ;
      GALGAS_classKind joker_10482 ; // Joker input parameter
      GALGAS_actionMap joker_10498 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_10501 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_10221_typeName, joker_10482, var_propertyMap_9866, joker_10498, joker_10501, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 273)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_19 = this ;
      TC_Array <C_FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_mToManyPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray20  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 275)) ;
      var_graphic_9957.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9937.drop () ; // Release error dropped variable
      var_propertyMap_9866.drop () ; // Release error dropped variable
      var_elementTypeName_9987.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mToManyPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray22  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 279)) ;
      var_graphic_9957.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9937.drop () ; // Release error dropped variable
      var_propertyMap_9866.drop () ; // Release error dropped variable
      var_elementTypeName_9987.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_23 = this ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mToManyPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray24  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 283)) ;
      var_graphic_9957.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9937.drop () ; // Release error dropped variable
      var_propertyMap_9866.drop () ; // Release error dropped variable
      var_elementTypeName_9987.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration_11175 = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 287)) ;
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration var_arrayControllerSortedColumnListForGeneration_11291 = GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 288)) ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_25 = this ;
  cEnumerator_autoLayoutTableViewControllerBoundColumnListAST enumerator_11362 (temp_25.readProperty_mTableViewControllerBoundColumnListAST (), kENUMERATION_UP) ;
  while (enumerator_11362.hasCurrentObject ()) {
    GALGAS_autoLayoutClassParameterList var_formalArgumentList_12228 = GALGAS_autoLayoutClassParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 314)) ;
    var_formalArgumentList_12228.addAssign_operation (GALGAS_string ("title").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 315)), GALGAS_autoLayoutClassParameterType::constructor_typeString (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 315))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 315)) ;
    var_formalArgumentList_12228.addAssign_operation (GALGAS_string ("minWidth").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 316)), GALGAS_autoLayoutClassParameterType::constructor_typeInt (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 316))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 316)) ;
    var_formalArgumentList_12228.addAssign_operation (GALGAS_string ("maxWidth").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 317)), GALGAS_autoLayoutClassParameterType::constructor_typeInt (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 317))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 317)) ;
    var_formalArgumentList_12228.addAssign_operation (GALGAS_string ("headerAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 318)), GALGAS_autoLayoutClassParameterType::constructor_typeEnum (GALGAS_string ("TextAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 318))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 318))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 318)) ;
    var_formalArgumentList_12228.addAssign_operation (GALGAS_string ("contentAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 319)), GALGAS_autoLayoutClassParameterType::constructor_typeEnum (GALGAS_string ("TextAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 319))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 319))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 319)) ;
    GALGAS__32_stringlist var_actualParameterList_12658 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)) ;
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      test_26 = GALGAS_bool (kIsNotEqual, var_formalArgumentList_12228.getter_length (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 321)).objectCompare (enumerator_11362.current_mColumnParameterListAST (HERE).getter_length (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 321)))).boolEnum () ;
      if (kBoolTrue == test_26) {
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_11362.current_mPropertyName (HERE).readProperty_location (), enumerator_11362.current_mColumnParameterListAST (HERE).getter_length (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 322)).getter_string (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 322)).add_operation (GALGAS_string (" parameter(s), "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 322)).add_operation (var_formalArgumentList_12228.getter_length (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 322)).getter_string (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 322)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 322)).add_operation (GALGAS_string (" required"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 322)), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 322)) ;
      }
    }
    if (kBoolFalse == test_26) {
      cEnumerator_autoLayoutClassParameterList enumerator_12911 (var_formalArgumentList_12228, kENUMERATION_UP) ;
      cEnumerator_astAutoLayoutViewInstructionParameterList enumerator_12974 (enumerator_11362.current_mColumnParameterListAST (HERE), kENUMERATION_UP) ;
      while (enumerator_12911.hasCurrentObject () && enumerator_12974.hasCurrentObject ()) {
        enumGalgasBool test_28 = kBoolTrue ;
        if (kBoolTrue == test_28) {
          test_28 = GALGAS_bool (kIsNotEqual, enumerator_12911.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_12974.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_28) {
            TC_Array <C_FixItDescription> fixItArray29 ;
            inCompiler->emitSemanticError (enumerator_12974.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("required argument name: ").add_operation (enumerator_12911.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 326)), fixItArray29  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 326)) ;
          }
        }
        enumGalgasBool test_30 = kBoolTrue ;
        if (kBoolTrue == test_30) {
          GALGAS_lstring var_enumTypeName_13197 ;
          const bool optionalResult13173 = enumerator_12911.current_mParameterType (HERE).optional_typeEnum (var_enumTypeName_13197) ;
          if (!optionalResult13173) {
            test_30 = kBoolFalse ;
          }
          if (kBoolTrue == test_30) {
            GALGAS_lstring var_constantName_13248 ;
            const bool optionalResult13224 = enumerator_12974.current_mParameterType (HERE).optional_typeEnum (var_constantName_13248) ;
            if (!optionalResult13224) {
              test_30 = kBoolFalse ;
            }
            if (kBoolTrue == test_30) {
              GALGAS_classKind var_typeKind_13331 ;
              GALGAS_propertyMap joker_13333_3 ; // Joker input parameter
              GALGAS_actionMap joker_13333_2 ; // Joker input parameter
              GALGAS_propertyGenerationList joker_13333_1 ; // Joker input parameter
              ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (var_enumTypeName_13197, var_typeKind_13331, joker_13333_3, joker_13333_2, joker_13333_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 329)) ;
              enumGalgasBool test_31 = kBoolTrue ;
              if (kBoolTrue == test_31) {
                GALGAS_typeKind var_classKind_13391 ;
                const bool optionalResult13370 = var_typeKind_13331.optional_atomic (var_classKind_13391) ;
                if (!optionalResult13370) {
                  test_31 = kBoolFalse ;
                }
                if (kBoolTrue == test_31) {
                  GALGAS_string var_unused_0_13421 ;
                  GALGAS_enumConstantMap var_constantMap_13451 ;
                  GALGAS_enumFuncMap var_unused_0_13455 ;
                  const bool optionalResult13417 = var_classKind_13391.optional_enumType (var_unused_0_13421, var_constantMap_13451, var_unused_0_13455) ;
                  if (!optionalResult13417) {
                    test_31 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_31) {
                    GALGAS_uint joker_13512 ; // Joker input parameter
                    var_constantMap_13451.method_searchKey (var_constantName_13248, joker_13512, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 331)) ;
                  }
                }
              }
              if (kBoolFalse == test_31) {
                TC_Array <C_FixItDescription> fixItArray32 ;
                inCompiler->emitSemanticError (var_enumTypeName_13197.readProperty_location (), GALGAS_string ("this type name is not an enum"), fixItArray32  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 333)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_30) {
          enumGalgasBool test_33 = kBoolTrue ;
          if (kBoolTrue == test_33) {
            test_33 = GALGAS_bool (kIsNotEqual, enumerator_12974.current_mParameterType (HERE).objectCompare (enumerator_12911.current_mParameterType (HERE))).boolEnum () ;
            if (kBoolTrue == test_33) {
              TC_Array <C_FixItDescription> fixItArray34 ;
              inCompiler->emitSemanticError (enumerator_12974.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_12911.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 336)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 336)).add_operation (GALGAS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 336)).add_operation (extensionGetter_string (enumerator_12974.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 336)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 336)), fixItArray34  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 336)) ;
            }
          }
        }
        enumGalgasBool test_35 = kBoolTrue ;
        if (kBoolTrue == test_35) {
          GALGAS_string var_stringValue_13841 ;
          const bool optionalResult13818 = enumerator_12974.current_mParameter (HERE).optional_string (var_stringValue_13841) ;
          if (!optionalResult13818) {
            test_35 = kBoolFalse ;
          }
          if (kBoolTrue == test_35) {
            var_actualParameterList_12658.addAssign_operation (enumerator_12911.current_mParameterName (HERE).readProperty_string (), var_stringValue_13841  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 339)) ;
          }
        }
        if (kBoolFalse == test_35) {
          TC_Array <C_FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (enumerator_12974.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("parameter value is not string convertible"), fixItArray36  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 341)) ;
        }
        enumerator_12911.gotoNextObject () ;
        enumerator_12974.gotoNextObject () ;
      }
    }
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      test_37 = GALGAS_bool (kIsNotEqual, enumerator_11362.current_mSortPropertyName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_37) {
        GALGAS_propertyKind var_sortPropertyKind_14170 ;
        GALGAS_actionMap joker_14180_2 ; // Joker input parameter
        GALGAS_bool joker_14180_1 ; // Joker input parameter
        var_propertyMap_9866.method_searchKey (enumerator_11362.current_mSortPropertyName (HERE), var_sortPropertyKind_14170, joker_14180_2, joker_14180_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 347)) ;
        enumGalgasBool test_38 = kBoolTrue ;
        if (kBoolTrue == test_38) {
          test_38 = extensionGetter_isComparable (var_sortPropertyKind_14170, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 352)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 352)).boolEnum () ;
          if (kBoolTrue == test_38) {
            TC_Array <C_FixItDescription> fixItArray39 ;
            inCompiler->emitSemanticError (enumerator_11362.current_mSortPropertyName (HERE).readProperty_location (), GALGAS_string ("this property is not comparable"), fixItArray39  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 353)) ;
          }
        }
        var_arrayControllerSortedColumnListForGeneration_11291.addAssign_operation (enumerator_11362.current_mPropertyName (HERE).readProperty_string (), var_sortPropertyKind_14170, enumerator_11362.current_mSortPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 355)) ;
      }
    }
    GALGAS_propertyKind var_propertyKind_14574 ;
    GALGAS_actionMap joker_14582_2 ; // Joker input parameter
    GALGAS_bool joker_14582_1 ; // Joker input parameter
    var_propertyMap_9866.method_searchKey (enumerator_11362.current_mPropertyName (HERE), var_propertyKind_14574, joker_14582_2, joker_14582_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 361)) ;
    var_arrayControllerBoundColumnListForGeneration_11175.addAssign_operation (enumerator_11362.current_mEditable (HERE), enumerator_11362.current_mSortPropertyName (HERE).readProperty_string (), enumerator_11362.current_mPropertyName (HERE).readProperty_string (), extensionGetter_swiftTypeName (var_propertyKind_14574, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 370)), GALGAS_string::makeEmptyString (), var_actualParameterList_12658  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 366)) ;
    enumerator_11362.gotoNextObject () ;
  }
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_40 = this ;
  GALGAS_string temp_41 ;
  const enumGalgasBool test_42 = temp_40.readProperty_mIsRoot ().boolEnum () ;
  if (kBoolTrue == test_42) {
    const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_43 = this ;
    temp_41 = GALGAS_string ("self.rootObject.").add_operation (temp_43.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 380)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 380)) ;
  }else if (kBoolFalse == test_42) {
    const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_44 = this ;
    temp_41 = GALGAS_string ("self.").add_operation (temp_44.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 381)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 381)) ;
  }
  GALGAS_string var_modelString_15145 = temp_41 ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_45 = this ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST temp_46 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_autoLayoutTableViewControllerGeneration::constructor_new (temp_45.readProperty_mClassName ().readProperty_string (), temp_46.readProperty_mControllerName (), var_modelString_15145, var_arrayControllerBoundColumnListForGeneration_11175, var_arrayControllerSortedColumnListForGeneration_11291, GALGAS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_9987, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 390)), var_arrayControllerModelKind_9937, var_elementTypeName_9987, var_graphic_9957, var_attributeListForGeneration_8648  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 384))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 384)) ;
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.addAssign_operation (var_elementTypeName_9987  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 396)) ;
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_TransientArrayOf_5F_.addAssign_operation (var_elementTypeName_9987  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 397)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                                                    const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                                    const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 418)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 418)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 418)) ;
      const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_1 = this ;
      result_result.plusAssign_operation(GALGAS_string ("//   Table View controller: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 419)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 419)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 419)) ;
      result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 420)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 420)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 420)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 420)) ;
      const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
      const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_3 = this ;
      const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_4 = this ;
      result_result.plusAssign_operation(GALGAS_string ("@MainActor let preferences_").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 421)).add_operation (GALGAS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 421)).add_operation (temp_3.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 421)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 421)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 421)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 421)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 421)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 423)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 423)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 423)) ;
    const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_5 = this ;
    result_result.plusAssign_operation(GALGAS_string ("  //   Array controller: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 424)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 424)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 424)) ;
    result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 425)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 425)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 425)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 425)) ;
    const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_6 = this ;
    const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_7 = this ;
    const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_8 = this ;
    result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 426)).add_operation (GALGAS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 426)).add_operation (temp_7.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 426)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 426)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 426)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 426)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 426)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_configurationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_17652 = temp_0 ;
  const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 434)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 434)) ;
  const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_3 = this ;
  const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_17652, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 435)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 435)).add_operation (GALGAS_string (".bind_model ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 435)).add_operation (var_prefix_17652, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 435)).add_operation (temp_4.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 435)).add_operation (GALGAS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 435)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 435)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration populateExplorerWindowCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_populateExplorerWindowCode (C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("    //--- Array controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 447)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 447)) ;
  const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_1 = this ;
  const GALGAS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 448)).add_operation (GALGAS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 448)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 448)).add_operation (GALGAS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 448)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 448)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutTableViewControllerGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutTableViewControllerGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutTableViewControllerGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_autoLayoutTableViewControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_autoLayoutTableViewControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_autoLayoutTableViewControllerGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutTableViewControllerGenerationTemplate autoLayoutTableViewControllerImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutTableViewControllerGenerationTemplate_autoLayoutTableViewControllerImplementation (C_Compiler * /* inCompiler */,
                                                                                                                               const GALGAS_string & in_OWNER_5F_NAME,
                                                                                                                               const GALGAS_string & in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME,
                                                                                                                               const GALGAS_string & /* in_MODEL_5F_STRING */,
                                                                                                                               const GALGAS_autoLayoutTableViewControllerModelKind & in_MODEL_5F_KIND,
                                                                                                                               const GALGAS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                                               const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_BOUND_5F_COLUMNS,
                                                                                                                               const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_SORTED_5F_COLUMNS,
                                                                                                                               const GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                               const GALGAS_stringset & in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING,
                                                                                                                               const GALGAS__32_stringlist & in_ATTRIBUTE_5F_VALUES
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    Auto Layout Table View Controller " ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << " " ;
  result << in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nfinal class Controller_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " : NSObject, AutoLayoutTableViewDelegate {\n\n  //····················································································································\n  //    Constant properties\n  //····················································································································\n\n" ;
  GALGAS_uint index_1073_ (0) ;
  if (in_ATTRIBUTE_5F_VALUES.isValid ()) {
    cEnumerator__32_stringlist enumerator_1073 (in_ATTRIBUTE_5F_VALUES, kENUMERATION_UP) ;
    while (enumerator_1073.hasCurrentObject ()) {
      result << "  private let " ;
      result << enumerator_1073.current_mValue_30_ (HERE).stringValue () ;
      result << " = " ;
      result << enumerator_1073.current_mValue_31_ (HERE).stringValue () ;
      result << "\n" ;
      index_1073_.increment () ;
      enumerator_1073.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Undo manager\n  //····················································································································\n\n  private weak var mUndoManager : UndoManager\? = nil // SHOULD BE WEAK\n  var undoManager : UndoManager\? { return self.mUndoManager }\n\n  //····················································································································\n  //   Sorted Array\n  //····················································································································\n\n  let sortedArray_property = TransientArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " ()\n\n  //····················································································································\n\n  private var mSortDescriptorArray = [(" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << ", " ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << ") -> ComparisonResult] ()\n\n  //····················································································································\n  //    Model\n  //····················································································································\n\n  private weak var mModel : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? = nil // SHOULD BE WEAK\n\n  //····················································································································\n\n  var objects : EBReferenceArray <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> {\n    if let objects = self.mModel\?.propval {\n      return objects\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  //····················································································································\n\n  final func bind_model (_ inModel : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ", _ inUndoManager : UndoManager\?) {\n    self.mModel = inModel\n    self.mUndoManager = inUndoManager\n    self.sortedArray_property.setDataProvider (\n      inModel,\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_SORTED_5F_COLUMNS.getter_length (SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 62)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "      sortCallback: { [weak self] (left, right) in self\?.isOrderedBefore (left, right) \?\? true },\n" ;
  }else if (kBoolFalse == test_0) {
    result << "      sortCallback: nil,\n" ;
  }
  result << "      addSortObserversCallback: { (observer) in\n" ;
  GALGAS_uint index_3332_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING.isValid ()) {
    cEnumerator_stringset enumerator_3332 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING, kENUMERATION_UP) ;
    while (enumerator_3332.hasCurrentObject ()) {
      result << "        inModel.toMany_" ;
      result << enumerator_3332.current_key (HERE).stringValue () ;
      result << "_StartsToBeObserved (by: observer)\n" ;
      index_3332_.increment () ;
      enumerator_3332.gotoNextObject () ;
    }
  }
  result << "      },\n      removeSortObserversCallback: {(observer) in\n" ;
  GALGAS_uint index_3515_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING.isValid ()) {
    cEnumerator_stringset enumerator_3515 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING, kENUMERATION_UP) ;
    while (enumerator_3515.hasCurrentObject ()) {
      result << "        inModel.toMany_" ;
      result << enumerator_3515.current_key (HERE).stringValue () ;
      result << "_StopsBeingObserved (by: observer)\n" ;
      index_3515_.increment () ;
      enumerator_3515.gotoNextObject () ;
    }
  }
  result << "      }\n    )\n  }\n\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_SORTED_5F_COLUMNS.getter_length (SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 81)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "  //····················································································································\n\n  final func isOrderedBefore (_ left : " ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << ", _ right : " ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << ") -> Bool {\n    var order = ComparisonResult.orderedSame\n    for sortDescriptor in self.mSortDescriptorArray.reversed () {\n      order = sortDescriptor (left, right)\n      if order != .orderedSame {\n        break // Exit from for loop\n      }\n    }\n    return order == .orderedAscending\n  }\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "\n  //····················································································································\n\n  /* final func unbind_model () {\n    self.sortedArray_property.resetDataProvider ()\n    self.mModel = nil\n    self.mUndoManager = nil\n  } */\n\n  //····················································································································\n  //   Selected Array\n  //····················································································································\n\n  private let mInternalSelectedArrayProperty = StoredArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " (usedForSignature: false, key: nil)\n\n  //····················································································································\n\n  var selectedArray_property : ReadOnlyArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " { return self.mInternalSelectedArrayProperty }\n\n  //····················································································································\n\n  var selectedArray : EBReferenceArray <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> { return self.selectedArray_property.propval }\n\n  //····················································································································\n\n  var selectedSet : EBReferenceSet <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> { return EBReferenceSet (self.selectedArray_property.propval.values) }\n\n  //····················································································································\n\n  var selectedIndexesSet : Set <Int> {\n    let selectedObjectSet = self.selectedSet\n    var result = Set <Int> ()\n    var idx = 0\n    if let model = self.mModel {\n      for object in model.propval.values {\n        if selectedObjectSet.contains (object) {\n          result.insert (idx)\n        }\n        idx += 1\n      }\n    }\n    return result\n  }\n\n  //····················································································································\n\n  func setSelection (_ inObjects : [" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "]) {\n    self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (inObjects))\n  }\n\n  //····················································································································\n  //    sorted array observer\n  //····················································································································\n\n  private var mSortedArrayValuesObserver = EBOutletEvent ()\n\n  //····················································································································\n\n  override init () {\n    super.init ()\n    self.sortedArray_property.startsToBeObserved (by: self.mSortedArrayValuesObserver)\n" ;
  GALGAS_uint index_6983_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration enumerator_6983 (in_BOUND_5F_COLUMNS, kENUMERATION_UP) ;
    while (enumerator_6983.hasCurrentObject ()) {
      result << "  //--- Observe '" ;
      result << enumerator_6983.current_mDisplayedPropertyName (HERE).stringValue () ;
      result << "' column\n    self.sortedArray_property.toMany_" ;
      result << enumerator_6983.current_mDisplayedPropertyName (HERE).stringValue () ;
      result << "_StartsToBeObserved (by: self.mSortedArrayValuesObserver)\n" ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_6983.current_mSortPropertyName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsNotEqual, enumerator_6983.current_mSortPropertyName (HERE).objectCompare (enumerator_6983.current_mDisplayedPropertyName (HERE))) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 161)).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "     self.sortedArray_property.toMany_" ;
        result << enumerator_6983.current_mSortPropertyName (HERE).stringValue () ;
        result << "_StartsToBeObserved (by: self.mSortedArrayValuesObserver)\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_6983_.increment () ;
      enumerator_6983.gotoNextObject () ;
    }
  }
  result << "  //---\n    self.mSortedArrayValuesObserver.mEventCallBack = { [weak self] in\n       for tableView in self\?.mTableViewArray \?\? [] {\n        tableView.sortAndReloadData ()\n      }\n    }\n    noteObjectAllocation (self)\n  }\n\n  //····················································································································\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n  //····················································································································\n  //    bind_tableView\n  //····················································································································\n\n  private var mTableViewArray = [AutoLayoutTableView] ()\n\n  //····················································································································\n\n  final func bind_tableView (_ inTableView : AutoLayoutTableView) {\n    inTableView.configure (\n      allowsEmptySelection: allowsEmptySelection,\n      allowsMultipleSelection: allowsMultipleSelection,\n      rowCountCallBack: { [weak self] in self\?.sortedArray_property.propval.count \?\? 0 },\n      delegate: self\n    )\n" ;
  GALGAS_uint index_8661_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration enumerator_8661 (in_BOUND_5F_COLUMNS, kENUMERATION_UP) ;
    while (enumerator_8661.hasCurrentObject ()) {
      result << "  //--- Configure '" ;
      result << enumerator_8661.current_mDisplayedPropertyName (HERE).stringValue () ;
      result << "' column\n    inTableView.addColumn_" ;
      result << enumerator_8661.current_mColumnObjectTypeName (HERE).stringValue () ;
      result << " (\n      valueGetterDelegate: { [weak self] in return self\?.sortedArray_property.propval [$0]." ;
      result << enumerator_8661.current_mDisplayedPropertyName (HERE).stringValue () ;
      result << " },\n      valueSetterDelegate: " ;
      const enumGalgasBool test_3 = enumerator_8661.current_mEditable (HERE).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "{ [weak self] (inRowIndex, inNewValue) in self\?.sortedArray_property.propval [inRowIndex]." ;
        result << enumerator_8661.current_mDisplayedPropertyName (HERE).stringValue () ;
        result << " = inNewValue }" ;
      }else if (kBoolFalse == test_3) {
        result << "nil" ;
      }
      result << ",\n      sortDelegate: " ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_8661.current_mSortPropertyName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "{ [weak self] (ascending) in\n        self\?.mSortDescriptorArray.append ({ (_ left : " ;
        result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
        result << ", _ right : " ;
        result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
        result << ") in return compare_" ;
        result << enumerator_8661.current_mColumnObjectTypeName (HERE).stringValue () ;
        result << "_properties (left." ;
        result << enumerator_8661.current_mSortPropertyName (HERE).stringValue () ;
        result << "_property, ascending, right." ;
        result << enumerator_8661.current_mSortPropertyName (HERE).stringValue () ;
        result << "_property) })\n      }" ;
      }else if (kBoolFalse == test_4) {
        result << "nil" ;
      }
      result << ",\n" ;
      GALGAS_uint index_9516_ (0) ;
      if (enumerator_8661.current_mActualParameterList (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_9516 (enumerator_8661.current_mActualParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_9516.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_9516.current_mValue_30_ (HERE).stringValue () ;
          result << ": " ;
          result << enumerator_9516.current_mValue_31_ (HERE).stringValue () ;
          if (enumerator_9516.hasNextObject ()) {
            result << ",\n" ;
          }
          index_9516_.increment () ;
          enumerator_9516.gotoNextObject () ;
        }
      }
      result << "\n    )\n" ;
      index_8661_.increment () ;
      enumerator_8661.gotoNextObject () ;
    }
  }
  result << "  //---\n    self.mTableViewArray.append (inTableView)\n    inTableView.sortAndReloadData ()\n  }\n\n" ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GALGAS_autoLayoutTableViewControllerModelKind::kNotBuilt :
    break ;
  case GALGAS_autoLayoutTableViewControllerModelKind::kEnum_transientArray :
    {
    }
    break ;
  case GALGAS_autoLayoutTableViewControllerModelKind::kEnum_entityArray :
    {
      result << "  //····················································································································\n  //   Select a single object\n  //····················································································································\n\n  final func select (object inObject: " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << ") {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        ()\n      case .single (let objectArray) :\n        let array = EBReferenceArray (objectArray)\n        if array.contains (inObject) {\n          self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (inObject))\n        }\n      }\n    }\n  }\n\n  //····················································································································\n  //    remove\n  //····················································································································\n\n  @objc func remove (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let model_prop) :\n      //------------- Find the object to be selected after selected object removing\n      //--- Dictionary of object sorted indexes\n        var sortedObjectDictionary = EBReferenceDictionary <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << ", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          sortedObjectDictionary [object] = index\n        }\n        var indexArrayOfSelectedObjects = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = sortedObjectDictionary [object]\n          if let idx = index {\n            indexArrayOfSelectedObjects.append (idx)\n          }\n        }\n      //--- Sort\n        indexArrayOfSelectedObjects.sort { $0 < $1 }\n      //--- Find the first index of a non selected object\n        var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n        for index in indexArrayOfSelectedObjects {\n          if newSelectionIndex < index {\n            break\n          }else{\n            newSelectionIndex = index + 1\n          }\n        }\n      //----------------------------------------- Remove selected object\n      //--- Dictionary of object absolute indexes\n        var objectDictionary = EBReferenceDictionary <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << ", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          objectDictionary [object] = index\n        }\n      //--- Build selected objects index array\n        var selectedObjectIndexArray = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = objectDictionary [object]\n          if let idx = index {\n            selectedObjectIndexArray.append (idx)\n          }\n        }\n      //--- Sort in reverse order\n        selectedObjectIndexArray.sort { $1 < $0 }\n      //--- Remove objects, in reverse of order of their index\n        var newObjectArray = EBReferenceArray (model_prop)\n        for index in selectedObjectIndexArray {\n          newObjectArray.remove (at: index)\n        }\n      //----------------------------------------- Set new object array\n        model.setProp (newObjectArray)\n      }\n    }\n  }\n" ;
    }
    break ;
  }
  result << "\n  //····················································································································\n  // IMPLEMENTATION OF AutoLayoutTableViewDelegate\n  //····················································································································\n\n  final func tableViewDelegate_selectionDidChange (selectedRows inSelectedRows : IndexSet) {\n    switch self.sortedArray_property.selection {\n    case .empty, .multiple :\n      ()\n    case .single (let v) :\n      var newSelectedObjects = EBReferenceArray <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> ()\n      for index in inSelectedRows {\n        newSelectedObjects.append (v [index])\n      }\n      self.mInternalSelectedArrayProperty.setProp (newSelectedObjects)\n    }\n  }\n\n  //····················································································································\n\n  final func tableViewDelegate_indexesOfSelectedObjects () -> IndexSet {\n    var indexSet = IndexSet ()\n    var idx = 0\n    let selectedObjectSet = EBReferenceSet (self.selectedArray_property.propval.values)\n    for object in self.sortedArray_property.propval.values {\n      if selectedObjectSet.contains (object) {\n        indexSet.insert (idx)\n      }\n      idx += 1\n    }\n    return indexSet\n  }\n\n  //····················································································································\n\n" ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GALGAS_autoLayoutTableViewControllerModelKind::kNotBuilt :
    break ;
  case GALGAS_autoLayoutTableViewControllerModelKind::kEnum_transientArray :
    {
      result << "  final func tableViewDelegate_addEntry () { // Transient array cannot add entry\n  }\n" ;
    }
    break ;
  case GALGAS_autoLayoutTableViewControllerModelKind::kEnum_entityArray :
    {
      result << "  final func tableViewDelegate_addEntry () {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        ()\n      case .single (let v) :\n        let newObject = " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " (self.undoManager)\n        var array = EBReferenceArray (v)\n        array.append (newObject)\n        model.setProp (array)\n      //--- New object is the selection\n        self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (newObject))\n      }\n    }\n  }\n" ;
    }
    break ;
  }
  result << "\n  //····················································································································\n\n" ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GALGAS_autoLayoutTableViewControllerModelKind::kNotBuilt :
    break ;
  case GALGAS_autoLayoutTableViewControllerModelKind::kEnum_transientArray :
    {
      result << "  final func tableViewDelegate_removeSelectedEntries () { // Transient array cannot remove entries\n  }\n" ;
    }
    break ;
  case GALGAS_autoLayoutTableViewControllerModelKind::kEnum_entityArray :
    {
      result << "  final func tableViewDelegate_removeSelectedEntries () {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        ()\n      case .single (let model_prop) :\n        switch self.sortedArray_property.selection {\n        case .empty, .multiple :\n          ()\n        case .single (let sortedArray_prop) :\n        //------------- Find the object to be selected after selected object removing\n        //--- Dictionary of object sorted indexes\n          var sortedObjectDictionary = EBReferenceDictionary <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << ", Int> ()\n          for (index, object) in sortedArray_prop.enumerated () {\n            sortedObjectDictionary [object] = index\n          }\n          var indexArrayOfSelectedObjects = [Int] ()\n          for object in self.selectedSet.values {\n            let index = sortedObjectDictionary [object]\n            if let idx = index {\n              indexArrayOfSelectedObjects.append (idx)\n            }\n          }\n        //--- Sort\n          indexArrayOfSelectedObjects.sort { $0 < $1 }\n        //--- Find the first index of a non selected object\n          var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n          for index in indexArrayOfSelectedObjects {\n            if newSelectionIndex < index {\n              ()\n            }else{\n              newSelectionIndex = index + 1\n            }\n          }\n          var newSelectedObject : " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "\? = nil\n          if (newSelectionIndex >= 0) && (newSelectionIndex < sortedArray_prop.count) {\n            newSelectedObject = sortedArray_prop [newSelectionIndex]\n          }\n        //----------------------------------------- Remove selected object\n        //--- Dictionary of object absolute indexes\n          var objectDictionary = EBReferenceDictionary <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << ", Int> ()\n          for (index, object) in model_prop.enumerated () {\n            objectDictionary [object] = index\n          }\n        //--- Build selected objects index array\n          var selectedObjectIndexArray = [Int] ()\n          for object in self.selectedSet.values {\n            let index = objectDictionary [object]\n            if let idx = index {\n              selectedObjectIndexArray.append (idx)\n            }\n          }\n        //--- Sort in reverse order\n          selectedObjectIndexArray.sort { $1 < $0 }\n        //--- Remove objects, in reverse of order of their index\n          var newObjectArray = EBReferenceArray (model_prop)\n          for index in selectedObjectIndexArray {\n            newObjectArray.remove (at: index)\n          }\n        //----------------------------------------- Set new object array\n          model.setProp (newObjectArray)\n        //----------------------------------------- Set new selection\n          if let object = newSelectedObject {\n            self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (object))\n          }else{\n            self.mInternalSelectedArrayProperty.setProp (EBReferenceArray ())\n          }\n        }\n      }\n    }\n  }\n" ;
    }
    break ;
  }
  result << "\n  //····················································································································\n\n  final func tableViewDelegate_beginSorting () {\n    self.mSortDescriptorArray.removeAll ()\n  }\n\n  //····················································································································\n\n  final func tableViewDelegate_endSorting () {\n    self.sortedArray_property.notifyModelDidChange ()\n  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutTableViewControllerGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                                        const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                        GALGAS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_observedProperties_21900 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 522)) ;
  const GALGAS_autoLayoutTableViewControllerGeneration temp_0 = this ;
  cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration enumerator_21946 (temp_0.readProperty_mTableViewControllerSortedColumnListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_21946.hasCurrentObject ()) {
    var_observedProperties_21900.addAssign_operation (enumerator_21946.current_mObservablePropertyForSorting (HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 524)) ;
    enumerator_21946.gotoNextObject () ;
  }
  const GALGAS_autoLayoutTableViewControllerGeneration temp_1 = this ;
  const GALGAS_autoLayoutTableViewControllerGeneration temp_2 = this ;
  const GALGAS_autoLayoutTableViewControllerGeneration temp_3 = this ;
  const GALGAS_autoLayoutTableViewControllerGeneration temp_4 = this ;
  const GALGAS_autoLayoutTableViewControllerGeneration temp_5 = this ;
  const GALGAS_autoLayoutTableViewControllerGeneration temp_6 = this ;
  const GALGAS_autoLayoutTableViewControllerGeneration temp_7 = this ;
  const GALGAS_autoLayoutTableViewControllerGeneration temp_8 = this ;
  const GALGAS_autoLayoutTableViewControllerGeneration temp_9 = this ;
  GALGAS_string var_s_22079 = GALGAS_string (filewrapperTemplate_autoLayoutTableViewControllerGenerationTemplate_autoLayoutTableViewControllerImplementation (inCompiler, temp_1.readProperty_mOwnerName (), temp_2.readProperty_mControllerName ().readProperty_string (), temp_3.readProperty_mModelString (), temp_4.readProperty_mTableViewControllerModelKind (), temp_5.readProperty_mModelTypeName (), temp_6.readProperty_mTableViewControllerBoundColumnListForGeneration (), temp_7.readProperty_mTableViewControllerSortedColumnListForGeneration (), temp_8.readProperty_mElementTypeName (), var_observedProperties_21900, temp_9.readProperty_mAttributeListForGeneration () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 526))) ;
  {
  const GALGAS_autoLayoutTableViewControllerGeneration temp_10 = this ;
  const GALGAS_autoLayoutTableViewControllerGeneration temp_11 = this ;
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, GALGAS_string ("controller-table-view-").add_operation (temp_10.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 540)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 540)).add_operation (temp_11.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 540)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 540)), var_s_22079, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 538)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectionControllerDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selectionControllerDeclarationAST temp_0 = this ;
  const GALGAS_selectionControllerDeclarationAST temp_1 = this ;
  const GALGAS_selectionControllerDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_755 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 16)).add_operation (temp_1.readProperty_mSelectionControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 16)), temp_2.readProperty_mSelectionControllerName ().readProperty_location ()  COMMA_SOURCE_FILE ("selection-controller.ggs", 15)) ;
  {
  const GALGAS_selectionControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_755, temp_3, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 19)) ;
  }
  {
  const GALGAS_selectionControllerDeclarationAST temp_4 = this ;
  const GALGAS_selectionControllerDeclarationAST temp_5 = this ;
  const GALGAS_selectionControllerDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_755, GALGAS_lstring::constructor_new (temp_4.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 20)).add_operation (temp_5.readProperty_mModelControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 20)), temp_6.readProperty_mModelControllerName ().readProperty_location ()  COMMA_SOURCE_FILE ("selection-controller.ggs", 20)) COMMA_SOURCE_FILE ("selection-controller.ggs", 20)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_selectionControllerDeclarationAST::getter_nodeKey (C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_selectionControllerDeclarationAST temp_0 = this ;
  const GALGAS_selectionControllerDeclarationAST temp_1 = this ;
  const GALGAS_selectionControllerDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 26)).add_operation (temp_1.readProperty_mSelectionControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 26)), temp_2.readProperty_mSelectionControllerName ().readProperty_location ()  COMMA_SOURCE_FILE ("selection-controller.ggs", 26)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectionControllerDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selectionControllerDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_3232 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("selection-controller.ggs", 68)) ;
  if (NULL != objectArray_3232) {
    macroValidSharedObject (objectArray_3232, cMapElement_classMap) ;
    GALGAS_propertyKind var_propertyKind_3388 ;
    const GALGAS_selectionControllerDeclarationAST temp_1 = this ;
    GALGAS_actionMap joker_3390_2 ; // Joker input parameter
    GALGAS_bool joker_3390_1 ; // Joker input parameter
    objectArray_3232->mProperty_mPropertyMap.method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_3388, joker_3390_2, joker_3390_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 71)) ;
    switch (var_propertyKind_3388.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        const GALGAS_selectionControllerDeclarationAST temp_2 = this ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mModelControllerName ().readProperty_location (), GALGAS_string ("an array controller is required here"), fixItArray3  COMMA_SOURCE_FILE ("selection-controller.ggs", 74)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        const GALGAS_selectionControllerDeclarationAST temp_4 = this ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mModelControllerName ().readProperty_location (), GALGAS_string ("an array controller is required here"), fixItArray5  COMMA_SOURCE_FILE ("selection-controller.ggs", 76)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        const GALGAS_selectionControllerDeclarationAST temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mModelControllerName ().readProperty_location (), GALGAS_string ("an array controller is required here"), fixItArray7  COMMA_SOURCE_FILE ("selection-controller.ggs", 78)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        const GALGAS_selectionControllerDeclarationAST temp_8 = this ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mModelControllerName ().readProperty_location (), GALGAS_string ("an array controller is required here"), fixItArray9  COMMA_SOURCE_FILE ("selection-controller.ggs", 80)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_selectionControllerDeclarationAST temp_11 = this ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mModelControllerPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("selectedArray"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            const GALGAS_selectionControllerDeclarationAST temp_12 = this ;
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_mModelControllerPropertyName ().readProperty_location (), GALGAS_string ("'selectedArray' is required here"), fixItArray13  COMMA_SOURCE_FILE ("selection-controller.ggs", 83)) ;
          }
        }
        const GALGAS_selectionControllerDeclarationAST temp_14 = this ;
        GALGAS_propertyKind var_kind_4054 = GALGAS_propertyKind::constructor_selectionController (temp_14.readProperty_mSelectionEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.ggs", 85)) ;
        {
        const GALGAS_selectionControllerDeclarationAST temp_15 = this ;
        objectArray_3232->mProperty_mPropertyMap.setter_insertKey (temp_15.readProperty_mSelectionControllerName (), var_kind_4054, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("selection-controller.ggs", 86)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 86)) ;
        }
        const GALGAS_selectionControllerDeclarationAST temp_16 = this ;
        const GALGAS_selectionControllerDeclarationAST temp_17 = this ;
        const GALGAS_selectionControllerDeclarationAST temp_18 = this ;
        const GALGAS_selectionControllerDeclarationAST temp_19 = this ;
        objectArray_3232->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_selectionControllerPropertyGeneration::constructor_new (temp_16.readProperty_mSelectionControllerName ().readProperty_string (), temp_17.readProperty_mClassName ().readProperty_string (), temp_18.readProperty_mModelControllerName ().readProperty_string (), temp_19.readProperty_mModelControllerPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.ggs", 87))  COMMA_SOURCE_FILE ("selection-controller.ggs", 87)) ;
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectionControllerDeclarationAST fourthAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_fourthAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classKind var_superClassKind_4834 ;
  GALGAS_propertyMap var_propertyMap_4851 ;
  const GALGAS_selectionControllerDeclarationAST temp_0 = this ;
  GALGAS_actionMap joker_4853_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_4853_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), var_superClassKind_4834, var_propertyMap_4851, joker_4853_2, joker_4853_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 102)) ;
  GALGAS_propertyKind var_propertyKind_4926 ;
  const GALGAS_selectionControllerDeclarationAST temp_1 = this ;
  GALGAS_actionMap joker_4928_2 ; // Joker input parameter
  GALGAS_bool joker_4928_1 ; // Joker input parameter
  var_propertyMap_4851.method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_4926, joker_4928_2, joker_4928_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 103)) ;
  switch (var_propertyKind_4926.enumValue ()) {
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
  case GALGAS_propertyKind::kEnum_selectionController:
    {
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_6661 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_propertyKind_4926.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_5089_typeName = extractPtr_6661->mAssociatedValue0 ;
      GALGAS_propertyMap var_selectionObservablePropertyMap_5225 ;
      GALGAS_propertyGenerationList var_selectionGenerationList_5271 ;
      const GALGAS_selectionControllerDeclarationAST temp_2 = this ;
      GALGAS_classKind joker_5181 ; // Joker input parameter
      GALGAS_actionMap joker_5234 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSelectionEntityName (), joker_5181, var_selectionObservablePropertyMap_5225, joker_5234, var_selectionGenerationList_5271, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 110)) ;
      const GALGAS_selectionControllerDeclarationAST temp_3 = this ;
      const GALGAS_selectionControllerDeclarationAST temp_4 = this ;
      const GALGAS_selectionControllerDeclarationAST temp_5 = this ;
      const GALGAS_selectionControllerDeclarationAST temp_6 = this ;
      const GALGAS_selectionControllerDeclarationAST temp_7 = this ;
      ioArgument_ioGeneration.mProperty_mSelectionControllerListForGeneration.addAssign_operation (temp_3.readProperty_mClassName ().readProperty_string (), temp_4.readProperty_mSelectionControllerName ().readProperty_string (), temp_5.readProperty_mModelControllerName ().readProperty_string (), temp_6.readProperty_mModelControllerPropertyName ().readProperty_string (), extractedValue_5089_typeName.readProperty_string (), temp_7.readProperty_mSelectionEntityName ().readProperty_string (), var_selectionObservablePropertyMap_5225, var_selectionGenerationList_5271  COMMA_SOURCE_FILE ("selection-controller.ggs", 117)) ;
      ioArgument_ioGeneration.mProperty_mToManyClassImplementations.addAssign_operation (extractedValue_5089_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.ggs", 126)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GALGAS_selectionControllerDeclarationAST temp_9 = this ;
        test_8 = GALGAS_bool (kIsNotEqual, extractedValue_5089_typeName.readProperty_string ().objectCompare (temp_9.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_selectionControllerDeclarationAST temp_10 = this ;
          ioArgument_ioGeneration.mProperty_mToManyClassImplementations.addAssign_operation (temp_10.readProperty_mSelectionEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.ggs", 128)) ;
          const GALGAS_selectionControllerDeclarationAST temp_11 = this ;
          ioArgument_ioGeneration.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.addAssign_operation (temp_11.readProperty_mSelectionEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.ggs", 129)) ;
        }
      }
      const GALGAS_selectionControllerDeclarationAST temp_12 = this ;
      GALGAS_string var_testedTypeName_5978 = temp_12.readProperty_mSelectionEntityName ().readProperty_string () ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("selection-controller.ggs", 132)).isValid ()) {
        uint32_t variant_6023 = GALGAS_uint::constructor_max (SOURCE_FILE ("selection-controller.ggs", 132)).uintValue () ;
        bool loop_6023 = true ;
        while (loop_6023) {
          loop_6023 = GALGAS_bool (kIsNotEqual, extractedValue_5089_typeName.readProperty_string ().objectCompare (var_testedTypeName_5978)).operator_and (GALGAS_bool (kIsNotEqual, var_testedTypeName_5978.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.ggs", 132)).isValid () ;
          if (loop_6023) {
            loop_6023 = GALGAS_bool (kIsNotEqual, extractedValue_5089_typeName.readProperty_string ().objectCompare (var_testedTypeName_5978)).operator_and (GALGAS_bool (kIsNotEqual, var_testedTypeName_5978.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.ggs", 132)).boolValue () ;
          }
          if (loop_6023 && (0 == variant_6023)) {
            loop_6023 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("selection-controller.ggs", 132)) ;
          }
          if (loop_6023) {
            variant_6023 -- ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              const GALGAS_selectionControllerDeclarationAST temp_14 = this ;
              test_13 = GALGAS_bool (kIsNotEqual, extractedValue_5089_typeName.readProperty_string ().objectCompare (temp_14.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                switch (var_superClassKind_4834.enumValue ()) {
                case GALGAS_classKind::kNotBuilt:
                  break ;
                case GALGAS_classKind::kEnum_prefs:
                  {
                    var_testedTypeName_5978 = GALGAS_string::makeEmptyString () ;
                  }
                  break ;
                case GALGAS_classKind::kEnum_atomic:
                  {
                    var_testedTypeName_5978 = GALGAS_string::makeEmptyString () ;
                  }
                  break ;
                case GALGAS_classKind::kEnum_document:
                  {
                    var_testedTypeName_5978 = GALGAS_string::makeEmptyString () ;
                  }
                  break ;
                case GALGAS_classKind::kEnum_entity:
                  {
                    const cEnumAssociatedValues_classKind_entity * extractPtr_6629 = (const cEnumAssociatedValues_classKind_entity *) (var_superClassKind_4834.unsafePointer ()) ;
                    const GALGAS_string extractedValue_6423_superOfSuperEntity = extractPtr_6629->mAssociatedValue0 ;
                    var_testedTypeName_5978 = extractedValue_6423_superOfSuperEntity ;
                    enumGalgasBool test_15 = kBoolTrue ;
                    if (kBoolTrue == test_15) {
                      test_15 = GALGAS_bool (kIsEqual, var_testedTypeName_5978.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                      if (kBoolTrue == test_15) {
                        const GALGAS_selectionControllerDeclarationAST temp_16 = this ;
                        TC_Array <C_FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (temp_16.readProperty_mSelectionEntityName ().readProperty_location (), GALGAS_string ("This entity is not descendant of ").add_operation (extractedValue_5089_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 144)), fixItArray17  COMMA_SOURCE_FILE ("selection-controller.ggs", 144)) ;
                      }
                    }
                  }
                  break ;
                }
              }
            }
          }
        }
      }
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_selectionControllerPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                          const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                          const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("selection-controller.ggs", 168)), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 168)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 168)) ;
  const GALGAS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection controller: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 169)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 169)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 169)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("selection-controller.ggs", 170)), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 170)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 170)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 170)) ;
  const GALGAS_selectionControllerPropertyGeneration temp_1 = this ;
  const GALGAS_selectionControllerPropertyGeneration temp_2 = this ;
  const GALGAS_selectionControllerPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 171)).add_operation (GALGAS_string (" = SelectionController_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 171)).add_operation (temp_2.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 171)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 171)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 171)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 171)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 171)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_selectionControllerPropertyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- Selection controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 177)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 177)) ;
  const GALGAS_selectionControllerPropertyGeneration temp_1 = this ;
  const GALGAS_selectionControllerPropertyGeneration temp_2 = this ;
  const GALGAS_selectionControllerPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 178)).add_operation (GALGAS_string (".bind_selection (model: self."), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 178)).add_operation (temp_2.readProperty_mModelControllerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 178)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 178)).add_operation (temp_3.readProperty_mModelControllerPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 179)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 179)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 178)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_selectionControllerPropertyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration populateExplorerWindowCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_selectionControllerPropertyGeneration::getter_populateExplorerWindowCode (C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("    //--- Selection controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 191)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 191)) ;
  const GALGAS_selectionControllerPropertyGeneration temp_1 = this ;
  const GALGAS_selectionControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 192)).add_operation (GALGAS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 192)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 192)).add_operation (GALGAS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 192)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 192)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'selectionControllerGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate baseSelectionControllerImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_OWNER_5F_NAME,
                                                                                                               const GALGAS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                               const GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const GALGAS_propertyMap & in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    Base Selection Controller " ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << " " ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor final class SelectionController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " {\n\n  //····················································································································\n\n  init () {\n    noteObjectAllocation (self)\n  }\n\n  //····················································································································\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n" ;
  GALGAS_uint index_1151_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_1151 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1151.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Selection observable property: " ;
      result << enumerator_1151.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "\n  //····················································································································\n\n" ;
      const enumGalgasBool test_0 = extensionGetter_isEntityType (enumerator_1151.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 29)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 29)).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = extensionGetter_isTransient (enumerator_1151.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 30)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "  var " ;
          result << enumerator_1151.current_lkey (HERE).readProperty_string ().stringValue () ;
          result << "_property = EBTransientProperty_" ;
          result << extensionGetter_swiftTypeName (enumerator_1151.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 31)).stringValue () ;
          result << " ()\n\n" ;
        }else if (kBoolFalse == test_1) {
          result << "  var " ;
          result << enumerator_1151.current_lkey (HERE).readProperty_string ().stringValue () ;
          result << "_property = EBComputedProperty_" ;
          result << extensionGetter_swiftTypeName (enumerator_1151.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 33)).stringValue () ;
          result << " ()\n\n" ;
        }
      }else if (kBoolFalse == test_0) {
      }
      index_1151_.increment () ;
      enumerator_1151.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //   BIND SELECTION\n  //····················································································································\n\n  private weak var mModel : ReadOnlyArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? = nil // SHOULD BE WEAK\n\n  //····················································································································\n\n  final func bind_selection (model : ReadOnlyArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << ") {\n    self.mModel = model\n" ;
  GALGAS_uint index_2400_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_2400 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2400.hasCurrentObject ()) {
      const enumGalgasBool test_2 = extensionGetter_isEntityType (enumerator_2400.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 48)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 48)).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "    self.bind_property_" ;
        result << enumerator_2400.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (model: model)\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_2400_.increment () ;
      enumerator_2400.gotoNextObject () ;
    }
  }
  result << "  }\n\n  //····················································································································\n  //   UNBIND SELECTION\n  //····················································································································\n\n  /* final func unbind_selection () {\n" ;
  GALGAS_uint index_2903_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_2903 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2903.hasCurrentObject ()) {
      const enumGalgasBool test_3 = extensionGetter_isEntityType (enumerator_2903.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 61)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 61)).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  //--- " ;
        result << enumerator_2903.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "\n    self." ;
        result << enumerator_2903.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property.mReadModelFunction = nil \n" ;
        const enumGalgasBool test_4 = extensionGetter_isTransient (enumerator_2903.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 64)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 64)).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "    self." ;
          result << enumerator_2903.current_lkey (HERE).readProperty_string ().stringValue () ;
          result << "_property.mWriteModelFunction = nil \n" ;
        }else if (kBoolFalse == test_4) {
        }
        result << "    self.mModel\?.toMany_" ;
        result << enumerator_2903.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_StopsBeingObserved (by: self." ;
        result << enumerator_2903.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property)\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_2903_.increment () ;
      enumerator_2903.gotoNextObject () ;
    }
  }
  result << "  //---\n    self.mModel = nil\n  } */\n\n" ;
  GALGAS_uint index_3402_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_3402 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3402.hasCurrentObject ()) {
      const enumGalgasBool test_5 = extensionGetter_isEntityType (enumerator_3402.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 75)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 75)).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  //···················································································································*\n\n  private final func bind_property_" ;
        result << enumerator_3402.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (model : ReadOnlyArrayOf_" ;
        result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
        result << ") {\n    model.toMany_" ;
        result << enumerator_3402.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_StartsToBeObserved (by: self." ;
        result << enumerator_3402.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property)\n    self." ;
        result << enumerator_3402.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property.mReadModelFunction = { [weak self] in\n      if let model = self\?.mModel {\n        switch model.selection {\n        case .empty :\n          return .empty\n        case .multiple :\n          return .multiple\n        case .single (let v) :\n          var s = Set <" ;
        result << extensionGetter_swiftTypeName (enumerator_3402.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 87)).stringValue () ;
        result << "> ()\n          var isMultipleSelection = false\n          for object in v {\n            switch object." ;
        result << enumerator_3402.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property.selection {\n            case .empty :\n              return .empty\n            case .multiple :\n              isMultipleSelection = true\n            case .single (let vProp) :\n              s.insert (vProp)\n            }\n          }\n          if isMultipleSelection {\n            return .multiple\n          }else if s.count == 0 {\n            return .empty\n          }else if s.count == 1 {\n            return .single (s.first!)\n          }else{\n            return .multiple\n          }\n        }\n      }else{\n        return .empty\n      }\n    }\n" ;
        const enumGalgasBool test_6 = extensionGetter_isTransient (enumerator_3402.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 113)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 113)).boolEnum () ;
        if (kBoolTrue == test_6) {
          result << "    self." ;
          result << enumerator_3402.current_lkey (HERE).readProperty_string ().stringValue () ;
          result << "_property.mWriteModelFunction = { [weak self] (inValue : " ;
          result << extensionGetter_swiftTypeName (enumerator_3402.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 114)).stringValue () ;
          result << ") in\n      if let model = self\?.mModel {\n        switch model.selection {\n        case .empty, .multiple :\n          break\n        case .single (let v) :\n          for object in v {\n            object." ;
          result << enumerator_3402.current_lkey (HERE).readProperty_string ().stringValue () ;
          result << "_property.setProp (inValue)\n          }\n        }\n      }\n    }\n" ;
        }else if (kBoolFalse == test_6) {
        }
        result << "  }\n\n" ;
      }else if (kBoolFalse == test_5) {
      }
      index_3402_.increment () ;
      enumerator_3402.gotoNextObject () ;
    }
  }
  result << "\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate derivedSelectionControllerImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (C_Compiler * inCompiler,
                                                                                                                  const GALGAS_string & in_OWNER_5F_NAME,
                                                                                                                  const GALGAS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                                  const GALGAS_string & in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                  const GALGAS_string & in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                  const GALGAS_propertyGenerationList & in_PROPERTY_5F_GENERATION_5F_LIST,
                                                                                                                  const GALGAS_bool & /* in_HAS_5F_ATOMIC_5F_PROPERTIES */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    Derived selection controller " ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << " " ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor final class SelectionController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " {\n\n  //····················································································································\n\n  init () {\n    noteObjectAllocation (self)\n  }\n\n  //····················································································································\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n" ;
  GALGAS_uint index_1119_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_1119 (in_PROPERTY_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1119.hasCurrentObject ()) {
      result << callExtensionGetter_declarationInSelectionControllerCode ((const cPtr_propertyGeneration *) enumerator_1119.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 26)).stringValue () ;
      index_1119_.increment () ;
      enumerator_1119.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //   Selected array (not observable)\n  //····················································································································\n\n  var selectedArray : EBReferenceArray <" ;
  result << in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> { return self.selectedArray_property.propval }\n\n  //····················································································································\n  //   BIND SELECTION\n  //····················································································································\n\n   let selectedArray_property = TransientArrayOfSuperOf_" ;
  result << in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " <" ;
  result << in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> ()\n\n  //····················································································································\n\n  final func bind_selection (model : ReadOnlyArrayOf_" ;
  result << in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << ") {\n    self.selectedArray_property.setDataProvider (model)\n" ;
  GALGAS_uint index_2269_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2269 (in_PROPERTY_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2269.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (enumerator_2269.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GALGAS_bool (enumerator_2269.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 46)).operator_or (GALGAS_bool (enumerator_2269.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 47)).operator_or (GALGAS_bool (enumerator_2269.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 48)).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "    self.bind_property_" ;
        result << enumerator_2269.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_2269_.increment () ;
      enumerator_2269.gotoNextObject () ;
    }
  }
  result << "  }\n\n  //····················································································································\n  //   UNBIND SELECTION\n  //····················································································································\n\n  /* final func unbind_selection () {\n    self.selectedArray_property.setDataProvider (nil)\n" ;
  GALGAS_uint index_2973_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2973 (in_PROPERTY_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2973.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (enumerator_2973.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GALGAS_bool (enumerator_2973.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 63)).operator_or (GALGAS_bool (enumerator_2973.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 64)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "  //--- " ;
        result << enumerator_2973.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "\n    self." ;
        result << enumerator_2973.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.mReadModelFunction = nil \n" ;
        const enumGalgasBool test_2 = GALGAS_bool (enumerator_2973.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GALGAS_bool (enumerator_2973.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 68)).boolEnum () ;
        if (kBoolTrue == test_2) {
          result << "    self." ;
          result << enumerator_2973.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
          result << "_property.mWriteModelFunction = nil \n" ;
        }else if (kBoolFalse == test_2) {
        }
        result << "    self.selectedArray_property.toMany_" ;
        result << enumerator_2973.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_StopsBeingObserved (by: self." ;
        result << enumerator_2973.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property)\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_2973_.increment () ;
      enumerator_2973.gotoNextObject () ;
    }
  }
  result << "  } */\n\n" ;
  GALGAS_uint index_3677_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_3677 (in_PROPERTY_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3677.hasCurrentObject ()) {
      result << callExtensionGetter_bindPropertyInSelectionController ((const cPtr_propertyGeneration *) enumerator_3677.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 77)).stringValue () ;
      index_3677_.increment () ;
      enumerator_3677.gotoNextObject () ;
    }
  }
  result << "\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateSelectionControllers'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateSelectionControllers (const GALGAS_selectionControllerForGeneration constinArgument_inArrayControllerListForGeneration,
                                           const GALGAS_string constinArgument_inOutputDirectory,
                                           GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_selectionControllerForGeneration enumerator_11135 (constinArgument_inArrayControllerListForGeneration, kENUMERATION_UP) ;
  while (enumerator_11135.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_11135.current_mBaseTypeName (HERE).objectCompare (enumerator_11135.current_mSelectionTypeName (HERE))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_11235 = GALGAS_string (filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (inCompiler, enumerator_11135.current_mOwnerName (HERE), enumerator_11135.current_mSelectionControllerName (HERE), enumerator_11135.current_mBaseTypeName (HERE), enumerator_11135.current_mSelectionObservablePropertyMap (HERE) COMMA_SOURCE_FILE ("selection-controller.ggs", 240))) ;
        GALGAS_string var_fileName_11471 = GALGAS_string ("selectionController-").add_operation (enumerator_11135.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 246)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 246)).add_operation (enumerator_11135.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 246)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 246)) ;
        ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_11471  COMMA_SOURCE_FILE ("selection-controller.ggs", 247)) ;
        {
        GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11471, var_s_11235, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 248)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_bool var_hasAtomicStoredProperties_11727 = GALGAS_bool (false) ;
      cEnumerator_propertyGenerationList enumerator_11755 (enumerator_11135.current_mPropertyGenerationList (HERE), kENUMERATION_UP) ;
      bool bool_1 = var_hasAtomicStoredProperties_11727.operator_not (SOURCE_FILE ("selection-controller.ggs", 255)).isValidAndTrue () ;
      if (enumerator_11755.hasCurrentObject () && bool_1) {
        while (enumerator_11755.hasCurrentObject () && bool_1) {
          var_hasAtomicStoredProperties_11727 = GALGAS_bool (enumerator_11755.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration) ;
          enumerator_11755.gotoNextObject () ;
          if (enumerator_11755.hasCurrentObject ()) {
            bool_1 = var_hasAtomicStoredProperties_11727.operator_not (SOURCE_FILE ("selection-controller.ggs", 255)).isValidAndTrue () ;
          }
        }
      }
      GALGAS_string var_s_11920 = GALGAS_string (filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (inCompiler, enumerator_11135.current_mOwnerName (HERE), enumerator_11135.current_mSelectionControllerName (HERE), enumerator_11135.current_mBaseTypeName (HERE), enumerator_11135.current_mSelectionTypeName (HERE), enumerator_11135.current_mPropertyGenerationList (HERE), var_hasAtomicStoredProperties_11727 COMMA_SOURCE_FILE ("selection-controller.ggs", 258))) ;
      GALGAS_string var_fileName_12215 = GALGAS_string ("selectionController-").add_operation (enumerator_11135.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 266)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 266)).add_operation (enumerator_11135.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 266)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 266)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_12215  COMMA_SOURCE_FILE ("selection-controller.ggs", 267)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12215, var_s_11920, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 268)) ;
      }
    }
    enumerator_11135.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolAsDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolAsDefaultValue::method_analyzeDefaultValueType (const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                              const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                              GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_4251 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_4272 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_4251.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 113)).isValidAndTrue () ;
  if (enumerator_4272.hasCurrentObject () && bool_0) {
    while (enumerator_4272.hasCurrentObject () && bool_0) {
      switch (enumerator_4272.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          const GALGAS_boolAsDefaultValue temp_1 = this ;
          GALGAS_string temp_2 ;
          const enumGalgasBool test_3 = temp_1.readProperty_mValue ().readProperty_bool ().boolEnum () ;
          if (kBoolTrue == test_3) {
            temp_2 = GALGAS_string ("true") ;
          }else if (kBoolFalse == test_3) {
            temp_2 = GALGAS_string ("false") ;
          }
          outArgument_outSwiftDefaultValueAsString = temp_2 ;
          var_found_4251 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_uint_33__32_Type:
      case GALGAS_typeKind::kEnum_dataType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_bezierPathType:
      case GALGAS_typeKind::kEnum_bezierPathArrayType:
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
      enumerator_4272.gotoNextObject () ;
      if (enumerator_4272.hasCurrentObject ()) {
        bool_0 = var_found_4251.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 113)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_found_4251.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 126)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_boolAsDefaultValue temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mValue ().readProperty_location (), GALGAS_string ("only a boolean attribute can be initialized by YES or NO"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 127)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerAsDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_integerAsDefaultValue::method_analyzeDefaultValueType (const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                 const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                 GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_5247 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_5268 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_5247.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 141)).isValidAndTrue () ;
  if (enumerator_5268.hasCurrentObject () && bool_0) {
    while (enumerator_5268.hasCurrentObject () && bool_0) {
      switch (enumerator_5268.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          const GALGAS_integerAsDefaultValue temp_1 = this ;
          GALGAS_string temp_2 ;
          const enumGalgasBool test_3 = temp_1.readProperty_mNegative ().boolEnum () ;
          if (kBoolTrue == test_3) {
            temp_2 = GALGAS_string ("-") ;
          }else if (kBoolFalse == test_3) {
            temp_2 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_integerAsDefaultValue temp_4 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_2.add_operation (temp_4.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 144)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 144)) ;
          var_found_5247 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_uint_33__32_Type:
        {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            const GALGAS_integerAsDefaultValue temp_6 = this ;
            test_5 = temp_6.readProperty_mNegative ().boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_integerAsDefaultValue temp_7 = this ;
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GALGAS_string ("Uint32 value should be ≥ 0"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 148)) ;
            }
          }
          const GALGAS_integerAsDefaultValue temp_9 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_9.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 150)) ;
          var_found_5247 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_fontType:
        {
          const GALGAS_integerAsDefaultValue temp_10 = this ;
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSFont.systemFont (ofSize: ").add_operation (temp_10.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 153)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 153)).add_operation (GALGAS_string (".0)"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 153)) ;
          var_found_5247 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_dataType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_bezierPathType:
      case GALGAS_typeKind::kEnum_bezierPathArrayType:
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
      enumerator_5268.gotoNextObject () ;
      if (enumerator_5268.hasCurrentObject ()) {
        bool_0 = var_found_5247.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 141)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_found_5247.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 162)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_integerAsDefaultValue temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mValue ().readProperty_location (), GALGAS_string ("only an integer attribute can be initialized by an integer constant"), fixItArray13  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 163)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@doubleAsDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_doubleAsDefaultValue::method_analyzeDefaultValueType (const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_6575 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_6596 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_6575.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 177)).isValidAndTrue () ;
  if (enumerator_6596.hasCurrentObject () && bool_0) {
    while (enumerator_6596.hasCurrentObject () && bool_0) {
      switch (enumerator_6596.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          const GALGAS_doubleAsDefaultValue temp_1 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_1.readProperty_mValue ().readProperty_double ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 180)) ;
          var_found_6575 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_dataType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_uint_33__32_Type:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_bezierPathType:
      case GALGAS_typeKind::kEnum_bezierPathArrayType:
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
      enumerator_6596.gotoNextObject () ;
      if (enumerator_6596.hasCurrentObject ()) {
        bool_0 = var_found_6575.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 177)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_found_6575.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 190)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_doubleAsDefaultValue temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GALGAS_string ("only a double attribute can be initialized by a floating point constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 191)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringAsDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_stringAsDefaultValue::method_analyzeDefaultValueType (const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_7565 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_7586 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_7565.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 205)).isValidAndTrue () ;
  if (enumerator_7586.hasCurrentObject () && bool_0) {
    while (enumerator_7586.hasCurrentObject () && bool_0) {
      switch (enumerator_7586.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          const GALGAS_stringAsDefaultValue temp_1 = this ;
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("\"").add_operation (temp_1.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 208)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 208)) ;
          var_found_7565 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_dataType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_uint_33__32_Type:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_fontType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_bezierPathType:
      case GALGAS_typeKind::kEnum_bezierPathArrayType:
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
      enumerator_7586.gotoNextObject () ;
      if (enumerator_7586.hasCurrentObject ()) {
        bool_0 = var_found_7565.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 205)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_found_7565.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 218)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_stringAsDefaultValue temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GALGAS_string ("only a string attribute can be initialized by a string constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 219)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'predefinedDates'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_predefinedDates (C_Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("explicit-default-value.ggs", 227)) ;
  result_result.addAssign_operation (GALGAS_string ("now")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 228)) ;
  result_result.addAssign_operation (GALGAS_string ("distantPast")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 229)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_predefinedDates = false ;
static GALGAS_stringset gOnceFunctionResult_predefinedDates ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_predefinedDates (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedDates) {
    gOnceFunctionResult_predefinedDates = onceFunction_predefinedDates (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedDates = true ;
  }
  return gOnceFunctionResult_predefinedDates ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_predefinedDates (void) {
  gOnceFunctionResult_predefinedDates.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_predefinedDates (NULL,
                                                             releaseOnceFunctionResult_predefinedDates) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_predefinedDates [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_predefinedDates (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_predefinedDates (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_predefinedDates ("predefinedDates",
                                                                 functionWithGenericHeader_predefinedDates,
                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                 0,
                                                                 functionArgs_predefinedDates) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'predefinedColors'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_predefinedColors (C_Compiler *
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("explicit-default-value.ggs", 235)) ;
  result_result.addAssign_operation (GALGAS_string ("black")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 236)) ;
  result_result.addAssign_operation (GALGAS_string ("blue")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 237)) ;
  result_result.addAssign_operation (GALGAS_string ("brown")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 238)) ;
  result_result.addAssign_operation (GALGAS_string ("clear")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 239)) ;
  result_result.addAssign_operation (GALGAS_string ("control")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 240)) ;
  result_result.addAssign_operation (GALGAS_string ("controlDarkShadow")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 241)) ;
  result_result.addAssign_operation (GALGAS_string ("controlHighlight")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 242)) ;
  result_result.addAssign_operation (GALGAS_string ("controlLightHighlight")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 243)) ;
  result_result.addAssign_operation (GALGAS_string ("controlShadow")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 244)) ;
  result_result.addAssign_operation (GALGAS_string ("controlText")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 245)) ;
  result_result.addAssign_operation (GALGAS_string ("cyan")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 246)) ;
  result_result.addAssign_operation (GALGAS_string ("darkGray")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 247)) ;
  result_result.addAssign_operation (GALGAS_string ("disabledControlText")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 248)) ;
  result_result.addAssign_operation (GALGAS_string ("gray")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 249)) ;
  result_result.addAssign_operation (GALGAS_string ("green")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 250)) ;
  result_result.addAssign_operation (GALGAS_string ("grid")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 251)) ;
  result_result.addAssign_operation (GALGAS_string ("header")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 252)) ;
  result_result.addAssign_operation (GALGAS_string ("headerText")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 253)) ;
  result_result.addAssign_operation (GALGAS_string ("highlight")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 254)) ;
  result_result.addAssign_operation (GALGAS_string ("keyboardFocusIndicator")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 255)) ;
  result_result.addAssign_operation (GALGAS_string ("knob")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 256)) ;
  result_result.addAssign_operation (GALGAS_string ("lightGray")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 257)) ;
  result_result.addAssign_operation (GALGAS_string ("magenta")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 258)) ;
  result_result.addAssign_operation (GALGAS_string ("orange")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 259)) ;
  result_result.addAssign_operation (GALGAS_string ("purple")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 260)) ;
  result_result.addAssign_operation (GALGAS_string ("red")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 261)) ;
  result_result.addAssign_operation (GALGAS_string ("scrollBar")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 262)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedControl")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 263)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedControlText")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 264)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedKnob")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 265)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedMenuItem")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 266)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedMenuItemText")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 267)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedTextBackground")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 268)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedText")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 269)) ;
  result_result.addAssign_operation (GALGAS_string ("shadow")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 270)) ;
  result_result.addAssign_operation (GALGAS_string ("textBackground")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 271)) ;
  result_result.addAssign_operation (GALGAS_string ("white")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 272)) ;
  result_result.addAssign_operation (GALGAS_string ("windowBackground")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 273)) ;
  result_result.addAssign_operation (GALGAS_string ("windowFrame")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 274)) ;
  result_result.addAssign_operation (GALGAS_string ("windowFrameText")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 275)) ;
  result_result.addAssign_operation (GALGAS_string ("yellow")  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 276)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_predefinedColors = false ;
static GALGAS_stringset gOnceFunctionResult_predefinedColors ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_predefinedColors (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedColors) {
    gOnceFunctionResult_predefinedColors = onceFunction_predefinedColors (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedColors = true ;
  }
  return gOnceFunctionResult_predefinedColors ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_predefinedColors (void) {
  gOnceFunctionResult_predefinedColors.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_predefinedColors (NULL,
                                                              releaseOnceFunctionResult_predefinedColors) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_predefinedColors [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_predefinedColors (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_predefinedColors (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_predefinedColors ("predefinedColors",
                                                                  functionWithGenericHeader_predefinedColors,
                                                                  & kTypeDescriptor_GALGAS_stringset,
                                                                  0,
                                                                  functionArgs_predefinedColors) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@identifierAsDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_identifierAsDefaultValue::method_analyzeDefaultValueType (const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                    const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                    GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_10052 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_10073 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_10052.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 287)).isValidAndTrue () ;
  if (enumerator_10073.hasCurrentObject () && bool_0) {
    while (enumerator_10073.hasCurrentObject () && bool_0) {
      switch (enumerator_10073.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_dateType:
        {
          var_found_10052 = GALGAS_bool (true) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            const GALGAS_identifierAsDefaultValue temp_2 = this ;
            test_1 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 291)).getter_hasKey (temp_2.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.ggs", 291)).boolEnum () ;
            if (kBoolTrue == test_1) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                const GALGAS_identifierAsDefaultValue temp_4 = this ;
                test_3 = GALGAS_bool (kIsEqual, temp_4.readProperty_mValue ().readProperty_string ().objectCompare (GALGAS_string ("now"))).boolEnum () ;
                if (kBoolTrue == test_3) {
                  outArgument_outSwiftDefaultValueAsString = GALGAS_string ("Date ()") ;
                }
              }
              if (kBoolFalse == test_3) {
                enumGalgasBool test_5 = kBoolTrue ;
                if (kBoolTrue == test_5) {
                  const GALGAS_identifierAsDefaultValue temp_6 = this ;
                  test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mValue ().readProperty_string ().objectCompare (GALGAS_string ("distantPast"))).boolEnum () ;
                  if (kBoolTrue == test_5) {
                    outArgument_outSwiftDefaultValueAsString = GALGAS_string ("Date.distantPast") ;
                  }
                }
                if (kBoolFalse == test_5) {
                  const GALGAS_identifierAsDefaultValue temp_7 = this ;
                  TC_Array <C_FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GALGAS_string ("unknown predefined date"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 297)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_1) {
            const GALGAS_identifierAsDefaultValue temp_9 = this ;
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mValue ().readProperty_location (), GALGAS_string ("unknown predefined date"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 300)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_bezierPathType:
        {
          var_found_10052 = GALGAS_bool (true) ;
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            const GALGAS_identifierAsDefaultValue temp_12 = this ;
            test_11 = GALGAS_bool (kIsEqual, temp_12.readProperty_mValue ().readProperty_string ().objectCompare (GALGAS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSBezierPath ()") ;
            }
          }
          if (kBoolFalse == test_11) {
            const GALGAS_identifierAsDefaultValue temp_13 = this ;
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mValue ().readProperty_location (), GALGAS_string ("only 'empty' is accepted as default NSBezierPath"), fixItArray14  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 307)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_bezierPathArrayType:
        {
          var_found_10052 = GALGAS_bool (true) ;
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            const GALGAS_identifierAsDefaultValue temp_16 = this ;
            test_15 = GALGAS_bool (kIsEqual, temp_16.readProperty_mValue ().readProperty_string ().objectCompare (GALGAS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_15) {
              outArgument_outSwiftDefaultValueAsString = GALGAS_string ("BezierPathArray ()") ;
            }
          }
          if (kBoolFalse == test_15) {
            const GALGAS_identifierAsDefaultValue temp_17 = this ;
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.readProperty_mValue ().readProperty_location (), GALGAS_string ("only 'empty' is accepted as default BezierPathArray"), fixItArray18  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 314)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          const cEnumAssociatedValues_typeKind_enumType * extractPtr_11540 = (const cEnumAssociatedValues_typeKind_enumType *) (enumerator_10073.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_11157_enumTypeName = extractPtr_11540->mAssociatedValue0 ;
          const GALGAS_enumConstantMap extractedValue_11186_constantMap = extractPtr_11540->mAssociatedValue1 ;
          var_found_10052 = GALGAS_bool (true) ;
          enumGalgasBool test_19 = kBoolTrue ;
          if (kBoolTrue == test_19) {
            const GALGAS_identifierAsDefaultValue temp_20 = this ;
            test_19 = extractedValue_11186_constantMap.getter_hasKey (temp_20.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.ggs", 319)).boolEnum () ;
            if (kBoolTrue == test_19) {
              const GALGAS_identifierAsDefaultValue temp_21 = this ;
              outArgument_outSwiftDefaultValueAsString = extractedValue_11157_enumTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 320)).add_operation (temp_21.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 320)) ;
            }
          }
          if (kBoolFalse == test_19) {
            const GALGAS_identifierAsDefaultValue temp_22 = this ;
            const GALGAS_identifierAsDefaultValue temp_23 = this ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_22.readProperty_mValue ().readProperty_location (), GALGAS_string ("the '").add_operation (extractedValue_11157_enumTypeName, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 323)).add_operation (GALGAS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 323)).add_operation (temp_23.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 323)).add_operation (GALGAS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 323)), fixItArray24  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const GALGAS_identifierAsDefaultValue temp_25 = this ;
          TC_Array <C_FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_25.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid entity type"), fixItArray26  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 327)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          const GALGAS_identifierAsDefaultValue temp_27 = this ;
          TC_Array <C_FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid class type"), fixItArray28  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 329)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          const GALGAS_identifierAsDefaultValue temp_29 = this ;
          TC_Array <C_FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (temp_29.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid bool type"), fixItArray30  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 331)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_dataType:
        {
          var_found_10052 = GALGAS_bool (true) ;
          enumGalgasBool test_31 = kBoolTrue ;
          if (kBoolTrue == test_31) {
            const GALGAS_identifierAsDefaultValue temp_32 = this ;
            test_31 = GALGAS_bool (kIsEqual, temp_32.readProperty_mValue ().readProperty_string ().objectCompare (GALGAS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_31) {
              outArgument_outSwiftDefaultValueAsString = GALGAS_string ("Data ()") ;
            }
          }
          if (kBoolFalse == test_31) {
            const GALGAS_identifierAsDefaultValue temp_33 = this ;
            TC_Array <C_FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (temp_33.readProperty_mValue ().readProperty_location (), GALGAS_string ("only 'empty' is accepted as default Data"), fixItArray34  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 337)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          const GALGAS_identifierAsDefaultValue temp_35 = this ;
          TC_Array <C_FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (temp_35.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid double type"), fixItArray36  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 340)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          const GALGAS_identifierAsDefaultValue temp_37 = this ;
          TC_Array <C_FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid integer type"), fixItArray38  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 342)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_uint_33__32_Type:
        {
          const GALGAS_identifierAsDefaultValue temp_39 = this ;
          TC_Array <C_FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (temp_39.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid UInt32 type"), fixItArray40  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 344)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          const GALGAS_identifierAsDefaultValue temp_41 = this ;
          TC_Array <C_FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (temp_41.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid string type"), fixItArray42  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 346)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_fontType:
        {
          const GALGAS_identifierAsDefaultValue temp_43 = this ;
          TC_Array <C_FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticError (temp_43.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid font type"), fixItArray44  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 348)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_colorType:
        {
          enumGalgasBool test_45 = kBoolTrue ;
          if (kBoolTrue == test_45) {
            const GALGAS_identifierAsDefaultValue temp_46 = this ;
            test_45 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 350)).getter_hasKey (temp_46.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.ggs", 350)).boolEnum () ;
            if (kBoolTrue == test_45) {
              const GALGAS_identifierAsDefaultValue temp_47 = this ;
              outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSColor.").add_operation (temp_47.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 351)) ;
              var_found_10052 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_45) {
            const GALGAS_identifierAsDefaultValue temp_48 = this ;
            TC_Array <C_FixItDescription> fixItArray49 ;
            inCompiler->emitSemanticError (temp_48.readProperty_mValue ().readProperty_location (), GALGAS_string ("unknown predefined color"), fixItArray49  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 354)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyExternType:
        {
          const GALGAS_identifierAsDefaultValue temp_50 = this ;
          TC_Array <C_FixItDescription> fixItArray51 ;
          inCompiler->emitSemanticError (temp_50.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid image type"), fixItArray51  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 357)) ;
        }
        break ;
      }
      enumerator_10073.gotoNextObject () ;
      if (enumerator_10073.hasCurrentObject ()) {
        bool_0 = var_found_10052.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 287)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_52 = kBoolTrue ;
  if (kBoolTrue == test_52) {
    test_52 = var_found_10052.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 360)).boolEnum () ;
    if (kBoolTrue == test_52) {
      const GALGAS_identifierAsDefaultValue temp_53 = this ;
      TC_Array <C_FixItDescription> fixItArray54 ;
      inCompiler->emitSemanticError (temp_53.readProperty_mValue ().readProperty_location (), GALGAS_string ("unknow type for this identifier"), fixItArray54  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 361)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsAsDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_analyzeDefaultValueType (const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                               const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyKind var_kind_13200 ;
  const GALGAS_prefsAsDefaultValue temp_0 = this ;
  GALGAS_actionMap joker_13202_2 ; // Joker input parameter
  GALGAS_bool joker_13202_1 ; // Joker input parameter
  constinArgument_inPreferencesPropertyMap.method_searchKey (temp_0.readProperty_mPrefPropertyName (), var_kind_13200, joker_13202_2, joker_13202_1, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 373)) ;
  switch (var_kind_13200.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_13482 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_13200.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_13251_type = extractPtr_13482->mAssociatedValue0 ;
      GALGAS_bool var_found_13270 = GALGAS_bool (false) ;
      cEnumerator_typeKindList enumerator_13289 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
      bool bool_1 = var_found_13270.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 377)).isValidAndTrue () ;
      if (enumerator_13289.hasCurrentObject () && bool_1) {
        while (enumerator_13289.hasCurrentObject () && bool_1) {
          var_found_13270 = GALGAS_bool (kIsEqual, extractedValue_13251_type.objectCompare (enumerator_13289.current_mType (HERE))) ;
          enumerator_13289.gotoNextObject () ;
          if (enumerator_13289.hasCurrentObject ()) {
            bool_1 = var_found_13270.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 377)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_found_13270.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 380)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_prefsAsDefaultValue temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mPrefPropertyName ().readProperty_location (), GALGAS_string ("the atomic property type is not compatible"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 381)) ;
        }
      }
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const GALGAS_prefsAsDefaultValue temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mPrefPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 384)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const GALGAS_prefsAsDefaultValue temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mPrefPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 386)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const GALGAS_prefsAsDefaultValue temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mPrefPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 388)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const GALGAS_prefsAsDefaultValue temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mPrefPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray12  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 390)) ;
    }
    break ;
  }
  const GALGAS_prefsAsDefaultValue temp_13 = this ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string ("preferences_").add_operation (temp_13.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 392)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsAsDefaultValue enterDefaultValuePrecedence'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_enterDefaultValuePrecedence (const GALGAS_lstring constinArgument_inNode,
                                                                   GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_prefsAsDefaultValue temp_0 = this ;
  const GALGAS_prefsAsDefaultValue temp_1 = this ;
  GALGAS_lstring var_p_14223 = GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 401)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 401)).add_operation (temp_0.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 401)), temp_1.readProperty_mPrefPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 401)) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inNode, var_p_14223 COMMA_SOURCE_FILE ("explicit-default-value.ggs", 402)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateCode (const GALGAS_string constinArgument_inXcodeProjectString,
                           const GALGAS_generationStruct constinArgument_inGeneration,
                           const GALGAS_string constinArgument_inSourceFile,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_outputDirectory_2712 = constinArgument_inSourceFile.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("code-generation.ggs", 62)) ;
  GALGAS_string var_projectName_2782 = constinArgument_inSourceFile.getter_lastPathComponent (SOURCE_FILE ("code-generation.ggs", 63)).getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.ggs", 63)) ;
  GALGAS_string var_fileOutputDirectory_2877 = var_outputDirectory_2712.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 64)).add_operation (var_projectName_2782, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 64)) ;
  GALGAS_stringset var_generatedFileSet_2949 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("code-generation.ggs", 65)) ;
  cEnumerator_fileGenerationList enumerator_2976 (constinArgument_inGeneration.readProperty_mFileGenerationList (), kENUMERATION_UP) ;
  while (enumerator_2976.hasCurrentObject ()) {
    callExtensionMethod_generateCode ((cPtr_abstractFileGeneration *) enumerator_2976.current_mFileGeneration (HERE).ptr (), var_fileOutputDirectory_2877, constinArgument_inGeneration, var_generatedFileSet_2949, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 67)) ;
    enumerator_2976.gotoNextObject () ;
  }
  {
  routine_generateEBManagedObjectContext (constinArgument_inGeneration.readProperty_mEntityListForGeneration (), var_fileOutputDirectory_2877, var_generatedFileSet_2949, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 73)) ;
  }
  {
  routine_generateSelectionControllers (constinArgument_inGeneration.readProperty_mSelectionControllerListForGeneration (), var_fileOutputDirectory_2877, var_generatedFileSet_2949, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 78)) ;
  }
  {
  routine_generateValidationRoutineStubs (var_fileOutputDirectory_2877, constinArgument_inGeneration.readProperty_mValidationStubRoutineListForGeneration (), var_generatedFileSet_2949, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 83)) ;
  }
  {
  routine_generateStandardProperties (var_fileOutputDirectory_2877, constinArgument_inGeneration.readProperty_mPropertyClassList (), constinArgument_inGeneration.readProperty_mTransientPropertyTypeList (), var_generatedFileSet_2949, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 88)) ;
  }
  {
  routine_generateXcodeProject (var_outputDirectory_2712, constinArgument_inXcodeProjectString, var_generatedFileSet_2949, var_projectName_2782, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 94)) ;
  }
  {
  routine_generateTestFile (constinArgument_inXcodeProjectString, var_projectName_2782, constinArgument_inGeneration.readProperty_mMainXibDescriptorList (), var_outputDirectory_2712, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 100)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'standard_properties'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_standard_5F_properties_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_standard_5F_properties_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_standard_5F_properties (
  "",
  0,
  gWrapperAllFiles_standard_5F_properties_0,
  0,
  gWrapperAllDirectories_standard_5F_properties_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties scalarProperty'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_standard_5F_properties_scalarProperty (C_Compiler * /* inCompiler */,
                                                                         const GALGAS_string & in_TYPE,
                                                                         const GALGAS_bool & in_TRANSIENT,
                                                                         const GALGAS_string & in_COMPARISON_5F_METHOD
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//   Scalar property " ;
  result << in_TYPE.stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntypealias EBReadOnlyProperty_" ;
  result << in_TYPE.stringValue () ;
  result << "    = EBObservableProperty <" ;
  result << in_TYPE.stringValue () ;
  result << ">\ntypealias EBTransientProperty_" ;
  result << in_TYPE.stringValue () ;
  result << "   = EBTransientProperty <" ;
  result << in_TYPE.stringValue () ;
  result << ">\n" ;
  const enumGalgasBool test_0 = in_TRANSIENT.operator_not (SOURCE_FILE ("scalar-standard-property.swift.galgasTemplate", 13)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "typealias EBReadWriteProperty_" ;
    result << in_TYPE.stringValue () ;
    result << "   = EBObservableMutableProperty <" ;
    result << in_TYPE.stringValue () ;
    result << ">\ntypealias EBComputedProperty_" ;
    result << in_TYPE.stringValue () ;
    result << "    = EBComputedProperty <" ;
    result << in_TYPE.stringValue () ;
    result << ">\ntypealias EBStoredProperty_" ;
    result << in_TYPE.stringValue () ;
    result << "      = EBStoredProperty <" ;
    result << in_TYPE.stringValue () ;
    result << ">\ntypealias EBPreferencesProperty_" ;
    result << in_TYPE.stringValue () ;
    result << " = EBPreferenceProperty <" ;
    result << in_TYPE.stringValue () ;
    result << ">\ntypealias EBReadWritePropertyController_" ;
    result << in_TYPE.stringValue () ;
    result << " = EBGenericReadWritePropertyController <" ;
    result << in_TYPE.stringValue () ;
    result << ">\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n/* func values_" ;
    result << in_TYPE.stringValue () ;
    result << "_are_ordered (" ;
    columnMarker = result.currentColumn () ;
    result << "_ inLeft : " ;
    result << in_TYPE.stringValue () ;
    result << ",\n        " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "_ inAscending : Bool,\n        " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "_ inRight : " ;
    result << in_TYPE.stringValue () ;
    result << ") -> Bool {\n  let left  = inAscending \? inLeft  : inRight\n  let right = inAscending \? inRight : inLeft\n" ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, in_COMPARISON_5F_METHOD.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      result << "  return left." ;
      result << in_COMPARISON_5F_METHOD.stringValue () ;
      result << " (right) == .orderedAscending\n" ;
    }else if (kBoolFalse == test_1) {
      result << "  return left < right\n" ;
    }
    result << "} */\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n/* @MainActor func compare_" ;
    result << in_TYPE.stringValue () ;
    result << "_properties (" ;
    columnMarker = result.currentColumn () ;
    result << "_ inLeft : EBReadOnlyProperty_" ;
    result << in_TYPE.stringValue () ;
    result << ",\n        " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "_ inAscending : Bool,\n        " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "_ inRight : EBReadOnlyProperty_" ;
    result << in_TYPE.stringValue () ;
    result << ") -> ComparisonResult {\n  let left  = inAscending \? inLeft  : inRight\n  let right = inAscending \? inRight : inLeft\n  switch left.selection {\n  case .empty :\n    switch right.selection {\n    case .empty :\n      return .orderedSame\n    default:\n      return .orderedAscending\n    }\n  case .multiple :\n    switch right.selection {\n    case .empty :\n      return .orderedDescending\n    case .multiple :\n      return .orderedSame\n   case .single (_) :\n      return .orderedAscending\n   }\n case .single (let currentValue) :\n    switch right.selection {\n    case .empty, .multiple :\n      return .orderedDescending\n    case .single (let otherValue) :\n" ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, in_COMPARISON_5F_METHOD.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      result << "      return currentValue." ;
      result << in_COMPARISON_5F_METHOD.stringValue () ;
      result << " (otherValue)\n" ;
    }else if (kBoolFalse == test_2) {
      result << "      if currentValue < otherValue {\n        return .orderedAscending\n      }else if currentValue > otherValue {\n        return .orderedDescending\n      }else{\n        return .orderedSame\n      }\n" ;
    }
    result << "    }\n  }\n} */\n" ;
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_3 = in_TRANSIENT.operator_not (SOURCE_FILE ("scalar-standard-property.swift.galgasTemplate", 80)).boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n/*final class EBReadWritePropertyController_" ;
    result << in_TYPE.stringValue () ;
    result << " : EBObservablePropertyController {\n\n  //····················································································································\n\n  private weak var mObject : EBReadWriteProperty_" ;
    result << in_TYPE.stringValue () ;
    result << "\?\n\n  //····················································································································\n\n  init (observedObject inObject : EBReadWriteProperty_" ;
    result << in_TYPE.stringValue () ;
    result << ", callBack inCallBack : @escaping () -> Void) {\n    self.mObject = inObject\n    super.init (observedObjects : [inObject], callBack : inCallBack)\n  }\n\n  //····················································································································\n\n  func updateModel (withValue inValue : " ;
    result << in_TYPE.stringValue () ;
    result << ") {\n    self.mObject\?.setProp (inValue)\n  }\n\n  //····················································································································\n\n  var value : " ;
    result << in_TYPE.stringValue () ;
    result << "\? {\n    if let s = self.mObject\?.selection {\n      switch s {\n      case .empty, .multiple :\n        return nil\n      case .single (let v) :\n        return v\n      }\n    }else{\n      return nil\n    }\n  }\n\n  //····················································································································\n\n}*/\n" ;
  }else if (kBoolFalse == test_3) {
  }
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties classProperty'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_standard_5F_properties_classProperty (C_Compiler * /* inCompiler */,
                                                                        const GALGAS_string & in_CLASS_5F_NAME,
                                                                        const GALGAS_bool & in_COMPARABLE,
                                                                        const GALGAS_bool & in_TRANSIENT
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;
  const enumGalgasBool test_0 = in_TRANSIENT.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//   Transient property class " ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "\n" ;
  }else if (kBoolFalse == test_0) {
    result << "//   Property class " ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "\n" ;
  }
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  const enumGalgasBool test_1 = in_TRANSIENT.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "typealias EBReadOnlyProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "       = EBObservableProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\ntypealias EBTransientProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "      = EBTransientProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\ntypealias EBReadOnlyPropertyArray_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "  = EBObservableProperty <[" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "]>\ntypealias EBTransientPropertyArray_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << " = EBTransientProperty <[" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "]>\n" ;
  }else if (kBoolFalse == test_1) {
    result << "typealias EBReadOnlyProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "    = EBObservableProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\ntypealias EBTransientProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "   = EBTransientProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\ntypealias EBReadWriteProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "   = EBObservableMutableProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\ntypealias EBComputedProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "    = EBComputedProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\ntypealias EBStoredProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "      = EBStoredProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\ntypealias EBPreferencesProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << " = EBPreferenceProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\ntypealias EBReadWritePropertyController_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << " = EBGenericReadWritePropertyController <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n" ;
  }
  result << "\n" ;
  const enumGalgasBool test_2 = in_COMPARABLE.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nfunc compare_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "_properties (_ left : EBReadOnlyProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ", _ right : EBReadOnlyProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ") -> ComparisonResult {\n  switch left.prop {\n  case .empty :\n    switch right.prop {\n    case .empty :\n      return .orderedSame\n    default:\n      return .orderedAscending\n    }\n  case .multiple :\n    switch right.prop {\n    case .empty :\n      return .OrderedDescending\n    case .multiple :\n      return .OrderedSame\n   case .single (_) :\n      return .OrderedAscending\n   }\n case .single (let currentValue) :\n    switch right.prop {\n    case .empty, .multiple :\n      return .orderedDescending\n    case .single (let otherValue) :\n      if currentValue < otherValue {\n        return .orderedAscending\n      }else if currentValue > otherValue {\n        return .orderedDescending\n      }else{\n        return .orderedSame\n      }\n    }\n  }\n}\n" ;
  }else if (kBoolFalse == test_2) {
  }
  const enumGalgasBool test_3 = in_TRANSIENT.operator_not (SOURCE_FILE ("class-standard-property.swift.galgasTemplate", 72)).boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n/*final class EBReadWritePropertyController_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << " : EBObservablePropertyController {\n\n  //····················································································································\n\n  private weak var mObject : EBReadWriteProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "\?\n\n  //····················································································································\n\n  init (observedObject inObject : EBReadWriteProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ", callBack inCallBack : @escaping () -> Void) {\n    self.mObject = inObject\n    super.init (observedObjects : [inObject], callBack : inCallBack)\n  }\n\n  //····················································································································\n\n  func updateModel (withValue inValue : " ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ") {\n    self.mObject\?.setProp (inValue)\n  }\n\n  //····················································································································\n\n  var value : " ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "\? {\n    if let s = self.mObject\?.selection {\n      switch s {\n      case .empty, .multiple :\n        return nil\n      case .single (let v) :\n        return v\n      }\n    }else{\n      return nil\n    }\n  }\n\n  //····················································································································\n\n}*/\n" ;
  }else if (kBoolFalse == test_3) {
  }
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateStandardProperties'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateStandardProperties (const GALGAS_string constinArgument_inOutputDirectory,
                                         const GALGAS_stringlist constinArgument_inPropertyClassList,
                                         const GALGAS_transientExternTypeList constinArgument_inTransientPropertyExternTypeList,
                                         GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_generateScalarProperty (constinArgument_inOutputDirectory, GALGAS_string ("UInt32"), GALGAS_bool (false), GALGAS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 133)) ;
  }
  {
  routine_generateScalarProperty (constinArgument_inOutputDirectory, GALGAS_string ("Int"), GALGAS_bool (false), GALGAS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 134)) ;
  }
  {
  routine_generateScalarProperty (constinArgument_inOutputDirectory, GALGAS_string ("Bool"), GALGAS_bool (false), GALGAS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 135)) ;
  }
  {
  routine_generateScalarProperty (constinArgument_inOutputDirectory, GALGAS_string ("Double"), GALGAS_bool (false), GALGAS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 136)) ;
  }
  {
  routine_generateScalarProperty (constinArgument_inOutputDirectory, GALGAS_string ("String"), GALGAS_bool (false), GALGAS_string ("localizedStandardCompare"), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 137)) ;
  }
  {
  routine_generateScalarProperty (constinArgument_inOutputDirectory, GALGAS_string ("Data"), GALGAS_bool (false), GALGAS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 138)) ;
  }
  {
  routine_generateScalarProperty (constinArgument_inOutputDirectory, GALGAS_string ("Date"), GALGAS_bool (false), GALGAS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 139)) ;
  }
  {
  routine_generateScalarProperty (constinArgument_inOutputDirectory, GALGAS_string ("BezierPathArray"), GALGAS_bool (false), GALGAS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 140)) ;
  }
  cEnumerator_stringlist enumerator_5798 (constinArgument_inPropertyClassList, kENUMERATION_UP) ;
  while (enumerator_5798.hasCurrentObject ()) {
    {
    routine_generateClassProperty (constinArgument_inOutputDirectory, enumerator_5798.current_mValue (HERE), GALGAS_bool (false), GALGAS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 143)) ;
    }
    enumerator_5798.gotoNextObject () ;
  }
  cEnumerator_transientExternTypeList enumerator_5956 (constinArgument_inTransientPropertyExternTypeList, kENUMERATION_UP) ;
  while (enumerator_5956.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_5956.current_mIsClass (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        routine_generateClassProperty (constinArgument_inOutputDirectory, enumerator_5956.current_mTypeName (HERE), GALGAS_bool (false), GALGAS_bool (true), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 147)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      {
      routine_generateScalarProperty (constinArgument_inOutputDirectory, enumerator_5956.current_mTypeName (HERE), GALGAS_bool (true), GALGAS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 149)) ;
      }
    }
    enumerator_5956.gotoNextObject () ;
  }
  {
  routine_generateClassProperty (constinArgument_inOutputDirectory, GALGAS_string ("NSBezierPath"), GALGAS_bool (false), GALGAS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 152)) ;
  }
  {
  routine_generateClassProperty (constinArgument_inOutputDirectory, GALGAS_string ("NSFont"), GALGAS_bool (false), GALGAS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 153)) ;
  }
  {
  routine_generateClassProperty (constinArgument_inOutputDirectory, GALGAS_string ("NSColor"), GALGAS_bool (false), GALGAS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 154)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateClassProperty'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateClassProperty (const GALGAS_string constinArgument_inOutputDirectory,
                                    const GALGAS_string constinArgument_inClassPropertyTypeName,
                                    const GALGAS_bool constinArgument_inComparable,
                                    const GALGAS_bool constinArgument_inTransient,
                                    GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_contents_6988 = GALGAS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, constinArgument_inClassPropertyTypeName, constinArgument_inComparable, constinArgument_inTransient COMMA_SOURCE_FILE ("code-generation.ggs", 164))) ;
  GALGAS_string var_fileName_7124 = GALGAS_string ("property-").add_operation (constinArgument_inClassPropertyTypeName, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 166)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 166)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_7124  COMMA_SOURCE_FILE ("code-generation.ggs", 167)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_7124, var_contents_6988, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 168)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateScalarProperty'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateScalarProperty (const GALGAS_string constinArgument_inOutputDirectory,
                                     const GALGAS_string constinArgument_inScalarPropertyTypeName,
                                     const GALGAS_bool constinArgument_inTransient,
                                     const GALGAS_string constinArgument_inComparisonMethod,
                                     GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_contents_7772 = GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, constinArgument_inScalarPropertyTypeName, constinArgument_inTransient, constinArgument_inComparisonMethod COMMA_SOURCE_FILE ("code-generation.ggs", 182))) ;
  GALGAS_string var_fileName_7917 = GALGAS_string ("property-").add_operation (constinArgument_inScalarPropertyTypeName, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 184)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 184)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_7917  COMMA_SOURCE_FILE ("code-generation.ggs", 185)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_7917, var_contents_7772, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 186)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProject'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateXcodeProject (const GALGAS_string constinArgument_inOutputDirectory,
                                   const GALGAS_string constinArgument_inXcodeProjectString,
                                   const GALGAS_stringset constinArgument_inGeneratedFileSet,
                                   const GALGAS_string constinArgument_projectName,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inXcodeProjectString.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_generateXcodeProjectInternal (constinArgument_inOutputDirectory, constinArgument_inXcodeProjectString, constinArgument_inGeneratedFileSet, constinArgument_projectName, inCompiler  COMMA_SOURCE_FILE ("xcode-project.ggs", 39)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProjectInternal'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateXcodeProjectInternal (const GALGAS_string constinArgument_inOutputDirectory,
                                           const GALGAS_string constinArgument_inXcodeProjectString,
                                           const GALGAS_stringset constinArgument_inGeneratedFileSet,
                                           const GALGAS_string constinArgument_projectName,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor var_xcodeProject_1614 = GALGAS_XcodeProjectDescriptor::constructor_new (SOURCE_FILE ("xcode-project.ggs", 51)) ;
  GALGAS_string var_SDK_1686 = GALGAS_string ("macosx") ;
  GALGAS_string var_DEPLOYMENT_1714 = GALGAS_string ("10.10") ;
  {
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 93)) ;
  temp_0.addAssign_operation (GALGAS_string ("ALWAYS_SEARCH_USER_PATHS = NO")  COMMA_SOURCE_FILE ("xcode-project.ggs", 56)) ;
  temp_0.addAssign_operation (GALGAS_string ("ARCHS = \"$(ARCHS_STANDARD_64_BIT)\"")  COMMA_SOURCE_FILE ("xcode-project.ggs", 57)) ;
  temp_0.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 58)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO")  COMMA_SOURCE_FILE ("xcode-project.ggs", 59)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 60)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_THREADSAFE_STATICS = NO")  COMMA_SOURCE_FILE ("xcode-project.ggs", 61)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 62)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 63)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 64)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO")  COMMA_SOURCE_FILE ("xcode-project.ggs", 65)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 66)) ;
  temp_0.addAssign_operation (GALGAS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 67)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 68)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 69)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 70)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 71)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 72)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 73)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO")  COMMA_SOURCE_FILE ("xcode-project.ggs", 74)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 75)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_MISSING_PARENTHESES = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 76)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 77)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_PEDANTIC = NO")  COMMA_SOURCE_FILE ("xcode-project.ggs", 78)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_SHADOW = NO")  COMMA_SOURCE_FILE ("xcode-project.ggs", 79)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_SIGN_COMPARE = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 80)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 81)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 82)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 83)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_FUNCTION = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 84)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_LABEL = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 85)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VALUE = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 86)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VARIABLE = YES")  COMMA_SOURCE_FILE ("xcode-project.ggs", 87)) ;
  temp_0.addAssign_operation (GALGAS_string ("HEADER_SEARCH_PATHS = ()")  COMMA_SOURCE_FILE ("xcode-project.ggs", 88)) ;
  temp_0.addAssign_operation (GALGAS_string ("MACOSX_DEPLOYMENT_TARGET = ").add_operation (var_DEPLOYMENT_1714, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 89))  COMMA_SOURCE_FILE ("xcode-project.ggs", 89)) ;
  temp_0.addAssign_operation (GALGAS_string ("SDKROOT = ").add_operation (var_SDK_1686, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 90))  COMMA_SOURCE_FILE ("xcode-project.ggs", 90)) ;
  temp_0.addAssign_operation (GALGAS_string ("COPY_PHASE_STRIP = NO")  COMMA_SOURCE_FILE ("xcode-project.ggs", 91)) ;
  temp_0.addAssign_operation (GALGAS_string ("SWIFT_VERSION = 4.2")  COMMA_SOURCE_FILE ("xcode-project.ggs", 92)) ;
  temp_0.addAssign_operation (GALGAS_string ("LD_RUNPATH_SEARCH_PATHS = \"$(inherited) @executable_path/../Frameworks\"")  COMMA_SOURCE_FILE ("xcode-project.ggs", 93)) ;
  extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_1614, temp_0, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 55)) ;
  }
  GALGAS_stringlist var_swiftFileRefList_3514 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 96)) ;
  GALGAS_stringlist var_resourceFileRefList_3557 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 97)) ;
  GALGAS_stringset var_generatedFileSet_3585 = constinArgument_inGeneratedFileSet ;
  var_generatedFileSet_3585.addAssign_operation (GALGAS_string ("MainMenu.xib")  COMMA_SOURCE_FILE ("xcode-project.ggs", 99)) ;
  GALGAS_stringlist joker_3783 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 104)) ;
  GALGAS_stringlist joker_3801 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 105)) ;
  GALGAS_stringlist joker_3820 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 106)) ;
  GALGAS_stringlist joker_3883 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 108)) ;
  GALGAS_string var_groupRef_3958 ;
  {
  extensionSetter_addGroupWithFiles (var_xcodeProject_1614, GALGAS_string ("Sources"), constinArgument_projectName, var_generatedFileSet_3585, joker_3783, joker_3801, joker_3820, var_swiftFileRefList_3514, joker_3883, var_resourceFileRefList_3557, var_groupRef_3958, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 100)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1614, var_groupRef_3958, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 112)) ;
  }
  GALGAS_stringlist joker_4162 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 117)) ;
  GALGAS_stringlist joker_4180 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 118)) ;
  GALGAS_stringlist joker_4199 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 119)) ;
  GALGAS_stringlist joker_4262 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 121)) ;
  {
  GALGAS_stringset temp_1 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("xcode-project.ggs", 116)) ;
  temp_1.addAssign_operation (GALGAS_string ("Info.plist")  COMMA_SOURCE_FILE ("xcode-project.ggs", 116)) ;
  extensionSetter_addGroupWithFiles (var_xcodeProject_1614, GALGAS_string ("Resources"), constinArgument_projectName, temp_1, joker_4162, joker_4180, joker_4199, var_swiftFileRefList_3514, joker_4262, var_resourceFileRefList_3557, var_groupRef_3958, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 113)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1614, var_groupRef_3958, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 125)) ;
  }
  {
  GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 135)) ;
  temp_2.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("xcode-project.ggs", 134)) ;
  temp_2.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("xcode-project.ggs", 135)) ;
  GALGAS_string joker_4889 ; // Joker input parameter
  extensionSetter_addAppTarget (var_xcodeProject_1614, constinArgument_projectName, constinArgument_projectName, var_swiftFileRefList_3514, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 131)), var_resourceFileRefList_3557, temp_2, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 137)), GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.ggs", 138)), constinArgument_projectName.add_operation (GALGAS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 139)), joker_4889, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 127)) ;
  }
  GALGAS_string var_sourceDir_4932 = constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 143)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 143)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 143)) ;
  extensionMethod_generateAtPath (var_xcodeProject_1614, constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 145)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 145)).add_operation (GALGAS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 145)), var_sourceDir_4932.add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 146)).add_operation (GALGAS_string (".xcodeproj.txt"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 146)), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 144)) ;
  GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("xcode-project.ggs", 153)) ;
  temp_3.addAssign_operation (constinArgument_projectName  COMMA_SOURCE_FILE ("xcode-project.ggs", 153)) ;
  GALGAS_string var_s_5186 = GALGAS_string (filewrapperTemplate_additionalXcodeFiles_info_5F_plist (inCompiler, constinArgument_projectName, constinArgument_inXcodeProjectString, GALGAS_string ("1.0.0"), temp_3 COMMA_SOURCE_FILE ("xcode-project.ggs", 149))) ;
  {
  GALGAS_string::class_method_generateFile (var_sourceDir_4932, GALGAS_string ("Info.plist"), var_s_5186, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 155)) ;
  }
  var_s_5186 = GALGAS_string (filewrapperTemplate_additionalXcodeFiles_main_5F_xib (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.ggs", 160))) ;
  {
  GALGAS_string::class_method_generateFile (var_sourceDir_4932, GALGAS_string ("MainMenu.xib"), var_s_5186, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 163)) ;
  }
  var_s_5186 = GALGAS_string (filewrapperTemplate_additionalXcodeFiles_build_5F_command (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.ggs", 168))) ;
  GALGAS_bool joker_5685 ; // Joker input parameter
  var_s_5186.method_writeToExecutableFileWhenDifferentContents (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 170)), joker_5685, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 169)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'additionalXcodeFiles'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_additionalXcodeFiles_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_additionalXcodeFiles_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_additionalXcodeFiles (
  "",
  0,
  gWrapperAllFiles_additionalXcodeFiles_0,
  0,
  gWrapperAllDirectories_additionalXcodeFiles_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles main_xib'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_additionalXcodeFiles_main_5F_xib (C_Compiler * /* inCompiler */,
                                                                    const GALGAS_string & in_PROJECT_5F_NAME
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"\?>\n<document type=\"com.apple.InterfaceBuilder3.Cocoa.XIB\" version=\"3.0\" toolsVersion=\"7528.3\" systemVersion=\"14C1514\" targetRuntime=\"MacOSX.Cocoa\" propertyAccessControl=\"none\">\n    <dependencies>\n        <deployment version=\"1090\" identifier=\"macosx\"/>\n        <plugIn identifier=\"com.apple.InterfaceBuilder.CocoaPlugin\" version=\"7528.3\"/>\n    </dependencies>\n    <objects>\n        <customObject id=\"-2\" userLabel=\"File's Owner\" customClass=\"NSApplication\"/>\n        <customObject id=\"-1\" userLabel=\"First Responder\" customClass=\"FirstResponder\"/>\n        <customObject id=\"-3\" userLabel=\"Application\" customClass=\"NSObject\"/>\n        <menu title=\"AMainMenu\" systemMenu=\"main\" id=\"29\">\n            <items>\n                <menuItem title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" id=\"56\">\n                    <menu key=\"submenu\" title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" systemMenu=\"apple\" id=\"57\">\n                        <items>\n                            <menuItem title=\"About " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" id=\"58\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <connections>\n                                    <action selector=\"orderFrontStandardAboutPanel:\" target=\"-2\" id=\"142\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"236\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Preferences…\" keyEquivalent=\",\" id=\"129\"/>\n                            <menuItem isSeparatorItem=\"YES\" id=\"143\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Services\" id=\"131\">\n                                <menu key=\"submenu\" title=\"Services\" systemMenu=\"services\" id=\"130\"/>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"144\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Hide " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" keyEquivalent=\"h\" id=\"134\">\n                                <connections>\n                                    <action selector=\"hide:\" target=\"-1\" id=\"367\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Hide Others\" keyEquivalent=\"h\" id=\"145\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"hideOtherApplications:\" target=\"-1\" id=\"368\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Show All\" id=\"150\">\n                                <connections>\n                                    <action selector=\"unhideAllApplications:\" target=\"-1\" id=\"370\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"149\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Quit " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" keyEquivalent=\"q\" id=\"136\">\n                                <connections>\n                                    <action selector=\"terminate:\" target=\"-3\" id=\"449\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"File\" id=\"83\">\n                    <menu key=\"submenu\" title=\"File\" id=\"81\">\n                        <items>\n                            <menuItem title=\"New\" keyEquivalent=\"n\" id=\"82\">\n                                <connections>\n                                    <action selector=\"newDocument:\" target=\"-1\" id=\"373\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Open…\" keyEquivalent=\"o\" id=\"72\">\n                                <connections>\n                                    <action selector=\"openDocument:\" target=\"-1\" id=\"374\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Open Recent\" id=\"124\">\n                                <menu key=\"submenu\" title=\"Open Recent\" systemMenu=\"recentDocuments\" id=\"125\">\n                                    <items>\n                                        <menuItem title=\"Clear Menu\" id=\"126\">\n                                            <connections>\n                                                <action selector=\"clearRecentDocuments:\" target=\"-1\" id=\"127\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"79\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Close\" keyEquivalent=\"w\" id=\"73\">\n                                <connections>\n                                    <action selector=\"performClose:\" target=\"-1\" id=\"193\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Save…\" keyEquivalent=\"s\" id=\"75\">\n                                <connections>\n                                    <action selector=\"saveDocument:\" target=\"-1\" id=\"362\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Revert to Saved\" id=\"112\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <connections>\n                                    <action selector=\"revertDocumentToSaved:\" target=\"-1\" id=\"364\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"74\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Page Setup...\" keyEquivalent=\"P\" id=\"77\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"runPageLayout:\" target=\"-1\" id=\"87\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Print…\" keyEquivalent=\"p\" id=\"78\">\n                                <connections>\n                                    <action selector=\"print:\" target=\"-1\" id=\"86\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Edit\" id=\"217\">\n                    <menu key=\"submenu\" title=\"Edit\" id=\"205\">\n                        <items>\n                            <menuItem title=\"Undo\" keyEquivalent=\"z\" id=\"207\">\n                                <connections>\n                                    <action selector=\"undo:\" target=\"-1\" id=\"223\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Redo\" keyEquivalent=\"Z\" id=\"215\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"redo:\" target=\"-1\" id=\"231\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"206\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Cut\" keyEquivalent=\"x\" id=\"199\">\n                                <connections>\n                                    <action selector=\"cut:\" target=\"-1\" id=\"228\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Copy\" keyEquivalent=\"c\" id=\"197\">\n                                <connections>\n                                    <action selector=\"copy:\" target=\"-1\" id=\"224\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Paste\" keyEquivalent=\"v\" id=\"203\">\n                                <connections>\n                                    <action selector=\"paste:\" target=\"-1\" id=\"226\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Paste and Match Style\" keyEquivalent=\"V\" id=\"485\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"pasteAsPlainText:\" target=\"-1\" id=\"486\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Delete\" id=\"202\">\n                                <connections>\n                                    <action selector=\"delete:\" target=\"-1\" id=\"235\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Select All\" keyEquivalent=\"a\" id=\"198\">\n                                <connections>\n                                    <action selector=\"selectAll:\" target=\"-1\" id=\"232\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"214\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Find\" id=\"218\">\n                                <menu key=\"submenu\" title=\"Find\" id=\"220\">\n                                    <items>\n                                        <menuItem title=\"Find…\" tag=\"1\" keyEquivalent=\"f\" id=\"209\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"241\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find and Replace…\" tag=\"12\" keyEquivalent=\"f\" id=\"534\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"535\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find Next\" tag=\"2\" keyEquivalent=\"g\" id=\"208\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"487\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find Previous\" tag=\"3\" keyEquivalent=\"G\" id=\"213\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"488\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Use Selection for Find\" tag=\"7\" keyEquivalent=\"e\" id=\"221\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"489\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Jump to Selection\" keyEquivalent=\"j\" id=\"210\">\n                                            <connections>\n                                                <action selector=\"centerSelectionInVisibleArea:\" target=\"-1\" id=\"245\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Spelling and Grammar\" id=\"216\">\n                                <menu key=\"submenu\" title=\"Spelling and Grammar\" id=\"200\">\n                                    <items>\n                                        <menuItem title=\"Show Spelling and Grammar\" keyEquivalent=\":\" id=\"204\">\n                                            <connections>\n                                                <action selector=\"showGuessPanel:\" target=\"-1\" id=\"230\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Check Document Now\" keyEquivalent=\";\" id=\"201\">\n                                            <connections>\n                                                <action selector=\"checkSpelling:\" target=\"-1\" id=\"225\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"453\"/>\n                                        <menuItem title=\"Check Spelling While Typing\" id=\"219\">\n                                            <connections>\n                                                <action selector=\"toggleContinuousSpellChecking:\" target=\"-1\" id=\"222\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Check Grammar With Spelling\" id=\"346\">\n                                            <connections>\n                                                <action selector=\"toggleGrammarChecking:\" target=\"-1\" id=\"347\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Correct Spelling Automatically\" id=\"454\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticSpellingCorrection:\" target=\"-1\" id=\"456\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Substitutions\" id=\"348\">\n                                <menu key=\"submenu\" title=\"Substitutions\" id=\"349\">\n                                    <items>\n                                        <menuItem title=\"Show Substitutions\" id=\"457\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"orderFrontSubstitutionsPanel:\" target=\"-1\" id=\"458\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"459\"/>\n                                        <menuItem title=\"Smart Copy/Paste\" tag=\"1\" keyEquivalent=\"f\" id=\"350\">\n                                            <connections>\n                                                <action selector=\"toggleSmartInsertDelete:\" target=\"-1\" id=\"355\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Quotes\" tag=\"2\" keyEquivalent=\"g\" id=\"351\">\n                                            <connections>\n                                                <action selector=\"toggleAutomaticQuoteSubstitution:\" target=\"-1\" id=\"356\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Dashes\" id=\"460\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticDashSubstitution:\" target=\"-1\" id=\"461\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Links\" tag=\"3\" keyEquivalent=\"G\" id=\"354\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticLinkDetection:\" target=\"-1\" id=\"357\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Text Replacement\" id=\"462\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticTextReplacement:\" target=\"-1\" id=\"463\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Transformations\" id=\"450\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Transformations\" id=\"451\">\n                                    <items>\n                                        <menuItem title=\"Make Upper Case\" id=\"452\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"uppercaseWord:\" target=\"-1\" id=\"464\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Make Lower Case\" id=\"465\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"lowercaseWord:\" target=\"-1\" id=\"468\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Capitalize\" id=\"466\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"capitalizeWord:\" target=\"-1\" id=\"467\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Speech\" id=\"211\">\n                                <menu key=\"submenu\" title=\"Speech\" id=\"212\">\n                                    <items>\n                                        <menuItem title=\"Start Speaking\" id=\"196\">\n                                            <connections>\n                                                <action selector=\"startSpeaking:\" target=\"-1\" id=\"233\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Stop Speaking\" id=\"195\">\n                                            <connections>\n                                                <action selector=\"stopSpeaking:\" target=\"-1\" id=\"227\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Format\" id=\"375\">\n                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n                    <menu key=\"submenu\" title=\"Format\" id=\"376\">\n                        <items>\n                            <menuItem title=\"Font\" id=\"377\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Font\" systemMenu=\"font\" id=\"388\">\n                                    <items>\n                                        <menuItem title=\"Show Fonts\" keyEquivalent=\"t\" id=\"389\">\n                                            <connections>\n                                                <action selector=\"orderFrontFontPanel:\" target=\"420\" id=\"424\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Bold\" tag=\"2\" keyEquivalent=\"b\" id=\"390\">\n                                            <connections>\n                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"421\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Italic\" tag=\"1\" keyEquivalent=\"i\" id=\"391\">\n                                            <connections>\n                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"422\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Underline\" keyEquivalent=\"u\" id=\"392\">\n                                            <connections>\n                                                <action selector=\"underline:\" target=\"-1\" id=\"432\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"393\"/>\n                                        <menuItem title=\"Bigger\" tag=\"3\" keyEquivalent=\"+\" id=\"394\">\n                                            <connections>\n                                                <action selector=\"modifyFont:\" target=\"420\" id=\"425\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smaller\" tag=\"4\" keyEquivalent=\"-\" id=\"395\">\n                                            <connections>\n                                                <action selector=\"modifyFont:\" target=\"420\" id=\"423\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"396\"/>\n                                        <menuItem title=\"Kern\" id=\"397\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Kern\" id=\"415\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"416\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useStandardKerning:\" target=\"-1\" id=\"438\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use None\" id=\"417\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"turnOffKerning:\" target=\"-1\" id=\"441\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Tighten\" id=\"418\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"tightenKerning:\" target=\"-1\" id=\"431\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Loosen\" id=\"419\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"loosenKerning:\" target=\"-1\" id=\"435\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem title=\"Ligature\" id=\"398\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Ligature\" id=\"411\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"412\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useStandardLigatures:\" target=\"-1\" id=\"439\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use None\" id=\"413\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"turnOffLigatures:\" target=\"-1\" id=\"440\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use All\" id=\"414\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useAllLigatures:\" target=\"-1\" id=\"434\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem title=\"Baseline\" id=\"399\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Baseline\" id=\"405\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"406\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"unscript:\" target=\"-1\" id=\"437\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Superscript\" id=\"407\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"superscript:\" target=\"-1\" id=\"430\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Subscript\" id=\"408\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"subscript:\" target=\"-1\" id=\"429\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Raise\" id=\"409\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"raiseBaseline:\" target=\"-1\" id=\"426\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Lower\" id=\"410\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"lowerBaseline:\" target=\"-1\" id=\"427\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"400\"/>\n                                        <menuItem title=\"Show Colors\" keyEquivalent=\"C\" id=\"401\">\n                                            <connections>\n                                                <action selector=\"orderFrontColorPanel:\" target=\"-1\" id=\"433\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"402\"/>\n                                        <menuItem title=\"Copy Style\" keyEquivalent=\"c\" id=\"403\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"copyFont:\" target=\"-1\" id=\"428\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Paste Style\" keyEquivalent=\"v\" id=\"404\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"pasteFont:\" target=\"-1\" id=\"436\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Text\" id=\"496\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Text\" id=\"497\">\n                                    <items>\n                                        <menuItem title=\"Align Left\" keyEquivalent=\"{\" id=\"498\">\n                                            <connections>\n                                                <action selector=\"alignLeft:\" target=\"-1\" id=\"524\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Center\" keyEquivalent=\"|\" id=\"499\">\n                                            <connections>\n                                                <action selector=\"alignCenter:\" target=\"-1\" id=\"518\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Justify\" id=\"500\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"alignJustified:\" target=\"-1\" id=\"523\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Align Right\" keyEquivalent=\"}\" id=\"501\">\n                                            <connections>\n                                                <action selector=\"alignRight:\" target=\"-1\" id=\"521\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"502\"/>\n                                        <menuItem title=\"Writing Direction\" id=\"503\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Writing Direction\" id=\"508\">\n                                                <items>\n                                                    <menuItem title=\"Paragraph\" enabled=\"NO\" id=\"509\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                    </menuItem>\n                                                    <menuItem id=\"510\">\n                                                        <string key=\"title\"> Default</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionNatural:\" target=\"-1\" id=\"525\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"511\">\n                                                        <string key=\"title\"> Left to Right</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionLeftToRight:\" target=\"-1\" id=\"526\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"512\">\n                                                        <string key=\"title\"> Right to Left</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionRightToLeft:\" target=\"-1\" id=\"527\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem isSeparatorItem=\"YES\" id=\"513\"/>\n                                                    <menuItem title=\"Selection\" enabled=\"NO\" id=\"514\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                    </menuItem>\n                                                    <menuItem id=\"515\">\n                                                        <string key=\"title\"> Default</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionNatural:\" target=\"-1\" id=\"528\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"516\">\n                                                        <string key=\"title\"> Left to Right</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionLeftToRight:\" target=\"-1\" id=\"529\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"517\">\n                                                        <string key=\"title\"> Right to Left</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionRightToLeft:\" target=\"-1\" id=\"530\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"504\"/>\n                                        <menuItem title=\"Show Ruler\" id=\"505\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleRuler:\" target=\"-1\" id=\"520\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Copy Ruler\" keyEquivalent=\"c\" id=\"506\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"copyRuler:\" target=\"-1\" id=\"522\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Paste Ruler\" keyEquivalent=\"v\" id=\"507\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"pasteRuler:\" target=\"-1\" id=\"519\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"View\" id=\"295\">\n                    <menu key=\"submenu\" title=\"View\" id=\"296\">\n                        <items>\n                            <menuItem title=\"Show Toolbar\" keyEquivalent=\"t\" id=\"297\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"toggleToolbarShown:\" target=\"-1\" id=\"366\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Customize Toolbar…\" id=\"298\">\n                                <connections>\n                                    <action selector=\"runToolbarCustomizationPalette:\" target=\"-1\" id=\"365\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Window\" id=\"19\">\n                    <menu key=\"submenu\" title=\"Window\" systemMenu=\"window\" id=\"24\">\n                        <items>\n                            <menuItem title=\"Minimize\" keyEquivalent=\"m\" id=\"23\">\n                                <connections>\n                                    <action selector=\"performMiniaturize:\" target=\"-1\" id=\"37\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Zoom\" id=\"239\">\n                                <connections>\n                                    <action selector=\"performZoom:\" target=\"-1\" id=\"240\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"92\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Bring All to Front\" id=\"5\">\n                                <connections>\n                                    <action selector=\"arrangeInFront:\" target=\"-1\" id=\"39\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Help\" id=\"490\">\n                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n                    <menu key=\"submenu\" title=\"Help\" systemMenu=\"help\" id=\"491\">\n                        <items>\n                            <menuItem title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << " Help\" keyEquivalent=\"\?\" id=\"492\">\n                                <connections>\n                                    <action selector=\"showHelp:\" target=\"-1\" id=\"493\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n            </items>\n        </menu>\n        <window identifier=\"PrefWindow\" title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" allowsToolTipsWhenApplicationIsInactive=\"NO\" autorecalculatesKeyViewLoop=\"NO\" releasedWhenClosed=\"NO\" animationBehavior=\"default\" id=\"371\">\n            <windowStyleMask key=\"styleMask\" titled=\"YES\"/>\n            <windowPositionMask key=\"initialPositionMask\" leftStrut=\"YES\" rightStrut=\"YES\" topStrut=\"YES\" bottomStrut=\"YES\"/>\n            <rect key=\"contentRect\" x=\"335\" y=\"390\" width=\"615\" height=\"409\"/>\n            <rect key=\"screenRect\" x=\"0.0\" y=\"0.0\" width=\"2560\" height=\"1418\"/>\n            <view key=\"contentView\" id=\"372\">\n                <rect key=\"frame\" x=\"0.0\" y=\"0.0\" width=\"615\" height=\"409\"/>\n                <autoresizingMask key=\"autoresizingMask\"/>\n            </view>\n        </window>\n        <customObject id=\"536\" userLabel=\"Prefs\" customClass=\"Preferences\">\n            <connections>\n                <outlet property=\"window\" destination=\"371\" id=\"MyW-LM-hi6\"/>\n            </connections>\n        </customObject>\n        <customObject id=\"420\" customClass=\"NSFontManager\"/>\n    </objects>\n</document>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles info_plist'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_additionalXcodeFiles_info_5F_plist (C_Compiler * /* inCompiler */,
                                                                      const GALGAS_string & in_PROJECT_5F_NAME,
                                                                      const GALGAS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                      const GALGAS_string & in_VERSION_5F_STRING,
                                                                      const GALGAS_stringset & in_HANDLED_5F_EXTENSION_5F_SET
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n<plist version=\"1.0\">\n<dict>\n <key>CFBundleDevelopmentRegion</key>\n <string>English</string>\n <key>CFBundleExecutable</key>\n <string>${EXECUTABLE_NAME}</string>\n <key>CFBundleIconFile</key>\n <string>application_icns</string>\n <key>CFBundleIdentifier</key>\n <string>" ;
  result << in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</string>\n <key>CFBundleInfoDictionaryVersion</key>\n <string>6.0</string>\n <key>CFBundleName</key>\n <string>${PRODUCT_NAME}</string>\n <key>CFBundlePackageType</key>\n <string>APPL</string>\n <key>CFBundleSignature</key>\n <string>\?\?\?\?</string>\n <key>LSMinimumSystemVersion</key>\n <string>10.9</string>\n <key>CFBundleShortVersionString</key>\n <string>" ;
  result << in_VERSION_5F_STRING.stringValue () ;
  result << "</string>\n <key>NSMainNibFile</key>\n <string>MainMenu</string>\n <key>NSPrincipalClass</key>\n <string>EBApplication</string>\n <key>CFBundleDocumentTypes</key>\n <array>\n" ;
  GALGAS_uint index_1017_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1017 (in_HANDLED_5F_EXTENSION_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1017.hasCurrentObject ()) {
      result << "  <dict>\n   <key>CFBundleTypeIconFile</key>\n   <string>" ;
      result << enumerator_1017.current_key (HERE).stringValue () ;
      result << "_icns</string>\n   <key>CFBundleTypeExtensions</key>\n   <array>\n    <string>" ;
      result << enumerator_1017.current_key (HERE).stringValue () ;
      result << "</string>\n   </array>\n   <key>CFBundleTypeName</key>\n   <string>" ;
      result << in_PROJECT_5F_NAME.stringValue () ;
      result << " Source</string>\n   <key>CFBundleTypeOSTypes</key>\n   <array>\n    <string>TEXT</string>\n   </array>\n   <key>CFBundleTypeRole</key>\n   <string>Editor</string>\n   <key>LSTypeIsPackage</key>\n   <false/>\n   <key>NSDocumentClass</key>\n   <string>OC_GGS_Document</string>\n  </dict>\n" ;
      index_1017_.increment () ;
      enumerator_1017.gotoNextObject () ;
    }
  }
  result << "\n </array>\n</dict>\n</plist>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles build_command'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_additionalXcodeFiles_build_5F_command (C_Compiler * /* inCompiler */,
                                                                         const GALGAS_string & in_PROJECT_5F_NAME
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n# -*- coding: UTF-8 -*-\n\n#------------------------------------------------------------------------------*\n\nimport subprocess, os, sys, atexit\n\n#------------------------------------------------------------------------------*\n\ndef cleanup () :\n  if buildProcess.poll () == None :\n    buildProcess.kill ()\n    print 'Build process killed'\n\n#------------------------------------------------------------------------------*\n\n#------------------- Register a function for killing build subprocess\natexit.register (cleanup)\n#------------------- Get compiler as first argument\ncompiler = \"eb\" # Default compiler\nif len (sys.argv) > 1 :\n  compiler = sys.argv [1]\n#------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#------------------- Build\nprint \"+ \" + compiler + \" " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ".eb\"\nbuildProcess = subprocess.Popen ([compiler, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ".eb\"])\nbuildProcess.wait ()\n#------------------- Xcode build\nif buildProcess.returncode == 0 :\n  buildProcess = subprocess.Popen ([\"/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild\"])\n  buildProcess.wait ()\n#------------------- Result\nif buildProcess.returncode != 0 :\n  sys.exit (buildProcess.returncode)\n\n#------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper (
  "",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0,
  0,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (C_Compiler * /* inCompiler */,
                                                                               const GALGAS_string & in_PROJECT_5F_REF,
                                                                               const GALGAS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                               const GALGAS_XCodeGroupList & in_GROUPS,
                                                                               const GALGAS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                               const GALGAS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                               const GALGAS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                               const GALGAS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                               const GALGAS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                               const GALGAS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                               const GALGAS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "// !$*UTF8*$!\n{\n  archiveVersion = 1;\n  classes = {\n  };\n  objectVersion = 42;\n  objects = {\n\n  /*------------------------------------------------------------------ PBXBuildFile */\n" ;
  GALGAS_uint index_250_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_BuildFileList enumerator_250 (in_BUILD_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_250.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_250.current_mBuildReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_250.current_mFileName (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXBuildFile;\n    fileRef = " ;
      result << enumerator_250.current_mFileReference (HERE).stringValue () ;
      result << " ;\n    settings = {ATTRIBUTES = (); };\n  };\n\n" ;
      index_250_.increment () ;
      enumerator_250.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFileReference */\n" ;
  GALGAS_uint index_555_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_555 (in_CPP_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_555.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_555.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_555.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.cpp;\n    name = " ;
      result << enumerator_555.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_555.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_555_.increment () ;
      enumerator_555.gotoNextObject () ;
    }
  }
  GALGAS_uint index_902_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_902 (in_M_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_902.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_902.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_902.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.obj;\n    name = " ;
      result << enumerator_902.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_902.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_902_.increment () ;
      enumerator_902.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1248_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1248 (in_MM_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1248.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1248.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1248.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.objcpp;\n    name = " ;
      result << enumerator_1248.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_1248.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_1248_.increment () ;
      enumerator_1248.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1602_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1602 (in_SWIFT_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1602.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1602.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1602.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.swift;\n    name = " ;
      result << enumerator_1602.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_1602.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_1602_.increment () ;
      enumerator_1602.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1952_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1952 (in_HEADER_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1952.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1952.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1952.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.h;\n    name = " ;
      result << enumerator_1952.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_1952.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_1952_.increment () ;
      enumerator_1952.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2303_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_2303 (in_FRAMEWORK_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2303.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2303.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_2303.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXFileReference;\n    lastKnownFileType = wrapper.framework;\n    name = " ;
      result << enumerator_2303.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_2303.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_2303_.increment () ;
      enumerator_2303.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2836_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_2836 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2836.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2836.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = " ;
      result << enumerator_2836.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue () ;
      result << ";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n" ;
      index_2836_.increment () ;
      enumerator_2836.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3427_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_3427 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3427.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3427.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = " ;
      result << enumerator_3427.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue () ;
      result << ";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n" ;
      index_3427_.increment () ;
      enumerator_3427.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3736_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3736 (in_PLIST_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3736.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3736.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = text.plist;\n    name = " ;
      result << enumerator_3736.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_3736.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_3736_.increment () ;
      enumerator_3736.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4060_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4060 (in_XIB_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4060.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4060.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = wrapper.xib;\n    name = " ;
      result << enumerator_4060.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_4060.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_4060_.increment () ;
      enumerator_4060.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4386_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4386 (in_TIFF_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4386.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4386.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.tiff;\n    name = " ;
      result << enumerator_4386.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_4386.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_4386_.increment () ;
      enumerator_4386.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4685_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4685 (in_ICNS_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4685.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4685.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.icns;\n    name = " ;
      result << enumerator_4685.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_4685.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_4685_.increment () ;
      enumerator_4685.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n\n" ;
  GALGAS_uint index_5296_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_5296 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5296.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_5296.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  " ;
        result << enumerator_5296.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n" ;
        GALGAS_uint index_5536_ (0) ;
        if (enumerator_5296.current_mFrameworksFileRefList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_5536 (enumerator_5296.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
          while (enumerator_5536.hasCurrentObject ()) {
            result << "      " ;
            result << enumerator_5536.current_mValue (HERE).stringValue () ;
            result << ",\n" ;
            index_5536_.increment () ;
            enumerator_5536.gotoNextObject () ;
          }
        }
        result << "    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_5296_.increment () ;
      enumerator_5296.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5989_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_5989 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5989.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5989.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n" ;
      GALGAS_uint index_6173_ (0) ;
      if (enumerator_5989.current_mFrameworksFileRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6173 (enumerator_5989.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_6173.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6173.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_6173_.increment () ;
          enumerator_6173.gotoNextObject () ;
        }
      }
      result << "    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n" ;
      index_5989_.increment () ;
      enumerator_5989.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXGroup section */\n" ;
  GALGAS_uint index_6449_ (0) ;
  if (in_GROUPS.isValid ()) {
    cEnumerator_XCodeGroupList enumerator_6449 (in_GROUPS, kENUMERATION_UP) ;
    while (enumerator_6449.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_6449.current_mGroupReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_6449.current_mGroupName (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXGroup;\n    children = (\n" ;
      GALGAS_uint index_6576_ (0) ;
      if (enumerator_6449.current_mChildrenRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6576 (enumerator_6449.current_mChildrenRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_6576.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6576.current_mValue (HERE).stringValue () ;
          result << ", \n" ;
          index_6576_.increment () ;
          enumerator_6576.gotoNextObject () ;
        }
      }
      result << "    );\n    name = " ;
      result << enumerator_6449.current_mGroupName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_6449.current_mGroupPath (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n" ;
      index_6449_.increment () ;
      enumerator_6449.gotoNextObject () ;
    }
  }
  result << "\n  " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << " /* Main Group */ = {\n    isa = PBXGroup;\n    children = (\n" ;
  GALGAS_uint index_6888_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    cEnumerator_stringlist enumerator_6888 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS, kENUMERATION_UP) ;
    while (enumerator_6888.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_6888.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_6888_.increment () ;
      enumerator_6888.gotoNextObject () ;
    }
  }
  result << "    );\n    sourceTree = \"<group>\";\n  };\n\n  /*------------------------------------------------------------------ PBXNativeTarget */\n" ;
  GALGAS_uint index_7302_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_7302 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7302.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_7302.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_7302.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = " ;
      result << enumerator_7302.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n    buildPhases = (\n      " ;
      result << enumerator_7302.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " ,\n" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_7302.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "      " ;
        result << enumerator_7302.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " , /* Frameworks */\n" ;
      }else if (kBoolFalse == test_1) {
      }
      result << "    );\n    buildRules = (\n    );\n    dependencies = (\n    );\n    name = " ;
      result << enumerator_7302.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue () ;
      result << ";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = " ;
      result << enumerator_7302.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue () ;
      result << ";\n    productReference = " ;
      result << enumerator_7302.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n    productType = \"com.apple.product-type.tool\";\n  };\n \n" ;
      index_7302_.increment () ;
      enumerator_7302.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8235_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8235 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8235.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_8235.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_8235.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = " ;
      result << enumerator_8235.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n    buildPhases = (\n      " ;
      result << enumerator_8235.current_mResourceBuildRef (HERE).stringValue () ;
      result << " , /* Resources */\n      " ;
      result << enumerator_8235.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Frameworks */\n      " ;
      result << enumerator_8235.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Sources */\n    );\n    buildRules = (\n    );\n    dependencies = (\n" ;
      GALGAS_uint index_8624_ (0) ;
      if (enumerator_8235.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_8624 (enumerator_8235.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_8624.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_8624.current_mValue_30_ (HERE).stringValue () ;
          result << " ,\n" ;
          index_8624_.increment () ;
          enumerator_8624.gotoNextObject () ;
        }
      }
      result << "    );\n    name = " ;
      result << enumerator_8235.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue () ;
      result << ";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = " ;
      result << enumerator_8235.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue () ;
      result << ";\n    productReference = " ;
      result << enumerator_8235.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n    productType = \"com.apple.product-type.application\";\n  };\n\n" ;
      index_8235_.increment () ;
      enumerator_8235.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXProject */\n  " ;
  result << in_PROJECT_5F_REF.stringValue () ;
  result << " /* Project object */ = {\n   isa = PBXProject;\n   attributes = {\n     LastSwiftUpdateCheck = 0700;\n     LastUpgradeCheck = 0700;\n   };\n   buildConfigurationList = " ;
  result << in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Build configuration list for PBXProject */;\n   compatibilityVersion = \"Xcode 2.4\";\n   hasScannedForEncodings = 1;\n   mainGroup = " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << ";\n   projectDirPath = \"\";\n   projectRoot = \"\";\n   targets = (\n" ;
  GALGAS_uint index_9696_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_9696 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9696.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_9696.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_9696_.increment () ;
      enumerator_9696.gotoNextObject () ;
    }
  }
  GALGAS_uint index_10050_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10050 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10050.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_10050.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_10050_.increment () ;
      enumerator_10050.gotoNextObject () ;
    }
  }
  result << "   );\n  };\n\n  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n\n" ;
  GALGAS_uint index_10517_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10517 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10517.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_10517.current_mResourceBuildRef (HERE).stringValue () ;
      result << " /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n" ;
      GALGAS_uint index_10700_ (0) ;
      if (enumerator_10517.current_mResourceFileBuildRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_10700 (enumerator_10517.current_mResourceFileBuildRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_10700.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_10700.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_10700_.increment () ;
          enumerator_10700.gotoNextObject () ;
        }
      }
      result << "    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n" ;
      index_10517_.increment () ;
      enumerator_10517.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n" ;
  GALGAS_uint index_11150_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_11150 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11150.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_11150.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n" ;
      GALGAS_uint index_11317_ (0) ;
      if (enumerator_11150.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11317 (enumerator_11150.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_11317.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_11317.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_11317_.increment () ;
          enumerator_11317.gotoNextObject () ;
        }
      }
      result << "      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n" ;
      index_11150_.increment () ;
      enumerator_11150.gotoNextObject () ;
    }
  }
  GALGAS_uint index_11738_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_11738 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11738.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_11738.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n" ;
      GALGAS_uint index_11905_ (0) ;
      if (enumerator_11738.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11905 (enumerator_11738.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_11905.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_11905.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_11905_.increment () ;
          enumerator_11905.gotoNextObject () ;
        }
      }
      result << "      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n" ;
      index_11738_.increment () ;
      enumerator_11738.gotoNextObject () ;
    }
  }
  result << "\n\n  /*------------------------------------------------------------------ PBXTargetDependency */\n \n" ;
  GALGAS_uint index_12427_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_12427 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12427.hasCurrentObject ()) {
      GALGAS_uint index_12475_ (0) ;
      if (enumerator_12427.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_12475 (enumerator_12427.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_12475.hasCurrentObject ()) {
          result << "  " ;
          result << enumerator_12475.current_mValue_30_ (HERE).stringValue () ;
          result << " = {\n    isa = PBXTargetDependency;\n    target = " ;
          result << enumerator_12475.current_mValue_31_ (HERE).stringValue () ;
          result << ";\n  };\n\n" ;
          index_12475_.increment () ;
          enumerator_12475.gotoNextObject () ;
        }
      }
      index_12427_.increment () ;
      enumerator_12427.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXVariantGroup */\n \n  /*------------------------------------------------------------------ XCBuildConfiguration */\n    " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n" ;
  GALGAS_uint index_12952_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12952 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12952.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_12952.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_12952_.increment () ;
      enumerator_12952.gotoNextObject () ;
    }
  }
  result << "    };\n    name = Default;\n  };\n\n" ;
  GALGAS_uint index_13267_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_13267 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13267.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_13267.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n" ;
      GALGAS_uint index_13435_ (0) ;
      if (enumerator_13267.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_13435 (enumerator_13267.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_13435.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_13435.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_13435_.increment () ;
          enumerator_13435.gotoNextObject () ;
        }
      }
      result << "      PRODUCT_NAME = " ;
      result << enumerator_13267.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 347)).stringValue () ;
      result << " ;\n    };\n    name = Default;\n  };\n\n" ;
      index_13267_.increment () ;
      enumerator_13267.gotoNextObject () ;
    }
  }
  GALGAS_uint index_13905_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_13905 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13905.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_13905.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n" ;
      GALGAS_uint index_14073_ (0) ;
      if (enumerator_13905.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_14073 (enumerator_13905.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_14073.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_14073.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_14073_.increment () ;
          enumerator_14073.gotoNextObject () ;
        }
      }
      result << "      INFOPLIST_FILE = " ;
      result << enumerator_13905.current_mInfoPListFile (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 359)).stringValue () ;
      result << ";\n      PRODUCT_NAME = " ;
      result << enumerator_13905.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue () ;
      result << " ;\n    };\n    name = Default;\n  };\n\n" ;
      index_13905_.increment () ;
      enumerator_13905.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ XCConfigurationList section */\n\n    " ;
  result << in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Build configuration list for PBXProject */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n" ;
  GALGAS_uint index_14955_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_14955 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14955.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_14955.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        " ;
      result << enumerator_14955.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n" ;
      index_14955_.increment () ;
      enumerator_14955.gotoNextObject () ;
    }
  }
  GALGAS_uint index_15552_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_15552 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15552.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_15552.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        " ;
      result << enumerator_15552.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n" ;
      index_15552_.increment () ;
      enumerator_15552.gotoNextObject () ;
    }
  }
  result << "/*------------------------------------------------------------------ End */\n  };\n\n  rootObject = " ;
  result << in_PROJECT_5F_REF.stringValue () ;
  result << " /* Project object */;\n}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateTestFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateTestFile (const GALGAS_string constinArgument_inBundleIdentifier,
                               const GALGAS_string constinArgument_inProjectName,
                               const GALGAS_mainXibDescriptorList constinArgument_inMainXibDescriptorList,
                               const GALGAS_string constinArgument_inOutputDirectory,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inMainXibDescriptorList.getter_length (SOURCE_FILE ("main-xib.ggs", 135)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBundleIdentifier.objectCompare (GALGAS_string::makeEmptyString ())) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_outlet_5F_identifier_5F_list_5354 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("main-xib.ggs", 136)) ;
      cEnumerator_mainXibDescriptorList enumerator_5374 (constinArgument_inMainXibDescriptorList, kENUMERATION_UP) ;
      while (enumerator_5374.hasCurrentObject ()) {
        cEnumerator_mainXibLineDescriptorList enumerator_5425 (enumerator_5374.current_mLine (HERE), kENUMERATION_UP) ;
        while (enumerator_5425.hasCurrentObject ()) {
          switch (enumerator_5425.current_mElement (HERE).enumValue ()) {
          case GALGAS_mainXibElement::kNotBuilt:
            break ;
          case GALGAS_mainXibElement::kEnum_text:
            {
            }
            break ;
          case GALGAS_mainXibElement::kEnum_outlet:
            {
              const cEnumAssociatedValues_mainXibElement_outlet * extractPtr_5578 = (const cEnumAssociatedValues_mainXibElement_outlet *) (enumerator_5425.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_5520_outletName = extractPtr_5578->mAssociatedValue1 ;
              var_outlet_5F_identifier_5F_list_5354.addAssign_operation (extractedValue_5520_outletName.readProperty_string ()  COMMA_SOURCE_FILE ("main-xib.ggs", 142)) ;
            }
            break ;
          }
          enumerator_5425.gotoNextObject () ;
        }
        enumerator_5374.gotoNextObject () ;
      }
      GALGAS_string var_s_5618 = GALGAS_string (filewrapperTemplate_testFiles_test_5F_py (inCompiler, constinArgument_inBundleIdentifier, constinArgument_inProjectName, var_outlet_5F_identifier_5F_list_5354 COMMA_SOURCE_FILE ("main-xib.ggs", 146))) ;
      GALGAS_string var_header_5752 = GALGAS_string ("#!/usr/bin/python\n# coding=utf-8\n\n# https://pypi.python.org/pypi/atomac\n# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py\n\n") ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, GALGAS_string ("test.py"), GALGAS_string ("#"), var_header_5752, GALGAS_string::makeEmptyString (), var_s_5618, GALGAS_string ("#    ENTER USER CODE HERE\n"), GALGAS_string ("\nquitApplication ()\n\n#----------------------------------------------------------------------------*\n"), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 155)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'testFiles'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_testFiles_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_testFiles_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_testFiles (
  "",
  0,
  gWrapperAllFiles_testFiles_0,
  0,
  gWrapperAllDirectories_testFiles_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'testFiles test_py'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_testFiles_test_5F_py (C_Compiler * /* inCompiler */,
                                                        const GALGAS_string & in_BUNDLE_5F_IDENTIFIER,
                                                        const GALGAS_string & in_PROJECT_5F_NAME,
                                                        const GALGAS_stringlist & in_OUTLET_5F_IDENTIFIER_5F_LIST
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#------------------------------------------------------------------------------*\n\nimport random, string\n\nimport subprocess, os, sys, atexit\nimport atomac, sys, time, inspect\n\n#------------------------------------------------------------------------------*\n#   GET SOURCE LINE NUMBER                                                     *\n#------------------------------------------------------------------------------*\n\ndef lineno():\n  return inspect.currentframe().f_back.f_lineno\n\n#------------------------------------------------------------------------------*\n#   LAUNCH APPLICATION                                                         *\n#------------------------------------------------------------------------------*\n\ndef launchApplication ():\n  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n  atomac.launchAppByBundlePath (scriptDir + \"/build/Default/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ".app\")\n  time.sleep (0.5)\n  application = atomac.getAppRefByBundleId ('" ;
  result << in_BUNDLE_5F_IDENTIFIER.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "')\n  return application\n\n#------------------------------------------------------------------------------*\n#   QUIT APPLICATION                                                           *\n#------------------------------------------------------------------------------*\n\ndef quitApplication ():\n  atomac.terminateAppByBundleId ('" ;
  result << in_BUNDLE_5F_IDENTIFIER.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "')\n  time.sleep (0.5)\n\n#------------------------------------------------------------------------------*\n#   PREFERENCES WINDOW                                                         *\n#------------------------------------------------------------------------------*\n\ndef setUpPreferencesWindow (application) :\n  time.sleep (0.5)\n  window = application.windows ('" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "')[0]\n" ;
  GALGAS_uint index_1785_ (0) ;
  if (in_OUTLET_5F_IDENTIFIER_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1785 (in_OUTLET_5F_IDENTIFIER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1785.hasCurrentObject ()) {
      result << "  global " ;
      result << enumerator_1785.current_mValue (HERE).stringValue () ;
      result << "\n  " ;
      result << enumerator_1785.current_mValue (HERE).stringValue () ;
      result << " = window.findFirst (AXIdentifier='" ;
      result << enumerator_1785.current_mValue (HERE).stringValue () ;
      result << "')\n" ;
      index_1785_.increment () ;
      enumerator_1785.gotoNextObject () ;
    }
  }
  result << "\n#------------------------------------------------------------------------------*\n#   CHECK TEXT FIELD VALUE                                                     *\n#------------------------------------------------------------------------------*\n\ndef checkTextFieldValue (textField, expectedValue, line):\n  if textField.AXValue != expectedValue :\n    print '*** Check error at line ' + str (line) + ' ***'\n    sys.exit (1)\n\n#------------------------------------------------------------------------------*\n#   SET TEXT FIELD                                                             *\n#------------------------------------------------------------------------------*\n\ndef setTextFieldValue (textField, value):\n  textField.AXFocused = True\n  textField.AXValue = value\n  textField.Confirm ()\n  time.sleep (0.5)\n\n#------------------------------------------------------------------------------*\n#   MAIN                                                                       *\n#------------------------------------------------------------------------------*\n\napplication = launchApplication ()\nsetUpPreferencesWindow (application)\n\n\n" ;
  return GALGAS_string (result) ;
}

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
//----------------------------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "eb",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .easyBindings extension",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "0.0.1" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct var_declarationStruct_1145 = GALGAS_astDeclarationStruct::constructor_new (SOURCE_FILE ("program.ggs", 23)) ;
  GALGAS_location joker_1300 ; // Joker input parameter
  cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (inCompiler, GALGAS_string (filewrapperTemplate_predefinedOutletClasses_sourceFile (inCompiler COMMA_SOURCE_FILE ("program.ggs", 25))), GALGAS_string::makeEmptyString (), var_declarationStruct_1145, joker_1300  COMMA_SOURCE_FILE ("program.ggs", 25)) ;
  GALGAS_location var_endOfSourceFile_1509 ;
  var_endOfSourceFile_1509.drop () ;
  cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_declarationStruct_1145, var_endOfSourceFile_1509  COMMA_SOURCE_FILE ("program.ggs", 27)) ;
  var_declarationStruct_1145.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_prefsDeclarationAST::constructor_new (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("program.ggs", 30)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("program.ggs", 30))  COMMA_SOURCE_FILE ("program.ggs", 30)), var_declarationStruct_1145.readProperty_mPreferences ()  COMMA_SOURCE_FILE ("program.ggs", 29))  COMMA_SOURCE_FILE ("program.ggs", 29)) ;
  {
  routine_enterAtomicClassesIn (var_declarationStruct_1145.mProperty_mUnifiedDeclarationList, inCompiler  COMMA_SOURCE_FILE ("program.ggs", 34)) ;
  }
  GALGAS_declarationListAST var_sortedDeclarationListAST_2056 ;
  {
  routine_sortProperties (constinArgument_inSourceFile.readProperty_string (), var_declarationStruct_1145.readProperty_mUnifiedDeclarationList (), var_sortedDeclarationListAST_2056, inCompiler  COMMA_SOURCE_FILE ("program.ggs", 36)) ;
  }
  GALGAS_semanticContext var_semanticContext_2153 = GALGAS_semanticContext::constructor_new (SOURCE_FILE ("program.ggs", 38)) ;
  var_semanticContext_2153.setter_setMAutoLayoutVStackFunctionMap (var_declarationStruct_1145.readProperty_mAutoLayoutVStackFunctionMap () COMMA_SOURCE_FILE ("program.ggs", 39)) ;
  var_semanticContext_2153.setter_setMAutoLayoutHStackFunctionMap (var_declarationStruct_1145.readProperty_mAutoLayoutHStackFunctionMap () COMMA_SOURCE_FILE ("program.ggs", 40)) ;
  var_semanticContext_2153.setter_setMEnumerationFunctionListAST (var_declarationStruct_1145.readProperty_mEnumerationFunctionListAST () COMMA_SOURCE_FILE ("program.ggs", 41)) ;
  GALGAS_generationStruct var_generation_2478 = GALGAS_generationStruct::constructor_new (SOURCE_FILE ("program.ggs", 42)) ;
  cEnumerator_declarationListAST enumerator_2520 (var_sortedDeclarationListAST_2056, kENUMERATION_UP) ;
  bool bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 43)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_2520.hasCurrentObject () && bool_0) {
    while (enumerator_2520.hasCurrentObject () && bool_0) {
      callExtensionMethod_firstAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_2520.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2153, var_generation_2478, inCompiler COMMA_SOURCE_FILE ("program.ggs", 44)) ;
      enumerator_2520.gotoNextObject () ;
      if (enumerator_2520.hasCurrentObject ()) {
        bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 43)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 47)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_buildBindingSpecificationMap (var_semanticContext_2153, var_declarationStruct_1145.readProperty_mBindingSpecificationListMap (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 48)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 53)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_buildAutoLayoutBindingSpecificationMap (var_semanticContext_2153, var_declarationStruct_1145.readProperty_mAutoLayoutBindingSpecificationList (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 54)) ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3154 (var_sortedDeclarationListAST_2056, kENUMERATION_UP) ;
  bool bool_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 60)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3154.hasCurrentObject () && bool_3) {
    while (enumerator_3154.hasCurrentObject () && bool_3) {
      callExtensionMethod_secondAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3154.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2153, var_generation_2478, inCompiler COMMA_SOURCE_FILE ("program.ggs", 61)) ;
      enumerator_3154.gotoNextObject () ;
      if (enumerator_3154.hasCurrentObject ()) {
        bool_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 60)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3382 (var_sortedDeclarationListAST_2056, kENUMERATION_UP) ;
  bool bool_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 64)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3382.hasCurrentObject () && bool_4) {
    while (enumerator_3382.hasCurrentObject () && bool_4) {
      callExtensionMethod_thirdAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3382.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2153, var_generation_2478, inCompiler COMMA_SOURCE_FILE ("program.ggs", 65)) ;
      enumerator_3382.gotoNextObject () ;
      if (enumerator_3382.hasCurrentObject ()) {
        bool_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 64)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3610 (var_sortedDeclarationListAST_2056, kENUMERATION_UP) ;
  bool bool_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 68)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3610.hasCurrentObject () && bool_5) {
    while (enumerator_3610.hasCurrentObject () && bool_5) {
      callExtensionMethod_fourthAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3610.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2153, var_generation_2478, inCompiler COMMA_SOURCE_FILE ("program.ggs", 69)) ;
      enumerator_3610.gotoNextObject () ;
      if (enumerator_3610.hasCurrentObject ()) {
        bool_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 68)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 72)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_enumerationFunctionListAST enumerator_3898 (var_semanticContext_2153.readProperty_mEnumerationFunctionListAST (), kENUMERATION_UP) ;
      while (enumerator_3898.hasCurrentObject ()) {
        GALGAS_classKind var_type_4016 ;
        GALGAS_propertyMap joker_4018_3 ; // Joker input parameter
        GALGAS_actionMap joker_4018_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_4018_1 ; // Joker input parameter
        var_semanticContext_2153.readProperty_mClassMap ().method_searchKey (enumerator_3898.current_mEnumName (HERE), var_type_4016, joker_4018_3, joker_4018_2, joker_4018_1, inCompiler COMMA_SOURCE_FILE ("program.ggs", 74)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = var_type_4016.getter_isAtomic (SOURCE_FILE ("program.ggs", 75)).operator_not (SOURCE_FILE ("program.ggs", 75)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_3898.current_mEnumName (HERE).readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray8  COMMA_SOURCE_FILE ("program.ggs", 76)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_typeKind var_typeKind_4171 ;
          var_type_4016.method_atomic (var_typeKind_4171, inCompiler COMMA_SOURCE_FILE ("program.ggs", 78)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = var_typeKind_4171.getter_isEnumType (SOURCE_FILE ("program.ggs", 79)).operator_not (SOURCE_FILE ("program.ggs", 79)).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_3898.current_mEnumName (HERE).readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray10  COMMA_SOURCE_FILE ("program.ggs", 80)) ;
            }
          }
        }
        enumerator_3898.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 86)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      {
      routine_graphvizAnalysis (constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.ggs", 87)), var_semanticContext_2153, var_declarationStruct_1145.readProperty_mGraphvizList (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 87)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 90)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      routine_generateCode (var_declarationStruct_1145.readProperty_mXcodeProject ().readProperty_string (), var_generation_2478, constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 91)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//----------------------------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonCompiler = NULL ;
    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonCompiler->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
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
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
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
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
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

