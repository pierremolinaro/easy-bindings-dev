#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-5.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'generateOutletClasses'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateOutletClasses (const class GALGAS_stringset constinArgument0,
                                    const class GALGAS_string constinArgument1,
                                    class GALGAS_stringset & ioArgument2,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'buildBindingSpecificationMap'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildBindingSpecificationMap (const class GALGAS_unifiedTypeMap constinArgument0,
                                           const class GALGAS_outletClassMap constinArgument1,
                                           const class GALGAS_outletClassBindingSpecificationList constinArgument2,
                                           class GALGAS_bindingSpecificationMap & outArgument3,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'analyzeRegularBinding'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeRegularBinding (const class GALGAS_observablePropertyMap constinArgument0,
                                    const class GALGAS_semanticContext constinArgument1,
                                    const class GALGAS_observablePropertyMap constinArgument2,
                                    const class GALGAS_lstring constinArgument3,
                                    const class GALGAS_string constinArgument4,
                                    const class GALGAS_regularBindingList constinArgument5,
                                    const class GALGAS_string constinArgument6,
                                    class GALGAS_regularBindingsGenerationList & ioArgument7,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'generateTransients'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateTransients (const class GALGAS_string constinArgument0,
                                 const class GALGAS_transientDefinitionListForGeneration constinArgument1,
                                 class GALGAS_stringset & ioArgument2,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Filewrapper 'transientManager'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_1_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_2_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_3_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_4_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_5_transientManager ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Filewrapper template 'transientManager transientComputationFunctionFile'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (class C_Compiler * inCompiler,
                                                                                     const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                     const class GALGAS_string & in_TRANSIENT_5F_NAME,
                                                                                     const class GALGAS_bool & in_IS_5F_ARRAY,
                                                                                     const class GALGAS_transientDependencyListForGeneration & in_DEPENDENCY_5F_LIST,
                                                                                     const class GALGAS_typeKind & in_TRANSIENT_5F_TYPE
                                                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'validationStubExtension'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_4_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_5_validationStubExtension ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Filewrapper template 'validationStubExtension actionGeneration'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_validationStubExtension_actionGeneration (class C_Compiler * inCompiler,
                                                                            const class GALGAS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_MODEL_5F_NAME,
                                                                            const class GALGAS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'generateValidationRoutineStubs'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateValidationRoutineStubs (const class GALGAS_string constinArgument0,
                                             const class GALGAS_validationStubRoutineListForGeneration constinArgument1,
                                             class GALGAS_stringset & ioArgument2,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'generateActions'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateActions (const class GALGAS_string constinArgument0,
                              const class GALGAS_actionListForGeneration constinArgument1,
                              class GALGAS_stringset & ioArgument2,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Filewrapper 'actionGenerationTemplate'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_actionGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Filewrapper template 'actionGenerationTemplate actionGeneration'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_actionGenerationTemplate_actionGeneration (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_EXTENDED_5F_CLASS_5F_NAME,
                                                                             const class GALGAS_string & in_ACTION_5F_NAME
                                                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Filewrapper 'collectionControllerGenerationTemplate'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_collectionControllerGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Filewrapper template 'collectionControllerGenerationTemplate arrayControllerImplementationInSwift'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_collectionControllerGenerationTemplate_arrayControllerImplementationInSwift (class C_Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                                               const class GALGAS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                                               const class GALGAS_arrayControllerFilterListForGeneration & in_FILTER_5F_PROPERTIES,
                                                                                                               const class GALGAS_string & in_MODEL_5F_STRING,
                                                                                                               const class GALGAS_arrayControllerModelKind & in_MODEL_5F_KIND,
                                                                                                               const class GALGAS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                               const class GALGAS_arrayControllerBoundColumnListForGeneration & in_BOUND_5F_COLUMNS,
                                                                                                               const class GALGAS_arrayControllerSortedColumnListForGeneration & in_SORTED_5F_COLUMNS,
                                                                                                               const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const class GALGAS_bool & in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC,
                                                                                                               const class GALGAS_stringset & in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING_5F_AND_5F_FILERING,
                                                                                                               const class GALGAS__32_stringlist & in_ATTRIBUTE_5F_VALUES
                                                                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Filewrapper template 'collectionControllerGenerationTemplate filterFunction'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_collectionControllerGenerationTemplate_filterFunction (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                         const class GALGAS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                         const class GALGAS_arrayControllerFilterListForGeneration & in_FILTER_5F_PROPERTIES
                                                                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'generateArrayControllers'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateArrayControllers (const class GALGAS_arrayControllerForGeneration constinArgument0,
                                       const class GALGAS_string constinArgument1,
                                       class GALGAS_stringset & ioArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Filewrapper 'selectionControllerGenerationTemplate'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_selectionControllerGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Filewrapper template 'selectionControllerGenerationTemplate selectionControllerImplementation'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_selectionControllerGenerationTemplate_selectionControllerImplementation (class C_Compiler * inCompiler,
                                                                                                           const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                                           const class GALGAS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                           const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                           const class GALGAS_observablePropertyMap & in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP
                                                                                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'generateSelectionControllers'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateSelectionControllers (const class GALGAS_selectionControllerForGeneration constinArgument0,
                                           const class GALGAS_string constinArgument1,
                                           class GALGAS_stringset & ioArgument2,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Function 'predefinedDates'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_stringset function_predefinedDates (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Function 'predefinedColors'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_stringset function_predefinedColors (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Routine 'typeInventory'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_typeInventory (const class GALGAS_lstring constinArgument0,
                            const class GALGAS_astDeclarationList constinArgument1,
                            class GALGAS_unifiedTypeMap & outArgument2,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_semanticAnalysis (const class GALGAS_unifiedTypeMap constinArgument0,
                               const class GALGAS_string constinArgument1,
                               const class GALGAS_astDeclarationStruct constinArgument2,
                               class GALGAS_structForGeneration & outArgument3,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Routine 'generateCode'                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateCode (const class GALGAS_string constinArgument0,
                           const class GALGAS_structForGeneration constinArgument1,
                           const class GALGAS_string constinArgument2,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'generateStandardProperties'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateStandardProperties (const class GALGAS_string constinArgument0,
                                         const class GALGAS_stringlist constinArgument1,
                                         const class GALGAS_transientExternTypeList constinArgument2,
                                         class GALGAS_stringset & ioArgument3,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'generateSwiftApplicationFiles'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateSwiftApplicationFiles (const class GALGAS_string constinArgument0,
                                            const class GALGAS_bool constinArgument1,
                                            class GALGAS_stringset & ioArgument2,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'generateTestFile'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateTestFile (const class GALGAS_string constinArgument0,
                               const class GALGAS_string constinArgument1,
                               const class GALGAS_mainXibDescriptorList constinArgument2,
                               const class GALGAS_string constinArgument3,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'generateXcodeProject'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateXcodeProject (const class GALGAS_string constinArgument0,
                                   const class GALGAS_string constinArgument1,
                                   const class GALGAS_stringset constinArgument2,
                                   const class GALGAS_string constinArgument3,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

