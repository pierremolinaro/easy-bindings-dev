#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

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

#endif
