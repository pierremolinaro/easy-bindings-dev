#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-3.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                        class GALGAS_declarationPrecedenceGraph & ioArgument0,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterInPrecedenceGraph (const class cPtr_abstractDeclarationAST * inObject,
                                                 GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Abstract extension getter '@abstractDeclarationAST lkey'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_lstring (*enterExtensionGetter_abstractDeclarationAST_lkey) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_lkey (const int32_t inClassIndex,
                                enterExtensionGetter_abstractDeclarationAST_lkey inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_lstring callExtensionGetter_lkey (const class cPtr_abstractDeclarationAST * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Abstract extension method '@abstractDeclarationAST classAndPropertySemanticAnalysis'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractDeclarationAST_classAndPropertySemanticAnalysis) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                                  class GALGAS_semanticContext & ioArgument0,
                                                                                                  class GALGAS_generationStruct & ioArgument1,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_classAndPropertySemanticAnalysis (const int32_t inClassIndex,
                                                            extensionMethodSignature_abstractDeclarationAST_classAndPropertySemanticAnalysis inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_classAndPropertySemanticAnalysis (const class cPtr_abstractDeclarationAST * inObject,
                                                           GALGAS_semanticContext & io_ioSemanticContext,
                                                           GALGAS_generationStruct & io_ioGeneration,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @generationStruct struct                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_generationStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_validationStubRoutineListForGeneration mProperty_mValidationStubRoutineListForGeneration ;

  public : GALGAS_fileGenerationList mProperty_mFileGenerationList ;

  public : GALGAS_stringset mProperty_mNeededOutletClasses ;

  public : GALGAS_transientDefinitionListForGeneration mProperty_mTransientListForGeneration ;

  public : GALGAS_actionListForGeneration mProperty_mActionListForGeneration ;

  public : GALGAS_documentListForGeneration mProperty_mDocumentListForGeneration ;

  public : GALGAS_entityListForGeneration mProperty_mEntityListForGeneration ;

  public : GALGAS_classListForGeneration mProperty_mClassListForGeneration ;

  public : GALGAS_enumListForGeneration mProperty_mEnumListForGeneration ;

  public : GALGAS_arrayControllerForGenerationEX mProperty_mArrayControllerListForGeneration ;

  public : GALGAS_selectionControllerForGeneration mProperty_mSelectionControllerListForGeneration ;

  public : GALGAS_stringlist mProperty_mPropertyClassList ;

  public : GALGAS_transientExternTypeList mProperty_mTransientPropertyTypeList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_generationStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_generationStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_generationStruct (void) ;

//--------------------------------- Native constructor
  public : GALGAS_generationStruct (const GALGAS_validationStubRoutineListForGeneration & in_mValidationStubRoutineListForGeneration,
                                    const GALGAS_fileGenerationList & in_mFileGenerationList,
                                    const GALGAS_stringset & in_mNeededOutletClasses,
                                    const GALGAS_transientDefinitionListForGeneration & in_mTransientListForGeneration,
                                    const GALGAS_actionListForGeneration & in_mActionListForGeneration,
                                    const GALGAS_documentListForGeneration & in_mDocumentListForGeneration,
                                    const GALGAS_entityListForGeneration & in_mEntityListForGeneration,
                                    const GALGAS_classListForGeneration & in_mClassListForGeneration,
                                    const GALGAS_enumListForGeneration & in_mEnumListForGeneration,
                                    const GALGAS_arrayControllerForGenerationEX & in_mArrayControllerListForGeneration,
                                    const GALGAS_selectionControllerForGeneration & in_mSelectionControllerListForGeneration,
                                    const GALGAS_stringlist & in_mPropertyClassList,
                                    const GALGAS_transientExternTypeList & in_mTransientPropertyTypeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_generationStruct extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_generationStruct constructor_new (const class GALGAS_validationStubRoutineListForGeneration & inOperand0,
                                                                 const class GALGAS_fileGenerationList & inOperand1,
                                                                 const class GALGAS_stringset & inOperand2,
                                                                 const class GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                 const class GALGAS_actionListForGeneration & inOperand4,
                                                                 const class GALGAS_documentListForGeneration & inOperand5,
                                                                 const class GALGAS_entityListForGeneration & inOperand6,
                                                                 const class GALGAS_classListForGeneration & inOperand7,
                                                                 const class GALGAS_enumListForGeneration & inOperand8,
                                                                 const class GALGAS_arrayControllerForGenerationEX & inOperand9,
                                                                 const class GALGAS_selectionControllerForGeneration & inOperand10,
                                                                 const class GALGAS_stringlist & inOperand11,
                                                                 const class GALGAS_transientExternTypeList & inOperand12
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_generationStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionListForGeneration getter_mActionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGenerationEX getter_mArrayControllerListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classListForGeneration getter_mClassListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_documentListForGeneration getter_mDocumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_entityListForGeneration getter_mEntityListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumListForGeneration getter_mEnumListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_fileGenerationList getter_mFileGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mNeededOutletClasses (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mPropertyClassList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_mSelectionControllerListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration getter_mTransientListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientExternTypeList getter_mTransientPropertyTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration getter_mValidationStubRoutineListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_generationStruct class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationStruct ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Abstract extension method '@abstractDeclarationAST secondAnalysisPhase'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                     class GALGAS_semanticContext & ioArgument0,
                                                                                     class GALGAS_generationStruct & ioArgument1,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_secondAnalysisPhase (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_secondAnalysisPhase (const class cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @atomicClassDeclarationAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_atomicClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_atomicClassDeclarationAST (void) ;

//---
  public : inline const class cPtr_atomicClassDeclarationAST * ptr (void) const { return (const cPtr_atomicClassDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_atomicClassDeclarationAST (const cPtr_atomicClassDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_atomicClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_atomicClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_typeKind & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_atomicClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicClassDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @atomicClassDeclarationAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_atomicClassDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_typeKind mProperty_mKind ;

//--- Constructor
  public : cPtr_atomicClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                           const GALGAS_typeKind & in_mKind
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind getter_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @prefsDeclarationAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_prefsDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_prefsDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_prefsDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_prefsDeclarationAST * ptr (void) const { return (const cPtr_prefsDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_prefsDeclarationAST (const cPtr_prefsDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefsDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prefsDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefsDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefsDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @prefsDeclarationAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_prefsDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes

//--- Constructor
  public : cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Extension method '@prefDeclaration typeInventory'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const class GALGAS_prefDeclaration inObject,
                                    class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@prefDeclaration solveSecondaryProperty'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_solveSecondaryProperty (const class GALGAS_prefDeclaration inObject,
                                             class GALGAS_semanticContextEX & io_ioSemanticContext,
                                             const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                             const class GALGAS_secondaryPropertyList constin_inPropertiesToSolve,
                                             class GALGAS_secondaryPropertyList & out_outUnsolvedProperties,
                                             class GALGAS_simpleStoredPropertyListForGenerationEX & io_ioSimpleStoredPropertyListForGeneration,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Extension method '@prefDeclaration buildObservablePropertyMapsFromStoredProperties'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMapsFromStoredProperties (const class GALGAS_prefDeclaration inObject,
                                                                      const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                                      class GALGAS_semanticContextEX & io_ioSemanticContext,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Extension method '@prefDeclaration semanticAnalysis'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const class GALGAS_prefDeclaration inObject,
                                       const class GALGAS_externSwiftFunctionList constin_inExternSwiftFunctionList,
                                       const class GALGAS_semanticContextEX constin_inSemanticContext,
                                       class GALGAS_generationStruct & io_ioGeneration,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @preferencesForGeneration class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_preferencesForGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_preferencesForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_preferencesForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_preferencesForGeneration * ptr (void) const { return (const cPtr_preferencesForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_preferencesForGeneration (const cPtr_preferencesForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_preferencesForGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_preferencesForGeneration constructor_new (const class GALGAS_propertyGenerationList & inOperand0,
                                                                         const class GALGAS_transientDefinitionListForGeneration & inOperand1,
                                                                         const class GALGAS_regularBindingsGenerationList & inOperand2,
                                                                         const class GALGAS_multipleBindingGenerationList & inOperand3,
                                                                         const class GALGAS_actionBindingListForGeneration & inOperand4,
                                                                         const class GALGAS_decoratedOutletMap & inOperand5,
                                                                         const class GALGAS_externSwiftFunctionList & inOperand6,
                                                                         const class GALGAS_tableViewBindingGenerationList & inOperand7,
                                                                         const class GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand8
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_preferencesForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionBindingListForGeneration getter_mActionBindingListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ebViewGraphicControllerBindingGenerationList getter_mEBViewBindingGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingGenerationList getter_mMultipleBindingGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap getter_mOutletMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_mPropertyListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewBindingGenerationList getter_mTableViewBindingGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration getter_mTransientDefinitionListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_preferencesForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferencesForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @preferencesForGeneration class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_preferencesForGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_propertyGenerationList mProperty_mPropertyListForGeneration ;
  public : GALGAS_transientDefinitionListForGeneration mProperty_mTransientDefinitionListForGeneration ;
  public : GALGAS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public : GALGAS_multipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;
  public : GALGAS_actionBindingListForGeneration mProperty_mActionBindingListForGeneration ;
  public : GALGAS_decoratedOutletMap mProperty_mOutletMap ;
  public : GALGAS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public : GALGAS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public : GALGAS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;

//--- Constructor
  public : cPtr_preferencesForGeneration (const GALGAS_propertyGenerationList & in_mPropertyListForGeneration,
                                          const GALGAS_transientDefinitionListForGeneration & in_mTransientDefinitionListForGeneration,
                                          const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                          const GALGAS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                          const GALGAS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                          const GALGAS_decoratedOutletMap & in_mOutletMap,
                                          const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                          const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                          const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_propertyGenerationList getter_mPropertyListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_transientDefinitionListForGeneration getter_mTransientDefinitionListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_multipleBindingGenerationList getter_mMultipleBindingGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actionBindingListForGeneration getter_mActionBindingListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedOutletMap getter_mOutletMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewBindingGenerationList getter_mTableViewBindingGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ebViewGraphicControllerBindingGenerationList getter_mEBViewBindingGenerationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'analyzeOutlets'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeOutlets (const class GALGAS_observablePropertyMap constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_semanticContextEX constinArgument2,
                             const class GALGAS_outletDeclarationList constinArgument3,
                             const class GALGAS_observablePropertyMap constinArgument4,
                             const class GALGAS_actionMap constinArgument5,
                             const class GALGAS_string constinArgument6,
                             class GALGAS_generationStruct & ioArgument7,
                             class GALGAS_regularBindingsGenerationList & outArgument8,
                             class GALGAS_multipleBindingGenerationList & outArgument9,
                             class GALGAS_actionBindingListForGeneration & outArgument10,
                             class GALGAS_decoratedOutletMap & outArgument11,
                             class GALGAS_tableViewBindingGenerationList & outArgument12,
                             class GALGAS_ebViewGraphicControllerBindingGenerationList & outArgument13,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'buildActionMap'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildActionMap (const class GALGAS_lstringlist constinArgument0,
                             class GALGAS_actionMap & outArgument1,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @atomicPropertyGeneration class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_atomicPropertyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_atomicPropertyGeneration (void) ;

//---
  public : inline const class cPtr_atomicPropertyGeneration * ptr (void) const { return (const cPtr_atomicPropertyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_atomicPropertyGeneration (const cPtr_atomicPropertyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_atomicPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_atomicPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_bool & inOperand1,
                                                                         const class GALGAS_typeKind & inOperand2,
                                                                         const class GALGAS_bool & inOperand3,
                                                                         const class GALGAS_string & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_atomicPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultValueInSwift (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsValidation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicPropertyGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @atomicPropertyGeneration class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_atomicPropertyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_bool mProperty_mNeedsValidation ;
  public : GALGAS_typeKind mProperty_mType ;
  public : GALGAS_bool mProperty_mIsProxy ;
  public : GALGAS_string mProperty_mDefaultValueInSwift ;

//--- Constructor
  public : cPtr_atomicPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                          const GALGAS_bool & in_mNeedsValidation,
                                          const GALGAS_typeKind & in_mType,
                                          const GALGAS_bool & in_mIsProxy,
                                          const GALGAS_string & in_mDefaultValueInSwift
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mNeedsValidation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mDefaultValueInSwift (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @booleanMultipleBindingLiteralIntForGeneration class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Pointer class for @booleanMultipleBindingLiteralIntForGeneration class                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_booleanMultipleBindingLiteralIntForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_uint mProperty_mValue ;

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @arrayControllerGeneration class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_arrayControllerGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_arrayControllerGeneration (void) ;

//---
  public : inline const class cPtr_arrayControllerGeneration * ptr (void) const { return (const cPtr_arrayControllerGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_arrayControllerGeneration (const cPtr_arrayControllerGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_arrayControllerFilterListForGeneration & inOperand2,
                                                                          const class GALGAS_string & inOperand3,
                                                                          const class GALGAS_arrayControllerBoundColumnListForGeneration & inOperand4,
                                                                          const class GALGAS_arrayControllerSortedColumnListForGeneration & inOperand5,
                                                                          const class GALGAS_string & inOperand6,
                                                                          const class GALGAS_arrayControllerModelKind & inOperand7,
                                                                          const class GALGAS_string & inOperand8,
                                                                          const class GALGAS_bool & inOperand9,
                                                                          const class GALGAS__32_stringlist & inOperand10
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListForGeneration getter_mArrayControllerBoundColumnListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerFilterListForGeneration getter_mArrayControllerFilterListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerModelKind getter_mArrayControllerModelKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerSortedColumnListForGeneration getter_mArrayControllerSortedColumnListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mAttributeListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mElementTypeIsGraphic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mElementTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @arrayControllerGeneration class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_arrayControllerGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mOwnerName ;
  public : GALGAS_lstring mProperty_mControllerName ;
  public : GALGAS_arrayControllerFilterListForGeneration mProperty_mArrayControllerFilterListForGeneration ;
  public : GALGAS_string mProperty_mModelString ;
  public : GALGAS_arrayControllerBoundColumnListForGeneration mProperty_mArrayControllerBoundColumnListForGeneration ;
  public : GALGAS_arrayControllerSortedColumnListForGeneration mProperty_mArrayControllerSortedColumnListForGeneration ;
  public : GALGAS_string mProperty_mModelTypeName ;
  public : GALGAS_arrayControllerModelKind mProperty_mArrayControllerModelKind ;
  public : GALGAS_string mProperty_mElementTypeName ;
  public : GALGAS_bool mProperty_mElementTypeIsGraphic ;
  public : GALGAS__32_stringlist mProperty_mAttributeListForGeneration ;

//--- Constructor
  public : cPtr_arrayControllerGeneration (const GALGAS_string & in_mOwnerName,
                                           const GALGAS_lstring & in_mControllerName,
                                           const GALGAS_arrayControllerFilterListForGeneration & in_mArrayControllerFilterListForGeneration,
                                           const GALGAS_string & in_mModelString,
                                           const GALGAS_arrayControllerBoundColumnListForGeneration & in_mArrayControllerBoundColumnListForGeneration,
                                           const GALGAS_arrayControllerSortedColumnListForGeneration & in_mArrayControllerSortedColumnListForGeneration,
                                           const GALGAS_string & in_mModelTypeName,
                                           const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                           const GALGAS_string & in_mElementTypeName,
                                           const GALGAS_bool & in_mElementTypeIsGraphic,
                                           const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerFilterListForGeneration getter_mArrayControllerFilterListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelString (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBoundColumnListForGeneration getter_mArrayControllerBoundColumnListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerSortedColumnListForGeneration getter_mArrayControllerSortedColumnListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerModelKind getter_mArrayControllerModelKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mElementTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mElementTypeIsGraphic (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS__32_stringlist getter_mAttributeListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Abstract extension method '@astDeclaration typeInventory'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_astDeclaration_typeInventory) (const class cPtr_astDeclaration * inObject,
                                                                       class GALGAS_unifiedTypeMap & ioArgument0,
                                                                       class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_typeInventory (const int32_t inClassIndex,
                                         extensionMethodSignature_astDeclaration_typeInventory inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_typeInventory (const class cPtr_astDeclaration * inObject,
                                        GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Abstract extension method '@astDeclaration buildObservablePropertyMapsFromStoredProperties'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties) (const class cPtr_astDeclaration * inObject,
                                                                                                         const class GALGAS_unifiedTypeMap constinArgument0,
                                                                                                         class GALGAS_semanticContextEX & ioArgument1,
                                                                                                         class C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_buildObservablePropertyMapsFromStoredProperties (const int32_t inClassIndex,
                                                                           extensionMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_buildObservablePropertyMapsFromStoredProperties (const class cPtr_astDeclaration * inObject,
                                                                          const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                                          GALGAS_semanticContextEX & io_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Abstract extension method '@astDeclaration semanticAnalysis'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_astDeclaration_semanticAnalysis) (const class cPtr_astDeclaration * inObject,
                                                                          const class GALGAS_semanticContextEX constinArgument0,
                                                                          class GALGAS_generationStruct & ioArgument1,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_semanticAnalysis (const int32_t inClassIndex,
                                            extensionMethodSignature_astDeclaration_semanticAnalysis inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_semanticAnalysis (const class cPtr_astDeclaration * inObject,
                                           const GALGAS_semanticContextEX constin_inSemanticContext,
                                           GALGAS_generationStruct & io_ioGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Abstract extension method '@astDeclaration buildInitialSecondaryPropertyListMap'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap) (const class cPtr_astDeclaration * inObject,
                                                                                              class GALGAS_secondaryDeclarationListWorkingList & ioArgument0,
                                                                                              class GALGAS_uint & ioArgument1,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_buildInitialSecondaryPropertyListMap (const int32_t inClassIndex,
                                                                extensionMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_buildInitialSecondaryPropertyListMap (const class cPtr_astDeclaration * inObject,
                                                               GALGAS_secondaryDeclarationListWorkingList & io_ioSecondaryDeclarationListWorkingList,
                                                               GALGAS_uint & io_ioSecondaryDeclarationCount,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Abstract extension method '@astDeclaration solveSecondaryProperty'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_astDeclaration_solveSecondaryProperty) (const class cPtr_astDeclaration * inObject,
                                                                                class GALGAS_semanticContextEX & ioArgument0,
                                                                                const class GALGAS_unifiedTypeMap constinArgument1,
                                                                                const class GALGAS_secondaryPropertyList constinArgument2,
                                                                                class GALGAS_secondaryPropertyList & outArgument3,
                                                                                class GALGAS_simpleStoredPropertyListForGenerationEX & ioArgument4,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_solveSecondaryProperty (const int32_t inClassIndex,
                                                  extensionMethodSignature_astDeclaration_solveSecondaryProperty inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_solveSecondaryProperty (const class cPtr_astDeclaration * inObject,
                                                 GALGAS_semanticContextEX & io_ioSemanticContext,
                                                 const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                 const GALGAS_secondaryPropertyList constin_inPropertiesToSolve,
                                                 GALGAS_secondaryPropertyList & out_outUnsolvedProperties,
                                                 GALGAS_simpleStoredPropertyListForGenerationEX & io_ioSimpleStoredPropertyListForGeneration,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

