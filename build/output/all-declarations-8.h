#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyMap.element isAbstract' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isAbstract (const class GGS_propertyMap_2E_element & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'println?'
//
//--------------------------------------------------------------------------------------------------

void routine_println_3F_ (const class GGS_string constinArgument0,
                          class Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'print?'
//
//--------------------------------------------------------------------------------------------------

void routine_print_3F_ (const class GGS_string constinArgument0,
                        class Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutTableViewControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_autoLayoutTableViewControllerGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutTableViewControllerGenerationTemplate autoLayoutTableViewControllerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutTableViewControllerGenerationTemplate_autoLayoutTableViewControllerImplementation (class Compiler * inCompiler,
                                                                                                                            const class GGS_string & in_OWNER_5F_NAME,
                                                                                                                            const class GGS_string & in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME,
                                                                                                                            const class GGS_string & in_MODEL_5F_STRING,
                                                                                                                            const class GGS_autoLayoutTableViewControllerModelKind & in_MODEL_5F_KIND,
                                                                                                                            const class GGS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                                            const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_BOUND_5F_COLUMNS,
                                                                                                                            const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_SORTED_5F_COLUMNS,
                                                                                                                            const class GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                            const class GGS_stringset & in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING,
                                                                                                                            const class GGS__32_stringlist & in_ATTRIBUTE_5F_VALUES
                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateTestFile????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateTestFile_3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                               const class GGS_string constinArgument1,
                                               const class GGS_mainXibDescriptorList constinArgument2,
                                               const class GGS_string constinArgument3,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'testFiles'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_testFiles ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'testFiles test_py'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_testFiles_test_5F_py (class Compiler * inCompiler,
                                                     const class GGS_string & in_BUNDLE_5F_IDENTIFIER,
                                                     const class GGS_string & in_PROJECT_5F_NAME,
                                                     const class GGS_stringlist & in_OUTLET_5F_IDENTIFIER_5F_LIST
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'validationStubExtension'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'validationStubExtension actionGeneration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_validationStubExtension_actionGeneration (class Compiler * inCompiler,
                                                                         const class GGS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                         const class GGS_string & in_MODEL_5F_NAME,
                                                                         const class GGS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateValidationRoutineStubs??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateValidationRoutineStubs_3F__3F__26_ (const class GGS_string constinArgument0,
                                                         const class GGS_validationStubRoutineListForGeneration constinArgument1,
                                                         class GGS_stringset & ioArgument2,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildActionMap?!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildActionMap_3F__21_ (const class GGS_lstringlist constinArgument0,
                                     class GGS_actionMap & outArgument1,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOutlets?????????&!!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (const class GGS_bool constinArgument0,
                                                                                             const class GGS_propertyMap constinArgument1,
                                                                                             const class GGS_propertyMap constinArgument2,
                                                                                             const class GGS_string constinArgument3,
                                                                                             const class GGS_semanticContext constinArgument4,
                                                                                             const class GGS_outletDeclarationList constinArgument5,
                                                                                             const class GGS_propertyMap constinArgument6,
                                                                                             const class GGS_actionMap constinArgument7,
                                                                                             const class GGS_string constinArgument8,
                                                                                             class GGS_generationStruct & ioArgument9,
                                                                                             class GGS_regularBindingsGenerationList & outArgument10,
                                                                                             class GGS_multipleBindingGenerationList & outArgument11,
                                                                                             class GGS_actionBindingListForGeneration & outArgument12,
                                                                                             class GGS_decoratedOutletMap & outArgument13,
                                                                                             class GGS_tableViewBindingGenerationList & outArgument14,
                                                                                             class GGS_ebViewGraphicControllerBindingGenerationList & outArgument15,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutDocumentGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_autoLayoutDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (class Compiler * inCompiler,
                                                                                            const class GGS_string & in_DOCUMENT_5F_CLASS_5F_NAME,
                                                                                            const class GGS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                            const class GGS_string & in_MAIN_5F_VIEW_5F_NAME,
                                                                                            const class GGS_propertyGenerationList & in_DOCUMENT_5F_PROPERTY_5F_LIST,
                                                                                            const class GGS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                            const class GGS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP,
                                                                                            const class GGS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                                            const class GGS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                                            const class GGS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                            const class GGS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                            const class GGS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                            const class GGS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                                            const class GGS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                                            const class GGS_string & in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME,
                                                                                            const class GGS_autoLayoutOutletLinkerGenerationList & in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentOutletConfiguratorImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (class Compiler * inCompiler,
                                                                                                              const class GGS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                              const class GGS_string & in_OUTLET_5F_NAME,
                                                                                                              const class GGS_string & in_OUTLET_5F_TYPE_5F_NAME
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate outletLinkerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (class Compiler * inCompiler,
                                                                                                const class GGS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                const class GGS_string & in_LINKER_5F_NAME,
                                                                                                const class GGS__32_stringlist & in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'prefsGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_prefsGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'prefsGenerationTemplate preferences'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_prefsGenerationTemplate_preferences (class Compiler * inCompiler,
                                                                    const class GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                    const class GGS_mainXibDescriptorList & in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST,
                                                                    const class GGS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                    const class GGS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                    const class GGS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                    const class GGS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const class GGS_externSwiftFunctionList & in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST,
                                                                    const class GGS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const class GGS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const class GGS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                    const class GGS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                    const class GGS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'sortProperties??!'
//
//--------------------------------------------------------------------------------------------------

void routine_sortProperties_3F__3F__21_ (const class GGS_string constinArgument0,
                                         const class GGS_declarationListAST constinArgument1,
                                         class GGS_declarationListAST & outArgument2,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_easyBindings_5F_options_outputDeclarationDependencyGraph ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

