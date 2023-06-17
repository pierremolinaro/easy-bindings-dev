#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_computedPropertyDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_computedPropertyDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_computedPropertyDeclarationAST (const class cPtr_computedPropertyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRootEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mComputedPropertyTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mComputedPropertyName (void) const ;

  public: class GALGAS_observablePropertyList readProperty_mDependencyList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedPropertyDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_lstring & inOperand2,
                                                                              const class GALGAS_lstring & inOperand3,
                                                                              const class GALGAS_observablePropertyList & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computedPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMComputedPropertyName (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMComputedPropertyTypeName (class GALGAS_lstring inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_observablePropertyList inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedPropertyDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computedPropertyDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mRootEntityName ;
  public: GALGAS_lstring mProperty_mComputedPropertyTypeName ;
  public: GALGAS_lstring mProperty_mComputedPropertyName ;
  public: GALGAS_observablePropertyList mProperty_mDependencyList ;

//--- Constructor
  public: cPtr_computedPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                               const GALGAS_lstring & in_mRootEntityName,
                                               const GALGAS_lstring & in_mComputedPropertyTypeName,
                                               const GALGAS_lstring & in_mComputedPropertyName,
                                               const GALGAS_observablePropertyList & in_mDependencyList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_computedPropertyDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_computedPropertyDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_computedPropertyDeclarationAST_2D_weak (const class GALGAS_computedPropertyDeclarationAST & inSource) ;

  public: GALGAS_computedPropertyDeclarationAST_2D_weak & operator = (const class GALGAS_computedPropertyDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_computedPropertyDeclarationAST bang_computedPropertyDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedPropertyDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computedPropertyDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedPropertyDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDependencyListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientDependencyListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_transientDependencyListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_transientDependencyListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_observablePropertyAST & in_mDependency,
                                                 const class GALGAS_string & in_mFunctionArgumentName,
                                                 const class GALGAS_string & in_mFunctionArgumentTypeString,
                                                 const class GALGAS_string & in_mDefaultValueAsString
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_transientDependencyListForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientDependencyListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_transientDependencyListForGeneration constructor_listWithValue (const class GALGAS_observablePropertyAST & inOperand0,
                                                                                              const class GALGAS_string & inOperand1,
                                                                                              const class GALGAS_string & inOperand2,
                                                                                              const class GALGAS_string & inOperand3
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_transientDependencyListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_observablePropertyAST & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_transientDependencyListForGeneration add_operation (const GALGAS_transientDependencyListForGeneration & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_transientDependencyListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_observablePropertyAST constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_observablePropertyAST & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_observablePropertyAST & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_observablePropertyAST & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefaultValueAsStringAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependencyAtIndex (class GALGAS_observablePropertyAST constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionArgumentNameAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionArgumentTypeStringAtIndex (class GALGAS_string constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_observablePropertyAST & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_observablePropertyAST & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultValueAsStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_observablePropertyAST getter_mDependencyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionArgumentTypeStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_transientDependencyListForGeneration ;
 
} ; // End of GALGAS_transientDependencyListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_transientDependencyListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_transientDependencyListForGeneration (const GALGAS_transientDependencyListForGeneration & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_observablePropertyAST current_mDependency (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFunctionArgumentName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFunctionArgumentTypeString (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mDefaultValueAsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_transientDependencyListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDependencyListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientDependencyListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_observablePropertyAST mProperty_mDependency ;
  public: inline GALGAS_observablePropertyAST readProperty_mDependency (void) const {
    return mProperty_mDependency ;
  }

  public: GALGAS_string mProperty_mFunctionArgumentName ;
  public: inline GALGAS_string readProperty_mFunctionArgumentName (void) const {
    return mProperty_mFunctionArgumentName ;
  }

  public: GALGAS_string mProperty_mFunctionArgumentTypeString ;
  public: inline GALGAS_string readProperty_mFunctionArgumentTypeString (void) const {
    return mProperty_mFunctionArgumentTypeString ;
  }

  public: GALGAS_string mProperty_mDefaultValueAsString ;
  public: inline GALGAS_string readProperty_mDefaultValueAsString (void) const {
    return mProperty_mDefaultValueAsString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_transientDependencyListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDependency (const GALGAS_observablePropertyAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependency = inValue ;
  }

  public: inline void setter_setMFunctionArgumentName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionArgumentName = inValue ;
  }

  public: inline void setter_setMFunctionArgumentTypeString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionArgumentTypeString = inValue ;
  }

  public: inline void setter_setMDefaultValueAsString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultValueAsString = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_transientDependencyListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_transientDependencyListForGeneration_2D_element (const GALGAS_observablePropertyAST & in_mDependency,
                                                                  const GALGAS_string & in_mFunctionArgumentName,
                                                                  const GALGAS_string & in_mFunctionArgumentTypeString,
                                                                  const GALGAS_string & in_mDefaultValueAsString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_transientDependencyListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientDependencyListForGeneration_2D_element constructor_new (const class GALGAS_observablePropertyAST & inOperand0,
                                                                                               const class GALGAS_string & inOperand1,
                                                                                               const class GALGAS_string & inOperand2,
                                                                                               const class GALGAS_string & inOperand3
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientDependencyListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_transientDependencyListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_propertyGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_propertyGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_propertyGeneration_2D_weak (const class GALGAS_propertyGeneration & inSource) ;

  public: GALGAS_propertyGeneration_2D_weak & operator = (const class GALGAS_propertyGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_propertyGeneration bang_propertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_computedPropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_computedPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_computedPropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedPropertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_computedPropertyGenerationList constructor_listWithValue (const class GALGAS_computedPropertyGeneration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_computedPropertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_computedPropertyGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_computedPropertyGenerationList add_operation (const GALGAS_computedPropertyGenerationList & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_computedPropertyGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_computedPropertyGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_computedPropertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_computedPropertyGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_computedPropertyGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_computedPropertyGeneration constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_computedPropertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_computedPropertyGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_computedPropertyGenerationList ;
 
} ; // End of GALGAS_computedPropertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_computedPropertyGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_computedPropertyGenerationList (const GALGAS_computedPropertyGenerationList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_computedPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_computedPropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGeneration : public GALGAS_propertyGeneration {
//--------------------------------- Default constructor
  public: GALGAS_computedPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_computedPropertyGeneration (const class cPtr_computedPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mClassName (void) const ;

  public: class GALGAS_typeKind readProperty_mType (void) const ;

  public: class GALGAS_transientDependencyListForGeneration readProperty_mDependencyList (void) const ;

  public: class GALGAS_bool readProperty_mGenerate (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_typeKind & inOperand2,
                                                                          const class GALGAS_transientDependencyListForGeneration & inOperand3,
                                                                          const class GALGAS_bool & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computedPropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMClassName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_transientDependencyListForGeneration inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGenerate (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_typeKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computedPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter bindPropertyInSelectionController
  public: virtual class GALGAS_string getter_bindPropertyInSelectionController (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter configurationCode
  public: virtual class GALGAS_string getter_configurationCode (const class GALGAS_bool inPreferences,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter declarationInSelectionControllerCode
  public: virtual class GALGAS_string getter_declarationInSelectionControllerCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GALGAS_string getter_initCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GALGAS_string getter_propertyDeclarationCode (const class GALGAS_bool inPreferences,
           const class GALGAS_stringset inOverriddenTransients,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_string mProperty_mClassName ;
  public: GALGAS_typeKind mProperty_mType ;
  public: GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;
  public: GALGAS_bool mProperty_mGenerate ;

//--- Constructor
  public: cPtr_computedPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                           const GALGAS_string & in_mClassName,
                                           const GALGAS_typeKind & in_mType,
                                           const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                           const GALGAS_bool & in_mGenerate
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_computedPropertyGeneration mProperty_mProperty ;
  public: inline GALGAS_computedPropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_computedPropertyGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GALGAS_computedPropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_computedPropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_computedPropertyGenerationList_2D_element (const GALGAS_computedPropertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedPropertyGenerationList_2D_element constructor_new (const class GALGAS_computedPropertyGeneration & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computedPropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedPropertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computeRoutineGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computeRoutineGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_computeRoutineGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_computeRoutineGeneration (const class cPtr_computeRoutineGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mOwnerName (void) const ;

  public: class GALGAS_string readProperty_mTransientName (void) const ;

  public: class GALGAS_typeKind readProperty_mTransientType (void) const ;

  public: class GALGAS_transientDependencyListForGeneration readProperty_mDependencyList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computeRoutineGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computeRoutineGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_typeKind & inOperand2,
                                                                        const class GALGAS_transientDependencyListForGeneration & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computeRoutineGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_transientDependencyListForGeneration inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransientName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransientType (class GALGAS_typeKind inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computeRoutineGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeRoutineGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computeRoutineGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computeRoutineGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_string inOutputDirectory,
           const class GALGAS_generationStruct inGenerationStruct,
           class GALGAS_stringset & ioGeneratedFileSet,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mOwnerName ;
  public: GALGAS_string mProperty_mTransientName ;
  public: GALGAS_typeKind mProperty_mTransientType ;
  public: GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;

//--- Constructor
  public: cPtr_computeRoutineGeneration (const GALGAS_string & in_mOwnerName,
                                         const GALGAS_string & in_mTransientName,
                                         const GALGAS_typeKind & in_mTransientType,
                                         const GALGAS_transientDependencyListForGeneration & in_mDependencyList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computeRoutineGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computeRoutineGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_computeRoutineGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_computeRoutineGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_computeRoutineGeneration_2D_weak (const class GALGAS_computeRoutineGeneration & inSource) ;

  public: GALGAS_computeRoutineGeneration_2D_weak & operator = (const class GALGAS_computeRoutineGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_computeRoutineGeneration bang_computeRoutineGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computeRoutineGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computeRoutineGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computeRoutineGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computeRoutineGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeRoutineGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_transientDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_transientDeclarationAST (const class cPtr_transientDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRootEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mTransientTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mTransientName (void) const ;

  public: class GALGAS_observablePropertyList readProperty_mDependencyList (void) const ;

  public: class GALGAS_bool readProperty_mIsOverriding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_transientDeclarationAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_lstring & inOperand2,
                                                                       const class GALGAS_lstring & inOperand3,
                                                                       const class GALGAS_observablePropertyList & inOperand4,
                                                                       const class GALGAS_bool & inOperand5
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_observablePropertyList inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsOverriding (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransientName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransientTypeName (class GALGAS_lstring inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_transientDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mRootEntityName ;
  public: GALGAS_lstring mProperty_mTransientTypeName ;
  public: GALGAS_lstring mProperty_mTransientName ;
  public: GALGAS_observablePropertyList mProperty_mDependencyList ;
  public: GALGAS_bool mProperty_mIsOverriding ;

//--- Constructor
  public: cPtr_transientDeclarationAST (const GALGAS_lstring & in_mClassName,
                                        const GALGAS_lstring & in_mRootEntityName,
                                        const GALGAS_lstring & in_mTransientTypeName,
                                        const GALGAS_lstring & in_mTransientName,
                                        const GALGAS_observablePropertyList & in_mDependencyList,
                                        const GALGAS_bool & in_mIsOverriding
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_transientDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_transientDeclarationAST_2D_weak (const class GALGAS_transientDeclarationAST & inSource) ;

  public: GALGAS_transientDeclarationAST_2D_weak & operator = (const class GALGAS_transientDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_transientDeclarationAST bang_transientDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_transientDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_transientDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientPropertyGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientPropertyGeneration : public GALGAS_propertyGeneration {
//--------------------------------- Default constructor
  public: GALGAS_transientPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_transientPropertyGeneration (const class cPtr_transientPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mClassName (void) const ;

  public: class GALGAS_typeKind readProperty_mType (void) const ;

  public: class GALGAS_transientDependencyListForGeneration readProperty_mDependencyList (void) const ;

  public: class GALGAS_bool readProperty_mGenerate (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_transientPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_typeKind & inOperand2,
                                                                           const class GALGAS_transientDependencyListForGeneration & inOperand3,
                                                                           const class GALGAS_bool & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientPropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMClassName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_transientDependencyListForGeneration inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGenerate (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_typeKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_transientPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter bindPropertyInSelectionController
  public: virtual class GALGAS_string getter_bindPropertyInSelectionController (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter configurationCode
  public: virtual class GALGAS_string getter_configurationCode (const class GALGAS_bool inPreferences,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter declarationInSelectionControllerCode
  public: virtual class GALGAS_string getter_declarationInSelectionControllerCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GALGAS_string getter_initCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GALGAS_string getter_propertyDeclarationCode (const class GALGAS_bool inPreferences,
           const class GALGAS_stringset inOverriddenTransients,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_string mProperty_mClassName ;
  public: GALGAS_typeKind mProperty_mType ;
  public: GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;
  public: GALGAS_bool mProperty_mGenerate ;

//--- Constructor
  public: cPtr_transientPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                            const GALGAS_string & in_mClassName,
                                            const GALGAS_typeKind & in_mType,
                                            const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                            const GALGAS_bool & in_mGenerate
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientPropertyGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientPropertyGeneration_2D_weak : public GALGAS_propertyGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_transientPropertyGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientPropertyGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_transientPropertyGeneration_2D_weak (const class GALGAS_transientPropertyGeneration & inSource) ;

  public: GALGAS_transientPropertyGeneration_2D_weak & operator = (const class GALGAS_transientPropertyGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_transientPropertyGeneration bang_transientPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_transientPropertyGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientPropertyGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientPropertyGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_transientPropertyGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientPropertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_transientPropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_transientPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_transientPropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_transientPropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientPropertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_transientPropertyGenerationList constructor_listWithValue (const class GALGAS_transientPropertyGeneration & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_transientPropertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_transientPropertyGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_transientPropertyGenerationList add_operation (const GALGAS_transientPropertyGenerationList & inOperand,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_transientPropertyGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_transientPropertyGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_transientPropertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_transientPropertyGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_transientPropertyGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_transientPropertyGeneration constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_transientPropertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_transientPropertyGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_transientPropertyGenerationList ;
 
} ; // End of GALGAS_transientPropertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_transientPropertyGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_transientPropertyGenerationList (const GALGAS_transientPropertyGenerationList & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_transientPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_transientPropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientPropertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientPropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_transientPropertyGeneration mProperty_mProperty ;
  public: inline GALGAS_transientPropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_transientPropertyGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GALGAS_transientPropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_transientPropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_transientPropertyGenerationList_2D_element (const GALGAS_transientPropertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_transientPropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientPropertyGenerationList_2D_element constructor_new (const class GALGAS_transientPropertyGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientPropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_transientPropertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@transientDependencyListForGeneration transientComputeFunctionCall' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_transientComputeFunctionCall (const class GALGAS_transientDependencyListForGeneration & inObject,
                                                                  const class GALGAS_bool & constinArgument0,
                                                                  const class GALGAS_string & constinArgument1,
                                                                  const class GALGAS_string & constinArgument2,
                                                                  const class GALGAS_string & constinArgument3,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@transientDependencyListForGeneration needs_unwSelf' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_needs_5F_unwSelf (const class GALGAS_transientDependencyListForGeneration & inObject,
                                                    const class GALGAS_bool & constinArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST generateAddObserverCall' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_generateAddObserverCall (const class GALGAS_observablePropertyAST & inObject,
                                                             const class GALGAS_bool & constinArgument0,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST generateRemoveObserverCall' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_generateRemoveObserverCall (const class GALGAS_observablePropertyAST & inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientRoutineGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientRoutineGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_transientRoutineGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_transientRoutineGeneration (const class cPtr_transientRoutineGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mOwnerName (void) const ;

  public: class GALGAS_string readProperty_mTransientName (void) const ;

  public: class GALGAS_typeKind readProperty_mTransientType (void) const ;

  public: class GALGAS_string readProperty_mGeneratedFunctionNamePrefix (void) const ;

  public: class GALGAS_transientDependencyListForGeneration readProperty_mDependencyList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_transientRoutineGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientRoutineGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_typeKind & inOperand2,
                                                                          const class GALGAS_string & inOperand3,
                                                                          const class GALGAS_transientDependencyListForGeneration & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientRoutineGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_transientDependencyListForGeneration inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGeneratedFunctionNamePrefix (class GALGAS_string inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransientName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransientType (class GALGAS_typeKind inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_transientRoutineGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRoutineGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientRoutineGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientRoutineGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_string inOutputDirectory,
           const class GALGAS_generationStruct inGenerationStruct,
           class GALGAS_stringset & ioGeneratedFileSet,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mOwnerName ;
  public: GALGAS_string mProperty_mTransientName ;
  public: GALGAS_typeKind mProperty_mTransientType ;
  public: GALGAS_string mProperty_mGeneratedFunctionNamePrefix ;
  public: GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;

//--- Constructor
  public: cPtr_transientRoutineGeneration (const GALGAS_string & in_mOwnerName,
                                           const GALGAS_string & in_mTransientName,
                                           const GALGAS_typeKind & in_mTransientType,
                                           const GALGAS_string & in_mGeneratedFunctionNamePrefix,
                                           const GALGAS_transientDependencyListForGeneration & in_mDependencyList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientRoutineGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientRoutineGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_transientRoutineGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientRoutineGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_transientRoutineGeneration_2D_weak (const class GALGAS_transientRoutineGeneration & inSource) ;

  public: GALGAS_transientRoutineGeneration_2D_weak & operator = (const class GALGAS_transientRoutineGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_transientRoutineGeneration bang_transientRoutineGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_transientRoutineGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientRoutineGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientRoutineGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_transientRoutineGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRoutineGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                               Phase 1: @proxyKind enum                                              *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_proxyKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_proxyKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_propertyProxy,
    kEnum_toManyProxy
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_proxyKind extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_proxyKind constructor_propertyProxy (LOCATION_ARGS) ;

  public: static class GALGAS_proxyKind constructor_toManyProxy (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_proxyKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPropertyProxy (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isToManyProxy (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_propertyProxy () const ;

  public: VIRTUAL_IN_DEBUG bool optional_toManyProxy () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_proxyKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @proxyDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_proxyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_proxyDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_proxyDeclarationAST (const class cPtr_proxyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_proxyKind readProperty_mProxyKind (void) const ;

  public: class GALGAS_lstring readProperty_mProxyTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mProxyName (void) const ;

  public: class GALGAS_lstring readProperty_mToOneRelationshipName (void) const ;

  public: class GALGAS_lstring readProperty_mPropertyName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_proxyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_proxyDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_proxyKind & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2,
                                                                   const class GALGAS_lstring & inOperand3,
                                                                   const class GALGAS_lstring & inOperand4,
                                                                   const class GALGAS_lstring & inOperand5
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_proxyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMPropertyName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProxyKind (class GALGAS_proxyKind inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProxyName (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProxyTypeName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (class GALGAS_lstring inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_proxyDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @proxyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_proxyDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method secondAnalysisPhase
  public: virtual void method_secondAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_proxyKind mProperty_mProxyKind ;
  public: GALGAS_lstring mProperty_mProxyTypeName ;
  public: GALGAS_lstring mProperty_mProxyName ;
  public: GALGAS_lstring mProperty_mToOneRelationshipName ;
  public: GALGAS_lstring mProperty_mPropertyName ;

//--- Constructor
  public: cPtr_proxyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                    const GALGAS_proxyKind & in_mProxyKind,
                                    const GALGAS_lstring & in_mProxyTypeName,
                                    const GALGAS_lstring & in_mProxyName,
                                    const GALGAS_lstring & in_mToOneRelationshipName,
                                    const GALGAS_lstring & in_mPropertyName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @proxyDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_proxyDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_proxyDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_proxyDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_proxyDeclarationAST_2D_weak (const class GALGAS_proxyDeclarationAST & inSource) ;

  public: GALGAS_proxyDeclarationAST_2D_weak & operator = (const class GALGAS_proxyDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_proxyDeclarationAST bang_proxyDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_proxyDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_proxyDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_proxyDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_proxyDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyProxyGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyProxyGeneration : public GALGAS_propertyGeneration {
//--------------------------------- Default constructor
  public: GALGAS_toManyProxyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_toManyProxyGeneration (const class cPtr_toManyProxyGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_proxyKind readProperty_mProxyKind (void) const ;

  public: class GALGAS_string readProperty_mToManyTypeName (void) const ;

  public: class GALGAS_string readProperty_mObservedRelationshipName (void) const ;

  public: class GALGAS_string readProperty_mObservedPropertyName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyProxyGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyProxyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_proxyKind & inOperand1,
                                                                     const class GALGAS_string & inOperand2,
                                                                     const class GALGAS_string & inOperand3,
                                                                     const class GALGAS_string & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toManyProxyGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMObservedPropertyName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObservedRelationshipName (class GALGAS_string inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProxyKind (class GALGAS_proxyKind inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMToManyTypeName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toManyProxyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toManyProxyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toManyProxyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter bindPropertyInSelectionController
  public: virtual class GALGAS_string getter_bindPropertyInSelectionController (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter configurationCode
  public: virtual class GALGAS_string getter_configurationCode (const class GALGAS_bool inPreferences,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter declarationInSelectionControllerCode
  public: virtual class GALGAS_string getter_declarationInSelectionControllerCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GALGAS_string getter_initCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GALGAS_string getter_propertyDeclarationCode (const class GALGAS_bool inPreferences,
           const class GALGAS_stringset inOverriddenTransients,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_proxyKind mProperty_mProxyKind ;
  public: GALGAS_string mProperty_mToManyTypeName ;
  public: GALGAS_string mProperty_mObservedRelationshipName ;
  public: GALGAS_string mProperty_mObservedPropertyName ;

//--- Constructor
  public: cPtr_toManyProxyGeneration (const GALGAS_string & in_mPropertyName,
                                      const GALGAS_proxyKind & in_mProxyKind,
                                      const GALGAS_string & in_mToManyTypeName,
                                      const GALGAS_string & in_mObservedRelationshipName,
                                      const GALGAS_string & in_mObservedPropertyName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyProxyGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyProxyGeneration_2D_weak : public GALGAS_propertyGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_toManyProxyGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_toManyProxyGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_toManyProxyGeneration_2D_weak (const class GALGAS_toManyProxyGeneration & inSource) ;

  public: GALGAS_toManyProxyGeneration_2D_weak & operator = (const class GALGAS_toManyProxyGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_toManyProxyGeneration bang_toManyProxyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyProxyGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyProxyGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toManyProxyGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toManyProxyGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyProxyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyProxyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_toManyProxyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_toManyProxyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_toManyProxyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyProxyGenerationList extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyProxyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_toManyProxyGenerationList constructor_listWithValue (const class GALGAS_toManyProxyGeneration & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_toManyProxyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_toManyProxyGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_toManyProxyGenerationList add_operation (const GALGAS_toManyProxyGenerationList & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_toManyProxyGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_toManyProxyGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_toManyProxyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_toManyProxyGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_toManyProxyGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_toManyProxyGeneration constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_toManyProxyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_toManyProxyGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_toManyProxyGenerationList ;
 
} ; // End of GALGAS_toManyProxyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_toManyProxyGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_toManyProxyGenerationList (const GALGAS_toManyProxyGenerationList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_toManyProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_toManyProxyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyProxyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyProxyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_toManyProxyGeneration mProperty_mProperty ;
  public: inline GALGAS_toManyProxyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_toManyProxyGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GALGAS_toManyProxyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_toManyProxyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_toManyProxyGenerationList_2D_element (const GALGAS_toManyProxyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyProxyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyProxyGenerationList_2D_element constructor_new (const class GALGAS_toManyProxyGeneration & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toManyProxyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toManyProxyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicProxyGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicProxyGeneration : public GALGAS_propertyGeneration {
//--------------------------------- Default constructor
  public: GALGAS_atomicProxyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_atomicProxyGeneration (const class cPtr_atomicProxyGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_proxyKind readProperty_mProxyKind (void) const ;

  public: class GALGAS_typeKind readProperty_mType (void) const ;

  public: class GALGAS_string readProperty_mObservedRelationshipName (void) const ;

  public: class GALGAS_string readProperty_mObservedPropertyName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicProxyGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicProxyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_proxyKind & inOperand1,
                                                                     const class GALGAS_typeKind & inOperand2,
                                                                     const class GALGAS_string & inOperand3,
                                                                     const class GALGAS_string & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicProxyGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMObservedPropertyName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObservedRelationshipName (class GALGAS_string inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProxyKind (class GALGAS_proxyKind inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_typeKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_atomicProxyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicProxyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_atomicProxyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter bindPropertyInSelectionController
  public: virtual class GALGAS_string getter_bindPropertyInSelectionController (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter configurationCode
  public: virtual class GALGAS_string getter_configurationCode (const class GALGAS_bool inPreferences,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter declarationInSelectionControllerCode
  public: virtual class GALGAS_string getter_declarationInSelectionControllerCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GALGAS_string getter_initCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GALGAS_string getter_propertyDeclarationCode (const class GALGAS_bool inPreferences,
           const class GALGAS_stringset inOverriddenTransients,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_proxyKind mProperty_mProxyKind ;
  public: GALGAS_typeKind mProperty_mType ;
  public: GALGAS_string mProperty_mObservedRelationshipName ;
  public: GALGAS_string mProperty_mObservedPropertyName ;

//--- Constructor
  public: cPtr_atomicProxyGeneration (const GALGAS_string & in_mPropertyName,
                                      const GALGAS_proxyKind & in_mProxyKind,
                                      const GALGAS_typeKind & in_mType,
                                      const GALGAS_string & in_mObservedRelationshipName,
                                      const GALGAS_string & in_mObservedPropertyName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicProxyGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicProxyGeneration_2D_weak : public GALGAS_propertyGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_atomicProxyGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_atomicProxyGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_atomicProxyGeneration_2D_weak (const class GALGAS_atomicProxyGeneration & inSource) ;

  public: GALGAS_atomicProxyGeneration_2D_weak & operator = (const class GALGAS_atomicProxyGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_atomicProxyGeneration bang_atomicProxyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicProxyGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicProxyGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicProxyGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_atomicProxyGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicProxyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicProxyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_atomicProxyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_atomicProxyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_atomicProxyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicProxyGenerationList extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicProxyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_atomicProxyGenerationList constructor_listWithValue (const class GALGAS_atomicProxyGeneration & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_atomicProxyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_atomicProxyGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_atomicProxyGenerationList add_operation (const GALGAS_atomicProxyGenerationList & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_atomicProxyGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_atomicProxyGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_atomicProxyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_atomicProxyGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_atomicProxyGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_atomicProxyGeneration constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_atomicProxyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_atomicProxyGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_atomicProxyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_atomicProxyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_atomicProxyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_atomicProxyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_atomicProxyGenerationList ;
 
} ; // End of GALGAS_atomicProxyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_atomicProxyGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_atomicProxyGenerationList (const GALGAS_atomicProxyGenerationList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_atomicProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_atomicProxyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicProxyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicProxyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_atomicProxyGeneration mProperty_mProperty ;
  public: inline GALGAS_atomicProxyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_atomicProxyGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GALGAS_atomicProxyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_atomicProxyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_atomicProxyGenerationList_2D_element (const GALGAS_atomicProxyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicProxyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicProxyGenerationList_2D_element constructor_new (const class GALGAS_atomicProxyGeneration & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicProxyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_atomicProxyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_atomicPropertyDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_atomicPropertyDeclarationAST (const class cPtr_atomicPropertyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mPropertyTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mPropertyName (void) const ;

  public: class GALGAS_abstractDefaultValue readProperty_mDefaultValue (void) const ;

  public: class GALGAS_bool readProperty_mGenerateResetMethod (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicPropertyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicPropertyDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_abstractDefaultValue & inOperand3,
                                                                            const class GALGAS_bool & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDefaultValue (class GALGAS_abstractDefaultValue inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGenerateResetMethod (class GALGAS_bool inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_atomicPropertyDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_atomicPropertyDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mPropertyTypeName ;
  public: GALGAS_lstring mProperty_mPropertyName ;
  public: GALGAS_abstractDefaultValue mProperty_mDefaultValue ;
  public: GALGAS_bool mProperty_mGenerateResetMethod ;

//--- Constructor
  public: cPtr_atomicPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                             const GALGAS_lstring & in_mPropertyTypeName,
                                             const GALGAS_lstring & in_mPropertyName,
                                             const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                             const GALGAS_bool & in_mGenerateResetMethod
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_atomicPropertyDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_atomicPropertyDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_atomicPropertyDeclarationAST_2D_weak (const class GALGAS_atomicPropertyDeclarationAST & inSource) ;

  public: GALGAS_atomicPropertyDeclarationAST_2D_weak & operator = (const class GALGAS_atomicPropertyDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_atomicPropertyDeclarationAST bang_atomicPropertyDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicPropertyDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicPropertyDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicPropertyDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_atomicPropertyDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyGeneration : public GALGAS_propertyGeneration {
//--------------------------------- Default constructor
  public: GALGAS_atomicPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_atomicPropertyGeneration (const class cPtr_atomicPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mGenerateResetMethod (void) const ;

  public: class GALGAS_typeKind readProperty_mType (void) const ;

  public: class GALGAS_bool readProperty_mIsProxy (void) const ;

  public: class GALGAS_string readProperty_mDefaultValueInSwift (void) const ;

  public: class GALGAS_bool readProperty_mInPreferences (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_bool & inOperand1,
                                                                        const class GALGAS_typeKind & inOperand2,
                                                                        const class GALGAS_bool & inOperand3,
                                                                        const class GALGAS_string & inOperand4,
                                                                        const class GALGAS_bool & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicPropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDefaultValueInSwift (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGenerateResetMethod (class GALGAS_bool inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInPreferences (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsProxy (class GALGAS_bool inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_typeKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_atomicPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_atomicPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter bindPropertyInSelectionController
  public: virtual class GALGAS_string getter_bindPropertyInSelectionController (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter configurationCode
  public: virtual class GALGAS_string getter_configurationCode (const class GALGAS_bool inPreferences,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter declarationInSelectionControllerCode
  public: virtual class GALGAS_string getter_declarationInSelectionControllerCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GALGAS_string getter_initCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter prefKeyDefinitionCode
  public: virtual class GALGAS_string getter_prefKeyDefinitionCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GALGAS_string getter_propertyDeclarationCode (const class GALGAS_bool inPreferences,
           const class GALGAS_stringset inOverriddenTransients,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_bool mProperty_mGenerateResetMethod ;
  public: GALGAS_typeKind mProperty_mType ;
  public: GALGAS_bool mProperty_mIsProxy ;
  public: GALGAS_string mProperty_mDefaultValueInSwift ;
  public: GALGAS_bool mProperty_mInPreferences ;

//--- Constructor
  public: cPtr_atomicPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                         const GALGAS_bool & in_mGenerateResetMethod,
                                         const GALGAS_typeKind & in_mType,
                                         const GALGAS_bool & in_mIsProxy,
                                         const GALGAS_string & in_mDefaultValueInSwift,
                                         const GALGAS_bool & in_mInPreferences
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyGeneration_2D_weak : public GALGAS_propertyGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_atomicPropertyGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_atomicPropertyGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_atomicPropertyGeneration_2D_weak (const class GALGAS_atomicPropertyGeneration & inSource) ;

  public: GALGAS_atomicPropertyGeneration_2D_weak & operator = (const class GALGAS_atomicPropertyGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_atomicPropertyGeneration bang_atomicPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicPropertyGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicPropertyGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicPropertyGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_atomicPropertyGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_atomicPropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_atomicPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_atomicPropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicPropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicPropertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_atomicPropertyGenerationList constructor_listWithValue (const class GALGAS_atomicPropertyGeneration & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_atomicPropertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_atomicPropertyGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_atomicPropertyGenerationList add_operation (const GALGAS_atomicPropertyGenerationList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_atomicPropertyGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_atomicPropertyGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_atomicPropertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_atomicPropertyGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_atomicPropertyGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_atomicPropertyGeneration constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_atomicPropertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_atomicPropertyGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_atomicPropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_atomicPropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_atomicPropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_atomicPropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_atomicPropertyGenerationList ;
 
} ; // End of GALGAS_atomicPropertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_atomicPropertyGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_atomicPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_atomicPropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_atomicPropertyGeneration mProperty_mProperty ;
  public: inline GALGAS_atomicPropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_atomicPropertyGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GALGAS_atomicPropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_atomicPropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_atomicPropertyGenerationList_2D_element (const GALGAS_atomicPropertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicPropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicPropertyGenerationList_2D_element constructor_new (const class GALGAS_atomicPropertyGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicPropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_atomicPropertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @toOneOppositeRelationship enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne (const GALGAS_lstring inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany (const GALGAS_lstring inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOneRelationshipAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOneRelationshipAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_toOneRelationshipAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_toOneRelationshipAST (const class cPtr_toOneRelationshipAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDestinationEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mToOneRelationshipName (void) const ;

  public: class GALGAS_toOneOppositeRelationship readProperty_mOpposite (void) const ;

  public: class GALGAS_bool readProperty_mUsedForSignature (void) const ;

  public: class GALGAS_bool readProperty_mWeak (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toOneRelationshipAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toOneRelationshipAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_toOneOppositeRelationship & inOperand3,
                                                                    const class GALGAS_bool & inOperand4,
                                                                    const class GALGAS_bool & inOperand5
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toOneRelationshipAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (class GALGAS_lstring inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOpposite (class GALGAS_toOneOppositeRelationship inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (class GALGAS_lstring inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWeak (class GALGAS_bool inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toOneRelationshipAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toOneRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toOneRelationshipAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mDestinationEntityName ;
  public: GALGAS_lstring mProperty_mToOneRelationshipName ;
  public: GALGAS_toOneOppositeRelationship mProperty_mOpposite ;
  public: GALGAS_bool mProperty_mUsedForSignature ;
  public: GALGAS_bool mProperty_mWeak ;

//--- Constructor
  public: cPtr_toOneRelationshipAST (const GALGAS_lstring & in_mClassName,
                                     const GALGAS_lstring & in_mDestinationEntityName,
                                     const GALGAS_lstring & in_mToOneRelationshipName,
                                     const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                     const GALGAS_bool & in_mUsedForSignature,
                                     const GALGAS_bool & in_mWeak
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOneRelationshipAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOneRelationshipAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_toOneRelationshipAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_toOneRelationshipAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_toOneRelationshipAST_2D_weak (const class GALGAS_toOneRelationshipAST & inSource) ;

  public: GALGAS_toOneRelationshipAST_2D_weak & operator = (const class GALGAS_toOneRelationshipAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_toOneRelationshipAST bang_toOneRelationshipAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toOneRelationshipAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toOneRelationshipAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toOneRelationshipAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toOneRelationshipAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_propertyKind mProperty_mKind ;
  public: inline GALGAS_propertyKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GALGAS_actionMap mProperty_mActionMap ;
  public: inline GALGAS_actionMap readProperty_mActionMap (void) const {
    return mProperty_mActionMap ;
  }

  public: GALGAS_bool mProperty_mIsOverriding ;
  public: inline GALGAS_bool readProperty_mIsOverriding (void) const {
    return mProperty_mIsOverriding ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GALGAS_propertyKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMActionMap (const GALGAS_actionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionMap = inValue ;
  }

  public: inline void setter_setMIsOverriding (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsOverriding = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_propertyKind & in_mKind,
                                         const GALGAS_actionMap & in_mActionMap,
                                         const GALGAS_bool & in_mIsOverriding) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_propertyKind & inOperand1,
                                                                      const class GALGAS_actionMap & inOperand2,
                                                                      const class GALGAS_bool & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOnePropertyGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOnePropertyGeneration : public GALGAS_propertyGeneration {
//--------------------------------- Default constructor
  public: GALGAS_toOnePropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_toOnePropertyGeneration (const class cPtr_toOnePropertyGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mClassName (void) const ;

  public: class GALGAS_propertyKind readProperty_mRelationshipType (void) const ;

  public: class GALGAS_toOneOppositeRelationship readProperty_mOpposite (void) const ;

  public: class GALGAS_propertyMap readProperty_mDestinationEntityObservablePropertyMap (void) const ;

  public: class GALGAS_bool readProperty_mUsedForSignature (void) const ;

  public: class GALGAS_bool readProperty_mStrongRef (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toOnePropertyGeneration extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toOnePropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_propertyKind & inOperand2,
                                                                       const class GALGAS_toOneOppositeRelationship & inOperand3,
                                                                       const class GALGAS_propertyMap & inOperand4,
                                                                       const class GALGAS_bool & inOperand5,
                                                                       const class GALGAS_bool & inOperand6
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toOnePropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toOnePropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toOnePropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toOnePropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter configurationCode
  public: virtual class GALGAS_string getter_configurationCode (const class GALGAS_bool inPreferences,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GALGAS_string getter_initCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter objectAccessibilityCodeForSaveOperation
  public: virtual class GALGAS_string getter_objectAccessibilityCodeForSaveOperation (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GALGAS_string getter_propertyDeclarationCode (const class GALGAS_bool inPreferences,
           const class GALGAS_stringset inOverriddenTransients,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter setupRelationshipFromDictionaryCode
  public: virtual class GALGAS_string getter_setupRelationshipFromDictionaryCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_string mProperty_mClassName ;
  public: GALGAS_propertyKind mProperty_mRelationshipType ;
  public: GALGAS_toOneOppositeRelationship mProperty_mOpposite ;
  public: GALGAS_propertyMap mProperty_mDestinationEntityObservablePropertyMap ;
  public: GALGAS_bool mProperty_mUsedForSignature ;
  public: GALGAS_bool mProperty_mStrongRef ;

//--- Constructor
  public: cPtr_toOnePropertyGeneration (const GALGAS_string & in_mPropertyName,
                                        const GALGAS_string & in_mClassName,
                                        const GALGAS_propertyKind & in_mRelationshipType,
                                        const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                        const GALGAS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                        const GALGAS_bool & in_mUsedForSignature,
                                        const GALGAS_bool & in_mStrongRef
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOnePropertyGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOnePropertyGeneration_2D_weak : public GALGAS_propertyGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_toOnePropertyGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_toOnePropertyGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_toOnePropertyGeneration_2D_weak (const class GALGAS_toOnePropertyGeneration & inSource) ;

  public: GALGAS_toOnePropertyGeneration_2D_weak & operator = (const class GALGAS_toOnePropertyGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_toOnePropertyGeneration bang_toOnePropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toOnePropertyGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toOnePropertyGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toOnePropertyGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toOnePropertyGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOnePropertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOnePropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_toOnePropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_toOnePropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_toOnePropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toOnePropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toOnePropertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_toOnePropertyGenerationList constructor_listWithValue (const class GALGAS_toOnePropertyGeneration & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_toOnePropertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_toOnePropertyGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_toOnePropertyGenerationList add_operation (const GALGAS_toOnePropertyGenerationList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_toOnePropertyGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_toOnePropertyGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_toOnePropertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_toOnePropertyGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_toOnePropertyGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_toOnePropertyGeneration constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_toOnePropertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_toOnePropertyGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_toOnePropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_toOnePropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_toOnePropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_toOnePropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_toOnePropertyGenerationList ;
 
} ; // End of GALGAS_toOnePropertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_toOnePropertyGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_toOnePropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_toOnePropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOnePropertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOnePropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_toOnePropertyGeneration mProperty_mProperty ;
  public: inline GALGAS_toOnePropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_toOnePropertyGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GALGAS_toOnePropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_toOnePropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_toOnePropertyGenerationList_2D_element (const GALGAS_toOnePropertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toOnePropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toOnePropertyGenerationList_2D_element constructor_new (const class GALGAS_toOnePropertyGeneration & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toOnePropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toOnePropertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyRelationshipAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyRelationshipAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_toManyRelationshipAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_toManyRelationshipAST (const class cPtr_toManyRelationshipAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDestinationEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mToManyRelationshipName (void) const ;

  public: class GALGAS_toManyRelationshipOptionAST readProperty_mOption (void) const ;

  public: class GALGAS_bool readProperty_mCustomStore (void) const ;

  public: class GALGAS_bool readProperty_mUsedForSignature (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyRelationshipAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyRelationshipAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_toManyRelationshipOptionAST & inOperand3,
                                                                     const class GALGAS_bool & inOperand4,
                                                                     const class GALGAS_bool & inOperand5
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toManyRelationshipAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCustomStore (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (class GALGAS_lstring inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOption (class GALGAS_toManyRelationshipOptionAST inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMToManyRelationshipName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toManyRelationshipAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toManyRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toManyRelationshipAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mDestinationEntityName ;
  public: GALGAS_lstring mProperty_mToManyRelationshipName ;
  public: GALGAS_toManyRelationshipOptionAST mProperty_mOption ;
  public: GALGAS_bool mProperty_mCustomStore ;
  public: GALGAS_bool mProperty_mUsedForSignature ;

//--- Constructor
  public: cPtr_toManyRelationshipAST (const GALGAS_lstring & in_mClassName,
                                      const GALGAS_lstring & in_mDestinationEntityName,
                                      const GALGAS_lstring & in_mToManyRelationshipName,
                                      const GALGAS_toManyRelationshipOptionAST & in_mOption,
                                      const GALGAS_bool & in_mCustomStore,
                                      const GALGAS_bool & in_mUsedForSignature
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyRelationshipAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyRelationshipAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_toManyRelationshipAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_toManyRelationshipAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_toManyRelationshipAST_2D_weak (const class GALGAS_toManyRelationshipAST & inSource) ;

  public: GALGAS_toManyRelationshipAST_2D_weak & operator = (const class GALGAS_toManyRelationshipAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_toManyRelationshipAST bang_toManyRelationshipAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyRelationshipAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyRelationshipAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toManyRelationshipAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toManyRelationshipAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                  Phase 1: @toManyRelationshipOptionGeneration enum                                  *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyRelationshipOptionGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_toManyRelationshipOptionGeneration (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_hasOpposite,
    kEnum_hasDependance
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyRelationshipOptionGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyRelationshipOptionGeneration constructor_hasDependance (const class GALGAS_string & inOperand0,
                                                                                            const class GALGAS_string & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_toManyRelationshipOptionGeneration constructor_hasOpposite (const class GALGAS_string & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_toManyRelationshipOptionGeneration constructor_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toManyRelationshipOptionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_hasDependance (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_hasOpposite (class GALGAS_string & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasDependance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasOpposite (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_hasDependance (class GALGAS_string & outOperand0,
                                                        class GALGAS_string & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_hasOpposite (class GALGAS_string & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_none () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toManyRelationshipOptionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @toManyRelationshipOptionGeneration enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite (const GALGAS_string inAssociatedValue0
                                                                                COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;
  public: const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance (const GALGAS_string inAssociatedValue0,
                                                                                  const GALGAS_string inAssociatedValue1
                                                                                  COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyPropertyGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyPropertyGeneration : public GALGAS_propertyGeneration {
//--------------------------------- Default constructor
  public: GALGAS_toManyPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_toManyPropertyGeneration (const class cPtr_toManyPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_propertyKind readProperty_mRelationshipType (void) const ;

  public: class GALGAS_toManyRelationshipOptionGeneration readProperty_mOption (void) const ;

  public: class GALGAS_bool readProperty_mInPreferences (void) const ;

  public: class GALGAS_bool readProperty_mCustomStore (void) const ;

  public: class GALGAS_bool readProperty_mUsedForSignature (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_propertyKind & inOperand1,
                                                                        const class GALGAS_toManyRelationshipOptionGeneration & inOperand2,
                                                                        const class GALGAS_bool & inOperand3,
                                                                        const class GALGAS_bool & inOperand4,
                                                                        const class GALGAS_bool & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toManyPropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCustomStore (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInPreferences (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOption (class GALGAS_toManyRelationshipOptionGeneration inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRelationshipType (class GALGAS_propertyKind inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toManyPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toManyPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toManyPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter configurationCode
  public: virtual class GALGAS_string getter_configurationCode (const class GALGAS_bool inPreferences,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GALGAS_string getter_initCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter objectAccessibilityCodeForSaveOperation
  public: virtual class GALGAS_string getter_objectAccessibilityCodeForSaveOperation (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter prefKeyDefinitionCode
  public: virtual class GALGAS_string getter_prefKeyDefinitionCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GALGAS_string getter_propertyDeclarationCode (const class GALGAS_bool inPreferences,
           const class GALGAS_stringset inOverriddenTransients,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter resetToManyRelationships
  public: virtual class GALGAS_string getter_resetToManyRelationships (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter setupRelationshipFromDictionaryCode
  public: virtual class GALGAS_string getter_setupRelationshipFromDictionaryCode (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_propertyKind mProperty_mRelationshipType ;
  public: GALGAS_toManyRelationshipOptionGeneration mProperty_mOption ;
  public: GALGAS_bool mProperty_mInPreferences ;
  public: GALGAS_bool mProperty_mCustomStore ;
  public: GALGAS_bool mProperty_mUsedForSignature ;

//--- Constructor
  public: cPtr_toManyPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                         const GALGAS_propertyKind & in_mRelationshipType,
                                         const GALGAS_toManyRelationshipOptionGeneration & in_mOption,
                                         const GALGAS_bool & in_mInPreferences,
                                         const GALGAS_bool & in_mCustomStore,
                                         const GALGAS_bool & in_mUsedForSignature
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyPropertyGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyPropertyGeneration_2D_weak : public GALGAS_propertyGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_toManyPropertyGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_toManyPropertyGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_toManyPropertyGeneration_2D_weak (const class GALGAS_toManyPropertyGeneration & inSource) ;

  public: GALGAS_toManyPropertyGeneration_2D_weak & operator = (const class GALGAS_toManyPropertyGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_toManyPropertyGeneration bang_toManyPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyPropertyGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyPropertyGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toManyPropertyGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toManyPropertyGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyPropertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_toManyPropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_toManyPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_toManyPropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyPropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyPropertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_toManyPropertyGenerationList constructor_listWithValue (const class GALGAS_toManyPropertyGeneration & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_toManyPropertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_toManyPropertyGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_toManyPropertyGenerationList add_operation (const GALGAS_toManyPropertyGenerationList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_toManyPropertyGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_toManyPropertyGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_toManyPropertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_toManyPropertyGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_toManyPropertyGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_toManyPropertyGeneration constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_toManyPropertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_toManyPropertyGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_toManyPropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_toManyPropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_toManyPropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_toManyPropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_toManyPropertyGenerationList ;
 
} ; // End of GALGAS_toManyPropertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_toManyPropertyGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_toManyPropertyGenerationList (const GALGAS_toManyPropertyGenerationList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_toManyPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_toManyPropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyPropertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyPropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_toManyPropertyGeneration mProperty_mProperty ;
  public: inline GALGAS_toManyPropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_toManyPropertyGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GALGAS_toManyPropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_toManyPropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_toManyPropertyGenerationList_2D_element (const GALGAS_toManyPropertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyPropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyPropertyGenerationList_2D_element constructor_new (const class GALGAS_toManyPropertyGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toManyPropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toManyPropertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @validationStubRoutineListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_validationStubRoutineListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_validationStubRoutineListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_validationStubRoutineListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mObjectTypeName,
                                                 const class GALGAS_string & in_mModelName,
                                                 const class GALGAS_string & in_mModelTypeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_validationStubRoutineListForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_validationStubRoutineListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_validationStubRoutineListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                const class GALGAS_string & inOperand1,
                                                                                                const class GALGAS_string & inOperand2
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_validationStubRoutineListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_validationStubRoutineListForGeneration add_operation (const GALGAS_validationStubRoutineListForGeneration & inOperand,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_validationStubRoutineListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelNameAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObjectTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mObjectTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_validationStubRoutineListForGeneration ;
 
} ; // End of GALGAS_validationStubRoutineListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_validationStubRoutineListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mObjectTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mModelName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mModelTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_validationStubRoutineListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @validationStubRoutineListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_validationStubRoutineListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mObjectTypeName ;
  public: inline GALGAS_string readProperty_mObjectTypeName (void) const {
    return mProperty_mObjectTypeName ;
  }

  public: GALGAS_string mProperty_mModelName ;
  public: inline GALGAS_string readProperty_mModelName (void) const {
    return mProperty_mModelName ;
  }

  public: GALGAS_string mProperty_mModelTypeName ;
  public: inline GALGAS_string readProperty_mModelTypeName (void) const {
    return mProperty_mModelTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_validationStubRoutineListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_validationStubRoutineListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMObjectTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectTypeName = inValue ;
  }

  public: inline void setter_setMModelName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelName = inValue ;
  }

  public: inline void setter_setMModelTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelTypeName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_validationStubRoutineListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_validationStubRoutineListForGeneration_2D_element (const GALGAS_string & in_mObjectTypeName,
                                                                    const GALGAS_string & in_mModelName,
                                                                    const GALGAS_string & in_mModelTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_validationStubRoutineListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_validationStubRoutineListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                 const class GALGAS_string & inOperand1,
                                                                                                 const class GALGAS_string & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_validationStubRoutineListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_validationStubRoutineListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_actionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_actionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_actionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_actionMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_actionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_actionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_actionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actionFileGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actionFileGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_actionFileGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_actionFileGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_actionFileGeneration (const class cPtr_actionFileGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mClassName (void) const ;

  public: class GALGAS_string readProperty_mActionName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actionFileGeneration extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_actionFileGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                    const class GALGAS_string & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_actionFileGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMActionName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMClassName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_actionFileGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionFileGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @actionFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_actionFileGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_string inOutputDirectory,
           const class GALGAS_generationStruct inGenerationStruct,
           class GALGAS_stringset & ioGeneratedFileSet,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mClassName ;
  public: GALGAS_string mProperty_mActionName ;

//--- Constructor
  public: cPtr_actionFileGeneration (const GALGAS_string & in_mClassName,
                                     const GALGAS_string & in_mActionName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actionFileGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actionFileGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_actionFileGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_actionFileGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_actionFileGeneration_2D_weak (const class GALGAS_actionFileGeneration & inSource) ;

  public: GALGAS_actionFileGeneration_2D_weak & operator = (const class GALGAS_actionFileGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_actionFileGeneration bang_actionFileGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actionFileGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_actionFileGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_actionFileGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_actionFileGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionFileGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                     Phase 1: @multipleBindingComparisonAST enum                                     *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_multipleBindingComparisonAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_multipleBindingComparisonAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_equal,
    kEnum_notEqual,
    kEnum_lower,
    kEnum_lowerOrEqual,
    kEnum_greater,
    kEnum_greaterOrEqual
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_multipleBindingComparisonAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_multipleBindingComparisonAST constructor_equal (LOCATION_ARGS) ;

  public: static class GALGAS_multipleBindingComparisonAST constructor_greater (LOCATION_ARGS) ;

  public: static class GALGAS_multipleBindingComparisonAST constructor_greaterOrEqual (LOCATION_ARGS) ;

  public: static class GALGAS_multipleBindingComparisonAST constructor_lower (LOCATION_ARGS) ;

  public: static class GALGAS_multipleBindingComparisonAST constructor_lowerOrEqual (LOCATION_ARGS) ;

  public: static class GALGAS_multipleBindingComparisonAST constructor_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_multipleBindingComparisonAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGreater (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLower (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_equal () const ;

  public: VIRTUAL_IN_DEBUG bool optional_greater () const ;

  public: VIRTUAL_IN_DEBUG bool optional_greaterOrEqual () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lower () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lowerOrEqual () const ;

  public: VIRTUAL_IN_DEBUG bool optional_notEqual () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_multipleBindingComparisonAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractBooleanMultipleBindingExpressionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GALGAS_bool inPreferences,
           const class GALGAS_propertyMap inRootObservablePropertyMap,
           const class GALGAS_semanticContext inSemanticContext,
           const class GALGAS_propertyMap inCurrentObservablePropertyMap,
           const class GALGAS_propertyMap inPreferencesObservablePropertyMap,
           class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outEnableExpression,
           class GALGAS_typeKind & outType,
           class GALGAS_location & outErrorLocation,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractBooleanMultipleBindingExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBooleanMultipleBindingExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inSource) ;

  public: GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak & operator = (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST bang_abstractBooleanMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalIntMultipleBindingExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalIntMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalIntMultipleBindingExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalIntMultipleBindingExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalIntMultipleBindingExpressionAST (const class cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalIntMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalIntMultipleBindingExpressionAST constructor_new (const class GALGAS_luint & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalIntMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_luint inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalIntMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalIntMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalIntMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GALGAS_bool inPreferences,
           const class GALGAS_propertyMap inRootObservablePropertyMap,
           const class GALGAS_semanticContext inSemanticContext,
           const class GALGAS_propertyMap inCurrentObservablePropertyMap,
           const class GALGAS_propertyMap inPreferencesObservablePropertyMap,
           class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outEnableExpression,
           class GALGAS_typeKind & outType,
           class GALGAS_location & outErrorLocation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mValue ;

//--- Constructor
  public: cPtr_literalIntMultipleBindingExpressionAST (const GALGAS_luint & in_mValue
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalIntMultipleBindingExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalIntMultipleBindingExpressionAST_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalIntMultipleBindingExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalIntMultipleBindingExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalIntMultipleBindingExpressionAST_2D_weak (const class GALGAS_literalIntMultipleBindingExpressionAST & inSource) ;

  public: GALGAS_literalIntMultipleBindingExpressionAST_2D_weak & operator = (const class GALGAS_literalIntMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalIntMultipleBindingExpressionAST bang_literalIntMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalIntMultipleBindingExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalIntMultipleBindingExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalIntMultipleBindingExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalIntMultipleBindingExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @negateBooleanMultipleBindingExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_negateBooleanMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_negateBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_negateBooleanMultipleBindingExpressionAST (const class cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_abstractBooleanMultipleBindingExpressionAST readProperty_mBinding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_negateBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_negateBooleanMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_negateBooleanMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @negateBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_negateBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GALGAS_bool inPreferences,
           const class GALGAS_propertyMap inRootObservablePropertyMap,
           const class GALGAS_semanticContext inSemanticContext,
           const class GALGAS_propertyMap inCurrentObservablePropertyMap,
           const class GALGAS_propertyMap inPreferencesObservablePropertyMap,
           class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outEnableExpression,
           class GALGAS_typeKind & outType,
           class GALGAS_location & outErrorLocation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mBinding ;

//--- Constructor
  public: cPtr_negateBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mBinding
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @negateBooleanMultipleBindingExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak (const class GALGAS_negateBooleanMultipleBindingExpressionAST & inSource) ;

  public: GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak & operator = (const class GALGAS_negateBooleanMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_negateBooleanMultipleBindingExpressionAST bang_negateBooleanMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonMultipleBindingExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_comparisonMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_comparisonMultipleBindingExpressionAST (const class cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;

  public: class GALGAS_multipleBindingComparisonAST readProperty_mOperator (void) const ;

  public: class GALGAS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_comparisonMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                      const class GALGAS_multipleBindingComparisonAST & inOperand1,
                                                                                      const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparisonMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperator (class GALGAS_multipleBindingComparisonAST inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_comparisonMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_comparisonMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GALGAS_bool inPreferences,
           const class GALGAS_propertyMap inRootObservablePropertyMap,
           const class GALGAS_semanticContext inSemanticContext,
           const class GALGAS_propertyMap inCurrentObservablePropertyMap,
           const class GALGAS_propertyMap inPreferencesObservablePropertyMap,
           class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outEnableExpression,
           class GALGAS_typeKind & outType,
           class GALGAS_location & outErrorLocation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GALGAS_multipleBindingComparisonAST mProperty_mOperator ;
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;

//--- Constructor
  public: cPtr_comparisonMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                       const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonMultipleBindingExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonMultipleBindingExpressionAST_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_comparisonMultipleBindingExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_comparisonMultipleBindingExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_comparisonMultipleBindingExpressionAST_2D_weak (const class GALGAS_comparisonMultipleBindingExpressionAST & inSource) ;

  public: GALGAS_comparisonMultipleBindingExpressionAST_2D_weak & operator = (const class GALGAS_comparisonMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_comparisonMultipleBindingExpressionAST bang_comparisonMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonMultipleBindingExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_comparisonMultipleBindingExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparisonMultipleBindingExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_comparisonMultipleBindingExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @andBooleanMultipleBindingExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andBooleanMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_andBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_andBooleanMultipleBindingExpressionAST (const class cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;

  public: class GALGAS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_andBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_andBooleanMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                      const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_andBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_andBooleanMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @andBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_andBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GALGAS_bool inPreferences,
           const class GALGAS_propertyMap inRootObservablePropertyMap,
           const class GALGAS_semanticContext inSemanticContext,
           const class GALGAS_propertyMap inCurrentObservablePropertyMap,
           const class GALGAS_propertyMap inPreferencesObservablePropertyMap,
           class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outEnableExpression,
           class GALGAS_typeKind & outType,
           class GALGAS_location & outErrorLocation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;

//--- Constructor
  public: cPtr_andBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @andBooleanMultipleBindingExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak (const class GALGAS_andBooleanMultipleBindingExpressionAST & inSource) ;

  public: GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak & operator = (const class GALGAS_andBooleanMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_andBooleanMultipleBindingExpressionAST bang_andBooleanMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @orBooleanMultipleBindingExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orBooleanMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_orBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_orBooleanMultipleBindingExpressionAST (const class cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;

  public: class GALGAS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_orBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_orBooleanMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                     const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_orBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_orBooleanMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_orBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GALGAS_bool inPreferences,
           const class GALGAS_propertyMap inRootObservablePropertyMap,
           const class GALGAS_semanticContext inSemanticContext,
           const class GALGAS_propertyMap inCurrentObservablePropertyMap,
           const class GALGAS_propertyMap inPreferencesObservablePropertyMap,
           class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outEnableExpression,
           class GALGAS_typeKind & outType,
           class GALGAS_location & outErrorLocation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;

//--- Constructor
  public: cPtr_orBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                      const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @orBooleanMultipleBindingExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak (const class GALGAS_orBooleanMultipleBindingExpressionAST & inSource) ;

  public: GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak & operator = (const class GALGAS_orBooleanMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_orBooleanMultipleBindingExpressionAST bang_orBooleanMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xorBooleanMultipleBindingExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xorBooleanMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_xorBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_xorBooleanMultipleBindingExpressionAST (const class cPtr_xorBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;

  public: class GALGAS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_xorBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_xorBooleanMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                      const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_xorBooleanMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xorBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_xorBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GALGAS_bool inPreferences,
           const class GALGAS_propertyMap inRootObservablePropertyMap,
           const class GALGAS_semanticContext inSemanticContext,
           const class GALGAS_propertyMap inCurrentObservablePropertyMap,
           const class GALGAS_propertyMap inPreferencesObservablePropertyMap,
           class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outEnableExpression,
           class GALGAS_typeKind & outType,
           class GALGAS_location & outErrorLocation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;

//--- Constructor
  public: cPtr_xorBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xorBooleanMultipleBindingExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak (const class GALGAS_xorBooleanMultipleBindingExpressionAST & inSource) ;

  public: GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak & operator = (const class GALGAS_xorBooleanMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_xorBooleanMultipleBindingExpressionAST bang_xorBooleanMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyInMultipleBindingExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyInMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_observablePropertyInMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_observablePropertyInMultipleBindingExpressionAST (const class cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_observablePropertyAST readProperty_mProperty (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_observablePropertyInMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_observablePropertyInMultipleBindingExpressionAST constructor_new (const class GALGAS_observablePropertyAST & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_observablePropertyInMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMProperty (class GALGAS_observablePropertyAST inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_observablePropertyInMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @observablePropertyInMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_observablePropertyInMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GALGAS_bool inPreferences,
           const class GALGAS_propertyMap inRootObservablePropertyMap,
           const class GALGAS_semanticContext inSemanticContext,
           const class GALGAS_propertyMap inCurrentObservablePropertyMap,
           const class GALGAS_propertyMap inPreferencesObservablePropertyMap,
           class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outEnableExpression,
           class GALGAS_typeKind & outType,
           class GALGAS_location & outErrorLocation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_observablePropertyAST mProperty_mProperty ;

//--- Constructor
  public: cPtr_observablePropertyInMultipleBindingExpressionAST (const GALGAS_observablePropertyAST & in_mProperty
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyInMultipleBindingExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak (const class GALGAS_observablePropertyInMultipleBindingExpressionAST & inSource) ;

  public: GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak & operator = (const class GALGAS_observablePropertyInMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_observablePropertyInMultipleBindingExpressionAST bang_observablePropertyInMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBooleanMultipleBindingExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inSource) ;

  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak & operator = (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration bang_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyAsBooleanMultipleBindingExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const class cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mObservedModelString (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMObservedModelString (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter expressionString
  public: virtual class GALGAS_string getter_expressionString (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_string mProperty_mObservedModelString ;

//--- Constructor
  public: cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GALGAS_string & in_mObservedModelString
                                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak (const class GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inSource) ;

  public: GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak & operator = (const class GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration bang_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @booleanMultipleBindingLiteralIntForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_booleanMultipleBindingLiteralIntForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_booleanMultipleBindingLiteralIntForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_booleanMultipleBindingLiteralIntForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_booleanMultipleBindingLiteralIntForGeneration (const class cPtr_booleanMultipleBindingLiteralIntForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_booleanMultipleBindingLiteralIntForGeneration extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_booleanMultipleBindingLiteralIntForGeneration constructor_new (const class GALGAS_uint & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_booleanMultipleBindingLiteralIntForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_uint inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_booleanMultipleBindingLiteralIntForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @booleanMultipleBindingLiteralIntForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_booleanMultipleBindingLiteralIntForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter expressionString
  public: virtual class GALGAS_string getter_expressionString (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_uint mProperty_mValue ;

//--- Constructor
  public: cPtr_booleanMultipleBindingLiteralIntForGeneration (const GALGAS_uint & in_mValue
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @booleanMultipleBindingLiteralIntForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak (const class GALGAS_booleanMultipleBindingLiteralIntForGeneration & inSource) ;

  public: GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak & operator = (const class GALGAS_booleanMultipleBindingLiteralIntForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_booleanMultipleBindingLiteralIntForGeneration bang_booleanMultipleBindingLiteralIntForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @negateBooleanMultipleBindingExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_negateBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_negateBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_negateBooleanMultipleBindingExpressionForGeneration (const class cPtr_negateBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mBinding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_negateBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_negateBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_negateBooleanMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @negateBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_negateBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter expressionString
  public: virtual class GALGAS_string getter_expressionString (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mBinding ;

//--- Constructor
  public: cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @negateBooleanMultipleBindingExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak (const class GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inSource) ;

  public: GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak & operator = (const class GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_negateBooleanMultipleBindingExpressionForGeneration bang_negateBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @orBooleanMultipleBindingExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_orBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_orBooleanMultipleBindingExpressionForGeneration (const class cPtr_orBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mLeftBinding (void) const ;

  public: class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mRightBinding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_orBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_orBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                               const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_orBooleanMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_orBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter expressionString
  public: virtual class GALGAS_string getter_expressionString (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mLeftBinding ;
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mRightBinding ;

//--- Constructor
  public: cPtr_orBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @orBooleanMultipleBindingExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak (const class GALGAS_orBooleanMultipleBindingExpressionForGeneration & inSource) ;

  public: GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak & operator = (const class GALGAS_orBooleanMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_orBooleanMultipleBindingExpressionForGeneration bang_orBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xorBooleanMultipleBindingExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xorBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_xorBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_xorBooleanMultipleBindingExpressionForGeneration (const class cPtr_xorBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mLeftBinding (void) const ;

  public: class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mRightBinding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_xorBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_xorBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                                const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_xorBooleanMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xorBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_xorBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter expressionString
  public: virtual class GALGAS_string getter_expressionString (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mLeftBinding ;
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mRightBinding ;

//--- Constructor
  public: cPtr_xorBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xorBooleanMultipleBindingExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (const class GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inSource) ;

  public: GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak & operator = (const class GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_xorBooleanMultipleBindingExpressionForGeneration bang_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @andBooleanMultipleBindingExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_andBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_andBooleanMultipleBindingExpressionForGeneration (const class cPtr_andBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mLeftBinding (void) const ;

  public: class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mRightBinding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_andBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_andBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                                const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_andBooleanMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @andBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_andBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter expressionString
  public: virtual class GALGAS_string getter_expressionString (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mLeftBinding ;
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mRightBinding ;

//--- Constructor
  public: cPtr_andBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @andBooleanMultipleBindingExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak (const class GALGAS_andBooleanMultipleBindingExpressionForGeneration & inSource) ;

  public: GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak & operator = (const class GALGAS_andBooleanMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_andBooleanMultipleBindingExpressionForGeneration bang_andBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonMultipleBindingExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_comparisonMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_comparisonMultipleBindingExpressionForGeneration (const class cPtr_comparisonMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mLeftBinding (void) const ;

  public: class GALGAS_multipleBindingComparisonAST readProperty_mOperator (void) const ;

  public: class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mRightBinding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_comparisonMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                                const class GALGAS_multipleBindingComparisonAST & inOperand1,
                                                                                                const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperator (class GALGAS_multipleBindingComparisonAST inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_comparisonMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_comparisonMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter expressionString
  public: virtual class GALGAS_string getter_expressionString (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mLeftBinding ;
  public: GALGAS_multipleBindingComparisonAST mProperty_mOperator ;
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mRightBinding ;

//--- Constructor
  public: cPtr_comparisonMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                 const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonMultipleBindingExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak (const class GALGAS_comparisonMultipleBindingExpressionForGeneration & inSource) ;

  public: GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak & operator = (const class GALGAS_comparisonMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_comparisonMultipleBindingExpressionForGeneration bang_comparisonMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak ;

