#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'graphvizAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_graphvizAnalysis (const class GALGAS_string constinArgument0,
                               const class GALGAS_semanticContext constinArgument1,
                               const class GALGAS_lstringlist constinArgument2,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityAnalysis (const class GALGAS_string constinArgument0,
                                         const class GALGAS_semanticContext constinArgument1,
                                         const class GALGAS_string constinArgument2,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildAutoLayoutBindingSpecificationMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildAutoLayoutBindingSpecificationMap (class GALGAS_semanticContext & ioArgument0,
                                                     const class GALGAS_autoLayoutViewClassBindingSpecificationList constinArgument1,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutBinding (const class GALGAS_bool constinArgument0,
                                       const class GALGAS_propertyMap constinArgument1,
                                       const class GALGAS_propertyMap constinArgument2,
                                       const class GALGAS_semanticContext constinArgument3,
                                       const class GALGAS_propertyMap constinArgument4,
                                       const class GALGAS_actionMap constinArgument5,
                                       const class GALGAS_string constinArgument6,
                                       const class GALGAS_lstring constinArgument7,
                                       const class GALGAS_tableValueBinding constinArgument8,
                                       const class GALGAS_runActionDescriptor constinArgument9,
                                       const class GALGAS_multipleBindingDescriptor constinArgument10,
                                       const class GALGAS_multipleBindingDescriptor constinArgument11,
                                       const class GALGAS_graphicController constinArgument12,
                                       const class GALGAS_regularBindingList constinArgument13,
                                       class GALGAS_autoLayoutRegularBindingsGenerationList & outArgument14,
                                       class GALGAS_autoLayoutMultipleBindingGenerationList & outArgument15,
                                       class GALGAS_autolayoutRunBindingForGeneration & outArgument16,
                                       class GALGAS_string & outArgument17,
                                       class GALGAS_autoLayoutViewGraphicControllerBindingGeneration & outArgument18,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRegularBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRegularBinding (const class GALGAS_propertyMap constinArgument0,
                                              const class GALGAS_propertyMap constinArgument1,
                                              const class GALGAS_semanticContext constinArgument2,
                                              const class GALGAS_propertyMap constinArgument3,
                                              const class GALGAS_lstring constinArgument4,
                                              const class GALGAS_regularBindingList constinArgument5,
                                              const class GALGAS_string constinArgument6,
                                              class GALGAS_autoLayoutRegularBindingsGenerationList & ioArgument7,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'outletClassGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

extern const char * gWrapperFileContent_20_outletClassGeneration ;
extern const char * gWrapperFileContent_25_outletClassGeneration ;
extern const char * gWrapperFileContent_4_outletClassGeneration ;
extern const char * gWrapperFileContent_6_outletClassGeneration ;
extern const char * gWrapperFileContent_16_outletClassGeneration ;
extern const char * gWrapperFileContent_5_outletClassGeneration ;
extern const char * gWrapperFileContent_24_outletClassGeneration ;
extern const char * gWrapperFileContent_9_outletClassGeneration ;
extern const char * gWrapperFileContent_19_outletClassGeneration ;
extern const char * gWrapperFileContent_0_outletClassGeneration ;
extern const char * gWrapperFileContent_1_outletClassGeneration ;
extern const char * gWrapperFileContent_26_outletClassGeneration ;
extern const char * gWrapperFileContent_23_outletClassGeneration ;
extern const char * gWrapperFileContent_11_outletClassGeneration ;
extern const char * gWrapperFileContent_18_outletClassGeneration ;
extern const char * gWrapperFileContent_15_outletClassGeneration ;
extern const char * gWrapperFileContent_8_outletClassGeneration ;
extern const char * gWrapperFileContent_3_outletClassGeneration ;
extern const char * gWrapperFileContent_17_outletClassGeneration ;
extern const char * gWrapperFileContent_27_outletClassGeneration ;
extern const char * gWrapperFileContent_7_outletClassGeneration ;
extern const char * gWrapperFileContent_21_outletClassGeneration ;
extern const char * gWrapperFileContent_10_outletClassGeneration ;
extern const char * gWrapperFileContent_2_outletClassGeneration ;
extern const char * gWrapperFileContent_12_outletClassGeneration ;
extern const char * gWrapperFileContent_13_outletClassGeneration ;
extern const char * gWrapperFileContent_14_outletClassGeneration ;
extern const char * gWrapperFileContent_22_outletClassGeneration ;

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cRegularFileWrapper gWrapperFile_0_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_1_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_2_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_3_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_4_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_5_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_6_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_7_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_8_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_9_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_10_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_11_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_12_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_13_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_14_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_15_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_16_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_17_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_18_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_19_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_20_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_21_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_22_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_23_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_24_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_25_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_26_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_27_outletClassGeneration ;

//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_outletClassGeneration ;

