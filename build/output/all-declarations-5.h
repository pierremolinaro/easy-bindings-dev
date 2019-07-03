#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-4.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'analyzeOutlets'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeOutlets (const class GALGAS_propertyMap constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_semanticContext constinArgument2,
                             const class GALGAS_outletDeclarationList constinArgument3,
                             const class GALGAS_propertyMap constinArgument4,
                             const class GALGAS_actionMap constinArgument5,
                             const class GALGAS_string constinArgument6,
                             class GALGAS_generationStruct & ioArgument7,
                             class GALGAS_regularBindingsGenerationList & outArgument8,
                             class GALGAS_multipleBindingGenerationList & outArgument9,
                             class GALGAS_actionBindingListForGeneration & outArgument10,
                             class GALGAS_decoratedOutletMap & outArgument11,
                             class GALGAS_tableViewBindingGenerationList & outArgument12,
                             class GALGAS_ebViewGraphicControllerBindingGenerationList & outArgument13,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Filewrapper 'documentGenerationTemplate'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_documentGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Filewrapper template 'documentGenerationTemplate documentImplementation'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_documentGenerationTemplate_documentImplementation (class C_Compiler * inCompiler,
                                                                                     const class GALGAS_string & in_DOCUMENT_5F_NAME,
                                                                                     const class GALGAS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                     const class GALGAS_propertyGenerationList & in_DOCUMENT_5F_PROPERTY_5F_LIST,
                                                                                     const class GALGAS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                     const class GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                                     const class GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                                     const class GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                     const class GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                     const class GALGAS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST
                                                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'generateEBManagedDocumentSwift'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateEBManagedDocumentSwift (const class GALGAS_string constinArgument0,
                                             class GALGAS_stringset & ioArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Filewrapper 'swift_sources'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * gWrapperFileContent_34_swift_5F_sources ;
extern const char * gWrapperFileContent_28_swift_5F_sources ;
extern const char * gWrapperFileContent_30_swift_5F_sources ;
extern const char * gWrapperFileContent_35_swift_5F_sources ;
extern const char * gWrapperFileContent_53_swift_5F_sources ;
extern const char * gWrapperFileContent_8_swift_5F_sources ;
extern const char * gWrapperFileContent_37_swift_5F_sources ;
extern const char * gWrapperFileContent_39_swift_5F_sources ;
extern const char * gWrapperFileContent_43_swift_5F_sources ;
extern const char * gWrapperFileContent_32_swift_5F_sources ;
extern const char * gWrapperFileContent_27_swift_5F_sources ;
extern const char * gWrapperFileContent_1_swift_5F_sources ;
extern const char * gWrapperFileContent_20_swift_5F_sources ;
extern const char * gWrapperFileContent_2_swift_5F_sources ;
extern const char * gWrapperFileContent_54_swift_5F_sources ;
extern const char * gWrapperFileContent_22_swift_5F_sources ;
extern const char * gWrapperFileContent_0_swift_5F_sources ;
extern const char * gWrapperFileContent_48_swift_5F_sources ;
extern const char * gWrapperFileContent_41_swift_5F_sources ;
extern const char * gWrapperFileContent_18_swift_5F_sources ;
extern const char * gWrapperFileContent_5_swift_5F_sources ;
extern const char * gWrapperFileContent_46_swift_5F_sources ;
extern const char * gWrapperFileContent_49_swift_5F_sources ;
extern const char * gWrapperFileContent_24_swift_5F_sources ;
extern const char * gWrapperFileContent_44_swift_5F_sources ;
extern const char * gWrapperFileContent_14_swift_5F_sources ;
extern const char * gWrapperFileContent_17_swift_5F_sources ;
extern const char * gWrapperFileContent_31_swift_5F_sources ;
extern const char * gWrapperFileContent_11_swift_5F_sources ;
extern const char * gWrapperFileContent_36_swift_5F_sources ;
extern const char * gWrapperFileContent_38_swift_5F_sources ;
extern const char * gWrapperFileContent_25_swift_5F_sources ;
extern const char * gWrapperFileContent_7_swift_5F_sources ;
extern const char * gWrapperFileContent_58_swift_5F_sources ;
extern const char * gWrapperFileContent_16_swift_5F_sources ;
extern const char * gWrapperFileContent_3_swift_5F_sources ;
extern const char * gWrapperFileContent_51_swift_5F_sources ;
extern const char * gWrapperFileContent_9_swift_5F_sources ;
extern const char * gWrapperFileContent_61_swift_5F_sources ;
extern const char * gWrapperFileContent_60_swift_5F_sources ;
extern const char * gWrapperFileContent_50_swift_5F_sources ;
extern const char * gWrapperFileContent_55_swift_5F_sources ;
extern const char * gWrapperFileContent_10_swift_5F_sources ;
extern const char * gWrapperFileContent_29_swift_5F_sources ;
extern const char * gWrapperFileContent_57_swift_5F_sources ;
extern const char * gWrapperFileContent_40_swift_5F_sources ;
extern const char * gWrapperFileContent_33_swift_5F_sources ;
extern const char * gWrapperFileContent_12_swift_5F_sources ;
extern const char * gWrapperFileContent_21_swift_5F_sources ;
extern const char * gWrapperFileContent_13_swift_5F_sources ;
extern const char * gWrapperFileContent_45_swift_5F_sources ;
extern const char * gWrapperFileContent_42_swift_5F_sources ;
extern const char * gWrapperFileContent_56_swift_5F_sources ;
extern const char * gWrapperFileContent_4_swift_5F_sources ;
extern const char * gWrapperFileContent_59_swift_5F_sources ;
extern const char * gWrapperFileContent_23_swift_5F_sources ;
extern const char * gWrapperFileContent_26_swift_5F_sources ;
extern const char * gWrapperFileContent_15_swift_5F_sources ;
extern const char * gWrapperFileContent_52_swift_5F_sources ;
extern const char * gWrapperFileContent_47_swift_5F_sources ;
extern const char * gWrapperFileContent_19_swift_5F_sources ;
extern const char * gWrapperFileContent_6_swift_5F_sources ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cRegularFileWrapper gWrapperFile_0_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_1_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_2_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_3_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_4_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_5_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_6_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_7_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_8_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_9_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_10_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_11_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_12_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_13_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_14_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_15_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_16_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_17_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_18_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_19_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_20_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_21_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_22_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_23_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_24_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_25_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_26_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_27_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_28_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_29_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_30_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_31_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_32_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_33_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_34_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_35_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_36_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_37_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_38_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_39_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_40_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_41_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_42_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_43_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_44_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_45_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_46_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_47_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_48_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_49_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_50_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_51_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_52_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_53_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_54_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_55_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_56_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_57_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_58_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_59_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_60_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_61_swift_5F_sources ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_swift_5F_sources ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'prefsGenerationTemplate'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_prefsGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Filewrapper template 'prefsGenerationTemplate preferences'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_prefsGenerationTemplate_preferences (class C_Compiler * inCompiler,
                                                                       const class GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                       const class GALGAS_mainXibDescriptorList & in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST,
                                                                       const class GALGAS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                       const class GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                       const class GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_externSwiftFunctionList & in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST,
                                                                       const class GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST
                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'graphvizAnalysis'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_graphvizAnalysis (const class GALGAS_string constinArgument0,
                               const class GALGAS_semanticContext constinArgument1,
                               const class GALGAS_lstringlist constinArgument2,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'graphvizRootEntityAnalysis'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_graphvizRootEntityAnalysis (const class GALGAS_string constinArgument0,
                                         const class GALGAS_semanticContext constinArgument1,
                                         const class GALGAS_string constinArgument2,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Filewrapper 'outletClassGeneration'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_outletClassGeneration ;

