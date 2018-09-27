#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-6.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Function 'predefinedDates'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_stringset function_predefinedDates (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Function 'predefinedColors'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_stringset function_predefinedColors (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Routine 'typeInventory'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_typeInventory (const class GALGAS_astDeclarationListEX constinArgument0,
                            class GALGAS_unifiedTypeMap & outArgument1,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'semanticAnalysisEX'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_semanticAnalysisEX (const class GALGAS_classMap constinArgument0,
                                 const class GALGAS_unifiedTypeMap constinArgument1,
                                 const class GALGAS_string constinArgument2,
                                 const class GALGAS_astDeclarationStruct constinArgument3,
                                 class GALGAS_generationStruct & ioArgument4,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Routine 'generateCode'                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateCode (const class GALGAS_string constinArgument0,
                           const class GALGAS_generationStruct constinArgument1,
                           const class GALGAS_string constinArgument2,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'generateStandardProperties'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateStandardProperties (const class GALGAS_string constinArgument0,
                                         const class GALGAS_stringlist constinArgument1,
                                         const class GALGAS_transientExternTypeList constinArgument2,
                                         class GALGAS_stringset & ioArgument3,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'generateSwiftApplicationFiles'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateSwiftApplicationFiles (const class GALGAS_string constinArgument0,
                                            const class GALGAS_bool constinArgument1,
                                            class GALGAS_stringset & ioArgument2,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

