#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-5.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'generateEntities'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateEntities (const class GALGAS_entityListForGeneration constinArgument0,
                               const class GALGAS_string constinArgument1,
                               class GALGAS_stringset & ioArgument2,
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
                                                                                     const class GALGAS_transientDefinitionListForGeneration & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const class GALGAS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                     const class GALGAS_arrayControllerForGeneration & in_ARRAY_5F_CONTROLLER_5F_LIST,
                                                                                     const class GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                                     const class GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                                     const class GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                     const class GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                     const class GALGAS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                     const class GALGAS_selectionControllerForGeneration & in_SELECTION_5F_CONTROLLER_5F_LIST
                                                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'generateDocuments'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateDocuments (const class GALGAS_documentListForGeneration constinArgument0,
                                const class GALGAS_string constinArgument1,
                                class GALGAS_stringset & ioArgument2,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Filewrapper 'swift_sources'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * gWrapperFileContent_0_swift_5F_sources ;
extern const char * gWrapperFileContent_1_swift_5F_sources ;
extern const char * gWrapperFileContent_2_swift_5F_sources ;
extern const char * gWrapperFileContent_3_swift_5F_sources ;
extern const char * gWrapperFileContent_4_swift_5F_sources ;
extern const char * gWrapperFileContent_5_swift_5F_sources ;
extern const char * gWrapperFileContent_6_swift_5F_sources ;
extern const char * gWrapperFileContent_7_swift_5F_sources ;
extern const char * gWrapperFileContent_8_swift_5F_sources ;
extern const char * gWrapperFileContent_9_swift_5F_sources ;
extern const char * gWrapperFileContent_10_swift_5F_sources ;

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
                                                                       const class GALGAS_transientDefinitionListForGeneration & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                       const class GALGAS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                       const class GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_mainXibDescriptorList & in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST,
                                                                       const class GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                       const class GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_externSwiftFunctionList & in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST,
                                                                       const class GALGAS_storedArrayPropertyListForGeneration & in_STORED_5F_ARRAY_5F_LIST,
                                                                       const class GALGAS_arrayControllerForGeneration & in_ARRAY_5F_CONTROLLER_5F_LIST,
                                                                       const class GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST
                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'generatePreferences'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generatePreferences (const class GALGAS_preferencesForGeneration constinArgument0,
                                  const class GALGAS_string constinArgument1,
                                  class GALGAS_stringset & ioArgument2,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Filewrapper 'outletClassGeneration'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * gWrapperFileContent_0_outletClassGeneration ;
extern const char * gWrapperFileContent_1_outletClassGeneration ;
extern const char * gWrapperFileContent_2_outletClassGeneration ;
extern const char * gWrapperFileContent_3_outletClassGeneration ;
extern const char * gWrapperFileContent_4_outletClassGeneration ;
extern const char * gWrapperFileContent_5_outletClassGeneration ;
extern const char * gWrapperFileContent_6_outletClassGeneration ;
extern const char * gWrapperFileContent_7_outletClassGeneration ;
extern const char * gWrapperFileContent_8_outletClassGeneration ;
extern const char * gWrapperFileContent_9_outletClassGeneration ;
extern const char * gWrapperFileContent_10_outletClassGeneration ;
extern const char * gWrapperFileContent_11_outletClassGeneration ;
extern const char * gWrapperFileContent_12_outletClassGeneration ;
extern const char * gWrapperFileContent_13_outletClassGeneration ;
extern const char * gWrapperFileContent_14_outletClassGeneration ;
extern const char * gWrapperFileContent_15_outletClassGeneration ;
extern const char * gWrapperFileContent_16_outletClassGeneration ;
extern const char * gWrapperFileContent_17_outletClassGeneration ;
extern const char * gWrapperFileContent_18_outletClassGeneration ;
extern const char * gWrapperFileContent_19_outletClassGeneration ;
extern const char * gWrapperFileContent_20_outletClassGeneration ;
extern const char * gWrapperFileContent_21_outletClassGeneration ;
extern const char * gWrapperFileContent_22_outletClassGeneration ;
extern const char * gWrapperFileContent_23_outletClassGeneration ;
extern const char * gWrapperFileContent_24_outletClassGeneration ;
extern const char * gWrapperFileContent_25_outletClassGeneration ;
extern const char * gWrapperFileContent_26_outletClassGeneration ;
extern const char * gWrapperFileContent_27_outletClassGeneration ;
extern const char * gWrapperFileContent_28_outletClassGeneration ;
extern const char * gWrapperFileContent_29_outletClassGeneration ;

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
extern const cRegularFileWrapper gWrapperFile_28_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_29_outletClassGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_outletClassGeneration ;

