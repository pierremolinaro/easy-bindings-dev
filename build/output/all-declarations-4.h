#ifndef all_2D_declarations_2D__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

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
                                                                         const class GALGAS_string & in_TO_5F_NSNUMBER,
                                                                         const class GALGAS_string & in_SIGNATURE
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

#endif
