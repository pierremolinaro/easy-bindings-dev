#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Filewrapper template 'predefinedOutletClasses sourceFile'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'enumGenerationTemplate'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_enumGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                const class GALGAS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'generateEnums'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateEnums (const class GALGAS_enumListForGeneration constinArgument0,
                            const class GALGAS_string constinArgument1,
                            class GALGAS_stringset & ioArgument2,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'externSwiftFunctionCallerSet'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset function_externSwiftFunctionCallerSet (class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'classGenerationTemplate'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_classGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_classGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_classGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_classGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_classGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_classGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'classGenerationTemplate classImplementationInSwift'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_classGenerationTemplate_classImplementationInSwift (class C_Compiler * inCompiler,
                                                                                      const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                      const class GALGAS_simpleStoredPropertyListForGeneration & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                      const class GALGAS_transientDefinitionListForGeneration & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                      const class GALGAS_externSwiftFunctionList & in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                      const class GALGAS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                      const class GALGAS_string & in_EXPLORER_5F_ACCESS
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension getter '@observablePropertyAST generateAddObserverCall' (as function)                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_generateAddObserverCall (const class GALGAS_observablePropertyAST & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension getter '@transientDependencyListForGeneration needs_unwSelf' (as function)                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_needs_5F_unwSelf (const class GALGAS_transientDependencyListForGeneration & inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Extension getter '@transientDependencyListForGeneration transientComputeFunctionCall' (as function)         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_transientComputeFunctionCall (const class GALGAS_transientDependencyListForGeneration & inObject,
                                                                  const class GALGAS_string & constinArgument0,
                                                                  const class GALGAS_string & constinArgument1,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension getter '@typeKind swiftTypeName' (as function)                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_swiftTypeName (const class GALGAS_typeKind & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'generateClasses'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateClasses (const class GALGAS_classListForGeneration constinArgument0,
                              const class GALGAS_string constinArgument1,
                              class GALGAS_stringset & ioArgument2,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'entityGenerationTemplate'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_entityGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (class C_Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_ENTITY_5F_NAME,
                                                                                        const class GALGAS_simpleStoredPropertyListForGeneration & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const class GALGAS_transientDefinitionListForGeneration & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                        const class GALGAS_toOneEntityRelationshipListForGeneration & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                        const class GALGAS_toManyEntityRelationshipListForGeneration & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                        const class GALGAS_stringset & in_SIGNATURE_5F_SET
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'entityGenerationTemplate managedObjectContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_entityGenerationTemplate_managedObjectContext (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_entityListForGeneration & in_ENTITY_5F_LIST
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateEntities'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateEntities (const class GALGAS_entityListForGeneration constinArgument0,
                               const class GALGAS_string constinArgument1,
                               class GALGAS_stringset & ioArgument2,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'documentGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_documentGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'documentGenerationTemplate documentImplementation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_documentGenerationTemplate_documentImplementation (class C_Compiler * inCompiler,
                                                                                     const class GALGAS_string & in_DOCUMENT_5F_NAME,
                                                                                     const class GALGAS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                     const class GALGAS_simpleStoredPropertyListForGeneration & in_SIMPLE_5F_SIMPLE_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GALGAS_transientDefinitionListForGeneration & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const class GALGAS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                     const class GALGAS_arrayControllerForGeneration & in_ARRAY_5F_CONTROLLER_5F_LIST,
                                                                                     const class GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                                     const class GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                                     const class GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                     const class GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                     const class GALGAS_selectionControllerForGeneration & in_SELECTION_5F_CONTROLLER_5F_LIST,
                                                                                     const class GALGAS_customObjectControllerForGeneration & in_CUSTOM_5F_OBJECT_5F_CONTROLLER_5F_LIST
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                            class C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_expressionString (const int32_t inClassIndex,
                                            enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_expressionString (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration observedModelSet'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_stringset (*enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                               class C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_observedModelSet (const int32_t inClassIndex,
                                            enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset callExtensionGetter_observedModelSet (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Extension getter '@observablePropertyAST generateRemoveObserverCall' (as function)                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_generateRemoveObserverCall (const class GALGAS_observablePropertyAST & inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension getter '@tableViewBindingGenerationList outletNameListForController' (as function)             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_outletNameListForController (const class GALGAS_tableViewBindingGenerationList & inObject,
                                                                 const class GALGAS_string & constinArgument0,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateDocuments'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateDocuments (const class GALGAS_documentListForGeneration constinArgument0,
                                const class GALGAS_string constinArgument1,
                                class GALGAS_stringset & ioArgument2,
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
extern const char * gWrapperFileContent_9_swift_5F_sources ;

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
extern const cRegularFileWrapper gWrapperFile_9_swift_5F_sources ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_swift_5F_sources ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'prefsGenerationTemplate'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_prefsGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Filewrapper template 'prefsGenerationTemplate preferences'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_prefsGenerationTemplate_preferences (class C_Compiler * inCompiler,
                                                                       const class GALGAS_simpleStoredPropertyListForGeneration & in_SIMPLE_5F_SIMPLE_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                       const class GALGAS_transientDefinitionListForGeneration & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                       const class GALGAS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                       const class GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_mainXibDescriptorList & in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST,
                                                                       const class GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                       const class GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const class GALGAS_externSwiftFunctionList & in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST,
                                                                       const class GALGAS_storedArrayPropertyListForGeneration & in_STORED_5F_ARRAY_5F_LIST,
                                                                       const class GALGAS_arrayControllerForGeneration & in_ARRAY_5F_CONTROLLER_5F_LIST,
                                                                       const class GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'preferencesName'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_preferencesName (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension getter '@mainXibDescriptorList generateCode' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_generateCode (const class GALGAS_mainXibDescriptorList & inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension getter '@observablePropertyAST modelString' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_modelString (const class GALGAS_observablePropertyAST & inObject,
                                                 const class GALGAS_string & constinArgument0,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'generatePreferences'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePreferences (const class GALGAS_preferencesForGeneration constinArgument0,
                                  const class GALGAS_string constinArgument1,
                                  class GALGAS_stringset & ioArgument2,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @preferencesForGeneration struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_preferencesForGeneration : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_simpleStoredPropertyListForGeneration mAttribute_mSimpleStoredPropertyListForGeneration ;
  public : GALGAS_transientDefinitionListForGeneration mAttribute_mTransientDefinitionListForGeneration ;
  public : GALGAS_regularBindingsGenerationList mAttribute_mRegularBindingsGenerationList ;
  public : GALGAS_multipleBindingGenerationList mAttribute_mMultipleBindingGenerationList ;
  public : GALGAS_actionBindingListForGeneration mAttribute_mActionBindingListForGeneration ;
  public : GALGAS_decoratedOutletMap mAttribute_mOutletMap ;
  public : GALGAS_mainXibDescriptorList mAttribute_mMainXibDescriptorList ;
  public : GALGAS_externSwiftFunctionList mAttribute_mExternSwiftFunctionList ;
  public : GALGAS_storedArrayPropertyListForGeneration mAttribute_mStoredArrayPropertyListForGeneration ;
  public : GALGAS_arrayControllerForGeneration mAttribute_mArrayControllerForGeneration ;
  public : GALGAS_tableViewBindingGenerationList mAttribute_mTableViewBindingGenerationList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_preferencesForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_preferencesForGeneration (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_preferencesForGeneration (void) ;

//--------------------------------- Native constructor
  public : GALGAS_preferencesForGeneration (const GALGAS_simpleStoredPropertyListForGeneration & in_mSimpleStoredPropertyListForGeneration,
                                            const GALGAS_transientDefinitionListForGeneration & in_mTransientDefinitionListForGeneration,
                                            const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                            const GALGAS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                            const GALGAS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                            const GALGAS_decoratedOutletMap & in_mOutletMap,
                                            const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                            const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                            const GALGAS_storedArrayPropertyListForGeneration & in_mStoredArrayPropertyListForGeneration,
                                            const GALGAS_arrayControllerForGeneration & in_mArrayControllerForGeneration,
                                            const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_preferencesForGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_preferencesForGeneration constructor_new (const class GALGAS_simpleStoredPropertyListForGeneration & inOperand0,
                                                                   const class GALGAS_transientDefinitionListForGeneration & inOperand1,
                                                                   const class GALGAS_regularBindingsGenerationList & inOperand2,
                                                                   const class GALGAS_multipleBindingGenerationList & inOperand3,
                                                                   const class GALGAS_actionBindingListForGeneration & inOperand4,
                                                                   const class GALGAS_decoratedOutletMap & inOperand5,
                                                                   const class GALGAS_mainXibDescriptorList & inOperand6,
                                                                   const class GALGAS_externSwiftFunctionList & inOperand7,
                                                                   const class GALGAS_storedArrayPropertyListForGeneration & inOperand8,
                                                                   const class GALGAS_arrayControllerForGeneration & inOperand9,
                                                                   const class GALGAS_tableViewBindingGenerationList & inOperand10
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_preferencesForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionBindingListForGeneration getter_mActionBindingListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGeneration getter_mArrayControllerForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_mMainXibDescriptorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingGenerationList getter_mMultipleBindingGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap getter_mOutletMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyListForGeneration getter_mSimpleStoredPropertyListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_storedArrayPropertyListForGeneration getter_mStoredArrayPropertyListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewBindingGenerationList getter_mTableViewBindingGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration getter_mTransientDefinitionListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_preferencesForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferencesForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Filewrapper 'outletClassGeneration'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_outletClassGeneration ;
extern const char * gWrapperFileContent_1_outletClassGeneration ;
extern const char * gWrapperFileContent_2_outletClassGeneration ;
extern const char * gWrapperFileContent_3_outletClassGeneration ;
extern const char * gWrapperFileContent_4_outletClassGeneration ;
extern const char * gWrapperFileContent_5_outletClassGeneration ;
extern const char * gWrapperFileContent_6_outletClassGeneration ;
extern const char * gWrapperFileContent_7_outletClassGeneration ;
extern const char * gWrapperFileContent_8_outletClassGeneration ;
extern const char * gWrapperFileContent_9_outletClassGeneration ;
extern const char * gWrapperFileContent_10_outletClassGeneration ;
extern const char * gWrapperFileContent_11_outletClassGeneration ;
extern const char * gWrapperFileContent_12_outletClassGeneration ;
extern const char * gWrapperFileContent_13_outletClassGeneration ;
extern const char * gWrapperFileContent_14_outletClassGeneration ;
extern const char * gWrapperFileContent_15_outletClassGeneration ;
extern const char * gWrapperFileContent_16_outletClassGeneration ;
extern const char * gWrapperFileContent_17_outletClassGeneration ;
extern const char * gWrapperFileContent_18_outletClassGeneration ;
extern const char * gWrapperFileContent_19_outletClassGeneration ;
extern const char * gWrapperFileContent_20_outletClassGeneration ;
extern const char * gWrapperFileContent_21_outletClassGeneration ;
extern const char * gWrapperFileContent_22_outletClassGeneration ;
extern const char * gWrapperFileContent_23_outletClassGeneration ;
extern const char * gWrapperFileContent_24_outletClassGeneration ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_1_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_2_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_3_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_4_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_5_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_6_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_7_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_8_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_9_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_10_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_11_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_12_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_13_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_14_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_15_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_16_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_17_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_18_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_19_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_20_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_21_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_22_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_23_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_24_outletClassGeneration ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_outletClassGeneration ;

#endif
