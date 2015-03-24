#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

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
