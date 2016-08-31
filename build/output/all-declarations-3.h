#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension method '@prefDeclaration typeInventory'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_typeInventory (const class GALGAS_prefDeclaration inObject,
                                    class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@prefDeclaration solveSecondaryProperty'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_solveSecondaryProperty (const class GALGAS_prefDeclaration inObject,
                                             class GALGAS_semanticContext & io_ioSemanticContext,
                                             const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                             const class GALGAS_secondaryPropertyList constin_inPropertiesToSolve,
                                             class GALGAS_secondaryPropertyList & out_outUnsolvedProperties,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Extension method '@prefDeclaration buildObservablePropertyMapsFromStoredProperties'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_buildObservablePropertyMapsFromStoredProperties (const class GALGAS_prefDeclaration inObject,
                                                                      const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                                      class GALGAS_semanticContext & io_ioSemanticContext,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@prefDeclaration semanticAnalysis'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const class GALGAS_prefDeclaration inObject,
                                       const class GALGAS_externSwiftFunctionList constin_inExternSwiftFunctionList,
                                       const class GALGAS_semanticContext constin_inSemanticContext,
                                       class GALGAS_structForGeneration & io_ioGeneration,
                                       class C_Compiler * inCompiler
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
//                                              Routine 'analyzeOutlets'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeOutlets (const class GALGAS_observablePropertyMap constinArgument0,
                             const class GALGAS_semanticContext constinArgument1,
                             const class GALGAS_outletDeclarationList constinArgument2,
                             const class GALGAS_observablePropertyMap constinArgument3,
                             const class GALGAS_actionMap constinArgument4,
                             const class GALGAS_string constinArgument5,
                             class GALGAS_structForGeneration & ioArgument6,
                             class GALGAS_regularBindingsGenerationList & outArgument7,
                             class GALGAS_multipleBindingGenerationList & outArgument8,
                             class GALGAS_actionBindingListForGeneration & outArgument9,
                             class GALGAS_decoratedOutletMap & outArgument10,
                             class GALGAS_tableViewBindingGenerationList & outArgument11,
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
  public : static class GALGAS_preferencesForGeneration constructor_new (const class GALGAS_simpleStoredPropertyListForGeneration & inOperand0,
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
//                                             @structForGeneration struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structForGeneration : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_transientDefinitionListForGeneration mAttribute_mTransientListForGeneration ;
  public : GALGAS_actionListForGeneration mAttribute_mActionListForGeneration ;
  public : GALGAS_preferencesForGeneration mAttribute_mPreferencesForGeneration ;
  public : GALGAS_documentListForGeneration mAttribute_mDocumentListForGeneration ;
  public : GALGAS_entityListForGeneration mAttribute_mEntityListForGeneration ;
  public : GALGAS_classListForGeneration mAttribute_mClassListForGeneration ;
  public : GALGAS_enumListForGeneration mAttribute_mEnumListForGeneration ;
  public : GALGAS_stringset mAttribute_mNeededOutletClasses ;
  public : GALGAS_arrayControllerForGeneration mAttribute_mAllArrayControllerForGeneration ;
  public : GALGAS_validationStubRoutineListForGeneration mAttribute_mValidationStubRoutineListForGeneration ;
  public : GALGAS_selectionControllerForGeneration mAttribute_mSelectionControllerListForGeneration ;
  public : GALGAS_customObjectControllerForGeneration mAttribute_mCustomObjectControllerListForGeneration ;
  public : GALGAS_stringlist mAttribute_mPropertyClassList ;
  public : GALGAS_stringlist mAttribute_mTransientPropertyClassList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_structForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_structForGeneration (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_structForGeneration (void) ;

//--------------------------------- Native constructor
  public : GALGAS_structForGeneration (const GALGAS_transientDefinitionListForGeneration & in_mTransientListForGeneration,
                                       const GALGAS_actionListForGeneration & in_mActionListForGeneration,
                                       const GALGAS_preferencesForGeneration & in_mPreferencesForGeneration,
                                       const GALGAS_documentListForGeneration & in_mDocumentListForGeneration,
                                       const GALGAS_entityListForGeneration & in_mEntityListForGeneration,
                                       const GALGAS_classListForGeneration & in_mClassListForGeneration,
                                       const GALGAS_enumListForGeneration & in_mEnumListForGeneration,
                                       const GALGAS_stringset & in_mNeededOutletClasses,
                                       const GALGAS_arrayControllerForGeneration & in_mAllArrayControllerForGeneration,
                                       const GALGAS_validationStubRoutineListForGeneration & in_mValidationStubRoutineListForGeneration,
                                       const GALGAS_selectionControllerForGeneration & in_mSelectionControllerListForGeneration,
                                       const GALGAS_customObjectControllerForGeneration & in_mCustomObjectControllerListForGeneration,
                                       const GALGAS_stringlist & in_mPropertyClassList,
                                       const GALGAS_stringlist & in_mTransientPropertyClassList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structForGeneration extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_structForGeneration constructor_new (const class GALGAS_transientDefinitionListForGeneration & inOperand0,
                                                                    const class GALGAS_actionListForGeneration & inOperand1,
                                                                    const class GALGAS_preferencesForGeneration & inOperand2,
                                                                    const class GALGAS_documentListForGeneration & inOperand3,
                                                                    const class GALGAS_entityListForGeneration & inOperand4,
                                                                    const class GALGAS_classListForGeneration & inOperand5,
                                                                    const class GALGAS_enumListForGeneration & inOperand6,
                                                                    const class GALGAS_stringset & inOperand7,
                                                                    const class GALGAS_arrayControllerForGeneration & inOperand8,
                                                                    const class GALGAS_validationStubRoutineListForGeneration & inOperand9,
                                                                    const class GALGAS_selectionControllerForGeneration & inOperand10,
                                                                    const class GALGAS_customObjectControllerForGeneration & inOperand11,
                                                                    const class GALGAS_stringlist & inOperand12,
                                                                    const class GALGAS_stringlist & inOperand13
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionListForGeneration getter_mActionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGeneration getter_mAllArrayControllerForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classListForGeneration getter_mClassListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_customObjectControllerForGeneration getter_mCustomObjectControllerListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_documentListForGeneration getter_mDocumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_entityListForGeneration getter_mEntityListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumListForGeneration getter_mEnumListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mNeededOutletClasses (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_preferencesForGeneration getter_mPreferencesForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mPropertyClassList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_mSelectionControllerListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration getter_mTransientListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mTransientPropertyClassList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration getter_mValidationStubRoutineListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension getter '@observablePropertyAST isPropertyDefined' (as function)                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_isPropertyDefined (const class GALGAS_observablePropertyAST & inObject,
                                                     const class GALGAS_semanticContext & constinArgument0,
                                                     const class GALGAS_observablePropertyMap & constinArgument1,
                                                     const class GALGAS_observablePropertyMap & constinArgument2,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension getter '@observablePropertyAST location' (as function)                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_location extensionGetter_location (const class GALGAS_observablePropertyAST & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@observablePropertyAST analyzeObservableProperty'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeObservableProperty (const class GALGAS_observablePropertyAST inObject,
                                                const class GALGAS_observablePropertyMap constin_inRootObservablePropertyMap,
                                                const class GALGAS_semanticContext constin_inSemanticContext,
                                                const class GALGAS_observablePropertyMap constin_inObservablePropertyMap,
                                                class GALGAS_typeKind & out_outType,
                                                class GALGAS_propertyKind & out_outKind,
                                                class GALGAS_propertyMultiplicity & out_outMultiplicity,
                                                class GALGAS_string & out_outSwiftTypeStringForTransientFunctionArgument,
                                                class C_Compiler * inCompiler
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
//                 Extension getter '@observablePropertyAST generateRemoveObserverCall' (as function)                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_generateRemoveObserverCall (const class GALGAS_observablePropertyAST & inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @booleanMultipleBindingLiteralIntForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_booleanMultipleBindingLiteralIntForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Constructor
  public : GALGAS_booleanMultipleBindingLiteralIntForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_booleanMultipleBindingLiteralIntForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_booleanMultipleBindingLiteralIntForGeneration * ptr (void) const { return (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_booleanMultipleBindingLiteralIntForGeneration (const cPtr_booleanMultipleBindingLiteralIntForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_booleanMultipleBindingLiteralIntForGeneration extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_booleanMultipleBindingLiteralIntForGeneration constructor_new (const class GALGAS_uint & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_booleanMultipleBindingLiteralIntForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_booleanMultipleBindingLiteralIntForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @booleanMultipleBindingLiteralIntForGeneration class                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_booleanMultipleBindingLiteralIntForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_uint mAttribute_mValue ;

//--- Constructor
  public : cPtr_booleanMultipleBindingLiteralIntForGeneration (const GALGAS_uint & in_mValue
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension getter '@arrayControllerModel modelString' (as function)                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_modelString (const class GALGAS_arrayControllerModel & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension getter '@arrayControllerModel modelTypeName' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_modelTypeName (const class GALGAS_arrayControllerModel & inObject,
                                                   const class GALGAS_string & constinArgument0,
                                                   const class GALGAS_observablePropertyMap & constinArgument1,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension getter '@arrayControllerModel modelTypeName2' (as function)                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_modelTypeName_32_ (const class GALGAS_arrayControllerModel & inObject,
                                                       const class GALGAS_string & constinArgument0,
                                                       const class GALGAS_observablePropertyMap & constinArgument1,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

#endif
