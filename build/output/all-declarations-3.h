#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassBindingSpecificationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_outletClassBindingSpecificationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOutletClassName ;
  public: inline GGS_lstring readProperty_mOutletClassName (void) const {
    return mProperty_mOutletClassName ;
  }

  public: GGS_lstring mProperty_mBindingName ;
  public: inline GGS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS_outletClassBindingSpecificationModelList mProperty_mOutletClassBindingSpecificationModelList ;
  public: inline GGS_outletClassBindingSpecificationModelList readProperty_mOutletClassBindingSpecificationModelList (void) const {
    return mProperty_mOutletClassBindingSpecificationModelList ;
  }

  public: GGS_controllerBindingOptionList mProperty_mBindingOptionList ;
  public: inline GGS_controllerBindingOptionList readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_outletClassBindingSpecificationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassName = inValue ;
  }

  public: inline void setter_setMBindingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMOutletClassBindingSpecificationModelList (const GGS_outletClassBindingSpecificationModelList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GGS_controllerBindingOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletClassBindingSpecificationList_2E_element (const GGS_lstring & in_mOutletClassName,
                                                              const GGS_lstring & in_mBindingName,
                                                              const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                              const GGS_controllerBindingOptionList & in_mBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_outletClassBindingSpecificationList_2E_element (const GGS_outletClassBindingSpecificationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletClassBindingSpecificationList_2E_element & operator = (const GGS_outletClassBindingSpecificationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassBindingSpecificationList_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                          const class GGS_controllerBindingOptionList & inOperand3,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassBindingSpecificationList_2E_element extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewClassBindingSpecificationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewClassBindingSpecificationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOutletClassName ;
  public: inline GGS_lstring readProperty_mOutletClassName (void) const {
    return mProperty_mOutletClassName ;
  }

  public: GGS_lstring mProperty_mBindingName ;
  public: inline GGS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS_outletClassBindingSpecificationModelList mProperty_mOutletClassBindingSpecificationModelList ;
  public: inline GGS_outletClassBindingSpecificationModelList readProperty_mOutletClassBindingSpecificationModelList (void) const {
    return mProperty_mOutletClassBindingSpecificationModelList ;
  }

  public: GGS_controllerBindingOptionList mProperty_mBindingOptionList ;
  public: inline GGS_controllerBindingOptionList readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewClassBindingSpecificationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassName = inValue ;
  }

  public: inline void setter_setMBindingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMOutletClassBindingSpecificationModelList (const GGS_outletClassBindingSpecificationModelList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GGS_controllerBindingOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewClassBindingSpecificationList_2E_element (const GGS_lstring & in_mOutletClassName,
                                                                      const GGS_lstring & in_mBindingName,
                                                                      const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                      const GGS_controllerBindingOptionList & in_mBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewClassBindingSpecificationList_2E_element (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewClassBindingSpecificationList_2E_element & operator = (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewClassBindingSpecificationList_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                  const class GGS_controllerBindingOptionList & inOperand3,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewClassBindingSpecificationList_2E_element extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicClassDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_atomicClassDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_atomicClassDeclarationAST (const class cPtr_atomicClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_typeKind readProperty_mKind (void) const ;
  public: void setProperty_mKind (const GGS_typeKind & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicClassDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_typeKind & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicClassDeclarationAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @atomicClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_atomicClassDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void atomicClassDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_typeKind & inOperand1,
                                                       Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_typeKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_atomicClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_atomicClassDeclarationAST (const GGS_lstring & in_mClassName,
                                          const GGS_typeKind & in_mKind,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicClassDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicClassDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_atomicClassDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_atomicClassDeclarationAST_2E_weak (const class GGS_atomicClassDeclarationAST & inSource) ;

  public: GGS_atomicClassDeclarationAST_2E_weak & operator = (const class GGS_atomicClassDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_atomicClassDeclarationAST_2E_weak init_nil (void) {
    GGS_atomicClassDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_atomicClassDeclarationAST bang_atomicClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_atomicClassDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicClassDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicClassDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicClassDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityStrongReferenceGraph graph
//--------------------------------------------------------------------------------------------------

class GGS_entityStrongReferenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GGS_entityStrongReferenceGraph (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityStrongReferenceGraph init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_entityStrongReferenceGraph extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_addNode (class GGS_lstring inArgument0,
                               class GGS_string inArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_circularities (class GGS_stringlist & outArgument0,
                                     class GGS_lstringlist & outArgument1
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_depthFirstTopologicalSort (class GGS_stringlist & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 class GGS_stringlist & outArgument2,
                                                 class GGS_lstringlist & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoPredecessor (class GGS_stringlist & outArgument0,
                                              class GGS_lstringlist & outArgument1
                                              COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoSuccessor (class GGS_stringlist & outArgument0,
                                            class GGS_lstringlist & outArgument1
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_topologicalSort (class GGS_stringlist & outArgument0,
                                       class GGS_lstringlist & outArgument1,
                                       class GGS_stringlist & outArgument2,
                                       class GGS_lstringlist & outArgument3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_lstringlist getter_accessibleNodesFrom (const class GGS_lstringlist & constinOperand0,
                                                            const class GGS_stringset & constinOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringlist getter_nodeList (LOCATION_ARGS) const ;

  public: class GGS_entityStrongReferenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: class GGS_entityStrongReferenceGraph getter_subgraphFromNodes (const class GGS_lstringlist & constinOperand0,
                                                                         const class GGS_stringset & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityStrongReferenceGraph ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassBindingSpecificationModelList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_outletClassBindingSpecificationModelList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mModelTypeName ;
  public: inline GGS_lstring readProperty_mModelTypeName (void) const {
    return mProperty_mModelTypeName ;
  }

  public: GGS_bool mProperty_mModelShouldBeWritableProperty ;
  public: inline GGS_bool readProperty_mModelShouldBeWritableProperty (void) const {
    return mProperty_mModelShouldBeWritableProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_outletClassBindingSpecificationModelList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMModelTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelTypeName = inValue ;
  }

  public: inline void setter_setMModelShouldBeWritableProperty (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelShouldBeWritableProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletClassBindingSpecificationModelList_2E_element (const GGS_lstring & in_mModelTypeName,
                                                                   const GGS_bool & in_mModelShouldBeWritableProperty) ;

//--------------------------------- Copy constructor
  public: GGS_outletClassBindingSpecificationModelList_2E_element (const GGS_outletClassBindingSpecificationModelList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletClassBindingSpecificationModelList_2E_element & operator = (const GGS_outletClassBindingSpecificationModelList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassBindingSpecificationModelList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_bool & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassBindingSpecificationModelList_2E_element extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controllerBindingOptionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controllerBindingOptionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOptionName ;
  public: inline GGS_lstring readProperty_mOptionName (void) const {
    return mProperty_mOptionName ;
  }

  public: GGS_lstring mProperty_mOptionTypeName ;
  public: inline GGS_lstring readProperty_mOptionTypeName (void) const {
    return mProperty_mOptionTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controllerBindingOptionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionName = inValue ;
  }

  public: inline void setter_setMOptionTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controllerBindingOptionList_2E_element (const GGS_lstring & in_mOptionName,
                                                      const GGS_lstring & in_mOptionTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_controllerBindingOptionList_2E_element (const GGS_controllerBindingOptionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controllerBindingOptionList_2E_element & operator = (const GGS_controllerBindingOptionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controllerBindingOptionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controllerBindingOptionList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controllerBindingOptionDecoratedList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controllerBindingOptionDecoratedList final {
  public: DownEnumerator_controllerBindingOptionDecoratedList (const class GGS_controllerBindingOptionDecoratedList & inList) ;

  public: ~ DownEnumerator_controllerBindingOptionDecoratedList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeKind current_mOptionType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controllerBindingOptionDecoratedList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controllerBindingOptionDecoratedList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_controllerBindingOptionDecoratedList (const DownEnumerator_controllerBindingOptionDecoratedList &) = delete ;
  private: DownEnumerator_controllerBindingOptionDecoratedList & operator = (const DownEnumerator_controllerBindingOptionDecoratedList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controllerBindingOptionDecoratedList final {
  public: UpEnumerator_controllerBindingOptionDecoratedList (const class GGS_controllerBindingOptionDecoratedList & inList)  ;

  public: ~ UpEnumerator_controllerBindingOptionDecoratedList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeKind current_mOptionType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controllerBindingOptionDecoratedList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controllerBindingOptionDecoratedList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_controllerBindingOptionDecoratedList (const UpEnumerator_controllerBindingOptionDecoratedList &) = delete ;
  private: UpEnumerator_controllerBindingOptionDecoratedList & operator = (const UpEnumerator_controllerBindingOptionDecoratedList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @controllerBindingOptionDecoratedList list
//--------------------------------------------------------------------------------------------------

class GGS_controllerBindingOptionDecoratedList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_controllerBindingOptionDecoratedList_2E_element> mArray ;

//--- Default constructor
  public: GGS_controllerBindingOptionDecoratedList (void) ;

//--- Destructor
  public: virtual ~ GGS_controllerBindingOptionDecoratedList (void) = default ;

//--- Copy
  public: GGS_controllerBindingOptionDecoratedList (const GGS_controllerBindingOptionDecoratedList &) = default ;
  public: GGS_controllerBindingOptionDecoratedList & operator = (const GGS_controllerBindingOptionDecoratedList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_controllerBindingOptionDecoratedList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_controllerBindingOptionDecoratedList subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_controllerBindingOptionDecoratedList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_typeKind & in_mOptionType,
                                                 const class GGS_lstring & in_mOptionName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controllerBindingOptionDecoratedList init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controllerBindingOptionDecoratedList extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controllerBindingOptionDecoratedList class_func_listWithValue (const class GGS_typeKind & inOperand0,
                                                                                          const class GGS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_controllerBindingOptionDecoratedList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_typeKind & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_controllerBindingOptionDecoratedList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_controllerBindingOptionDecoratedList add_operation (const GGS_controllerBindingOptionDecoratedList & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_typeKind constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_typeKind constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_typeKind & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_typeKind & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_typeKind & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionNameAtIndex (class GGS_lstring constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionTypeAtIndex (class GGS_typeKind constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_typeKind & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_typeKind & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOptionNameAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_typeKind getter_mOptionTypeAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionDecoratedList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionDecoratedList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionDecoratedList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controllerBindingOptionDecoratedList ;
  friend class DownEnumerator_controllerBindingOptionDecoratedList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingSpecificationModelList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletBindingSpecificationModelList final {
  public: DownEnumerator_outletBindingSpecificationModelList (const class GGS_outletBindingSpecificationModelList & inList) ;

  public: ~ DownEnumerator_outletBindingSpecificationModelList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeKind current_mModelType (LOCATION_ARGS) const ;
  public: class GGS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletBindingSpecificationModelList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_outletBindingSpecificationModelList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_outletBindingSpecificationModelList (const DownEnumerator_outletBindingSpecificationModelList &) = delete ;
  private: DownEnumerator_outletBindingSpecificationModelList & operator = (const DownEnumerator_outletBindingSpecificationModelList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletBindingSpecificationModelList final {
  public: UpEnumerator_outletBindingSpecificationModelList (const class GGS_outletBindingSpecificationModelList & inList)  ;

  public: ~ UpEnumerator_outletBindingSpecificationModelList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeKind current_mModelType (LOCATION_ARGS) const ;
  public: class GGS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletBindingSpecificationModelList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_outletBindingSpecificationModelList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_outletBindingSpecificationModelList (const UpEnumerator_outletBindingSpecificationModelList &) = delete ;
  private: UpEnumerator_outletBindingSpecificationModelList & operator = (const UpEnumerator_outletBindingSpecificationModelList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @outletBindingSpecificationModelList list
//--------------------------------------------------------------------------------------------------

class GGS_outletBindingSpecificationModelList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_outletBindingSpecificationModelList_2E_element> mArray ;

//--- Default constructor
  public: GGS_outletBindingSpecificationModelList (void) ;

//--- Destructor
  public: virtual ~ GGS_outletBindingSpecificationModelList (void) = default ;

//--- Copy
  public: GGS_outletBindingSpecificationModelList (const GGS_outletBindingSpecificationModelList &) = default ;
  public: GGS_outletBindingSpecificationModelList & operator = (const GGS_outletBindingSpecificationModelList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_outletBindingSpecificationModelList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_outletBindingSpecificationModelList subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_outletBindingSpecificationModelList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_typeKind & in_mModelType,
                                                 const class GGS_bool & in_mModelShouldBeWritableProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingSpecificationModelList init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletBindingSpecificationModelList extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletBindingSpecificationModelList class_func_listWithValue (const class GGS_typeKind & inOperand0,
                                                                                         const class GGS_bool & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_outletBindingSpecificationModelList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_typeKind & inOperand0,
                                   const class GGS_bool & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_outletBindingSpecificationModelList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_outletBindingSpecificationModelList add_operation (const GGS_outletBindingSpecificationModelList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_typeKind constinArgument0,
                              class GGS_bool constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_typeKind constinArgument0,
                                     class GGS_bool constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_typeKind & outArgument0,
                                class GGS_bool & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_typeKind & outArgument0,
                               class GGS_bool & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_typeKind & outArgument0,
                                     class GGS_bool & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMModelShouldBeWritablePropertyAtIndex (class GGS_bool constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMModelTypeAtIndex (class GGS_typeKind constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_typeKind & outArgument0,
                             class GGS_bool & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_typeKind & outArgument0,
                            class GGS_bool & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_mModelShouldBeWritablePropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_typeKind getter_mModelTypeAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationModelList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationModelList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationModelList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletBindingSpecificationModelList ;
  friend class DownEnumerator_outletBindingSpecificationModelList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewBindingSpecificationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewBindingSpecificationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_outletBindingSpecificationModelList mProperty_mOutletBindingSpecificationModelList ;
  public: inline GGS_outletBindingSpecificationModelList readProperty_mOutletBindingSpecificationModelList (void) const {
    return mProperty_mOutletBindingSpecificationModelList ;
  }

  public: GGS_controllerBindingOptionDecoratedList mProperty_mControllerBindingOptionList ;
  public: inline GGS_controllerBindingOptionDecoratedList readProperty_mControllerBindingOptionList (void) const {
    return mProperty_mControllerBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletBindingSpecificationModelList (const GGS_outletBindingSpecificationModelList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMControllerBindingOptionList (const GGS_controllerBindingOptionDecoratedList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControllerBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                                const GGS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                const GGS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element & operator = (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewBindingSpecificationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_outletBindingSpecificationModelList & inOperand1,
                                                                                        const class GGS_controllerBindingOptionDecoratedList & inOperand2,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewBindingSpecificationMap_2E_element extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutViewBindingSpecificationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutViewBindingSpecificationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutViewBindingSpecificationMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingSpecificationModelList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_outletBindingSpecificationModelList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_typeKind mProperty_mModelType ;
  public: inline GGS_typeKind readProperty_mModelType (void) const {
    return mProperty_mModelType ;
  }

  public: GGS_bool mProperty_mModelShouldBeWritableProperty ;
  public: inline GGS_bool readProperty_mModelShouldBeWritableProperty (void) const {
    return mProperty_mModelShouldBeWritableProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_outletBindingSpecificationModelList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMModelType (const GGS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelType = inValue ;
  }

  public: inline void setter_setMModelShouldBeWritableProperty (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelShouldBeWritableProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletBindingSpecificationModelList_2E_element (const GGS_typeKind & in_mModelType,
                                                              const GGS_bool & in_mModelShouldBeWritableProperty) ;

//--------------------------------- Copy constructor
  public: GGS_outletBindingSpecificationModelList_2E_element (const GGS_outletBindingSpecificationModelList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletBindingSpecificationModelList_2E_element & operator = (const GGS_outletBindingSpecificationModelList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingSpecificationModelList_2E_element init_21__21_ (const class GGS_typeKind & inOperand0,
                                                                                  const class GGS_bool & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletBindingSpecificationModelList_2E_element extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controllerBindingOptionDecoratedList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controllerBindingOptionDecoratedList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_typeKind mProperty_mOptionType ;
  public: inline GGS_typeKind readProperty_mOptionType (void) const {
    return mProperty_mOptionType ;
  }

  public: GGS_lstring mProperty_mOptionName ;
  public: inline GGS_lstring readProperty_mOptionName (void) const {
    return mProperty_mOptionName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controllerBindingOptionDecoratedList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionType (const GGS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionType = inValue ;
  }

  public: inline void setter_setMOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controllerBindingOptionDecoratedList_2E_element (const GGS_typeKind & in_mOptionType,
                                                               const GGS_lstring & in_mOptionName) ;

//--------------------------------- Copy constructor
  public: GGS_controllerBindingOptionDecoratedList_2E_element (const GGS_controllerBindingOptionDecoratedList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controllerBindingOptionDecoratedList_2E_element & operator = (const GGS_controllerBindingOptionDecoratedList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controllerBindingOptionDecoratedList_2E_element init_21__21_ (const class GGS_typeKind & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controllerBindingOptionDecoratedList_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingSpecificationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_outletBindingSpecificationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_outletBindingSpecificationModelList mProperty_mOutletBindingSpecificationModelList ;
  public: inline GGS_outletBindingSpecificationModelList readProperty_mOutletBindingSpecificationModelList (void) const {
    return mProperty_mOutletBindingSpecificationModelList ;
  }

  public: GGS_controllerBindingOptionDecoratedList mProperty_mControllerBindingOptionList ;
  public: inline GGS_controllerBindingOptionDecoratedList readProperty_mControllerBindingOptionList (void) const {
    return mProperty_mControllerBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_outletBindingSpecificationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletBindingSpecificationModelList (const GGS_outletBindingSpecificationModelList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMControllerBindingOptionList (const GGS_controllerBindingOptionDecoratedList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControllerBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletBindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                        const GGS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                        const GGS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_outletBindingSpecificationMap_2E_element (const GGS_outletBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletBindingSpecificationMap_2E_element & operator = (const GGS_outletBindingSpecificationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingSpecificationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_outletBindingSpecificationModelList & inOperand1,
                                                                                const class GGS_controllerBindingOptionDecoratedList & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletBindingSpecificationMap_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: outletBindingSpecificationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_outletBindingSpecificationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_outletBindingSpecificationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_outletBindingSpecificationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_outletBindingSpecificationMap_2E_element_3F_ (const GGS_outletBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_outletBindingSpecificationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_outletBindingSpecificationMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletBindingSpecificationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayControllerBoundModelAST_2E_rootToManyRelationship struct
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_rootEntityName ;
  public: inline GGS_lstring readProperty_rootEntityName (void) const {
    return mProperty_rootEntityName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (void) ;

//--------------------------------- Property setters
  public: inline void setter_setRootEntityName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_rootEntityName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (const GGS_lstring & in_rootEntityName) ;

//--------------------------------- Copy constructor
  public: GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship & operator = (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship init_21_ (const class GGS_lstring & inOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST_2E_rootToManyRelationship ;

//--------------------------------------------------------------------------------------------------
// Phase 1: arrayControllerBoundModelAST.rootToManyRelationship? optional
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayControllerDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_arrayControllerDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_arrayControllerDeclarationAST_2E_weak (const class GGS_arrayControllerDeclarationAST & inSource) ;

  public: GGS_arrayControllerDeclarationAST_2E_weak & operator = (const class GGS_arrayControllerDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_arrayControllerDeclarationAST_2E_weak init_nil (void) {
    GGS_arrayControllerDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_arrayControllerDeclarationAST bang_arrayControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_arrayControllerDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayControllerDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @multipleBindingDescriptor_2E_binding struct
//--------------------------------------------------------------------------------------------------

class GGS_multipleBindingDescriptor_2E_binding : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_expression ;
  public: inline GGS_abstractBooleanMultipleBindingExpressionAST readProperty_expression (void) const {
    return mProperty_expression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_multipleBindingDescriptor_2E_binding (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExpression (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_multipleBindingDescriptor_2E_binding (const GGS_abstractBooleanMultipleBindingExpressionAST & in_expression) ;

//--------------------------------- Copy constructor
  public: GGS_multipleBindingDescriptor_2E_binding (const GGS_multipleBindingDescriptor_2E_binding & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_multipleBindingDescriptor_2E_binding & operator = (const GGS_multipleBindingDescriptor_2E_binding & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_multipleBindingDescriptor_2E_binding init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_multipleBindingDescriptor_2E_binding extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_multipleBindingDescriptor_2E_binding & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding ;

//--------------------------------------------------------------------------------------------------
// Phase 1: multipleBindingDescriptor.binding? optional
//--------------------------------------------------------------------------------------------------

class GGS_multipleBindingDescriptor_2E_binding_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_multipleBindingDescriptor_2E_binding mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_multipleBindingDescriptor_2E_binding_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_multipleBindingDescriptor_2E_binding_3F_ (const GGS_multipleBindingDescriptor_2E_binding & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_multipleBindingDescriptor_2E_binding_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_multipleBindingDescriptor_2E_binding unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_multipleBindingDescriptor_2E_binding_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_multipleBindingDescriptor_2E_binding_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayControllerPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerPropertyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_arrayControllerPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_arrayControllerPropertyGeneration (const class cPtr_arrayControllerPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mModelString (void) const ;
  public: void setProperty_mModelString (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mOwnerName (void) const ;
  public: void setProperty_mOwnerName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayControllerPropertyGeneration init_21__21__21_ (const class GGS_string & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerPropertyGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayControllerPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @arrayControllerPropertyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_arrayControllerPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void arrayControllerPropertyGeneration_init_21__21__21_ (const class GGS_string & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   const class GGS_string & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension getter configurationCode
  public: virtual class GGS_string getter_configurationCode (const class GGS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GGS_string getter_initCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_string mProperty_mModelString ;
  public: GGS_string mProperty_mOwnerName ;


//--- Default constructor
  public: cPtr_arrayControllerPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_arrayControllerPropertyGeneration (const GGS_string & in_mPropertyName,
                                                  const GGS_string & in_mModelString,
                                                  const GGS_string & in_mOwnerName,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayControllerPropertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerPropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_arrayControllerPropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_arrayControllerPropertyGeneration_2E_weak (const class GGS_arrayControllerPropertyGeneration & inSource) ;

  public: GGS_arrayControllerPropertyGeneration_2E_weak & operator = (const class GGS_arrayControllerPropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_arrayControllerPropertyGeneration_2E_weak init_nil (void) {
    GGS_arrayControllerPropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_arrayControllerPropertyGeneration bang_arrayControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_arrayControllerPropertyGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerPropertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerPropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayControllerPropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum arrayControllerModelKind
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerModelKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_arrayControllerModelKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_entityArray,
    enum_transientArray
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerModelKind extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerModelKind class_func_entityArray (LOCATION_ARGS) ;

  public: static class GGS_arrayControllerModelKind class_func_transientArray (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isEntityArray (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTransientArray (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerModelKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayControllerGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_arrayControllerGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_arrayControllerGeneration (const class cPtr_arrayControllerGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mOwnerName (void) const ;
  public: void setProperty_mOwnerName (const GGS_string & inValue) ;

  public: class GGS_lstring readProperty_mControllerName (void) const ;
  public: void setProperty_mControllerName (const GGS_lstring & inValue) ;

  public: class GGS_string readProperty_mModelTypeName (void) const ;
  public: void setProperty_mModelTypeName (const GGS_string & inValue) ;

  public: class GGS_arrayControllerModelKind readProperty_mArrayControllerModelKind (void) const ;
  public: void setProperty_mArrayControllerModelKind (const GGS_arrayControllerModelKind & inValue) ;

  public: class GGS_string readProperty_mElementTypeName (void) const ;
  public: void setProperty_mElementTypeName (const GGS_string & inValue) ;

  public: class GGS_bool readProperty_mElementTypeIsGraphic (void) const ;
  public: void setProperty_mElementTypeIsGraphic (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayControllerGeneration init_21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_string & inOperand2,
                                                                             const class GGS_arrayControllerModelKind & inOperand3,
                                                                             const class GGS_string & inOperand4,
                                                                             const class GGS_bool & inOperand5,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerGeneration extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayControllerGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @arrayControllerGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_arrayControllerGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void arrayControllerGeneration_init_21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_string & inOperand2,
                                                                       const class GGS_arrayControllerModelKind & inOperand3,
                                                                       const class GGS_string & inOperand4,
                                                                       const class GGS_bool & inOperand5,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateCodePhase1
  public: virtual void method_generateCodePhase_31_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioUsedProtocolSet,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCodePhase2
  public: virtual void method_generateCodePhase_32_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           const class GGS_stringset arg_inUsedProtocolSet,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mOwnerName ;
  public: GGS_lstring mProperty_mControllerName ;
  public: GGS_string mProperty_mModelTypeName ;
  public: GGS_arrayControllerModelKind mProperty_mArrayControllerModelKind ;
  public: GGS_string mProperty_mElementTypeName ;
  public: GGS_bool mProperty_mElementTypeIsGraphic ;


//--- Default constructor
  public: cPtr_arrayControllerGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_arrayControllerGeneration (const GGS_string & in_mOwnerName,
                                          const GGS_lstring & in_mControllerName,
                                          const GGS_string & in_mModelTypeName,
                                          const GGS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                          const GGS_string & in_mElementTypeName,
                                          const GGS_bool & in_mElementTypeIsGraphic,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayControllerGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_arrayControllerGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_arrayControllerGeneration_2E_weak (const class GGS_arrayControllerGeneration & inSource) ;

  public: GGS_arrayControllerGeneration_2E_weak & operator = (const class GGS_arrayControllerGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_arrayControllerGeneration_2E_weak init_nil (void) {
    GGS_arrayControllerGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_arrayControllerGeneration bang_arrayControllerGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_arrayControllerGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayControllerGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractBooleanMultipleBindingExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (const class GGS_abstractBooleanMultipleBindingExpressionAST & inSource) ;

  public: GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak & operator = (const class GGS_abstractBooleanMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak init_nil (void) {
    GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractBooleanMultipleBindingExpressionAST bang_abstractBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractBooleanMultipleBindingExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalIntMultipleBindingExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalIntMultipleBindingExpressionAST_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalIntMultipleBindingExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalIntMultipleBindingExpressionAST_2E_weak (const class GGS_literalIntMultipleBindingExpressionAST & inSource) ;

  public: GGS_literalIntMultipleBindingExpressionAST_2E_weak & operator = (const class GGS_literalIntMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalIntMultipleBindingExpressionAST_2E_weak init_nil (void) {
    GGS_literalIntMultipleBindingExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalIntMultipleBindingExpressionAST bang_literalIntMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalIntMultipleBindingExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalIntMultipleBindingExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalIntMultipleBindingExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalIntMultipleBindingExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @negateBooleanMultipleBindingExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_negateBooleanMultipleBindingExpressionAST_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_negateBooleanMultipleBindingExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_negateBooleanMultipleBindingExpressionAST_2E_weak (const class GGS_negateBooleanMultipleBindingExpressionAST & inSource) ;

  public: GGS_negateBooleanMultipleBindingExpressionAST_2E_weak & operator = (const class GGS_negateBooleanMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_negateBooleanMultipleBindingExpressionAST_2E_weak init_nil (void) {
    GGS_negateBooleanMultipleBindingExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_negateBooleanMultipleBindingExpressionAST bang_negateBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_negateBooleanMultipleBindingExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_negateBooleanMultipleBindingExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_negateBooleanMultipleBindingExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_negateBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @comparisonMultipleBindingExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_comparisonMultipleBindingExpressionAST_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_comparisonMultipleBindingExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_comparisonMultipleBindingExpressionAST_2E_weak (const class GGS_comparisonMultipleBindingExpressionAST & inSource) ;

  public: GGS_comparisonMultipleBindingExpressionAST_2E_weak & operator = (const class GGS_comparisonMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_comparisonMultipleBindingExpressionAST_2E_weak init_nil (void) {
    GGS_comparisonMultipleBindingExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_comparisonMultipleBindingExpressionAST bang_comparisonMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_comparisonMultipleBindingExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_comparisonMultipleBindingExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_comparisonMultipleBindingExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_comparisonMultipleBindingExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @andBooleanMultipleBindingExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_andBooleanMultipleBindingExpressionAST_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_andBooleanMultipleBindingExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_andBooleanMultipleBindingExpressionAST_2E_weak (const class GGS_andBooleanMultipleBindingExpressionAST & inSource) ;

  public: GGS_andBooleanMultipleBindingExpressionAST_2E_weak & operator = (const class GGS_andBooleanMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_andBooleanMultipleBindingExpressionAST_2E_weak init_nil (void) {
    GGS_andBooleanMultipleBindingExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_andBooleanMultipleBindingExpressionAST bang_andBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_andBooleanMultipleBindingExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_andBooleanMultipleBindingExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_andBooleanMultipleBindingExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @orBooleanMultipleBindingExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_orBooleanMultipleBindingExpressionAST_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_orBooleanMultipleBindingExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_orBooleanMultipleBindingExpressionAST_2E_weak (const class GGS_orBooleanMultipleBindingExpressionAST & inSource) ;

  public: GGS_orBooleanMultipleBindingExpressionAST_2E_weak & operator = (const class GGS_orBooleanMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_orBooleanMultipleBindingExpressionAST_2E_weak init_nil (void) {
    GGS_orBooleanMultipleBindingExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_orBooleanMultipleBindingExpressionAST bang_orBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_orBooleanMultipleBindingExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_orBooleanMultipleBindingExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_orBooleanMultipleBindingExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @xorBooleanMultipleBindingExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_xorBooleanMultipleBindingExpressionAST_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_xorBooleanMultipleBindingExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_xorBooleanMultipleBindingExpressionAST_2E_weak (const class GGS_xorBooleanMultipleBindingExpressionAST & inSource) ;

  public: GGS_xorBooleanMultipleBindingExpressionAST_2E_weak & operator = (const class GGS_xorBooleanMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_xorBooleanMultipleBindingExpressionAST_2E_weak init_nil (void) {
    GGS_xorBooleanMultipleBindingExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_xorBooleanMultipleBindingExpressionAST bang_xorBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_xorBooleanMultipleBindingExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_xorBooleanMultipleBindingExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_xorBooleanMultipleBindingExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xorBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyInMultipleBindingExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak (const class GGS_observablePropertyInMultipleBindingExpressionAST & inSource) ;

  public: GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak & operator = (const class GGS_observablePropertyInMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak init_nil (void) {
    GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_observablePropertyInMultipleBindingExpressionAST bang_observablePropertyInMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_observablePropertyInMultipleBindingExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractBooleanMultipleBindingExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inSource) ;

  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak & operator = (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak init_nil (void) {
    GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration bang_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAsBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration : public GGS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const class cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mObservedModelString (void) const ;
  public: void setProperty_mObservedModelString (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration init_21_ (const class GGS_string & inOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void observablePropertyAsBooleanMultipleBindingExpressionForGeneration_init_21_ (const class GGS_string & inOperand0,
                                                                                           Compiler * inCompiler) ;


//--- Extension getter expressionString
  public: virtual class GGS_string getter_expressionString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_string mProperty_mObservedModelString ;


//--- Default constructor
  public: cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GGS_string & in_mObservedModelString,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak (const class GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inSource) ;

  public: GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak & operator = (const class GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak init_nil (void) {
    GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration bang_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @booleanMultipleBindingLiteralIntForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_booleanMultipleBindingLiteralIntForGeneration : public GGS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_booleanMultipleBindingLiteralIntForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_booleanMultipleBindingLiteralIntForGeneration (const class cPtr_booleanMultipleBindingLiteralIntForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_booleanMultipleBindingLiteralIntForGeneration init_21_ (const class GGS_uint & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_booleanMultipleBindingLiteralIntForGeneration extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_booleanMultipleBindingLiteralIntForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @booleanMultipleBindingLiteralIntForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_booleanMultipleBindingLiteralIntForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void booleanMultipleBindingLiteralIntForGeneration_init_21_ (const class GGS_uint & inOperand0,
                                                                       Compiler * inCompiler) ;


//--- Extension getter expressionString
  public: virtual class GGS_string getter_expressionString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_uint mProperty_mValue ;


//--- Default constructor
  public: cPtr_booleanMultipleBindingLiteralIntForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_booleanMultipleBindingLiteralIntForGeneration (const GGS_uint & in_mValue,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @booleanMultipleBindingLiteralIntForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak (const class GGS_booleanMultipleBindingLiteralIntForGeneration & inSource) ;

  public: GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak & operator = (const class GGS_booleanMultipleBindingLiteralIntForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak init_nil (void) {
    GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_booleanMultipleBindingLiteralIntForGeneration bang_booleanMultipleBindingLiteralIntForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_booleanMultipleBindingLiteralIntForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @negateBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_negateBooleanMultipleBindingExpressionForGeneration : public GGS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_negateBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_negateBooleanMultipleBindingExpressionForGeneration (const class cPtr_negateBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mBinding (void) const ;
  public: void setProperty_mBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_negateBooleanMultipleBindingExpressionForGeneration init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_negateBooleanMultipleBindingExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @negateBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_negateBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void negateBooleanMultipleBindingExpressionForGeneration_init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                             Compiler * inCompiler) ;


//--- Extension getter expressionString
  public: virtual class GGS_string getter_expressionString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mBinding ;


//--- Default constructor
  public: cPtr_negateBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @negateBooleanMultipleBindingExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak (const class GGS_negateBooleanMultipleBindingExpressionForGeneration & inSource) ;

  public: GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak & operator = (const class GGS_negateBooleanMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak init_nil (void) {
    GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_negateBooleanMultipleBindingExpressionForGeneration bang_negateBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_negateBooleanMultipleBindingExpressionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @orBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_orBooleanMultipleBindingExpressionForGeneration : public GGS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_orBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_orBooleanMultipleBindingExpressionForGeneration (const class cPtr_orBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mLeftBinding (void) const ;
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_orBooleanMultipleBindingExpressionForGeneration init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                   const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_orBooleanMultipleBindingExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @orBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_orBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void orBooleanMultipleBindingExpressionForGeneration_init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                             const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                             Compiler * inCompiler) ;


//--- Extension getter expressionString
  public: virtual class GGS_string getter_expressionString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mLeftBinding ;
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_orBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_orBooleanMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @orBooleanMultipleBindingExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak (const class GGS_orBooleanMultipleBindingExpressionForGeneration & inSource) ;

  public: GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak & operator = (const class GGS_orBooleanMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak init_nil (void) {
    GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_orBooleanMultipleBindingExpressionForGeneration bang_orBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_orBooleanMultipleBindingExpressionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @xorBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_xorBooleanMultipleBindingExpressionForGeneration : public GGS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_xorBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_xorBooleanMultipleBindingExpressionForGeneration (const class cPtr_xorBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mLeftBinding (void) const ;
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_xorBooleanMultipleBindingExpressionForGeneration init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                    const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_xorBooleanMultipleBindingExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xorBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @xorBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_xorBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void xorBooleanMultipleBindingExpressionForGeneration_init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                              const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                              Compiler * inCompiler) ;


//--- Extension getter expressionString
  public: virtual class GGS_string getter_expressionString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mLeftBinding ;
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_xorBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_xorBooleanMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                 const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @xorBooleanMultipleBindingExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak (const class GGS_xorBooleanMultipleBindingExpressionForGeneration & inSource) ;

  public: GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak & operator = (const class GGS_xorBooleanMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak init_nil (void) {
    GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_xorBooleanMultipleBindingExpressionForGeneration bang_xorBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_xorBooleanMultipleBindingExpressionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @andBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_andBooleanMultipleBindingExpressionForGeneration : public GGS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_andBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_andBooleanMultipleBindingExpressionForGeneration (const class cPtr_andBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mLeftBinding (void) const ;
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_andBooleanMultipleBindingExpressionForGeneration init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                    const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_andBooleanMultipleBindingExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @andBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_andBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void andBooleanMultipleBindingExpressionForGeneration_init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                              const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                              Compiler * inCompiler) ;


//--- Extension getter expressionString
  public: virtual class GGS_string getter_expressionString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mLeftBinding ;
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_andBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_andBooleanMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                 const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @andBooleanMultipleBindingExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak (const class GGS_andBooleanMultipleBindingExpressionForGeneration & inSource) ;

  public: GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak & operator = (const class GGS_andBooleanMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak init_nil (void) {
    GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_andBooleanMultipleBindingExpressionForGeneration bang_andBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_andBooleanMultipleBindingExpressionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @comparisonMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_comparisonMultipleBindingExpressionForGeneration : public GGS_abstractBooleanMultipleBindingExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_comparisonMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_comparisonMultipleBindingExpressionForGeneration (const class cPtr_comparisonMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mLeftBinding (void) const ;
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) ;

  public: class GGS_multipleBindingComparisonAST readProperty_mOperator (void) const ;
  public: void setProperty_mOperator (const GGS_multipleBindingComparisonAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_comparisonMultipleBindingExpressionForGeneration init_21__21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                        const class GGS_multipleBindingComparisonAST & inOperand1,
                                                                                        const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_comparisonMultipleBindingExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_comparisonMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @comparisonMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_comparisonMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void comparisonMultipleBindingExpressionForGeneration_init_21__21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                  const class GGS_multipleBindingComparisonAST & inOperand1,
                                                                                  const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter expressionString
  public: virtual class GGS_string getter_expressionString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mLeftBinding ;
  public: GGS_multipleBindingComparisonAST mProperty_mOperator ;
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_comparisonMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_comparisonMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                 const GGS_multipleBindingComparisonAST & in_mOperator,
                                                                 const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @comparisonMultipleBindingExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak : public GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak (const class GGS_comparisonMultipleBindingExpressionForGeneration & inSource) ;

  public: GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak & operator = (const class GGS_comparisonMultipleBindingExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak init_nil (void) {
    GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_comparisonMultipleBindingExpressionForGeneration bang_comparisonMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_comparisonMultipleBindingExpressionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpressionForMultipleBinding (class cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                              const class GGS_bool constin_inPreferences,
                                                              const class GGS_propertyMap constin_inRootObservablePropertyMap,
                                                              const class GGS_semanticContext constin_inSemanticContext,
                                                              const class GGS_propertyMap constin_inCurrentObservablePropertyMap,
                                                              const class GGS_propertyMap constin_inPreferencesObservablePropertyMap,
                                                              class GGS_abstractBooleanMultipleBindingExpressionForGeneration & out_outEnableExpression,
                                                              class GGS_typeKind & out_outType,
                                                              class GGS_location & out_outErrorLocation,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_expressionString (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectionControllerDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectionControllerDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selectionControllerDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selectionControllerDeclarationAST_2E_weak (const class GGS_selectionControllerDeclarationAST & inSource) ;

  public: GGS_selectionControllerDeclarationAST_2E_weak & operator = (const class GGS_selectionControllerDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selectionControllerDeclarationAST_2E_weak init_nil (void) {
    GGS_selectionControllerDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectionControllerDeclarationAST bang_selectionControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selectionControllerDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectionControllerDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectionControllerDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectionControllerDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectionControllerPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectionControllerPropertyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_selectionControllerPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectionControllerPropertyGeneration (const class cPtr_selectionControllerPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mOwnerName (void) const ;

  public: class GGS_string readProperty_mModelControllerName (void) const ;

  public: class GGS_string readProperty_mModelControllerPropertyName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectionControllerPropertyGeneration init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                 const class GGS_string & inOperand1,
                                                                                 const class GGS_string & inOperand2,
                                                                                 const class GGS_string & inOperand3,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectionControllerPropertyGeneration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectionControllerPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selectionControllerPropertyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_selectionControllerPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selectionControllerPropertyGeneration_init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           const class GGS_string & inOperand2,
                                                                           const class GGS_string & inOperand3,
                                                                           Compiler * inCompiler) ;


//--- Extension getter configurationCode
  public: virtual class GGS_string getter_configurationCode (const class GGS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GGS_string getter_initCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_string mProperty_mOwnerName ;
  public: GGS_string mProperty_mModelControllerName ;
  public: GGS_string mProperty_mModelControllerPropertyName ;


//--- Default constructor
  public: cPtr_selectionControllerPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selectionControllerPropertyGeneration (const GGS_string & in_mPropertyName,
                                                      const GGS_string & in_mOwnerName,
                                                      const GGS_string & in_mModelControllerName,
                                                      const GGS_string & in_mModelControllerPropertyName,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectionControllerPropertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectionControllerPropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selectionControllerPropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selectionControllerPropertyGeneration_2E_weak (const class GGS_selectionControllerPropertyGeneration & inSource) ;

  public: GGS_selectionControllerPropertyGeneration_2E_weak & operator = (const class GGS_selectionControllerPropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selectionControllerPropertyGeneration_2E_weak init_nil (void) {
    GGS_selectionControllerPropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectionControllerPropertyGeneration bang_selectionControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selectionControllerPropertyGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectionControllerPropertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectionControllerPropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectionControllerPropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectionControllerForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_selectionControllerForGeneration final {
  public: DownEnumerator_selectionControllerForGeneration (const class GGS_selectionControllerForGeneration & inList) ;

  public: ~ DownEnumerator_selectionControllerForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mOwnerName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSelectionControllerName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBoundControllerName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBoundControllerPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBaseTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSelectionTypeName (LOCATION_ARGS) const ;
  public: class GGS_propertyMap current_mSelectionObservablePropertyMap (LOCATION_ARGS) const ;
  public: class GGS_propertyGenerationList current_mPropertyGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_selectionControllerForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_selectionControllerForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_selectionControllerForGeneration (const DownEnumerator_selectionControllerForGeneration &) = delete ;
  private: DownEnumerator_selectionControllerForGeneration & operator = (const DownEnumerator_selectionControllerForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_selectionControllerForGeneration final {
  public: UpEnumerator_selectionControllerForGeneration (const class GGS_selectionControllerForGeneration & inList)  ;

  public: ~ UpEnumerator_selectionControllerForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mOwnerName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSelectionControllerName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBoundControllerName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBoundControllerPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBaseTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSelectionTypeName (LOCATION_ARGS) const ;
  public: class GGS_propertyMap current_mSelectionObservablePropertyMap (LOCATION_ARGS) const ;
  public: class GGS_propertyGenerationList current_mPropertyGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_selectionControllerForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_selectionControllerForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_selectionControllerForGeneration (const UpEnumerator_selectionControllerForGeneration &) = delete ;
  private: UpEnumerator_selectionControllerForGeneration & operator = (const UpEnumerator_selectionControllerForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @selectionControllerForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_selectionControllerForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_selectionControllerForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_selectionControllerForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_selectionControllerForGeneration (void) = default ;

//--- Copy
  public: GGS_selectionControllerForGeneration (const GGS_selectionControllerForGeneration &) = default ;
  public: GGS_selectionControllerForGeneration & operator = (const GGS_selectionControllerForGeneration &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_selectionControllerForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_selectionControllerForGeneration subList (const int32_t inStart,
                                                         const int32_t inLength,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_selectionControllerForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mOwnerName,
                                                 const class GGS_string & in_mSelectionControllerName,
                                                 const class GGS_string & in_mBoundControllerName,
                                                 const class GGS_string & in_mBoundControllerPropertyName,
                                                 const class GGS_string & in_mBaseTypeName,
                                                 const class GGS_string & in_mSelectionTypeName,
                                                 const class GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                 const class GGS_propertyGenerationList & in_mPropertyGenerationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectionControllerForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectionControllerForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectionControllerForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                      const class GGS_string & inOperand1,
                                                                                      const class GGS_string & inOperand2,
                                                                                      const class GGS_string & inOperand3,
                                                                                      const class GGS_string & inOperand4,
                                                                                      const class GGS_string & inOperand5,
                                                                                      const class GGS_propertyMap & inOperand6,
                                                                                      const class GGS_propertyGenerationList & inOperand7
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_selectionControllerForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_string & inOperand2,
                                   const class GGS_string & inOperand3,
                                   const class GGS_string & inOperand4,
                                   const class GGS_string & inOperand5,
                                   const class GGS_propertyMap & inOperand6,
                                   const class GGS_propertyGenerationList & inOperand7
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_selectionControllerForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_selectionControllerForGeneration add_operation (const GGS_selectionControllerForGeneration & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_string constinArgument1,
                              class GGS_string constinArgument2,
                              class GGS_string constinArgument3,
                              class GGS_string constinArgument4,
                              class GGS_string constinArgument5,
                              class GGS_propertyMap constinArgument6,
                              class GGS_propertyGenerationList constinArgument7,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_string constinArgument2,
                                     class GGS_string constinArgument3,
                                     class GGS_string constinArgument4,
                                     class GGS_string constinArgument5,
                                     class GGS_propertyMap constinArgument6,
                                     class GGS_propertyGenerationList constinArgument7,
                                     class GGS_uint constinArgument8,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_string & outArgument2,
                                class GGS_string & outArgument3,
                                class GGS_string & outArgument4,
                                class GGS_string & outArgument5,
                                class GGS_propertyMap & outArgument6,
                                class GGS_propertyGenerationList & outArgument7,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_string & outArgument1,
                               class GGS_string & outArgument2,
                               class GGS_string & outArgument3,
                               class GGS_string & outArgument4,
                               class GGS_string & outArgument5,
                               class GGS_propertyMap & outArgument6,
                               class GGS_propertyGenerationList & outArgument7,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_string & outArgument2,
                                     class GGS_string & outArgument3,
                                     class GGS_string & outArgument4,
                                     class GGS_string & outArgument5,
                                     class GGS_propertyMap & outArgument6,
                                     class GGS_propertyGenerationList & outArgument7,
                                     class GGS_uint constinArgument8,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBaseTypeNameAtIndex (class GGS_string constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMBoundControllerNameAtIndex (class GGS_string constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMBoundControllerPropertyNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMOwnerNameAtIndex (class GGS_string constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyGenerationListAtIndex (class GGS_propertyGenerationList constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMSelectionControllerNameAtIndex (class GGS_string constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMSelectionObservablePropertyMapAtIndex (class GGS_propertyMap constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMSelectionTypeNameAtIndex (class GGS_string constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_string & outArgument1,
                             class GGS_string & outArgument2,
                             class GGS_string & outArgument3,
                             class GGS_string & outArgument4,
                             class GGS_string & outArgument5,
                             class GGS_propertyMap & outArgument6,
                             class GGS_propertyGenerationList & outArgument7,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_string & outArgument1,
                            class GGS_string & outArgument2,
                            class GGS_string & outArgument3,
                            class GGS_string & outArgument4,
                            class GGS_string & outArgument5,
                            class GGS_propertyMap & outArgument6,
                            class GGS_propertyGenerationList & outArgument7,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mBaseTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mBoundControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mBoundControllerPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mOwnerNameAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyGenerationList getter_mPropertyGenerationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mSelectionControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyMap getter_mSelectionObservablePropertyMapAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mSelectionTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_selectionControllerForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_selectionControllerForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_selectionControllerForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_selectionControllerForGeneration ;
  friend class DownEnumerator_selectionControllerForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectionControllerForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_selectionControllerForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mOwnerName ;
  public: inline GGS_string readProperty_mOwnerName (void) const {
    return mProperty_mOwnerName ;
  }

  public: GGS_string mProperty_mSelectionControllerName ;
  public: inline GGS_string readProperty_mSelectionControllerName (void) const {
    return mProperty_mSelectionControllerName ;
  }

  public: GGS_string mProperty_mBoundControllerName ;
  public: inline GGS_string readProperty_mBoundControllerName (void) const {
    return mProperty_mBoundControllerName ;
  }

  public: GGS_string mProperty_mBoundControllerPropertyName ;
  public: inline GGS_string readProperty_mBoundControllerPropertyName (void) const {
    return mProperty_mBoundControllerPropertyName ;
  }

  public: GGS_string mProperty_mBaseTypeName ;
  public: inline GGS_string readProperty_mBaseTypeName (void) const {
    return mProperty_mBaseTypeName ;
  }

  public: GGS_string mProperty_mSelectionTypeName ;
  public: inline GGS_string readProperty_mSelectionTypeName (void) const {
    return mProperty_mSelectionTypeName ;
  }

  public: GGS_propertyMap mProperty_mSelectionObservablePropertyMap ;
  public: inline GGS_propertyMap readProperty_mSelectionObservablePropertyMap (void) const {
    return mProperty_mSelectionObservablePropertyMap ;
  }

  public: GGS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public: inline GGS_propertyGenerationList readProperty_mPropertyGenerationList (void) const {
    return mProperty_mPropertyGenerationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_selectionControllerForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOwnerName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOwnerName = inValue ;
  }

  public: inline void setter_setMSelectionControllerName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectionControllerName = inValue ;
  }

  public: inline void setter_setMBoundControllerName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundControllerName = inValue ;
  }

  public: inline void setter_setMBoundControllerPropertyName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundControllerPropertyName = inValue ;
  }

  public: inline void setter_setMBaseTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBaseTypeName = inValue ;
  }

  public: inline void setter_setMSelectionTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectionTypeName = inValue ;
  }

  public: inline void setter_setMSelectionObservablePropertyMap (const GGS_propertyMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectionObservablePropertyMap = inValue ;
  }

  public: inline void setter_setMPropertyGenerationList (const GGS_propertyGenerationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyGenerationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_selectionControllerForGeneration_2E_element (const GGS_string & in_mOwnerName,
                                                           const GGS_string & in_mSelectionControllerName,
                                                           const GGS_string & in_mBoundControllerName,
                                                           const GGS_string & in_mBoundControllerPropertyName,
                                                           const GGS_string & in_mBaseTypeName,
                                                           const GGS_string & in_mSelectionTypeName,
                                                           const GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                           const GGS_propertyGenerationList & in_mPropertyGenerationList) ;

//--------------------------------- Copy constructor
  public: GGS_selectionControllerForGeneration_2E_element (const GGS_selectionControllerForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_selectionControllerForGeneration_2E_element & operator = (const GGS_selectionControllerForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectionControllerForGeneration_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                       const class GGS_string & inOperand1,
                                                                                                       const class GGS_string & inOperand2,
                                                                                                       const class GGS_string & inOperand3,
                                                                                                       const class GGS_string & inOperand4,
                                                                                                       const class GGS_string & inOperand5,
                                                                                                       const class GGS_propertyMap & inOperand6,
                                                                                                       const class GGS_propertyGenerationList & inOperand7,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectionControllerForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_propertyKind mProperty_mKind ;
  public: inline GGS_propertyKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GGS_actionMap mProperty_mActionMap ;
  public: inline GGS_actionMap readProperty_mActionMap (void) const {
    return mProperty_mActionMap ;
  }

  public: GGS_bool mProperty_mIsOverriding ;
  public: inline GGS_bool readProperty_mIsOverriding (void) const {
    return mProperty_mIsOverriding ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GGS_propertyKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMActionMap (const GGS_actionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionMap = inValue ;
  }

  public: inline void setter_setMIsOverriding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsOverriding = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_propertyKind & in_mKind,
                                      const GGS_actionMap & in_mActionMap,
                                      const GGS_bool & in_mIsOverriding) ;

//--------------------------------- Copy constructor
  public: GGS_propertyMap_2E_element (const GGS_propertyMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyMap_2E_element & operator = (const GGS_propertyMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_propertyKind & inOperand1,
                                                                  const class GGS_actionMap & inOperand2,
                                                                  const class GGS_bool & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMap_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyMap_2E_element_3F_ (const GGS_propertyMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAbstractViewDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astAbstractViewDeclaration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_astAbstractViewDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astAbstractViewDeclaration_2E_weak (const class GGS_astAbstractViewDeclaration & inSource) ;

  public: GGS_astAbstractViewDeclaration_2E_weak & operator = (const class GGS_astAbstractViewDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astAbstractViewDeclaration_2E_weak init_nil (void) {
    GGS_astAbstractViewDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astAbstractViewDeclaration bang_astAbstractViewDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astAbstractViewDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAbstractViewDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAbstractViewDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astAbstractViewDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewFunctionCallList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionCallList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFunctionName ;
  public: inline GGS_lstring readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GGS_astAutoLayoutViewInstructionParameterList mProperty_mParameterList ;
  public: inline GGS_astAutoLayoutViewInstructionParameterList readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewFunctionCallList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFunctionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_astAutoLayoutViewInstructionParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewFunctionCallList_2E_element (const GGS_lstring & in_mFunctionName,
                                                            const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewFunctionCallList_2E_element (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewFunctionCallList_2E_element & operator = (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionCallList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewFunctionCallList_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astViewInstructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astViewInstructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_astAbstractViewInstructionDeclaration mProperty_mInstruction ;
  public: inline GGS_astAbstractViewInstructionDeclaration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astViewInstructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_astAbstractViewInstructionDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astViewInstructionList_2E_element (const GGS_astAbstractViewInstructionDeclaration & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_astViewInstructionList_2E_element (const GGS_astViewInstructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astViewInstructionList_2E_element & operator = (const GGS_astViewInstructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astViewInstructionList_2E_element init_21_ (const class GGS_astAbstractViewInstructionDeclaration & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astViewInstructionList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewInstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astNewStackViewDeclarationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astNewStackViewDeclarationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mInstanciedStackViewName ;
  public: inline GGS_lstring readProperty_mInstanciedStackViewName (void) const {
    return mProperty_mInstanciedStackViewName ;
  }

  public: GGS_lstring mProperty_mTypeStackViewName ;
  public: inline GGS_lstring readProperty_mTypeStackViewName (void) const {
    return mProperty_mTypeStackViewName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astNewStackViewDeclarationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstanciedStackViewName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstanciedStackViewName = inValue ;
  }

  public: inline void setter_setMTypeStackViewName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeStackViewName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astNewStackViewDeclarationList_2E_element (const GGS_lstring & in_mInstanciedStackViewName,
                                                         const GGS_lstring & in_mTypeStackViewName) ;

//--------------------------------- Copy constructor
  public: GGS_astNewStackViewDeclarationList_2E_element (const GGS_astNewStackViewDeclarationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astNewStackViewDeclarationList_2E_element & operator = (const GGS_astNewStackViewDeclarationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astNewStackViewDeclarationList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astNewStackViewDeclarationList_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astComputedHorizontalViewDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astComputedHorizontalViewDeclaration_2E_weak : public GGS_astAbstractViewDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astComputedHorizontalViewDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astComputedHorizontalViewDeclaration_2E_weak (const class GGS_astComputedHorizontalViewDeclaration & inSource) ;

  public: GGS_astComputedHorizontalViewDeclaration_2E_weak & operator = (const class GGS_astComputedHorizontalViewDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astComputedHorizontalViewDeclaration_2E_weak init_nil (void) {
    GGS_astComputedHorizontalViewDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astComputedHorizontalViewDeclaration bang_astComputedHorizontalViewDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astComputedHorizontalViewDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedHorizontalViewDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astComputedHorizontalViewDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedHorizontalViewDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astComputedVerticalViewDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astComputedVerticalViewDeclaration_2E_weak : public GGS_astAbstractViewDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astComputedVerticalViewDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astComputedVerticalViewDeclaration_2E_weak (const class GGS_astComputedVerticalViewDeclaration & inSource) ;

  public: GGS_astComputedVerticalViewDeclaration_2E_weak & operator = (const class GGS_astComputedVerticalViewDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astComputedVerticalViewDeclaration_2E_weak init_nil (void) {
    GGS_astComputedVerticalViewDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astComputedVerticalViewDeclaration bang_astComputedVerticalViewDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astComputedVerticalViewDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedVerticalViewDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astComputedVerticalViewDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedVerticalViewDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAbstractViewInstructionDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astAbstractViewInstructionDeclaration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_astAbstractViewInstructionDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astAbstractViewInstructionDeclaration_2E_weak (const class GGS_astAbstractViewInstructionDeclaration & inSource) ;

  public: GGS_astAbstractViewInstructionDeclaration_2E_weak & operator = (const class GGS_astAbstractViewInstructionDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astAbstractViewInstructionDeclaration_2E_weak init_nil (void) {
    GGS_astAbstractViewInstructionDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astAbstractViewInstructionDeclaration bang_astAbstractViewInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astAbstractViewInstructionDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAbstractViewInstructionDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAbstractViewInstructionDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astAbstractViewInstructionDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak ;

