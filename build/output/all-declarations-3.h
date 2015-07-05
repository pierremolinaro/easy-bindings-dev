#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'validationStubExtension'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_4_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_5_validationStubExtension ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'validationStubExtension actionGeneration'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_validationStubExtension_actionGeneration (class C_Compiler * inCompiler,
                                                                            const class GALGAS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_MODEL_5F_NAME,
                                                                            const class GALGAS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'generateValidationRoutineStubs'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateValidationRoutineStubs (const class GALGAS_string constinArgument0,
                                             const class GALGAS_validationStubRoutineListForGeneration constinArgument1,
                                             class GALGAS_stringset & ioArgument2,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'buildActionMap'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildActionMap (const class GALGAS_lstringlist constinArgument0,
                             class GALGAS_actionMap & outArgument1,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'generateActions'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateActions (const class GALGAS_string constinArgument0,
                              const class GALGAS_actionListForGeneration constinArgument1,
                              class GALGAS_stringset & ioArgument2,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'actionGenerationTemplate'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_actionGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'actionGenerationTemplate actionGeneration'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_actionGenerationTemplate_actionGeneration (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_EXTENDED_5F_CLASS_5F_NAME,
                                                                             const class GALGAS_string & in_ACTION_5F_NAME
                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Filewrapper 'collectionControllerGenerationTemplate'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_collectionControllerGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Filewrapper template 'collectionControllerGenerationTemplate arrayControllerImplementationInSwift'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_collectionControllerGenerationTemplate_arrayControllerImplementationInSwift (class C_Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                                               const class GALGAS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                                               const class GALGAS_arrayControllerFilterListForGeneration & in_FILTER_5F_PROPERTIES,
                                                                                                               const class GALGAS_string & in_MODEL_5F_STRING,
                                                                                                               const class GALGAS_arrayControllerModelKind & in_MODEL_5F_KIND,
                                                                                                               const class GALGAS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                               const class GALGAS_string & in_MODEL_5F_TYPE_5F_NAME_5F__32_,
                                                                                                               const class GALGAS_arrayControllerBoundColumnListForGeneration & in_BOUND_5F_COLUMNS,
                                                                                                               const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME
                                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'collectionControllerGenerationTemplate filterFunction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_collectionControllerGenerationTemplate_filterFunction (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                         const class GALGAS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                         const class GALGAS_arrayControllerFilterListForGeneration & in_FILTER_5F_PROPERTIES
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category Getter '@arrayControllerFilterListForGeneration filterCode' (as function)                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_filterCode (const class GALGAS_arrayControllerFilterListForGeneration & inObject,
                                               const class GALGAS_string & constinArgument0,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateArrayControllers'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateArrayControllers (const class GALGAS_arrayControllerForGeneration constinArgument0,
                                       const class GALGAS_string constinArgument1,
                                       class GALGAS_stringset & ioArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Filewrapper 'selectionControllerGenerationTemplate'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_selectionControllerGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_selectionControllerGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_selectionControllerGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_selectionControllerGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_selectionControllerGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_selectionControllerGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_selectionControllerGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_selectionControllerGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'selectionControllerGenerationTemplate selectionControllerImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_selectionControllerGenerationTemplate_selectionControllerImplementation (class C_Compiler * inCompiler,
                                                                                                           const class GALGAS_string & in_OWNER_5F_NAME,
                                                                                                           const class GALGAS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                           const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                           const class GALGAS_observablePropertyMap & in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'generateSelectionControllers'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSelectionControllers (const class GALGAS_selectionControllerForGeneration constinArgument0,
                                           const class GALGAS_string constinArgument1,
                                           class GALGAS_stringset & ioArgument2,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'predefinedColors'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset function_predefinedColors (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'predefinedDates'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset function_predefinedDates (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'typeInventory'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_typeInventory (const class GALGAS_lstring constinArgument0,
                            const class GALGAS_astDeclarationList constinArgument1,
                            class GALGAS_unifiedTypeMap & outArgument2,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract category method '@astDeclaration typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_astDeclaration_typeInventory) (const class cPtr_astDeclaration * inObject,
                                                                      class GALGAS_unifiedTypeMap & ioArgument0,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_typeInventory (const int32_t inClassIndex,
                                        categoryMethodSignature_astDeclaration_typeInventory inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_typeInventory (const class cPtr_astDeclaration * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const class GALGAS_unifiedTypeMap constinArgument0,
                               const class GALGAS_string constinArgument1,
                               const class GALGAS_astDeclarationStruct constinArgument2,
                               class GALGAS_structForGeneration & outArgument3,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@astDeclaration buildInitialSecondaryPropertyListMap'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap) (const class cPtr_astDeclaration * inObject,
                                                                                             class GALGAS_secondaryDeclarationListWorkingList & ioArgument0,
                                                                                             class GALGAS_uint & ioArgument1,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildInitialSecondaryPropertyListMap (const int32_t inClassIndex,
                                                               categoryMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildInitialSecondaryPropertyListMap (const class cPtr_astDeclaration * inObject,
                                                              GALGAS_secondaryDeclarationListWorkingList & io_ioSecondaryDeclarationListWorkingList,
                                                              GALGAS_uint & io_ioSecondaryDeclarationCount,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Abstract category method '@astDeclaration buildObservablePropertyMapsFromStoredProperties'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties) (const class cPtr_astDeclaration * inObject,
                                                                                                        const class GALGAS_unifiedTypeMap constinArgument0,
                                                                                                        class GALGAS_semanticContext & ioArgument1,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildObservablePropertyMapsFromStoredProperties (const int32_t inClassIndex,
                                                                          categoryMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildObservablePropertyMapsFromStoredProperties (const class cPtr_astDeclaration * inObject,
                                                                         const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                                         GALGAS_semanticContext & io_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract category method '@astDeclaration semanticAnalysis'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_astDeclaration_semanticAnalysis) (const class cPtr_astDeclaration * inObject,
                                                                         const class GALGAS_semanticContext constinArgument0,
                                                                         class GALGAS_structForGeneration & ioArgument1,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_astDeclaration_semanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const class cPtr_astDeclaration * inObject,
                                          const GALGAS_semanticContext constin_inSemanticContext,
                                          GALGAS_structForGeneration & io_ioGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@astDeclaration solveSecondaryProperty'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_astDeclaration_solveSecondaryProperty) (const class cPtr_astDeclaration * inObject,
                                                                               class GALGAS_semanticContext & ioArgument0,
                                                                               const class GALGAS_unifiedTypeMap constinArgument1,
                                                                               const class GALGAS_secondaryPropertyList constinArgument2,
                                                                               class GALGAS_secondaryPropertyList & outArgument3,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_solveSecondaryProperty (const int32_t inClassIndex,
                                                 categoryMethodSignature_astDeclaration_solveSecondaryProperty inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_solveSecondaryProperty (const class cPtr_astDeclaration * inObject,
                                                GALGAS_semanticContext & io_ioSemanticContext,
                                                const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                const GALGAS_secondaryPropertyList constin_inPropertiesToSolve,
                                                GALGAS_secondaryPropertyList & out_outUnsolvedProperties,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@outletClassDeclarationList buildOutletClassMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildOutletClassMap (const class GALGAS_outletClassDeclarationList inObject,
                                         class GALGAS_outletClassMap & out_outOutletClassMap,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@prefDeclaration buildObservablePropertyMapsFromStoredProperties'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMapsFromStoredProperties (const class GALGAS_prefDeclaration inObject,
                                                                     const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                                     class GALGAS_semanticContext & io_ioSemanticContext,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@prefDeclaration semanticAnalysis'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_prefDeclaration inObject,
                                      const class GALGAS_externSwiftFunctionList constin_inExternSwiftFunctionList,
                                      const class GALGAS_semanticContext constin_inSemanticContext,
                                      class GALGAS_structForGeneration & io_ioGeneration,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@prefDeclaration solveSecondaryProperty'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_solveSecondaryProperty (const class GALGAS_prefDeclaration inObject,
                                            class GALGAS_semanticContext & io_ioSemanticContext,
                                            const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                            const class GALGAS_secondaryPropertyList constin_inPropertiesToSolve,
                                            class GALGAS_secondaryPropertyList & out_outUnsolvedProperties,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'generateCode'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCode (const class GALGAS_string constinArgument0,
                           const class GALGAS_structForGeneration constinArgument1,
                           const class GALGAS_string constinArgument2,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'generateStandardProperties'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateStandardProperties (const class GALGAS_string constinArgument0,
                                         class GALGAS_stringset & ioArgument1,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'generateSwiftApplicationFiles'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSwiftApplicationFiles (const class GALGAS_string constinArgument0,
                                            const class GALGAS_bool constinArgument1,
                                            class GALGAS_stringset & ioArgument2,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateTestFile'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateTestFile (const class GALGAS_string constinArgument0,
                               const class GALGAS_string constinArgument1,
                               const class GALGAS_mainXibDescriptorList constinArgument2,
                               const class GALGAS_string constinArgument3,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'generateXcodeProject'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateXcodeProject (const class GALGAS_string constinArgument0,
                                   const class GALGAS_string constinArgument1,
                                   const class GALGAS_stringset constinArgument2,
                                   const class GALGAS_string constinArgument3,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Filewrapper 'standard_properties'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_standard_5F_properties ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Filewrapper template 'standard_properties stub'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_standard_5F_properties_stub (class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Filewrapper template 'standard_properties scalarProperty'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_standard_5F_properties_scalarProperty (class C_Compiler * inCompiler,
                                                                         const class GALGAS_string & in_TYPE,
                                                                         const class GALGAS_string & in_TO_5F_NSNUMBER
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Filewrapper template 'standard_properties classProperty'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_standard_5F_properties_classProperty (class C_Compiler * inCompiler,
                                                                        const class GALGAS_string & in_CLASS_5F_NAME,
                                                                        const class GALGAS_string & in_EXPLORER_5F_ACCESS,
                                                                        const class GALGAS_bool & in_USE_5F_ARCHIVER
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'generateXcodeProjectInternal'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateXcodeProjectInternal (const class GALGAS_string constinArgument0,
                                           const class GALGAS_string constinArgument1,
                                           const class GALGAS_stringset constinArgument2,
                                           const class GALGAS_string constinArgument3,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Filewrapper 'additionalXcodeFiles'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_additionalXcodeFiles ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Filewrapper template 'additionalXcodeFiles main_xib'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_additionalXcodeFiles_main_5F_xib (class C_Compiler * inCompiler,
                                                                    const class GALGAS_string & in_PROJECT_5F_NAME
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Filewrapper template 'additionalXcodeFiles info_plist'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_additionalXcodeFiles_info_5F_plist (class C_Compiler * inCompiler,
                                                                      const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                      const class GALGAS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                      const class GALGAS_string & in_VERSION_5F_STRING,
                                                                      const class GALGAS_stringset & in_HANDLED_5F_EXTENSION_5F_SET
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Filewrapper template 'additionalXcodeFiles build_command'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_additionalXcodeFiles_build_5F_command (class C_Compiler * inCompiler,
                                                                         const class GALGAS_string & in_PROJECT_5F_NAME
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@XcodeProjectDescriptor generateAtPath'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateAtPath (const class GALGAS_XcodeProjectDescriptor inObject,
                                    const class GALGAS_string constin_inPath,
                                    const class GALGAS_string constin_inCacheFilePath,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addAppTarget'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addAppTarget (class GALGAS_XcodeProjectDescriptor & ioObject,
                                    const class GALGAS_string constin_inTargetName,
                                    const class GALGAS_string constin_inProductFileName,
                                    const class GALGAS_stringlist constin_inSourceList,
                                    const class GALGAS_stringlist constin_inFrameworksFileRefList,
                                    const class GALGAS_stringlist constin_inResourceFileBuildRefs,
                                    const class GALGAS_stringlist constin_inBuildConfigurationSettingList,
                                    const class GALGAS_stringlist constin_inDependentTargetRefList,
                                    const class GALGAS__32_stringlist constin_inProductCopyList,
                                    const class GALGAS_string constin_inInfoPList,
                                    class GALGAS_string & out_outProductFileRef,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category setter '@XcodeProjectDescriptor addGroupWithFiles'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addGroupWithFiles (class GALGAS_XcodeProjectDescriptor & ioObject,
                                         const class GALGAS_string constin_inGroupName,
                                         const class GALGAS_string constin_inGroupPath,
                                         const class GALGAS_stringset constin_inFileNames,
                                         class GALGAS_stringlist & io_ioCppFileBuildRefs,
                                         class GALGAS_stringlist & io_ioMFileBuildRefs,
                                         class GALGAS_stringlist & io_ioMMFileBuildRefs,
                                         class GALGAS_stringlist & io_ioSwiftFileBuildRefs,
                                         class GALGAS_stringlist & io_ioFrameWorkFileBuildRefs,
                                         class GALGAS_stringlist & io_ioResourceFileBuildRefs,
                                         class GALGAS_string & out_outGroupRef,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category setter '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addSettingsToDefaultConfiguration (class GALGAS_XcodeProjectDescriptor & ioObject,
                                                         const class GALGAS_stringlist constin_inSettingList,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category setter '@XcodeProjectDescriptor placeGroupAsMainGroup'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_placeGroupAsMainGroup (class GALGAS_XcodeProjectDescriptor & ioObject,
                                             const class GALGAS_string constin_inGroupRef,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @XcodeProjectDescriptor struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_XcodeProjectDescriptor : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_string mAttribute_mMainGroupReference ;
  public : GALGAS_stringlist mAttribute_mMainGroupChildrenRefs ;
  public : GALGAS_string mAttribute_mProjectObjectReference ;
  public : GALGAS_XCodeGroupList mAttribute_mGroupList ;
  public : GALGAS_XCodeToolTargetList mAttribute_mToolTargetList ;
  public : GALGAS_XCodeAppTargetList mAttribute_mAppTargetList ;
  public : GALGAS__32_stringlist mAttribute_mCppFileList ;
  public : GALGAS__32_stringlist mAttribute_m_5F_M_5F_FileList ;
  public : GALGAS__32_stringlist mAttribute_m_5F_MM_5F_FileList ;
  public : GALGAS__32_stringlist mAttribute_m_5F_SwiftFileList ;
  public : GALGAS__32_stringlist mAttribute_mFrameworkFileList ;
  public : GALGAS__32_stringlist mAttribute_mHeaderFileList ;
  public : GALGAS_BuildFileList mAttribute_mBuildFileList ;
  public : GALGAS_string mAttribute_mDefaultConfigurationRef ;
  public : GALGAS_stringlist mAttribute_mDefaultConfigurationSettingList ;
  public : GALGAS_string mAttribute_mProjectBuildConfigurationRef ;
  public : GALGAS__32_stringlist mAttribute_mInfoPlistFileList ;
  public : GALGAS__32_stringlist mAttribute_mXIB_5F_fileList ;
  public : GALGAS__32_stringlist mAttribute_mTIFF_5F_fileList ;
  public : GALGAS__32_stringlist mAttribute_mICNS_5F_fileList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XcodeProjectDescriptor constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XcodeProjectDescriptor (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_XcodeProjectDescriptor (void) ;

//--------------------------------- Native constructor
  public : GALGAS_XcodeProjectDescriptor (const GALGAS_uint & in_mSequenceNumber,
                                          const GALGAS_string & in_mMainGroupReference,
                                          const GALGAS_stringlist & in_mMainGroupChildrenRefs,
                                          const GALGAS_string & in_mProjectObjectReference,
                                          const GALGAS_XCodeGroupList & in_mGroupList,
                                          const GALGAS_XCodeToolTargetList & in_mToolTargetList,
                                          const GALGAS_XCodeAppTargetList & in_mAppTargetList,
                                          const GALGAS__32_stringlist & in_mCppFileList,
                                          const GALGAS__32_stringlist & in_m_5F_M_5F_FileList,
                                          const GALGAS__32_stringlist & in_m_5F_MM_5F_FileList,
                                          const GALGAS__32_stringlist & in_m_5F_SwiftFileList,
                                          const GALGAS__32_stringlist & in_mFrameworkFileList,
                                          const GALGAS__32_stringlist & in_mHeaderFileList,
                                          const GALGAS_BuildFileList & in_mBuildFileList,
                                          const GALGAS_string & in_mDefaultConfigurationRef,
                                          const GALGAS_stringlist & in_mDefaultConfigurationSettingList,
                                          const GALGAS_string & in_mProjectBuildConfigurationRef,
                                          const GALGAS__32_stringlist & in_mInfoPlistFileList,
                                          const GALGAS__32_stringlist & in_mXIB_5F_fileList,
                                          const GALGAS__32_stringlist & in_mTIFF_5F_fileList,
                                          const GALGAS__32_stringlist & in_mICNS_5F_fileList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XcodeProjectDescriptor extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_XcodeProjectDescriptor constructor_new (const class GALGAS_uint & inOperand0,
                                                                 const class GALGAS_string & inOperand1,
                                                                 const class GALGAS_stringlist & inOperand2,
                                                                 const class GALGAS_string & inOperand3,
                                                                 const class GALGAS_XCodeGroupList & inOperand4,
                                                                 const class GALGAS_XCodeToolTargetList & inOperand5,
                                                                 const class GALGAS_XCodeAppTargetList & inOperand6,
                                                                 const class GALGAS__32_stringlist & inOperand7,
                                                                 const class GALGAS__32_stringlist & inOperand8,
                                                                 const class GALGAS__32_stringlist & inOperand9,
                                                                 const class GALGAS__32_stringlist & inOperand10,
                                                                 const class GALGAS__32_stringlist & inOperand11,
                                                                 const class GALGAS__32_stringlist & inOperand12,
                                                                 const class GALGAS_BuildFileList & inOperand13,
                                                                 const class GALGAS_string & inOperand14,
                                                                 const class GALGAS_stringlist & inOperand15,
                                                                 const class GALGAS_string & inOperand16,
                                                                 const class GALGAS__32_stringlist & inOperand17,
                                                                 const class GALGAS__32_stringlist & inOperand18,
                                                                 const class GALGAS__32_stringlist & inOperand19,
                                                                 const class GALGAS__32_stringlist & inOperand20
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_XcodeProjectDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList reader_mAppTargetList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_BuildFileList reader_mBuildFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mCppFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDefaultConfigurationRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mDefaultConfigurationSettingList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mFrameworkFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList reader_mGroupList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mHeaderFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mICNS_5F_fileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mInfoPlistFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mMainGroupChildrenRefs (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mMainGroupReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProjectBuildConfigurationRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProjectObjectReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mTIFF_5F_fileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList reader_mToolTargetList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mXIB_5F_fileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_m_5F_MM_5F_FileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_m_5F_M_5F_FileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_m_5F_SwiftFileList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XcodeProjectDescriptor class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Filewrapper 'xcodeProjectGenerationFilewrapper'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_PROJECT_5F_REF,
                                                                               const class GALGAS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                               const class GALGAS_XCodeGroupList & in_GROUPS,
                                                                               const class GALGAS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                               const class GALGAS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                               const class GALGAS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                               const class GALGAS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                               const class GALGAS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                               const class GALGAS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                               const class GALGAS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Filewrapper 'testFiles'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_testFiles ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper template 'testFiles test_py'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_testFiles_test_5F_py (class C_Compiler * inCompiler,
                                                        const class GALGAS_string & in_BUNDLE_5F_IDENTIFIER,
                                                        const class GALGAS_string & in_PROJECT_5F_NAME,
                                                        const class GALGAS_stringlist & in_OUTLET_5F_IDENTIFIER_5F_LIST
                                                        COMMA_LOCATION_ARGS) ;

#endif
