//---------------------------------------------------------------------------*
//                                                                           *
//                       File 'protocolAnalysis.cpp'                         *
//                        Generated by version 2.5.0                         *
//                      july 18th, 2013, at 19h20'43"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "protocolAnalysis.h"
#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "protocolAnalysis.gSemantics", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//      Overriding category method '@protocolDeclaration typeInventory'      *
//                                                                           *
//---------------------------------------------------------------------------*

static void categoryMethod_protocolDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_protocolDeclaration * object = (const cPtr_protocolDeclaration *) inObject ;
  macroValidSharedObject (object, const cPtr_protocolDeclaration) ;
  {
  //--- @selfCopyInExpressionForGeneration
  const GALGAS_protocolDeclaration temp_0 = object ;
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mProtocolName, temp_0, inCompiler COMMA_SOURCE_FILE_AT_LINE (9)) ;
  }
}
//---------------------------------------------------------------------------*

static void defineCategoryMethod_protocolDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_protocolDeclaration.mSlotID,
                                     categoryMethod_protocolDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_protocolDeclaration_typeInventory (defineCategoryMethod_protocolDeclaration_typeInventory, NULL) ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

