#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

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
                                                                                                const class GGS__5B__32_string_5D_ & in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST
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
                                         const class GGS__5B_abstractDeclarationAST_5D_ constinArgument1,
                                         class GGS__5B_abstractDeclarationAST_5D_ & outArgument2,
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

//--------------------------------------------------------------------------------------------------
//
//Function 'predefinedDates'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringset function_predefinedDates (class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'predefinedColors'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringset function_predefinedColors (class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedOutletClasses'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedOutletClasses sourceFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterAtomicClassesIn&declarationList'
//
//--------------------------------------------------------------------------------------------------

void routine_enterAtomicClassesIn_26_declarationList (class GGS__5B_abstractDeclarationAST_5D_ & ioArgument0,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizAnalysis_3F__3F__3F_ (const class GGS_string constinArgument0,
                                           const class GGS_semanticContext constinArgument1,
                                           const class GGS__5B_lstring_5D_ constinArgument2,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityAnalysis_3F__3F__3F_ (const class GGS_string constinArgument0,
                                                     const class GGS_semanticContext constinArgument1,
                                                     const class GGS_string constinArgument2,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityStrongAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (const class GGS_string constinArgument0,
                                                           const class GGS_semanticContext constinArgument1,
                                                           const class GGS_string constinArgument2,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProject????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateXcodeProject_3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                   const class GGS_string constinArgument1,
                                                   const class GGS_stringset constinArgument2,
                                                   const class GGS_string constinArgument3,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProjectInternal????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateXcodeProjectInternal_3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                           const class GGS_string constinArgument1,
                                                           const class GGS_stringset constinArgument2,
                                                           const class GGS_string constinArgument3,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'additionalXcodeFiles'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_additionalXcodeFiles ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles main_xib'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_main_5F_xib (class Compiler * inCompiler,
                                                                 const class GGS_string & in_PROJECT_5F_NAME
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles info_plist'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_info_5F_plist (class Compiler * inCompiler,
                                                                   const class GGS_string & in_PROJECT_5F_NAME,
                                                                   const class GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                   const class GGS_string & in_VERSION_5F_STRING,
                                                                   const class GGS_stringset & in_HANDLED_5F_EXTENSION_5F_SET
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles build_command'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_build_5F_command (class Compiler * inCompiler,
                                                                      const class GGS_string & in_PROJECT_5F_NAME
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildAutoLayoutBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (class GGS_semanticContext & ioArgument0,
                                                             const class GGS_autoLayoutViewClassBindingSpecificationList constinArgument1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap_26__3F_ (class GGS_semanticContext & ioArgument0,
                                                   const class GGS_outletClassBindingSpecificationList constinArgument1,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_arrayControllerGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayControllerGenerationTemplate arrayControllerImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (class Compiler * inCompiler,
                                                                                                       const class GGS_string & in_OWNER_5F_NAME,
                                                                                                       const class GGS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                                       const class GGS_arrayControllerModelKind & in_MODEL_5F_KIND,
                                                                                                       const class GGS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                       const class GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                       const class GGS_bool & in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'selectionControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_selectionControllerGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate baseSelectionControllerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (class Compiler * inCompiler,
                                                                                                            const class GGS_string & in_OWNER_5F_NAME,
                                                                                                            const class GGS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                            const class GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                            const class GGS_propertyMap & in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate derivedSelectionControllerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (class Compiler * inCompiler,
                                                                                                               const class GGS_string & in_OWNER_5F_NAME,
                                                                                                               const class GGS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                               const class GGS_string & in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const class GGS_string & in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const class GGS_propertyGenerationList & in_PROPERTY_5F_GENERATION_5F_LIST,
                                                                                                               const class GGS_bool & in_HAS_5F_ATOMIC_5F_PROPERTIES
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSelectionControllers??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSelectionControllers_3F__3F__26_ (const class GGS_selectionControllerForGeneration constinArgument0,
                                                       const class GGS_string constinArgument1,
                                                       class GGS_stringset & ioArgument2,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutBinding???????????????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const class GGS_bool constinArgument0,
                                                                                                                       const class GGS_propertyMap constinArgument1,
                                                                                                                       const class GGS_propertyMap constinArgument2,
                                                                                                                       const class GGS_actionMap constinArgument3,
                                                                                                                       const class GGS_semanticContext constinArgument4,
                                                                                                                       const class GGS_propertyMap constinArgument5,
                                                                                                                       const class GGS_actionMap constinArgument6,
                                                                                                                       const class GGS_string constinArgument7,
                                                                                                                       const class GGS_lstring constinArgument8,
                                                                                                                       const class GGS_tableValueBinding constinArgument9,
                                                                                                                       const class GGS_runActionDescriptor constinArgument10,
                                                                                                                       const class GGS_multipleBindingDescriptor constinArgument11,
                                                                                                                       const class GGS_multipleBindingDescriptor constinArgument12,
                                                                                                                       const class GGS_graphicController constinArgument13,
                                                                                                                       const class GGS_regularBindingList constinArgument14,
                                                                                                                       class GGS_autoLayoutRegularBindingsGenerationList & outArgument15,
                                                                                                                       class GGS_autoLayoutMultipleBindingGenerationList & outArgument16,
                                                                                                                       class GGS_autolayoutRunBindingForGeneration & outArgument17,
                                                                                                                       class GGS_string & outArgument18,
                                                                                                                       class GGS_autoLayoutViewGraphicControllerBindingGeneration & outArgument19,
                                                                                                                       class Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRegularBinding?prefs???????&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (const class GGS_bool constinArgument0,
                                                                                       const class GGS_propertyMap constinArgument1,
                                                                                       const class GGS_propertyMap constinArgument2,
                                                                                       const class GGS_semanticContext constinArgument3,
                                                                                       const class GGS_propertyMap constinArgument4,
                                                                                       const class GGS_lstring constinArgument5,
                                                                                       const class GGS_regularBindingList constinArgument6,
                                                                                       const class GGS_string constinArgument7,
                                                                                       class GGS_autoLayoutRegularBindingsGenerationList & ioArgument8,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

