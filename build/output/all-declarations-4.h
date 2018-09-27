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
//                       Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                    class GALGAS_semanticContext & ioArgument0,
                                                                                    class GALGAS_generationStruct & ioArgument1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_firstAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_firstAnalysisPhase (const class cPtr_abstractDeclarationAST * inObject,
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

  public : GALGAS_transientDefinitionListForGenerationEX mProperty_mTransientListForGeneration ;

  public : GALGAS_entityListForGeneratingEBManagedObjectContext mProperty_mEntityListForGeneration ;

  public : GALGAS_bool mProperty_mGenerateEBManagedDocumentSwift ;

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
                                    const GALGAS_transientDefinitionListForGenerationEX & in_mTransientListForGeneration,
                                    const GALGAS_entityListForGeneratingEBManagedObjectContext & in_mEntityListForGeneration,
                                    const GALGAS_bool & in_mGenerateEBManagedDocumentSwift,
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
                                                                 const class GALGAS_transientDefinitionListForGenerationEX & inOperand3,
                                                                 const class GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand4,
                                                                 const class GALGAS_bool & inOperand5,
                                                                 const class GALGAS_arrayControllerForGenerationEX & inOperand6,
                                                                 const class GALGAS_selectionControllerForGeneration & inOperand7,
                                                                 const class GALGAS_stringlist & inOperand8,
                                                                 const class GALGAS_transientExternTypeList & inOperand9
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
  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGenerationEX getter_mArrayControllerListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_entityListForGeneratingEBManagedObjectContext getter_mEntityListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_fileGenerationList getter_mFileGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateEBManagedDocumentSwift (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mNeededOutletClasses (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mPropertyClassList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_mSelectionControllerListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGenerationEX getter_mTransientListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientExternTypeList getter_mTransientPropertyTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration getter_mValidationStubRoutineListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_generationStruct class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationStruct ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension method '@abstractDeclarationAST secondAnalysisPhase'                            *
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
//                            Extension method '@abstractDeclarationAST thirdAnalysisPhase'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                    class GALGAS_semanticContext & ioArgument0,
                                                                                    class GALGAS_generationStruct & ioArgument1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_thirdAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_thirdAnalysisPhase (const class cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @enumForGeneration class                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_enumForGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_enumForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumForGeneration * ptr (void) const { return (const cPtr_enumForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumForGeneration (const cPtr_enumForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumForGeneration extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                  const class GALGAS_lstringlist & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @enumForGeneration class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_enumForGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mEnumName ;
  public : GALGAS_lstringlist mProperty_mEnumConstantList ;

//--- Constructor
  public : cPtr_enumForGeneration (const GALGAS_string & in_mEnumName,
                                   const GALGAS_lstringlist & in_mEnumConstantList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mEnumName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mEnumConstantList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

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
//                                              @classForGeneration class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_classForGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_classForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_classForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_classForGeneration * ptr (void) const { return (const cPtr_classForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_classForGeneration (const cPtr_classForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classForGeneration extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_classForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_propertyGenerationList & inOperand1,
                                                                   const class GALGAS_externSwiftFunctionList & inOperand2,
                                                                   const class GALGAS_externSwiftDelegateList & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_classForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_mPropertyGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @classForGeneration class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_classForGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mClassName ;
  public : GALGAS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public : GALGAS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public : GALGAS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;

//--- Constructor
  public : cPtr_classForGeneration (const GALGAS_string & in_mClassName,
                                    const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                    const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                    const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyGenerationList getter_mPropertyGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @documentFileGeneration class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_documentFileGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_documentFileGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_documentFileGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_documentFileGeneration * ptr (void) const { return (const cPtr_documentFileGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_documentFileGeneration (const cPtr_documentFileGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_documentFileGeneration extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_documentFileGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_propertyGenerationList & inOperand2,
                                                                       const class GALGAS_decoratedOutletMap & inOperand3,
                                                                       const class GALGAS_actionBindingListForGeneration & inOperand4,
                                                                       const class GALGAS_regularBindingsGenerationList & inOperand5,
                                                                       const class GALGAS_multipleBindingGenerationList & inOperand6,
                                                                       const class GALGAS_tableViewBindingGenerationList & inOperand7,
                                                                       const class GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand8
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_documentFileGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDocumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_mDocumentPropertyGenearionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ebViewGraphicControllerBindingGenerationList getter_mEBViewBindingGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap getter_mOutletMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mRootEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewBindingGenerationList getter_mTableViewBindingGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actionBindingListForGeneration getter_mTargetActionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingGenerationList getter_multipleBindingGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_documentFileGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_documentFileGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @documentFileGeneration class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_documentFileGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mDocumentName ;
  public : GALGAS_string mProperty_mRootEntityName ;
  public : GALGAS_propertyGenerationList mProperty_mDocumentPropertyGenearionList ;
  public : GALGAS_decoratedOutletMap mProperty_mOutletMap ;
  public : GALGAS_actionBindingListForGeneration mProperty_mTargetActionList ;
  public : GALGAS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public : GALGAS_multipleBindingGenerationList mProperty_multipleBindingGenerationList ;
  public : GALGAS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public : GALGAS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;

//--- Constructor
  public : cPtr_documentFileGeneration (const GALGAS_string & in_mDocumentName,
                                        const GALGAS_string & in_mRootEntityName,
                                        const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                        const GALGAS_decoratedOutletMap & in_mOutletMap,
                                        const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                        const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                        const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                        const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                        const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mDocumentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyGenerationList getter_mDocumentPropertyGenearionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedOutletMap getter_mOutletMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actionBindingListForGeneration getter_mTargetActionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_multipleBindingGenerationList getter_multipleBindingGenerationList (LOCATION_ARGS) const ;
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
  public : static class GALGAS_prefsDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_prefDeclaration & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefsDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_prefDeclaration getter_mDeclaration (LOCATION_ARGS) const ;


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
  public : GALGAS_prefDeclaration mProperty_mDeclaration ;

//--- Constructor
  public : cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName,
                                     const GALGAS_prefDeclaration & in_mDeclaration
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_prefDeclaration getter_mDeclaration (LOCATION_ARGS) const ;
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
//                                  Extension method '@astDeclaration typeInventory'                                   *
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
//                 Extension method '@astDeclaration buildObservablePropertyMapsFromStoredProperties'                  *
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
//                                Extension method '@astDeclaration semanticAnalysisEX'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_astDeclaration_semanticAnalysisEX) (const class cPtr_astDeclaration * inObject,
                                                                            const class GALGAS_semanticContextEX constinArgument0,
                                                                            class GALGAS_generationStruct & ioArgument1,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_semanticAnalysisEX (const int32_t inClassIndex,
                                              extensionMethodSignature_astDeclaration_semanticAnalysisEX inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_semanticAnalysisEX (const class cPtr_astDeclaration * inObject,
                                             const GALGAS_semanticContextEX constin_inSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@astDeclaration buildInitialSecondaryPropertyListMap'                       *
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

