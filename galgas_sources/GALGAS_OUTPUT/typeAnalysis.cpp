//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              File 'typeAnalysis.cpp'                                                *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h3'39"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "typeAnalysis.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'typeAnalysis'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_typeAnalysis (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                           GALGAS_transientListForGeneration & outArgument_outTransientListForGeneration,
                           GALGAS_actionListForGeneration & outArgument_outActionListForGeneration,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTransientListForGeneration.drop () ; // Release 'out' argument
  outArgument_outActionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outTransientListForGeneration = GALGAS_transientListForGeneration::constructor_emptyList (SOURCE_FILE ("typeAnalysis.gSemantics", 12)) ;
  outArgument_outActionListForGeneration = GALGAS_actionListForGeneration::constructor_emptyList (SOURCE_FILE ("typeAnalysis.gSemantics", 13)) ;
  cEnumerator_unifiedTypeMap enumerator_902 (constinArgument_inUnifiedTypeMap, kEnumeration_up) ;
  while (enumerator_902.hasCurrentObject ()) {
    GALGAS_decoratedObservablePropertyMap var_allObservableProperties = enumerator_902.current_mObservablePropertyMap (HERE) ;
    GALGAS_unifiedTypeProxy var_t = enumerator_902.current_mSuperType (HERE) ;
    if (constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("typeAnalysis.gSemantics", 27)).isValid ()) {
      uint32_t variant_1074 = constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("typeAnalysis.gSemantics", 27)).uintValue () ;
      bool loop_1074 = true ;
      while (loop_1074) {
        loop_1074 = var_t.reader_isNull (SOURCE_FILE ("typeAnalysis.gSemantics", 27)).operator_not (SOURCE_FILE ("typeAnalysis.gSemantics", 27)).isValid () ;
        if (loop_1074) {
          loop_1074 = var_t.reader_isNull (SOURCE_FILE ("typeAnalysis.gSemantics", 27)).operator_not (SOURCE_FILE ("typeAnalysis.gSemantics", 27)).boolValue () ;
        }
        if (loop_1074 && (0 == variant_1074)) {
          loop_1074 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("typeAnalysis.gSemantics", 27)) ;
        }
        if (loop_1074) {
          variant_1074 -- ;
          cEnumerator_decoratedObservablePropertyMap enumerator_1177 (var_t.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 28)), kEnumeration_up) ;
          while (enumerator_1177.hasCurrentObject ()) {
            {
            var_allObservableProperties.modifier_insertKey (enumerator_1177.current_lkey (HERE), enumerator_1177.current_mPropertyType (HERE), enumerator_1177.current_mIsTransient (HERE), enumerator_1177.current_mPropertySignature (HERE), enumerator_1177.current_mIsCollection (HERE), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 29)) ;
            }
            enumerator_1177.gotoNextObject () ;
          }
          var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 37)) ;
        }
      }
    }
    {
    routine_unifiedTypeAnalysis (constinArgument_inUnifiedTypeMap, enumerator_902.current_lkey (HERE), enumerator_902.current_mTypeKind (HERE), enumerator_902.current_mSuperType (HERE), enumerator_902.current_mRootEntityType (HERE), enumerator_902.current_mDecoratedAttributeMap (HERE), enumerator_902.current_mDecoratedTransientMap (HERE), enumerator_902.current_mDecoratedOutletMap (HERE), enumerator_902.current_mObservablePropertyMap (HERE), enumerator_902.current_mCurrentRelationshipMap (HERE), var_allObservableProperties, enumerator_902.current_mActionMap (HERE), outArgument_outTransientListForGeneration, outArgument_outActionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 39)) ;
    }
    enumerator_902.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'unifiedTypeAnalysis'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_unifiedTypeAnalysis (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                  const GALGAS_lstring constinArgument_inTypeName,
                                  const GALGAS_typeKind /* constinArgument_inTypeKind */,
                                  const GALGAS_unifiedTypeProxy /* constinArgument_superType */,
                                  const GALGAS_unifiedTypeProxy constinArgument_inRootEntityType,
                                  const GALGAS_decoratedAttributeMap /* constinArgument_decoratedAttributeMap */,
                                  const GALGAS_decoratedTransientMap constinArgument_decoratedTransientMap,
                                  const GALGAS_decoratedOutletMap /* constinArgument_decoratedOutletMap */,
                                  const GALGAS_decoratedObservablePropertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                  const GALGAS_decoratedEntityRelationshipMap /* constinArgument_currentRelationshipMap */,
                                  const GALGAS_decoratedObservablePropertyMap constinArgument_inAllObservablePropertyMap,
                                  const GALGAS_actionMap constinArgument_inActionMap,
                                  GALGAS_transientListForGeneration & ioArgument_ioTransientListForGeneration,
                                  GALGAS_actionListForGeneration & ioArgument_ioActionListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_decoratedTransientMap enumerator_2738 (constinArgument_decoratedTransientMap, kEnumeration_up) ;
  while (enumerator_2738.hasCurrentObject ()) {
    GALGAS_transientDependencyListForGeneration var_transientDependencyListForGeneration = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("typeAnalysis.gSemantics", 78)) ;
    cEnumerator_dependanceList enumerator_2858 (enumerator_2738.current_mDependencyList (HERE), kEnumeration_up) ;
    while (enumerator_2858.hasCurrentObject ()) {
      const enumGalgasBool test_0 = categoryReader_suitableForObservableProperty (enumerator_2738.current_mTransientType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 80)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 80)).operator_not (SOURCE_FILE ("typeAnalysis.gSemantics", 80)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_location location_1 (enumerator_2738.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").operator_concat (enumerator_2738.current_mTransientType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 81))  COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 81)).operator_concat (GALGAS_string ("' type is not acceptable for transient")  COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 81))  COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 81)) ;
      }
      callCategoryMethod_transientDependencySemanticAnalysis ((const cPtr_abstractTransientDependency *) enumerator_2858.current_mDependency (HERE).ptr (), constinArgument_inUnifiedTypeMap, enumerator_2738.current_lkey (HERE), constinArgument_inAllObservablePropertyMap, constinArgument_inRootEntityType, enumerator_2738.current_mTransientSignature (HERE), var_transientDependencyListForGeneration, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 83)) ;
      enumerator_2858.gotoNextObject () ;
    }
    ioArgument_ioTransientListForGeneration.addAssign_operation (enumerator_2738.current_mTransientSignature (HERE).mAttribute_string, enumerator_2738.current_mTransientType (HERE), var_transientDependencyListForGeneration  COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 92)) ;
    enumerator_2738.gotoNextObject () ;
  }
  cEnumerator_actionMap enumerator_3497 (constinArgument_inActionMap, kEnumeration_up) ;
  while (enumerator_3497.hasCurrentObject ()) {
    ioArgument_ioActionListForGeneration.addAssign_operation (constinArgument_inTypeName.mAttribute_string, enumerator_3497.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("typeAnalysis.gSemantics", 96)) ;
    enumerator_3497.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Abstract category method '@abstractTransientDependency transientDependencySemanticAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractTransientDependency_transientDependencySemanticAnalysis> gCategoryMethodTable_abstractTransientDependency_transientDependencySemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_transientDependencySemanticAnalysis (const int32_t inClassIndex,
                                                              categoryMethodSignature_abstractTransientDependency_transientDependencySemanticAnalysis inMethod) {
  gCategoryMethodTable_abstractTransientDependency_transientDependencySemanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractTransientDependency_transientDependencySemanticAnalysis (void) {
  gCategoryMethodTable_abstractTransientDependency_transientDependencySemanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractTransientDependency_transientDependencySemanticAnalysis (NULL,
                                                                                            freeCategoryMethod_abstractTransientDependency_transientDependencySemanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_transientDependencySemanticAnalysis (const cPtr_abstractTransientDependency * inObject,
                                                             const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                             const GALGAS_lstring constin_inTransientName,
                                                             const GALGAS_decoratedObservablePropertyMap constin_inAllObservablePropertyMap,
                                                             const GALGAS_unifiedTypeProxy constin_inRootEntityType,
                                                             const GALGAS_lstring constin_inTransientPropertySignature,
                                                             GALGAS_transientDependencyListForGeneration & io_ioTransientDependencyListForGeneration,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractTransientDependency) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractTransientDependency_transientDependencySemanticAnalysis f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractTransientDependency_transientDependencySemanticAnalysis.count ()) {
      f = gCategoryMethodTable_abstractTransientDependency_transientDependencySemanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractTransientDependency_transientDependencySemanticAnalysis.count ()) {
           f = gCategoryMethodTable_abstractTransientDependency_transientDependencySemanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractTransientDependency_transientDependencySemanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUnifiedTypeMap, constin_inTransientName, constin_inAllObservablePropertyMap, constin_inRootEntityType, constin_inTransientPropertySignature, io_ioTransientDependencyListForGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

