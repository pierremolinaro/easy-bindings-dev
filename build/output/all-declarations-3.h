#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

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
