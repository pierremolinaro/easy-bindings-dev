#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                        class GALGAS_declarationPrecedenceGraph & ioArgument0,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (const class cPtr_abstractDeclarationAST * inObject,
                                                 GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_lstring (*enterExtensionGetter_abstractDeclarationAST_nodeKey) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_nodeKey (const int32_t inClassIndex,
                                   enterExtensionGetter_abstractDeclarationAST_nodeKey inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring callExtensionGetter_nodeKey (const class cPtr_abstractDeclarationAST * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                    class GALGAS_semanticContext & ioArgument0,
                                                                                    class GALGAS_generationStruct & ioArgument1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_firstAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_firstAnalysisPhase (const class cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @generationStruct struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_generationStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_validationStubRoutineListForGeneration mProperty_mValidationStubRoutineListForGeneration ;

  public : GALGAS_fileGenerationList mProperty_mFileGenerationList ;

  public : GALGAS_entityListForGeneratingEBManagedObjectContext mProperty_mEntityListForGeneration ;

  public : GALGAS_bool mProperty_mGenerateEBManagedXibDocumentSwift ;

  public : GALGAS_bool mProperty_mGenerateEBManagedAutoLayoutDocumentSwift ;

  public : GALGAS_stringset mProperty_mNeededOutletClasses ;

  public : GALGAS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;

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
                                    const GALGAS_entityListForGeneratingEBManagedObjectContext & in_mEntityListForGeneration,
                                    const GALGAS_bool & in_mGenerateEBManagedXibDocumentSwift,
                                    const GALGAS_bool & in_mGenerateEBManagedAutoLayoutDocumentSwift,
                                    const GALGAS_stringset & in_mNeededOutletClasses,
                                    const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList,
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
                                                                 const class GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand2,
                                                                 const class GALGAS_bool & inOperand3,
                                                                 const class GALGAS_bool & inOperand4,
                                                                 const class GALGAS_stringset & inOperand5,
                                                                 const class GALGAS_mainXibDescriptorList & inOperand6,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_entityListForGeneratingEBManagedObjectContext getter_mEntityListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_fileGenerationList getter_mFileGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateEBManagedAutoLayoutDocumentSwift (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateEBManagedXibDocumentSwift (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_mMainXibDescriptorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mNeededOutletClasses (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mPropertyClassList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_mSelectionControllerListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientExternTypeList getter_mTransientPropertyTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration getter_mValidationStubRoutineListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_generationStruct class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationStruct ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST secondAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                     class GALGAS_semanticContext & ioArgument0,
                                                                                     class GALGAS_generationStruct & ioArgument1,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_secondAnalysisPhase (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_secondAnalysisPhase (const class cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                    class GALGAS_semanticContext & ioArgument0,
                                                                                    class GALGAS_generationStruct & ioArgument1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_thirdAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_thirdAnalysisPhase (const class cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST fourthAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDeclarationAST_fourthAnalysisPhase) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                     class GALGAS_semanticContext & ioArgument0,
                                                                                     class GALGAS_generationStruct & ioArgument1,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_fourthAnalysisPhase (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractDeclarationAST_fourthAnalysisPhase inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_fourthAnalysisPhase (const class cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
                                                                  const class GALGAS_lstringlist & inOperand1,
                                                                  const class GALGAS_enumFuncMap & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMEnumConstantList (class GALGAS_lstringlist inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEnumFuncMap (class GALGAS_enumFuncMap inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEnumName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumFuncMap getter_mEnumFuncMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumForGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mEnumName ;
  public : GALGAS_lstringlist mProperty_mEnumConstantList ;
  public : GALGAS_enumFuncMap mProperty_mEnumFuncMap ;

//--- Constructor
  public : cPtr_enumForGeneration (const GALGAS_string & in_mEnumName,
                                   const GALGAS_lstringlist & in_mEnumConstantList,
                                   const GALGAS_enumFuncMap & in_mEnumFuncMap
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mEnumName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEnumName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mEnumConstantList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEnumConstantList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_enumFuncMap getter_mEnumFuncMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEnumFuncMap (GALGAS_enumFuncMap inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_typeKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mKind (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMKind (GALGAS_typeKind inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityForGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_entityForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_entityForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_entityForGeneration * ptr (void) const { return (const cPtr_entityForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_entityForGeneration (const cPtr_entityForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_entityForGeneration extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_entityForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                    const class GALGAS_string & inOperand1,
                                                                    const class GALGAS_propertyGenerationList & inOperand2,
                                                                    const class GALGAS_stringset & inOperand3,
                                                                    const class GALGAS_bool & inOperand4,
                                                                    const class GALGAS_bool & inOperand5,
                                                                    const class GALGAS_stringset & inOperand6,
                                                                    const class GALGAS_externSwiftDelegateList & inOperand7,
                                                                    const class GALGAS_bool & inOperand8
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_entityForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMEntityName (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (class GALGAS_externSwiftDelegateList inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasSubEntity (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsAbstract (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOverridenTransients (class GALGAS_stringset inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationList (class GALGAS_propertyGenerationList inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSignatureSet (class GALGAS_stringset inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasSubEntity (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsGraphicEntity (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mOverridenTransients (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_mPropertyGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mSignatureSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSuperEntityName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @entityForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_entityForGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mEntityName ;
  public : GALGAS_string mProperty_mSuperEntityName ;
  public : GALGAS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public : GALGAS_stringset mProperty_mSignatureSet ;
  public : GALGAS_bool mProperty_mIsGraphicEntity ;
  public : GALGAS_bool mProperty_mIsAbstract ;
  public : GALGAS_stringset mProperty_mOverridenTransients ;
  public : GALGAS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;
  public : GALGAS_bool mProperty_mHasSubEntity ;

//--- Constructor
  public : cPtr_entityForGeneration (const GALGAS_string & in_mEntityName,
                                     const GALGAS_string & in_mSuperEntityName,
                                     const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                     const GALGAS_stringset & in_mSignatureSet,
                                     const GALGAS_bool & in_mIsGraphicEntity,
                                     const GALGAS_bool & in_mIsAbstract,
                                     const GALGAS_stringset & in_mOverridenTransients,
                                     const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                     const GALGAS_bool & in_mHasSubEntity
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEntityName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mSuperEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyGenerationList getter_mPropertyGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationList (GALGAS_propertyGenerationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringset getter_mSignatureSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSignatureSet (GALGAS_stringset inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsGraphicEntity (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsAbstract (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringset getter_mOverridenTransients (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOverridenTransients (GALGAS_stringset inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (GALGAS_externSwiftDelegateList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasSubEntity (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasSubEntity (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

