#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

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
//Filewrapper 'entityGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (class Compiler * inCompiler,
                                                                                     const class GGS_string & in_ENTITY_5F_NAME,
                                                                                     const class GGS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                     const class GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GGS_stringset & in_USED_5F_PROTOCOL_5F_SET,
                                                                                     const class GGS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GGS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const class GGS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const class GGS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                     const class GGS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                     const class GGS_stringset & in_SIGNATURE_5F_SET,
                                                                                     const class GGS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                     const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                     const class GGS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                     const class GGS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const class GGS_bool & in_HAS_5F_SUB_5F_ENTITY,
                                                                                     const class GGS_bool & in_OPTION_5F_CanCopyAndPaste,
                                                                                     const class GGS_bool & in_OPTION_5F_CannotBeDeleted,
                                                                                     const class GGS_bool & in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToManyImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (class Compiler * inCompiler,
                                                                                           const class GGS_string & in_ENTITY_5F_NAME,
                                                                                           const class GGS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                           const class GGS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                           const class GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const class GGS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const class GGS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const class GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const class GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const class GGS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const class GGS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                           const class GGS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                           const class GGS_stringset & in_SIGNATURE_5F_SET,
                                                                                           const class GGS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                           const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                           const class GGS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                           const class GGS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOf_5F_,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_,
                                                                                           const class GGS_stringset & in_USED_5F_PROTOCOL_5F_SET
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToOneImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (class Compiler * inCompiler,
                                                                                          const class GGS_string & in_ENTITY_5F_NAME,
                                                                                          const class GGS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                          const class GGS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                          const class GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const class GGS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const class GGS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const class GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const class GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                          const class GGS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                          const class GGS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                          const class GGS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                          const class GGS_stringset & in_SIGNATURE_5F_SET,
                                                                                          const class GGS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                          const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                          const class GGS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                          const class GGS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate managedObjectFactory'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (class Compiler * inCompiler,
                                                                              const class GGS_entityListForGeneratingEBManagedObjectContext & in_ENTITY_5F_LIST
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateEBManagedObjectContext??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateEBManagedObjectContext_3F__3F__26_ (const class GGS_entityListForGeneratingEBManagedObjectContext constinArgument0,
                                                         const class GGS_string constinArgument1,
                                                         class GGS_stringset & ioArgument2,
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
//Routine 'graphvizAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizAnalysis_3F__3F__3F_ (const class GGS_string constinArgument0,
                                           const class GGS_semanticContext constinArgument1,
                                           const class GGS_lstringlist constinArgument2,
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
//Routine 'buildAutoLayoutBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (class GGS_semanticContext & ioArgument0,
                                                             const class GGS_autoLayoutViewClassBindingSpecificationList constinArgument1,
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
//Routine 'analyzeRegularBinding????????&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (const class GGS_propertyMap constinArgument0,
                                                                        const class GGS_propertyMap constinArgument1,
                                                                        const class GGS_semanticContext constinArgument2,
                                                                        const class GGS_propertyMap constinArgument3,
                                                                        const class GGS_lstring constinArgument4,
                                                                        const class GGS_string constinArgument5,
                                                                        const class GGS_regularBindingList constinArgument6,
                                                                        const class GGS_string constinArgument7,
                                                                        class GGS_regularBindingsGenerationList & ioArgument8,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'computedPropertyManager'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_computedPropertyManager ;
extern const cDirectoryWrapper gWrapperDirectory_1_computedPropertyManager ;
extern const cDirectoryWrapper gWrapperDirectory_2_computedPropertyManager ;
extern const cDirectoryWrapper gWrapperDirectory_3_computedPropertyManager ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'computedPropertyManager computedComputationFunctionFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (class Compiler * inCompiler,
                                                                                        const class GGS_string & in_OWNER_5F_NAME,
                                                                                        const class GGS_string & in_COMPUTED_5F_PROPERTY_5F_NAME,
                                                                                        const class GGS_typeKind & in_TRANSIENT_5F_TYPE
                                                                                        COMMA_LOCATION_ARGS) ;

