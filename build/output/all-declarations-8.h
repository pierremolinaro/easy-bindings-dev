#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'prefsGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_prefsGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'prefsGenerationTemplate preferences'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_prefsGenerationTemplate_preferences (class C_Compiler * inCompiler,
                                                                       const class GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                       const class GALGAS_mainXibDescriptorList & in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST,
                                                                       const class GALGAS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                       const class GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                       const class GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_externSwiftFunctionList & in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST,
                                                                       const class GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                       const class GALGAS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP
                                                                       COMMA_LOCATION_ARGS) ;

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
//Routine 'graphvizRootEntityStrongAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityStrongAnalysis (const class GALGAS_string constinArgument0,
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

void routine_analyzeAutoLayoutRegularBinding (const class GALGAS_bool constinArgument0,
                                              const class GALGAS_propertyMap constinArgument1,
                                              const class GALGAS_propertyMap constinArgument2,
                                              const class GALGAS_semanticContext constinArgument3,
                                              const class GALGAS_propertyMap constinArgument4,
                                              const class GALGAS_lstring constinArgument5,
                                              const class GALGAS_regularBindingList constinArgument6,
                                              const class GALGAS_string constinArgument7,
                                              class GALGAS_autoLayoutRegularBindingsGenerationList & ioArgument8,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildBindingSpecificationMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap (class GALGAS_semanticContext & ioArgument0,
                                           const class GALGAS_outletClassBindingSpecificationList constinArgument1,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRegularBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeRegularBinding (const class GALGAS_propertyMap constinArgument0,
                                    const class GALGAS_propertyMap constinArgument1,
                                    const class GALGAS_semanticContext constinArgument2,
                                    const class GALGAS_propertyMap constinArgument3,
                                    const class GALGAS_lstring constinArgument4,
                                    const class GALGAS_string constinArgument5,
                                    const class GALGAS_regularBindingList constinArgument6,
                                    const class GALGAS_string constinArgument7,
                                    class GALGAS_regularBindingsGenerationList & ioArgument8,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'computedPropertyManager'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_computedPropertyManager ;
extern const cDirectoryWrapper gWrapperDirectory_1_computedPropertyManager ;
extern const cDirectoryWrapper gWrapperDirectory_2_computedPropertyManager ;
extern const cDirectoryWrapper gWrapperDirectory_3_computedPropertyManager ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'computedPropertyManager computedComputationFunctionFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (class C_Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                           const class GALGAS_string & in_COMPUTED_5F_PROPERTY_5F_NAME,
                                                                                           const class GALGAS_typeKind & in_TRANSIENT_5F_TYPE
                                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'transientManager'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_1_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_2_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_3_transientManager ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'transientManager transientComputationFunctionFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (class C_Compiler * inCompiler,
                                                                                     const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                     const class GALGAS_string & in_TRANSIENT_5F_NAME,
                                                                                     const class GALGAS_transientDependencyListForGeneration & in_DEPENDENCY_5F_LIST,
                                                                                     const class GALGAS_typeKind & in_TRANSIENT_5F_TYPE,
                                                                                     const class GALGAS_string & in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX
                                                                                     COMMA_LOCATION_ARGS) ;

