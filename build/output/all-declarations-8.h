#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

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

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'validationStubExtension'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'validationStubExtension actionGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_validationStubExtension_actionGeneration (class C_Compiler * inCompiler,
                                                                            const class GALGAS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_MODEL_5F_NAME,
                                                                            const class GALGAS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateValidationRoutineStubs'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateValidationRoutineStubs (const class GALGAS_string constinArgument0,
                                             const class GALGAS_validationStubRoutineListForGeneration constinArgument1,
                                             class GALGAS_stringset & ioArgument2,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'actionGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_actionGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'actionGenerationTemplate actionGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_actionGenerationTemplate_actionGeneration (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_EXTENDED_5F_CLASS_5F_NAME,
                                                                             const class GALGAS_string & in_ACTION_5F_NAME
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayControllerGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_arrayControllerGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayControllerGenerationTemplate arrayControllerImplementationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (class C_Compiler * inCompiler,
                                                                                                          const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                                          const class GALGAS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                                          const class GALGAS_arrayControllerModelKind & in_MODEL_5F_KIND,
                                                                                                          const class GALGAS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                          const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                          const class GALGAS_bool & in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC
                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutTableViewControllerGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_autoLayoutTableViewControllerGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutTableViewControllerGenerationTemplate autoLayoutTableViewControllerImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutTableViewControllerGenerationTemplate_autoLayoutTableViewControllerImplementation (class C_Compiler * inCompiler,
                                                                                                                               const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                                                               const class GALGAS_string & in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME,
                                                                                                                               const class GALGAS_string & in_MODEL_5F_STRING,
                                                                                                                               const class GALGAS_autoLayoutTableViewControllerModelKind & in_MODEL_5F_KIND,
                                                                                                                               const class GALGAS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                                               const class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_BOUND_5F_COLUMNS,
                                                                                                                               const class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_SORTED_5F_COLUMNS,
                                                                                                                               const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                               const class GALGAS_stringset & in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING,
                                                                                                                               const class GALGAS__32_stringlist & in_ATTRIBUTE_5F_VALUES
                                                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'selectionControllerGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_selectionControllerGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate baseSelectionControllerImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (class C_Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                                               const class GALGAS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                               const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const class GALGAS_propertyMap & in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP
                                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate derivedSelectionControllerImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (class C_Compiler * inCompiler,
                                                                                                                  const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                                                  const class GALGAS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                                  const class GALGAS_string & in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                  const class GALGAS_string & in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                  const class GALGAS_propertyGenerationList & in_PROPERTY_5F_GENERATION_5F_LIST,
                                                                                                                  const class GALGAS_bool & in_HAS_5F_ATOMIC_5F_PROPERTIES
                                                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateSelectionControllers'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateSelectionControllers (const class GALGAS_selectionControllerForGeneration constinArgument0,
                                           const class GALGAS_string constinArgument1,
                                           class GALGAS_stringset & ioArgument2,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'predefinedDates'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset function_predefinedDates (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'predefinedColors'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset function_predefinedColors (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateCode (const class GALGAS_string constinArgument0,
                           const class GALGAS_generationStruct constinArgument1,
                           const class GALGAS_string constinArgument2,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateStandardProperties'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateStandardProperties (const class GALGAS_string constinArgument0,
                                         const class GALGAS_stringlist constinArgument1,
                                         const class GALGAS_transientExternTypeList constinArgument2,
                                         class GALGAS_stringset & ioArgument3,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateTestFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateTestFile (const class GALGAS_string constinArgument0,
                               const class GALGAS_string constinArgument1,
                               const class GALGAS_mainXibDescriptorList constinArgument2,
                               const class GALGAS_string constinArgument3,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProject'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateXcodeProject (const class GALGAS_string constinArgument0,
                                   const class GALGAS_string constinArgument1,
                                   const class GALGAS_stringset constinArgument2,
                                   const class GALGAS_string constinArgument3,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'standard_properties'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_standard_5F_properties ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties stub'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_standard_5F_properties_stub (class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties scalarProperty'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_standard_5F_properties_scalarProperty (class C_Compiler * inCompiler,
                                                                         const class GALGAS_string & in_TYPE,
                                                                         const class GALGAS_bool & in_TRANSIENT,
                                                                         const class GALGAS_string & in_COMPARISON_5F_METHOD
                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties classProperty'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_standard_5F_properties_classProperty (class C_Compiler * inCompiler,
                                                                        const class GALGAS_string & in_CLASS_5F_NAME,
                                                                        const class GALGAS_bool & in_COMPARABLE,
                                                                        const class GALGAS_bool & in_TRANSIENT
                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProjectInternal'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateXcodeProjectInternal (const class GALGAS_string constinArgument0,
                                           const class GALGAS_string constinArgument1,
                                           const class GALGAS_stringset constinArgument2,
                                           const class GALGAS_string constinArgument3,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'additionalXcodeFiles'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_additionalXcodeFiles ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles main_xib'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_additionalXcodeFiles_main_5F_xib (class C_Compiler * inCompiler,
                                                                    const class GALGAS_string & in_PROJECT_5F_NAME
                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles info_plist'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_additionalXcodeFiles_info_5F_plist (class C_Compiler * inCompiler,
                                                                      const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                      const class GALGAS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                      const class GALGAS_string & in_VERSION_5F_STRING,
                                                                      const class GALGAS_stringset & in_HANDLED_5F_EXTENSION_5F_SET
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles build_command'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_additionalXcodeFiles_build_5F_command (class C_Compiler * inCompiler,
                                                                         const class GALGAS_string & in_PROJECT_5F_NAME
                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'testFiles'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_testFiles ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'testFiles test_py'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_testFiles_test_5F_py (class C_Compiler * inCompiler,
                                                        const class GALGAS_string & in_BUNDLE_5F_IDENTIFIER,
                                                        const class GALGAS_string & in_PROJECT_5F_NAME,
                                                        const class GALGAS_stringlist & in_OUTLET_5F_IDENTIFIER_5F_LIST
                                                        COMMA_LOCATION_ARGS) ;

