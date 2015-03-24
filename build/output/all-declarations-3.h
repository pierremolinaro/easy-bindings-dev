#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@simpleStoredPropertyList typeInventory'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const class GALGAS_simpleStoredPropertyList inObject,
                                   class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@simpleStoredPropertyList buildObservablePropertyMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const class GALGAS_simpleStoredPropertyList inObject,
                                                const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                class GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@simpleStoredPropertyList semanticAnalysis'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_simpleStoredPropertyList inObject,
                                      const class GALGAS_string constin_inSwiftClassName,
                                      const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                      class GALGAS_validationStubRoutineListForGeneration & io_ioValidationStubRoutineListForGeneration,
                                      class GALGAS_simpleStoredPropertyListForGeneration & out_outSimpleStoredPropertyListForGeneration,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@toOneRelationshipList typeInventory'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const class GALGAS_toOneRelationshipList inObject,
                                   class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@toManyRelationshipList typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const class GALGAS_toManyRelationshipList inObject,
                                   class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@toOneRelationshipList buildObservablePropertyMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const class GALGAS_toOneRelationshipList inObject,
                                                const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                class GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@toManyRelationshipList buildObservablePropertyMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const class GALGAS_toManyRelationshipList inObject,
                                                const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                class GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@toOneRelationshipList semanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_toOneRelationshipList inObject,
                                      const class GALGAS_semanticContext constin_inSemanticContext,
                                      class GALGAS_toOneEntityRelationshipListForGeneration & out_outToOneEntityRelationshipListForGeneration,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@toManyRelationshipList semanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_toManyRelationshipList inObject,
                                      const class GALGAS_semanticContext constin_inSemanticContext,
                                      class GALGAS_toManyEntityRelationshipListForGeneration & out_outToManyEntityRelationshipListForGeneration,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@abstractSecondaryProperty tryToSolveSecondaryProperty'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractSecondaryProperty_tryToSolveSecondaryProperty) (const class cPtr_abstractSecondaryProperty * inObject,
                                                                                               class GALGAS_semanticContext & ioArgument0,
                                                                                               const class GALGAS_observablePropertyMap constinArgument1,
                                                                                               class GALGAS_observablePropertyMap & ioArgument2,
                                                                                               class GALGAS_secondaryPropertyList & ioArgument3,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_tryToSolveSecondaryProperty (const int32_t inClassIndex,
                                                      categoryMethodSignature_abstractSecondaryProperty_tryToSolveSecondaryProperty inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_tryToSolveSecondaryProperty (const class cPtr_abstractSecondaryProperty * inObject,
                                                     GALGAS_semanticContext & io_ioSemanticContext,
                                                     const GALGAS_observablePropertyMap constin_inRootObservableProperties,
                                                     GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                     GALGAS_secondaryPropertyList & io_ioUnsolvedProperties,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@typeKind formatterStringForFormatPrinting'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_formatterStringForFormatPrinting (const class GALGAS_typeKind & inObject,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category Reader '@observablePropertyAST isPropertyDefined'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool categoryReader_isPropertyDefined (const class GALGAS_observablePropertyAST & inObject,
                                                    const class GALGAS_semanticContext & constinArgument0,
                                                    const class GALGAS_observablePropertyMap & constinArgument1,
                                                    const class GALGAS_observablePropertyMap & constinArgument2,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@observablePropertyAST enterInTransientDependencyGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInTransientDependencyGraph (const class GALGAS_observablePropertyAST inObject,
                                                     class GALGAS_string in_inDependencyGraphPrefix,
                                                     class GALGAS_lstring in_inSlavePropertySignature,
                                                     class GALGAS_transientDependencyGraph & io_ioTransientDependencyGraph,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category Reader '@arrayControllerModel modelString'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_modelString (const class GALGAS_arrayControllerModel & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@arrayControllerModel modelTypeName'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_modelTypeName (const class GALGAS_arrayControllerModel & inObject,
                                                  const class GALGAS_string & constinArgument0,
                                                  const class GALGAS_observablePropertyMap & constinArgument1,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category Reader '@arrayControllerModel modelTypeName2'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_modelTypeName_32_ (const class GALGAS_arrayControllerModel & inObject,
                                                      const class GALGAS_string & constinArgument0,
                                                      const class GALGAS_observablePropertyMap & constinArgument1,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

#endif
