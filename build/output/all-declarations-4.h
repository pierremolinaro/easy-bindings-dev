#ifndef all_2D_declarations_2D__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@abstractSecondaryProperty typeInventory'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractSecondaryProperty_typeInventory) (const class cPtr_abstractSecondaryProperty * inObject,
                                                                                 class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_typeInventory (const int32_t inClassIndex,
                                        categoryMethodSignature_abstractSecondaryProperty_typeInventory inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_typeInventory (const class cPtr_abstractSecondaryProperty * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Abstract category method '@abstractSecondaryProperty secondaryPropertySemanticAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractSecondaryProperty_secondaryPropertySemanticAnalysis) (const class cPtr_abstractSecondaryProperty * inObject,
                                                                                                     const class GALGAS_string constinArgument0,
                                                                                                     const class GALGAS_string constinArgument1,
                                                                                                     const class GALGAS_observablePropertyMap constinArgument2,
                                                                                                     const class GALGAS_semanticContext constinArgument3,
                                                                                                     const class GALGAS_observablePropertyMap constinArgument4,
                                                                                                     class GALGAS_transientDefinitionListForGeneration & ioArgument5,
                                                                                                     class GALGAS_arrayControllerForGeneration & ioArgument6,
                                                                                                     class GALGAS_selectionControllerForGeneration & ioArgument7,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_secondaryPropertySemanticAnalysis (const int32_t inClassIndex,
                                                            categoryMethodSignature_abstractSecondaryProperty_secondaryPropertySemanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_secondaryPropertySemanticAnalysis (const class cPtr_abstractSecondaryProperty * inObject,
                                                           const GALGAS_string constin_inOwnerName,
                                                           const GALGAS_string constin_inRootEntityName,
                                                           const GALGAS_observablePropertyMap constin_inRootObservableProperties,
                                                           const GALGAS_semanticContext constin_inSemanticContext,
                                                           const GALGAS_observablePropertyMap constin_inObservableProperties,
                                                           GALGAS_transientDefinitionListForGeneration & io_ioTransientDefinitionListForGeneration,
                                                           GALGAS_arrayControllerForGeneration & io_ioArrayControllerForGeneration,
                                                           GALGAS_selectionControllerForGeneration & io_ioSelectionControllerForGeneration,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@toOneRelationshipList typeInventory'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const class GALGAS_toOneRelationshipList inObject,
                                   class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@toManyRelationshipList typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const class GALGAS_toManyRelationshipList inObject,
                                   class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@toOneRelationshipList buildObservablePropertyMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const class GALGAS_toOneRelationshipList inObject,
                                                const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                class GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@toManyRelationshipList buildObservablePropertyMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const class GALGAS_toManyRelationshipList inObject,
                                                const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                class GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@toOneRelationshipList semanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_toOneRelationshipList inObject,
                                      const class GALGAS_semanticContext constin_inSemanticContext,
                                      class GALGAS_toOneEntityRelationshipListForGeneration & out_outToOneEntityRelationshipListForGeneration,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@toManyRelationshipList semanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_toManyRelationshipList inObject,
                                      const class GALGAS_semanticContext constin_inSemanticContext,
                                      class GALGAS_toManyEntityRelationshipListForGeneration & out_outToManyEntityRelationshipListForGeneration,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Getter '@observablePropertyAST needs_unwSelf' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool categoryReader_needs_5F_unwSelf (const class GALGAS_observablePropertyAST & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@simpleStoredPropertyList typeInventory'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const class GALGAS_simpleStoredPropertyList inObject,
                                   class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@simpleStoredPropertyList buildObservablePropertyMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const class GALGAS_simpleStoredPropertyList inObject,
                                                const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                class GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@simpleStoredPropertyList simpleStoredPropertySemanticAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_simpleStoredPropertySemanticAnalysis (const class GALGAS_simpleStoredPropertyList inObject,
                                                          const class GALGAS_string constin_inSwiftClassName,
                                                          const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                          class GALGAS_validationStubRoutineListForGeneration & io_ioValidationStubRoutineListForGeneration,
                                                          class GALGAS_simpleStoredPropertyListForGeneration & out_outSimpleStoredPropertyListForGeneration,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category Getter '@typeKind formatterStringForFormatPrinting' (as function)                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_formatterStringForFormatPrinting (const class GALGAS_typeKind & inObject,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@abstractSecondaryProperty tryToSolveSecondaryProperty'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractSecondaryProperty_tryToSolveSecondaryProperty) (const class cPtr_abstractSecondaryProperty * inObject,
                                                                                               class GALGAS_semanticContext & ioArgument0,
                                                                                               const class GALGAS_observablePropertyMap constinArgument1,
                                                                                               class GALGAS_observablePropertyMap & ioArgument2,
                                                                                               class GALGAS_secondaryPropertyList & ioArgument3,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_tryToSolveSecondaryProperty (const int32_t inClassIndex,
                                                      categoryMethodSignature_abstractSecondaryProperty_tryToSolveSecondaryProperty inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_tryToSolveSecondaryProperty (const class cPtr_abstractSecondaryProperty * inObject,
                                                     GALGAS_semanticContext & io_ioSemanticContext,
                                                     const GALGAS_observablePropertyMap constin_inRootObservableProperties,
                                                     GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                     GALGAS_secondaryPropertyList & io_ioUnsolvedProperties,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@prefDeclaration typeInventory'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const class GALGAS_prefDeclaration inObject,
                                   class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category Getter '@observablePropertyAST isPropertyDefined' (as function)                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool categoryReader_isPropertyDefined (const class GALGAS_observablePropertyAST & inObject,
                                                    const class GALGAS_semanticContext & constinArgument0,
                                                    const class GALGAS_observablePropertyMap & constinArgument1,
                                                    const class GALGAS_observablePropertyMap & constinArgument2,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category Getter '@arrayControllerModel modelString' (as function)                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_modelString (const class GALGAS_arrayControllerModel & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category Getter '@arrayControllerModel modelTypeName' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_modelTypeName (const class GALGAS_arrayControllerModel & inObject,
                                                  const class GALGAS_string & constinArgument0,
                                                  const class GALGAS_observablePropertyMap & constinArgument1,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Getter '@arrayControllerModel modelTypeName2' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_modelTypeName_32_ (const class GALGAS_arrayControllerModel & inObject,
                                                      const class GALGAS_string & constinArgument0,
                                                      const class GALGAS_observablePropertyMap & constinArgument1,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addTIFF_file'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addTIFF_5F_file (class GALGAS_XcodeProjectDescriptor & ioObject,
                                       const class GALGAS_string constin_inFileName,
                                       class GALGAS_string & out_outFileRef,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category setter '@XcodeProjectDescriptor getReferenceKey'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_getReferenceKey (class GALGAS_XcodeProjectDescriptor & ioObject,
                                       class GALGAS_string & out_outRef,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category setter '@XcodeProjectDescriptor addInfoPlistFile'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addInfoPlistFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                        const class GALGAS_string constin_inFileName,
                                        class GALGAS_string & out_outFileRef,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category setter '@XcodeProjectDescriptor addXIBFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addXIBFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                  const class GALGAS_string constin_inFileName,
                                  class GALGAS_string & out_outFileRef,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category setter '@XcodeProjectDescriptor addFrameworkFile'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addFrameworkFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                        const class GALGAS_string constin_inFileName,
                                        class GALGAS_string & out_outFileRef,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category setter '@XcodeProjectDescriptor addMFile'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addMFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                const class GALGAS_string constin_inFileName,
                                class GALGAS_string & out_outFileRef,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addSwiftFile'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addSwiftFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                    const class GALGAS_string constin_inFileName,
                                    class GALGAS_string & out_outFileRef,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category setter '@XcodeProjectDescriptor addMMFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addMMFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                 const class GALGAS_string constin_inFileName,
                                 class GALGAS_string & out_outFileRef,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category setter '@XcodeProjectDescriptor addCppFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addCppFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                  const class GALGAS_string constin_inFileName,
                                  class GALGAS_string & out_outFileRef,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addHeaderFile'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addHeaderFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                     const class GALGAS_string constin_inFileName,
                                     class GALGAS_string & out_outFileRef,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addBuildFile'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addBuildFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                    const class GALGAS_string constin_inFileReference,
                                    const class GALGAS_string constin_inFileName,
                                    class GALGAS_string & out_outBuildRef,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addToolTarget'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addToolTarget (class GALGAS_XcodeProjectDescriptor & ioObject,
                                     const class GALGAS_string constin_inTargetName,
                                     const class GALGAS_string constin_inProductFileName,
                                     const class GALGAS_stringlist constin_inSourceList,
                                     const class GALGAS_stringlist constin_inToolFrameworksFileRefList,
                                     const class GALGAS_stringlist constin_inBuildConfigurationSettingList,
                                     class GALGAS_string & out_outTargetRef,
                                     class GALGAS_string & out_outProductFileRef,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category setter '@XcodeProjectDescriptor addGroup'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addGroup (class GALGAS_XcodeProjectDescriptor & ioObject,
                                const class GALGAS_string constin_inGroupName,
                                const class GALGAS_string constin_inGroupPath,
                                const class GALGAS_stringlist constin_inChildrenRefs,
                                class GALGAS_string & out_outGroupRef,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addICNS_file'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addICNS_5F_file (class GALGAS_XcodeProjectDescriptor & ioObject,
                                       const class GALGAS_string constin_inFileName,
                                       class GALGAS_string & out_outFileRef,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

#endif
