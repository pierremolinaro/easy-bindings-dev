#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

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
//Routine 'buildBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap_26__3F_ (class GGS_semanticContext & ioArgument0,
                                                   const class GGS_outletClassBindingSpecificationList constinArgument1,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateCode???'
//
//--------------------------------------------------------------------------------------------------

void routine_generateCode_3F__3F__3F_ (const class GGS_string constinArgument0,
                                       const class GGS_generationStruct constinArgument1,
                                       const class GGS_string constinArgument2,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateStandardProperties???&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateStandardProperties_3F__3F__3F__26_ (const class GGS_string constinArgument0,
                                                         const class GGS_stringlist constinArgument1,
                                                         const class GGS_transientExternTypeList constinArgument2,
                                                         class GGS_stringset & ioArgument3,
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
//Filewrapper 'standard_properties'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_standard_5F_properties ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties scalarProperty'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_standard_5F_properties_scalarProperty (class Compiler * inCompiler,
                                                                      const class GGS_string & in_TYPE,
                                                                      const class GGS_bool & in_TRANSIENT,
                                                                      const class GGS_string & in_COMPARISON_5F_METHOD
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties classProperty'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_standard_5F_properties_classProperty (class Compiler * inCompiler,
                                                                     const class GGS_string & in_CLASS_5F_NAME,
                                                                     const class GGS_bool & in_TRANSIENT
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateClassProperty???transient&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateClassProperty_3F__3F__3F_transient_26_ (const class GGS_string constinArgument0,
                                                             const class GGS_string constinArgument1,
                                                             const class GGS_bool constinArgument2,
                                                             class GGS_stringset & ioArgument3,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateScalarProperty???transient?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (const class GGS_string constinArgument0,
                                                                  const class GGS_string constinArgument1,
                                                                  const class GGS_bool constinArgument2,
                                                                  const class GGS_string constinArgument3,
                                                                  class GGS_stringset & ioArgument4,
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
//Filewrapper 'actionGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_actionGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'actionGenerationTemplate actionGeneration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_actionGenerationTemplate_actionGeneration (class Compiler * inCompiler,
                                                                          const class GGS_string & in_EXTENDED_5F_CLASS_5F_NAME,
                                                                          const class GGS_string & in_ACTION_5F_NAME
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
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (class Compiler * inCompiler,
                                                                             const class GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                             const class GGS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                             const class GGS_bool & in_CASE_5F_ITERABLE
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumEBExtensionGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumEBExtensionGenerationInSwift (class Compiler * inCompiler,
                                                                                        const class GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                        const class GGS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                                        const class GGS_enumFuncMap & in_FUNCTION_5F_MAP
                                                                                        COMMA_LOCATION_ARGS) ;

