//---------------------------------------------------------------------------*
//                                                                           *
//                    File 'predefinedTypeAnalysis.cpp'                      *
//                        Generated by version 2.5.0                         *
//                      july 18th, 2013, at 19h22'14"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "predefinedTypeAnalysis.h"
#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "predefinedTypeAnalysis.gSemantics", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//   Overriding category method '@predefinedTypeDeclaration typeInventory'   *
//                                                                           *
//---------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeDeclaration * object = (const cPtr_predefinedTypeDeclaration *) inObject ;
  macroValidSharedObject (object, const cPtr_predefinedTypeDeclaration) ;
  {
  //--- @selfCopyInExpressionForGeneration
  const GALGAS_predefinedTypeDeclaration temp_0 = object ;
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mTypeName, temp_0, inCompiler COMMA_SOURCE_FILE_AT_LINE (9)) ;
  }
}
//---------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_predefinedTypeDeclaration.mSlotID,
                                     categoryMethod_predefinedTypeDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeDeclaration_typeInventory (defineCategoryMethod_predefinedTypeDeclaration_typeInventory, NULL) ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

