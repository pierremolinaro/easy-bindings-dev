#ifndef all_2D_declarations_2D__32__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'generateOutletClasses'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateOutletClasses (const class GALGAS_stringset constinArgument0,
                                    const class GALGAS_string constinArgument1,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @abstractBooleanMultipleBindingExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * ptr (void) const { return (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractBooleanMultipleBindingExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Pointer class for @abstractBooleanMultipleBindingExpressionForGeneration class                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractBooleanMultipleBindingExpressionForGeneration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractBooleanMultipleBindingExpressionForGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Filewrapper 'controllerTemplates'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_controllerTemplates ;
extern const char * gWrapperFileContent_1_controllerTemplates ;
extern const char * gWrapperFileContent_2_controllerTemplates ;
extern const char * gWrapperFileContent_3_controllerTemplates ;
extern const char * gWrapperFileContent_4_controllerTemplates ;
extern const char * gWrapperFileContent_5_controllerTemplates ;
extern const char * gWrapperFileContent_6_controllerTemplates ;
extern const char * gWrapperFileContent_7_controllerTemplates ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_1_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_2_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_3_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_4_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_5_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_6_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_7_controllerTemplates ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_controllerTemplates ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'controllerTemplates enabledBindingGeneration'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_controllerTemplates_enabledBindingGeneration (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_OUTLET_5F_PROPRIETARY_5F_CLASS_5F_NAME,
                                                                                const class GALGAS_string & in_OUTLET_5F_NAME,
                                                                                const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_ENABLE_5F_EXPRESSION
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Abstract category reader '@abstractBooleanMultipleBindingExpressionForGeneration observedObjectList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_stringlist (*categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedObjectList) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                                     class C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_observedObjectList (const int32_t inClassIndex,
                                             categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedObjectList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringlist callCategoryReader_observedObjectList (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Abstract category method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForEnabledBinding'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding) (const class cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                                        const class GALGAS_string constinArgument0,
                                                                                                                        const class GALGAS_unifiedTypeMap constinArgument1,
                                                                                                                        const class GALGAS_arrayControllerMap constinArgument2,
                                                                                                                        const class GALGAS_decoratedObservablePropertyMap constinArgument3,
                                                                                                                        const class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                                                                                                        class GALGAS_uint & ioArgument5,
                                                                                                                        class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument6,
                                                                                                                        class C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeExpressionForEnabledBinding (const int32_t inClassIndex,
                                                             categoryMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeExpressionForEnabledBinding (const class cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                            const GALGAS_string constin_inSelfTypeName,
                                                            const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                            const GALGAS_arrayControllerMap constin_inArrayControllerMap,
                                                            const GALGAS_decoratedObservablePropertyMap constin_inCurrentObservablePropertyMap,
                                                            const GALGAS_unifiedTypeMap_2D_proxy constin_inRootEntityType,
                                                            GALGAS_uint & io_ioIndex,
                                                            GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & out_outEnableExpression,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Abstract category method '@abstractObservablePropertyAST analyzeBoundObservablePropertyForSimpleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding) (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                                                                      const class GALGAS_unifiedTypeMap constinArgument0,
                                                                                                                      const class GALGAS_arrayControllerMap constinArgument1,
                                                                                                                      const class GALGAS_string constinArgument2,
                                                                                                                      const class GALGAS_decoratedObservablePropertyMap constinArgument3,
                                                                                                                      const class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                                                                                                      class GALGAS_outletBindingModelList & ioArgument5,
                                                                                                                      class GALGAS_stringlist & ioArgument6,
                                                                                                                      class C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeBoundObservablePropertyForSimpleBinding (const int32_t inClassIndex,
                                                                         categoryMethodSignature_abstractObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeBoundObservablePropertyForSimpleBinding (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                        const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                                        const GALGAS_arrayControllerMap constin_inArrayControllerMap,
                                                                        const GALGAS_string constin_inCurrentTypeName,
                                                                        const GALGAS_decoratedObservablePropertyMap constin_inObservablePropertyMap,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constin_inRootEntityType,
                                                                        GALGAS_outletBindingModelList & io_ioBoundPropertyTypeList,
                                                                        GALGAS_stringlist & io_ioBoundObjectNameList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildControllerTemplateMap'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControllerTemplateMap (const class GALGAS_unifiedTypeMap constinArgument0,
                                         const class GALGAS_bindingSpecificationListMap constinArgument1,
                                         class GALGAS_bindingSpecificationMap & outArgument2,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Abstract category reader '@abstractBooleanMultipleBindingExpressionForGeneration enableExpressionString'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_enableExpressionString) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                                     class C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_enableExpressionString (const int32_t inClassIndex,
                                                 categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_enableExpressionString inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_enableExpressionString (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Abstract category reader '@abstractBooleanMultipleBindingExpressionForGeneration observedModelNameList'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_stringlist (*categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedModelNameList) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                                        class C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_observedModelNameList (const int32_t inClassIndex,
                                                categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedModelNameList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringlist callCategoryReader_observedModelNameList (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Abstract category reader '@abstractBooleanMultipleBindingExpressionForGeneration observedObjectTypeNameList'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_stringlist (*categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                                             class C_Compiler * inCompiler
                                                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_observedObjectTypeNameList (const int32_t inClassIndex,
                                                     categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringlist callCategoryReader_observedObjectTypeNameList (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateControllerClasses'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateControllerClasses (const class GALGAS_stringset constinArgument0,
                                        const class GALGAS_string constinArgument1,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'buildTransientDependencyGraph'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildTransientDependencyGraph (const class GALGAS_unifiedTypeMap constinArgument0,
                                            const class GALGAS_string constinArgument1,
                                            class GALGAS_transientDependencyGraphNodeInfoList & outArgument2,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category reader '@abstractObservablePropertyAST propertySignature'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_lstring (*categoryReaderSignature_abstractObservablePropertyAST_propertySignature) (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                                                         const class GALGAS_string & constinArgument0,
                                                                                                         const class GALGAS_string & constinArgument1,
                                                                                                         const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument2,
                                                                                                         class C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_propertySignature (const int32_t inClassIndex,
                                            categoryReaderSignature_abstractObservablePropertyAST_propertySignature inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring callCategoryReader_propertySignature (const class cPtr_abstractObservablePropertyAST * inObject,
                                                           const GALGAS_string & constin_inKind,
                                                           const GALGAS_string & constin_inSelfTypeName,
                                                           const GALGAS_unifiedTypeMap_2D_proxy & constin_inRootypeProxy,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Category Reader '@typeKind kindName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_kindName (const class GALGAS_typeKind & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@abstractTransientDependencyAST buildTransientDependencyGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractTransientDependencyAST_buildTransientDependencyGraph) (const class cPtr_abstractTransientDependencyAST * inObject,
                                                                                                      const class GALGAS_unifiedTypeMap constinArgument0,
                                                                                                      class GALGAS_transientDependencyGraph & ioArgument1,
                                                                                                      const class GALGAS_lstring constinArgument2,
                                                                                                      const class GALGAS_decoratedObservablePropertyMap constinArgument3,
                                                                                                      const class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                                                                                      const class GALGAS_arrayControllerMap constinArgument5,
                                                                                                      const class GALGAS_lstring constinArgument6,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildTransientDependencyGraph (const int32_t inClassIndex,
                                                        categoryMethodSignature_abstractTransientDependencyAST_buildTransientDependencyGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildTransientDependencyGraph (const class cPtr_abstractTransientDependencyAST * inObject,
                                                       const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                       GALGAS_transientDependencyGraph & io_ioTransientDependencyGraph,
                                                       const GALGAS_lstring constin_inTransientName,
                                                       const GALGAS_decoratedObservablePropertyMap constin_inLocalObservablePropertyMap,
                                                       const GALGAS_unifiedTypeMap_2D_proxy constin_inRootEntityType,
                                                       const GALGAS_arrayControllerMap constin_inArrayControllerMap,
                                                       const GALGAS_lstring constin_inTransientPropertySignature,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'generateTransients'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateTransients (const class GALGAS_string constinArgument0,
                                 const class GALGAS_transientDependencyGraphNodeInfoList constinArgument1,
                                 const class GALGAS_transientListForGeneration constinArgument2,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Filewrapper 'transientManager'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_1_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_2_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_3_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_4_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_5_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_6_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_7_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_8_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_9_transientManager ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Filewrapper template 'transientManager applicationInSwift'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_transientManager_applicationInSwift (class C_Compiler * inCompiler,
                                                                       const class GALGAS_transientDependencyGraphNodeInfoList & in_PROPERTY_5F_LIST,
                                                                       const class GALGAS_stringlist & in_TRANSIENT_5F_LIST
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'transientManager transientComputationFunctionFile'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (class C_Compiler * inCompiler,
                                                                                     const class GALGAS_string & in_KIND_5F_NAME,
                                                                                     const class GALGAS_string & in_TRANSIENT_5F_NAME,
                                                                                     const class GALGAS_transientDependencyListForGeneration & in_DEPENDENCY_5F_LIST,
                                                                                     const class GALGAS_unifiedTypeMap_2D_proxy & in_TRANSIENT_5F_TYPE
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@unifiedTypeMap-proxy transientReturnTypeName'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_transientReturnTypeName (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'generateActions'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateActions (const class GALGAS_string constinArgument0,
                              const class GALGAS_actionListForGeneration constinArgument1,
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
extern const cDirectoryWrapper gWrapperDirectory_6_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_7_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_8_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_9_actionGenerationTemplate ;

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
//                                      Routine 'generateValidationRoutineStubs'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateValidationRoutineStubs (const class GALGAS_string constinArgument0,
                                             const class GALGAS_validationStubRoutineListForGeneration constinArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

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
extern const cDirectoryWrapper gWrapperDirectory_6_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_7_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_8_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_9_validationStubExtension ;

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
//                                        Filewrapper 'predefinedOutletClasses'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_4_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_5_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_6_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_7_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_8_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_9_predefinedOutletClasses ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Filewrapper template 'predefinedOutletClasses sourceFile'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const class GALGAS_unifiedTypeMap constinArgument0,
                               const class GALGAS_lstringlist constinArgument1,
                               const class GALGAS_string constinArgument2,
                               const class GALGAS_astDeclarationStruct constinArgument3,
                               class GALGAS_transientDependencyGraphNodeInfoList & outArgument4,
                               class GALGAS_structForGeneration & outArgument5,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'generateCode'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCode (const class GALGAS_transientDependencyGraphNodeInfoList constinArgument0,
                           const class GALGAS_structForGeneration constinArgument1,
                           const class GALGAS_string constinArgument2,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'generateSwiftApplicationFiles'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSwiftApplicationFiles (const class GALGAS_string constinArgument0,
                                            const class GALGAS_bool constinArgument1,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Filewrapper 'swift_sources'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_swift_5F_sources ;
extern const char * gWrapperFileContent_1_swift_5F_sources ;
extern const char * gWrapperFileContent_2_swift_5F_sources ;
extern const char * gWrapperFileContent_3_swift_5F_sources ;
extern const char * gWrapperFileContent_4_swift_5F_sources ;
extern const char * gWrapperFileContent_5_swift_5F_sources ;
extern const char * gWrapperFileContent_6_swift_5F_sources ;
extern const char * gWrapperFileContent_7_swift_5F_sources ;
extern const char * gWrapperFileContent_8_swift_5F_sources ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_1_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_2_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_3_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_4_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_5_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_6_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_7_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_8_swift_5F_sources ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_swift_5F_sources ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @andBooleanMultipleBindingExpressionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_andBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Constructor
  public : GALGAS_andBooleanMultipleBindingExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_andBooleanMultipleBindingExpressionForGeneration * ptr (void) const { return (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andBooleanMultipleBindingExpressionForGeneration (const cPtr_andBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_andBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                           const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andBooleanMultipleBindingExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @andBooleanMultipleBindingExpressionForGeneration class                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_andBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAttribute_mLeftBinding ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAttribute_mRightBinding ;

//--- Constructor
  public : cPtr_andBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @negateBooleanMultipleBindingExpressionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_negateBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Constructor
  public : GALGAS_negateBooleanMultipleBindingExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_negateBooleanMultipleBindingExpressionForGeneration * ptr (void) const { return (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_negateBooleanMultipleBindingExpressionForGeneration (const cPtr_negateBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_negateBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_negateBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_negateBooleanMultipleBindingExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Pointer class for @negateBooleanMultipleBindingExpressionForGeneration class                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_negateBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAttribute_mBinding ;

//--- Constructor
  public : cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Constructor
  public : GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * ptr (void) const { return (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                                            const class GALGAS_string & inOperand1,
                                                                                                            const class GALGAS_string & inOperand2,
                                                                                                            const class GALGAS_uint & inOperand3
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mObservedModel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mObservedObject (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mObservedTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mObservedObject ;
  public : GALGAS_string mAttribute_mObservedModel ;
  public : GALGAS_string mAttribute_mObservedTypeName ;
  public : GALGAS_uint mAttribute_mIndex ;

//--- Constructor
  public : cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GALGAS_string & in_mObservedObject,
                                                                                   const GALGAS_string & in_mObservedModel,
                                                                                   const GALGAS_string & in_mObservedTypeName,
                                                                                   const GALGAS_uint & in_mIndex
                                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mObservedObject (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mObservedModel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mObservedTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @orBooleanMultipleBindingExpressionForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Constructor
  public : GALGAS_orBooleanMultipleBindingExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_orBooleanMultipleBindingExpressionForGeneration * ptr (void) const { return (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orBooleanMultipleBindingExpressionForGeneration (const cPtr_orBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_orBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                          const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orBooleanMultipleBindingExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @orBooleanMultipleBindingExpressionForGeneration class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_orBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAttribute_mLeftBinding ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAttribute_mRightBinding ;

//--- Constructor
  public : cPtr_orBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @transientControllerDependencyForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientControllerDependencyForGeneration : public GALGAS_abstractTransientDependencyForGeneration {
//--- Constructor
  public : GALGAS_transientControllerDependencyForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientControllerDependencyForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientControllerDependencyForGeneration * ptr (void) const { return (const cPtr_transientControllerDependencyForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientControllerDependencyForGeneration (const cPtr_transientControllerDependencyForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientControllerDependencyForGeneration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientControllerDependencyForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientControllerDependencyForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientControllerDependencyForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientControllerDependencyForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @transientControllerDependencyForGeneration class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientControllerDependencyForGeneration : public cPtr_abstractTransientDependencyForGeneration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mControllerName ;
  public : GALGAS_lstring mAttribute_mMasterName ;

//--- Constructor
  public : cPtr_transientControllerDependencyForGeneration (const GALGAS_lstring & in_mControllerName,
                                                            const GALGAS_lstring & in_mMasterName
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @transientLocalDependencyForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientLocalDependencyForGeneration : public GALGAS_abstractTransientDependencyForGeneration {
//--- Constructor
  public : GALGAS_transientLocalDependencyForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientLocalDependencyForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientLocalDependencyForGeneration * ptr (void) const { return (const cPtr_transientLocalDependencyForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientLocalDependencyForGeneration (const cPtr_transientLocalDependencyForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientLocalDependencyForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientLocalDependencyForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_bool & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientLocalDependencyForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNamesCountOption (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientLocalDependencyForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientLocalDependencyForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @transientLocalDependencyForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientLocalDependencyForGeneration : public cPtr_abstractTransientDependencyForGeneration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mMasterName ;
  public : GALGAS_bool mAttribute_mNamesCountOption ;

//--- Constructor
  public : cPtr_transientLocalDependencyForGeneration (const GALGAS_lstring & in_mMasterName,
                                                       const GALGAS_bool & in_mNamesCountOption
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mNamesCountOption (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @transientPreferenceDependencyForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientPreferenceDependencyForGeneration : public GALGAS_abstractTransientDependencyForGeneration {
//--- Constructor
  public : GALGAS_transientPreferenceDependencyForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientPreferenceDependencyForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientPreferenceDependencyForGeneration * ptr (void) const { return (const cPtr_transientPreferenceDependencyForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientPreferenceDependencyForGeneration (const cPtr_transientPreferenceDependencyForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientPreferenceDependencyForGeneration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientPreferenceDependencyForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientPreferenceDependencyForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mPreferencesName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientPreferenceDependencyForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPreferenceDependencyForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @transientPreferenceDependencyForGeneration class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientPreferenceDependencyForGeneration : public cPtr_abstractTransientDependencyForGeneration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mPreferencesName ;
  public : GALGAS_lstring mAttribute_mMasterName ;

//--- Constructor
  public : cPtr_transientPreferenceDependencyForGeneration (const GALGAS_lstring & in_mPreferencesName,
                                                            const GALGAS_lstring & in_mMasterName
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mPreferencesName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @transientRootDependencyForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientRootDependencyForGeneration : public GALGAS_abstractTransientDependencyForGeneration {
//--- Constructor
  public : GALGAS_transientRootDependencyForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientRootDependencyForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientRootDependencyForGeneration * ptr (void) const { return (const cPtr_transientRootDependencyForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientRootDependencyForGeneration (const cPtr_transientRootDependencyForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientRootDependencyForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientRootDependencyForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_bool & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientRootDependencyForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNamesCountOption (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientRootDependencyForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRootDependencyForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @transientRootDependencyForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientRootDependencyForGeneration : public cPtr_abstractTransientDependencyForGeneration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mMasterName ;
  public : GALGAS_bool mAttribute_mNamesCountOption ;

//--- Constructor
  public : cPtr_transientRootDependencyForGeneration (const GALGAS_lstring & in_mMasterName,
                                                      const GALGAS_bool & in_mNamesCountOption
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mNamesCountOption (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @transientRootRelationshipDependencyForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientRootRelationshipDependencyForGeneration : public GALGAS_abstractTransientDependencyForGeneration {
//--- Constructor
  public : GALGAS_transientRootRelationshipDependencyForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientRootRelationshipDependencyForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientRootRelationshipDependencyForGeneration * ptr (void) const { return (const cPtr_transientRootRelationshipDependencyForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientRootRelationshipDependencyForGeneration (const cPtr_transientRootRelationshipDependencyForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientRootRelationshipDependencyForGeneration extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientRootRelationshipDependencyForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1,
                                                                                           const class GALGAS_lstring & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientRootRelationshipDependencyForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mElementType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRelationshipName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientRootRelationshipDependencyForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRootRelationshipDependencyForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @transientRootRelationshipDependencyForGeneration class                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientRootRelationshipDependencyForGeneration : public cPtr_abstractTransientDependencyForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mElementType ;
  public : GALGAS_lstring mAttribute_mRelationshipName ;
  public : GALGAS_lstring mAttribute_mMasterName ;

//--- Constructor
  public : cPtr_transientRootRelationshipDependencyForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mElementType,
                                                                  const GALGAS_lstring & in_mRelationshipName,
                                                                  const GALGAS_lstring & in_mMasterName
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mElementType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mRelationshipName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @transientRootSignDependencyForGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientRootSignDependencyForGeneration : public GALGAS_abstractTransientDependencyForGeneration {
//--- Constructor
  public : GALGAS_transientRootSignDependencyForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientRootSignDependencyForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientRootSignDependencyForGeneration * ptr (void) const { return (const cPtr_transientRootSignDependencyForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientRootSignDependencyForGeneration (const cPtr_transientRootSignDependencyForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientRootSignDependencyForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientRootSignDependencyForGeneration constructor_new (const class GALGAS_location & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientRootSignDependencyForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mDeclarationLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientRootSignDependencyForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRootSignDependencyForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @transientRootSignDependencyForGeneration class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientRootSignDependencyForGeneration : public cPtr_abstractTransientDependencyForGeneration {
//--- Attributes
  public : GALGAS_location mAttribute_mDeclarationLocation ;

//--- Constructor
  public : cPtr_transientRootSignDependencyForGeneration (const GALGAS_location & in_mDeclarationLocation
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mDeclarationLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @predefinedTypeDeclaration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_predefinedTypeDeclaration : public GALGAS_astDeclaration {
//--- Constructor
  public : GALGAS_predefinedTypeDeclaration (void) ;

//---
  public : inline const class cPtr_predefinedTypeDeclaration * ptr (void) const { return (const cPtr_predefinedTypeDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_predefinedTypeDeclaration (const cPtr_predefinedTypeDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_predefinedTypeDeclaration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_predefinedTypeDeclaration constructor_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_string & inOperand1,
                                                                    const class GALGAS_typeKind & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_predefinedTypeDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind reader_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_predefinedTypeDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @predefinedTypeDeclaration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_predefinedTypeDeclaration : public cPtr_astDeclaration {
//--- Attributes
  public : GALGAS_string mAttribute_mTypeName ;
  public : GALGAS_typeKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_predefinedTypeDeclaration (const GALGAS_bool & in_mUserDefined,
                                           const GALGAS_string & in_mTypeName,
                                           const GALGAS_typeKind & in_mKind
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind reader_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @structDeclaration class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structDeclaration : public GALGAS_astDeclaration {
//--- Constructor
  public : GALGAS_structDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_structDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_structDeclaration * ptr (void) const { return (const cPtr_structDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structDeclaration (const cPtr_structDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structDeclaration extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structDeclaration constructor_new (const class GALGAS_bool & inOperand0,
                                                            const class GALGAS_lstring & inOperand1,
                                                            const class GALGAS_structFieldASTList & inOperand2
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_structFieldASTList reader_mFieldList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mStructTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @structDeclaration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_structDeclaration : public cPtr_astDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mStructTypeName ;
  public : GALGAS_structFieldASTList mAttribute_mFieldList ;

//--- Constructor
  public : cPtr_structDeclaration (const GALGAS_bool & in_mUserDefined,
                                   const GALGAS_lstring & in_mStructTypeName,
                                   const GALGAS_structFieldASTList & in_mFieldList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mStructTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_structFieldASTList reader_mFieldList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

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
//      Abstract category method '@abstractObservablePropertyAST analyzeBoundObservablePropertyForEnabledBinding'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding) (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                                                                       const class GALGAS_string constinArgument0,
                                                                                                                       const class GALGAS_unifiedTypeMap constinArgument1,
                                                                                                                       const class GALGAS_arrayControllerMap constinArgument2,
                                                                                                                       const class GALGAS_decoratedObservablePropertyMap constinArgument3,
                                                                                                                       const class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                                                                                                       class GALGAS_uint & ioArgument5,
                                                                                                                       class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument6,
                                                                                                                       class C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeBoundObservablePropertyForEnabledBinding (const int32_t inClassIndex,
                                                                          categoryMethodSignature_abstractObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeBoundObservablePropertyForEnabledBinding (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                         const GALGAS_string constin_inSelfTypeName,
                                                                         const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                                         const GALGAS_arrayControllerMap constin_inArrayControllerMap,
                                                                         const GALGAS_decoratedObservablePropertyMap constin_inObservablePropertyMap,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy constin_inRootEntityType,
                                                                         GALGAS_uint & io_ioIndex,
                                                                         GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & out_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category reader '@abstractObservablePropertyAST arrayControllerTypeName'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractObservablePropertyAST_arrayControllerTypeName) (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                                                              const class GALGAS_string & constinArgument0,
                                                                                                              const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument1,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_arrayControllerTypeName (const int32_t inClassIndex,
                                                  categoryReaderSignature_abstractObservablePropertyAST_arrayControllerTypeName inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_arrayControllerTypeName (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                const GALGAS_string & constin_inSelfTypeName,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & constin_inRootypeProxy,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Abstract category reader '@abstractObservablePropertyAST modelSignatureForArrayController'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractObservablePropertyAST_modelSignatureForArrayController) (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                                                                       const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument0,
                                                                                                                       const class GALGAS_string & constinArgument1,
                                                                                                                       class C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_modelSignatureForArrayController (const int32_t inClassIndex,
                                                           categoryReaderSignature_abstractObservablePropertyAST_modelSignatureForArrayController inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_modelSignatureForArrayController (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy & constin_inRootypeProxy,
                                                                         const GALGAS_string & constin_inSelfTypeName,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

#endif
