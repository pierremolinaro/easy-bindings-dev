#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @bindingOptionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_bindingOptionList final {
  public: DownEnumerator_bindingOptionList (const class GGS_bindingOptionList & inList) ;

  public: ~ DownEnumerator_bindingOptionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mOptionValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_bindingOptionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_bindingOptionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_bindingOptionList (const DownEnumerator_bindingOptionList &) = delete ;
  private: DownEnumerator_bindingOptionList & operator = (const DownEnumerator_bindingOptionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_bindingOptionList final {
  public: UpEnumerator_bindingOptionList (const class GGS_bindingOptionList & inList)  ;

  public: ~ UpEnumerator_bindingOptionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mOptionValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_bindingOptionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_bindingOptionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_bindingOptionList (const UpEnumerator_bindingOptionList &) = delete ;
  private: UpEnumerator_bindingOptionList & operator = (const UpEnumerator_bindingOptionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @bindingOptionList list
//--------------------------------------------------------------------------------------------------

class GGS_bindingOptionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_bindingOptionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_bindingOptionList (void) ;

//--- Destructor
  public: virtual ~ GGS_bindingOptionList (void) = default ;

//--- Copy
  public: GGS_bindingOptionList (const GGS_bindingOptionList &) = default ;
  public: GGS_bindingOptionList & operator = (const GGS_bindingOptionList &) = default ;

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
  public : inline GenericArray <GGS_bindingOptionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_bindingOptionList subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_bindingOptionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOptionName,
                                                 const class GGS_abstractDefaultValue & in_mOptionValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingOptionList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_bindingOptionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_abstractDefaultValue & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_bindingOptionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_abstractDefaultValue & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_bindingOptionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_bindingOptionList add_operation (const GGS_bindingOptionList & inOperand,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_abstractDefaultValue constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_abstractDefaultValue constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_abstractDefaultValue & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_abstractDefaultValue & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_abstractDefaultValue & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionNameAtIndex (class GGS_lstring constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionValueAtIndex (class GGS_abstractDefaultValue constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_abstractDefaultValue & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_abstractDefaultValue & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOptionNameAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_abstractDefaultValue getter_mOptionValueAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_bindingOptionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_bindingOptionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_bindingOptionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_bindingOptionList ;
  friend class DownEnumerator_bindingOptionList ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingOptionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bindingOptionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_bindingOptionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOptionName ;
  public: inline GGS_lstring readProperty_mOptionName (void) const {
    return mProperty_mOptionName ;
  }

  public: GGS_abstractDefaultValue mProperty_mOptionValue ;
  public: inline GGS_abstractDefaultValue readProperty_mOptionValue (void) const {
    return mProperty_mOptionValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bindingOptionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionName = inValue ;
  }

  public: inline void setter_setMOptionValue (const GGS_abstractDefaultValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bindingOptionList_2E_element (const GGS_lstring & in_mOptionName,
                                            const GGS_abstractDefaultValue & in_mOptionValue) ;

//--------------------------------- Copy constructor
  public: GGS_bindingOptionList_2E_element (const GGS_bindingOptionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_bindingOptionList_2E_element & operator = (const GGS_bindingOptionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingOptionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_abstractDefaultValue & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingOptionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@observablePropertyAST modelStringForSelf' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_modelStringForSelf (const class GGS_observablePropertyAST & inObject,
                                                     const class GGS_string & constinArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@observablePropertyAST modelStringFunctionArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_modelStringFunctionArgument (const class GGS_observablePropertyAST & inObject,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@observablePropertyAST needs_unwSelf' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_needs_5F_unwSelf (const class GGS_observablePropertyAST & inObject,
                                                 const class GGS_bool & constinArgument0,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@observablePropertyAST location' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_location extensionGetter_location (const class GGS_observablePropertyAST & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@observablePropertyAST analyzeObservableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeObservableProperty (const class GGS_observablePropertyAST inObject,
                                                const class GGS_propertyMap constin_inRootPropertyMap,
                                                const class GGS_semanticContext constin_inSemanticContext,
                                                const class GGS_propertyMap constin_inBoundModelPropertyMap,
                                                class GGS_propertyKind & out_outKind,
                                                class GGS_string & out_outSwiftTypeStringForTransientFunctionArgument,
                                                class GGS_string & out_outProtocolTypeString,
                                                class GGS_string & out_outDefaultValue,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'preferencesName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_preferencesName (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewClassDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_autoLayoutViewClassDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutViewClassDeclarationAST (const class cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mUserDefined (void) const ;

  public: class GGS_lstring readProperty_mSuperClassName (void) const ;

  public: class GGS_bool readProperty_mHasRunAction (void) const ;

  public: class GGS_bool readProperty_mHasEnabled (void) const ;

  public: class GGS_bool readProperty_mHandlesTableValueBinding (void) const ;

  public: class GGS_bool readProperty_mHandlesGraphicControllerBinding (void) const ;

  public: class GGS_bool readProperty_mHasHidden (void) const ;

  public: class GGS__5B_autoLayoutClassParameter_5D_ readProperty_mParameterList (void) const ;

  public: class GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutViewFunctionMap (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewClassDeclarationAST init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                     const class GGS_bool & inOperand1,
                                                                                                     const class GGS_lstring & inOperand2,
                                                                                                     const class GGS_bool & inOperand3,
                                                                                                     const class GGS_bool & inOperand4,
                                                                                                     const class GGS_bool & inOperand5,
                                                                                                     const class GGS_bool & inOperand6,
                                                                                                     const class GGS_bool & inOperand7,
                                                                                                     const class GGS__5B_autoLayoutClassParameter_5D_ & inOperand8,
                                                                                                     const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutViewClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutViewClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutViewClassDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutViewClassDeclarationAST_init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                               const class GGS_bool & inOperand1,
                                                                                               const class GGS_lstring & inOperand2,
                                                                                               const class GGS_bool & inOperand3,
                                                                                               const class GGS_bool & inOperand4,
                                                                                               const class GGS_bool & inOperand5,
                                                                                               const class GGS_bool & inOperand6,
                                                                                               const class GGS_bool & inOperand7,
                                                                                               const class GGS__5B_autoLayoutClassParameter_5D_ & inOperand8,
                                                                                               const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
                                                                                               Compiler * inCompiler) ;


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mUserDefined ;
  public: GGS_lstring mProperty_mSuperClassName ;
  public: GGS_bool mProperty_mHasRunAction ;
  public: GGS_bool mProperty_mHasEnabled ;
  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: GGS_bool mProperty_mHandlesGraphicControllerBinding ;
  public: GGS_bool mProperty_mHasHidden ;
  public: GGS__5B_autoLayoutClassParameter_5D_ mProperty_mParameterList ;
  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;


//--- Default constructor
  public: cPtr_autoLayoutViewClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutViewClassDeclarationAST (const GGS_lstring & in_mClassName,
                                                  const GGS_bool & in_mUserDefined,
                                                  const GGS_lstring & in_mSuperClassName,
                                                  const GGS_bool & in_mHasRunAction,
                                                  const GGS_bool & in_mHasEnabled,
                                                  const GGS_bool & in_mHandlesTableValueBinding,
                                                  const GGS_bool & in_mHandlesGraphicControllerBinding,
                                                  const GGS_bool & in_mHasHidden,
                                                  const GGS__5B_autoLayoutClassParameter_5D_ & in_mParameterList,
                                                  const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
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
// Phase 1: @autoLayoutViewClassDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewClassDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutViewClassDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutViewClassDeclarationAST_2E_weak (const class GGS_autoLayoutViewClassDeclarationAST & inSource) ;

  public: GGS_autoLayoutViewClassDeclarationAST_2E_weak & operator = (const class GGS_autoLayoutViewClassDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutViewClassDeclarationAST_2E_weak init_nil (void) {
    GGS_autoLayoutViewClassDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutViewClassDeclarationAST bang_autoLayoutViewClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutViewClassDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewClassDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutViewClassDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutClassParameterType_2E_typeEnum struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameterType_2E_typeEnum : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutClassParameterType_2E_typeEnum (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutClassParameterType_2E_typeEnum (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutClassParameterType_2E_typeEnum (const GGS_autoLayoutClassParameterType_2E_typeEnum & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutClassParameterType_2E_typeEnum & operator = (const GGS_autoLayoutClassParameterType_2E_typeEnum & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutClassParameterType_2E_typeEnum init_21_ (const class GGS_lstring & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutClassParameterType_2E_typeEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutClassParameterType.typeEnum? optional
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutClassParameterType_2E_typeEnum mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ (const GGS_autoLayoutClassParameterType_2E_typeEnum & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutClassParameterType_2E_typeEnum unwrappedValue (void) const {
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@autoLayoutClassParameterType string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_autoLayoutClassParameterType & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'easyBindings_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_easyBindings_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_easyBindings_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_action_5F_declaration_ (class GGS__5B_lstring_5D_ & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_action_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (class GGS_stringset & ioArgument0,
                                                                      class GGS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const class GGS_lstring constinArgument0,
                                                                                  class GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & ioArgument1,
                                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const class GGS_lstring constinArgument0,
                                                                         class GGS__5B_autoLayoutClassParameter_5D_ & outArgument1,
                                                                         class GGS_lstring & outArgument2,
                                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_ (class GGS_bindingOptionList & outArgument0,
                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                    class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_ (class GGS_stringset & ioArgument0,
                                                               class GGS_astComputedViewInstruction & outArgument1,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                         const class GGS_lstring constinArgument1,
                                                         class GGS__5B_arrayControllerBindingAST_5D_ & ioArgument2,
                                                         class GGS_astDeclarationStruct & ioArgument3,
                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_ (class GGS_abstractDefaultValue & outArgument0,
                                                 class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_ (class GGS__5B_lstring_5D_ & ioArgument0,
                                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_ (class GGS_externSwiftFunctionList & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_ (class GGS__5B_mainXibDescriptor_5D_ & ioArgument0,
                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_ (class GGS__5B_mainXibElement_5D_ & outArgument0,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_ (class GGS_observablePropertyAST & outArgument0,
                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_ (class GGS_tableValueBinding & outArgument0,
                                                 class GGS_runActionDescriptor & outArgument1,
                                                 class GGS_multipleBindingDescriptor & outArgument2,
                                                 class GGS_multipleBindingDescriptor & outArgument3,
                                                 class GGS_graphicController & outArgument4,
                                                 class GGS__5B_regularBinding_5D_ & outArgument5,
                                                 class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_ (class GGS__5B_outletClassBindingSpecification_5D_ & ioArgument0,
                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                              class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_ (class GGS__5B_outletDeclarationAST_5D_ & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                          class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                               class GGS__5B_simpleStoredProperty_5D_ & ioArgument1,
                                                               class GGS_stringset & ioArgument2,
                                                               class GGS_astDeclarationStruct & ioArgument3,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_ (class GGS__5B_astViewDeclaration_5D_ & ioArgument0,
                                                            class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GGS_astDeclarationStruct & ioArgument0,
                                               class GGS_location & outArgument1,
                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_ (const class GGS_lstring constinArgument0,
                                                      class GGS_stringset & ioArgument1,
                                                      class GGS_astDeclarationStruct & ioArgument2,
                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_ (const class GGS_lstring constinArgument0,
                                                     class GGS_astDeclarationStruct & ioArgument1,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                        const class GGS_lstring constinArgument1,
                                                        class GGS_astDeclarationStruct & ioArgument2,
                                                        class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (class GGS_stringset & ioArgument0,
                                                                   class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_ (class GGS_stringset & ioArgument0,
                                                   class GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_ (const class GGS_bool constinArgument0,
                                                           class GGS_stringset & ioArgument1,
                                                           class GGS_astNewStackViewDeclarationList & ioArgument2,
                                                           class GGS_astViewInstructionList & ioArgument3,
                                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_ (class GGS_lstring & ioArgument0,
                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GGS_astDeclarationStruct & ioArgument0,
                                                                   GGS_location & outArgument1,
                                                                   Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GGS__5B_lstring_5D_ & ioArgument0,
                                                                               Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i2_ (const GGS_lstring constinArgument0,
                                                                             const GGS_lstring constinArgument1,
                                                                             GGS__5B_arrayControllerBindingAST_5D_ & ioArgument2,
                                                                             GGS_astDeclarationStruct & ioArgument3,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i2_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i2_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i3_ (GGS__5B_mainXibDescriptor_5D_ & ioArgument0,
                                                               Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i3_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i3_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i4_ (GGS__5B_mainXibElement_5D_ & outArgument0,
                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i4_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i4_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i5_ (const GGS_lstring constinArgument0,
                                                                          GGS_stringset & ioArgument1,
                                                                          GGS_astDeclarationStruct & ioArgument2,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i5_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i5_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i6_ (GGS_astDeclarationStruct & ioArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i6_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i6_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_ (GGS_astDeclarationStruct & ioArgument0,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i8_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i8_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i8_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i9_ (const GGS_lstring constinArgument0,
                                                                                   GGS__5B_simpleStoredProperty_5D_ & ioArgument1,
                                                                                   GGS_stringset & ioArgument2,
                                                                                   GGS_astDeclarationStruct & ioArgument3,
                                                                                   Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i9_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i9_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i10_ (const GGS_lstring constinArgument0,
                                                                                    GGS__5B_simpleStoredProperty_5D_ & ioArgument1,
                                                                                    GGS_stringset & ioArgument2,
                                                                                    GGS_astDeclarationStruct & ioArgument3,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i10_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i10_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i11_ (GGS_abstractDefaultValue & outArgument0,
                                                                      Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i11_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i11_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i12_ (GGS_bindingOptionList & outArgument0,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i12_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i12_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i13_ (GGS_observablePropertyAST & outArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i13_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i13_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i14_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i14_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i14_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i15_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i15_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i15_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i16_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i16_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i16_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i17_ (const GGS_lstring constinArgument0,
                                                                                              GGS__5B_autoLayoutClassParameter_5D_ & outArgument1,
                                                                                              GGS_lstring & outArgument2,
                                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i17_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i17_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i18_ (GGS_astDeclarationStruct & ioArgument0,
                                                                            Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i18_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i18_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i19_ (GGS_lstring & ioArgument0,
                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i19_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i19_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i20_ (const GGS_lstring constinArgument0,
                                                                                                       GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & ioArgument1,
                                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i20_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i20_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i21_ (GGS__5B_outletClassBindingSpecification_5D_ & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i21_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i21_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i22_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS__5B_arrayControllerBindingAST_5D_ & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i22_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i22_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i23_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i23_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i23_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i24_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i24_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i24_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i25_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                               Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i25_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i25_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i27_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i27_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i27_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i28_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i28_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i28_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i29_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i29_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i29_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i30_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS__5B_arrayControllerBindingAST_5D_ & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i30_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i30_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i31_ (GGS__5B_astViewDeclaration_5D_ & ioArgument0,
                                                                                 Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i31_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i31_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i32_ (GGS__5B_astViewDeclaration_5D_ & ioArgument0,
                                                                                 Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i32_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i32_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i33_ (GGS_stringset & ioArgument0,
                                                                                           GGS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i33_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i33_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i34_ (const GGS_bool constinArgument0,
                                                                                GGS_stringset & ioArgument1,
                                                                                GGS_astNewStackViewDeclarationList & ioArgument2,
                                                                                GGS_astViewInstructionList & ioArgument3,
                                                                                Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i34_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i34_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i35_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i35_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i35_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i36_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i36_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i36_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i37_ (GGS_stringset & ioArgument0,
                                                                                    GGS_astComputedViewInstruction & outArgument1,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i37_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i37_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i38_ (GGS_stringset & ioArgument0,
                                                                                        GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i38_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i38_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i39_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i39_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i39_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i40_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i40_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i40_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i41_ (GGS__5B_outletDeclarationAST_5D_ & ioArgument0,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i41_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i41_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i42_ (GGS_tableValueBinding & outArgument0,
                                                                      GGS_runActionDescriptor & outArgument1,
                                                                      GGS_multipleBindingDescriptor & outArgument2,
                                                                      GGS_multipleBindingDescriptor & outArgument3,
                                                                      GGS_graphicController & outArgument4,
                                                                      GGS__5B_regularBinding_5D_ & outArgument5,
                                                                      Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i42_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i42_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i43_ (const GGS_lstring constinArgument0,
                                                                             const GGS_lstring constinArgument1,
                                                                             GGS_astDeclarationStruct & ioArgument2,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i43_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i43_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i44_ (const GGS_lstring constinArgument0,
                                                                             const GGS_lstring constinArgument1,
                                                                             GGS_astDeclarationStruct & ioArgument2,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i44_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i44_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i45_ (GGS_externSwiftFunctionList & ioArgument0,
                                                                            Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i45_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i45_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i46_ (GGS_astDeclarationStruct & ioArgument0,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i46_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i46_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i47_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i47_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i47_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i48_ (GGS_astDeclarationStruct & ioArgument0,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i48_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i48_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i49_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS__5B_arrayControllerBindingAST_5D_ & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i49_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i49_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i50_ (const GGS_lstring constinArgument0,
                                                                             const GGS_lstring constinArgument1,
                                                                             GGS_astDeclarationStruct & ioArgument2,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i50_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i50_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i51_ (GGS_astDeclarationStruct & ioArgument0,
                                                                         Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i51_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i51_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i52_ (GGS__5B_lstring_5D_ & ioArgument0,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i52_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i52_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i53_ (const GGS_lstring constinArgument0,
                                                                          GGS_astDeclarationStruct & ioArgument1,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i53_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i53_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_easyBindings_5F_syntax_0 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_1 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_2 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_3 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_4 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_5 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_6 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_7 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_8 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_9 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_10 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_11 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_12 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_13 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_14 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_15 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_16 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_17 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_18 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_19 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_20 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_21 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_22 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_23 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_24 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_25 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_26 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_27 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_28 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_29 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_30 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_31 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_32 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_33 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_34 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_35 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_36 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_37 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_38 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_39 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_40 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_41 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_42 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_43 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_44 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_45 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_46 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_47 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_48 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_49 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_50 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_51 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_52 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_53 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_54 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_55 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_56 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_57 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_58 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_59 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_60 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_61 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_62 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_63 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_64 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_65 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_66 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_67 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_68 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_69 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_70 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_71 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_72 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_73 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_74 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_75 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_76 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_77 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_78 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_79 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_80 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_81 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_82 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_83 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_84 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_85 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_86 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_87 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_88 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_89 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_90 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_91 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_92 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_93 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_94 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_95 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_96 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_97 (Lexique_easyBindings_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [autoLayoutViewClassBindingSpecification] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ (const class GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ (const DownEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ &) = delete ;
  private: DownEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ & operator = (const DownEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutViewClassBindingSpecification current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewClassBindingSpecification current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_autoLayoutViewClassBindingSpecification> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ (const class GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ (const UpEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ &) = delete ;
  private: UpEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ & operator = (const UpEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutViewClassBindingSpecification current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewClassBindingSpecification current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_autoLayoutViewClassBindingSpecification> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_autoLayoutViewClassBindingSpecification_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_autoLayoutViewClassBindingSpecification> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_autoLayoutViewClassBindingSpecification_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_autoLayoutViewClassBindingSpecification_5D_ (const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & inSource) ;
  public: GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & operator = (const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_autoLayoutViewClassBindingSpecification_5D_ init (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutViewClassBindingSpecification & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_autoLayoutViewClassBindingSpecification_5D_ add_operation (const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_autoLayoutViewClassBindingSpecification constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_autoLayoutViewClassBindingSpecification constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_autoLayoutViewClassBindingSpecification & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_autoLayoutViewClassBindingSpecification & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_autoLayoutViewClassBindingSpecification & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_autoLayoutViewClassBindingSpecification constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewClassBindingSpecification getter_first (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewClassBindingSpecification getter_last (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutViewClassBindingSpecification_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutViewClassBindingSpecification_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                                    const class GGS_uint & constinOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutViewClassBindingSpecification readSubscript__3F_ (const class GGS_uint & in0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ ;
  friend class DownEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_autoLayoutViewClassBindingSpecification_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [controllerBindingOption] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_controllerBindingOption_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_controllerBindingOption_5D_ (const class GGS__5B_controllerBindingOption_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_controllerBindingOption_5D_ (const DownEnumerator__5B_controllerBindingOption_5D_ &) = delete ;
  private: DownEnumerator__5B_controllerBindingOption_5D_ & operator = (const DownEnumerator__5B_controllerBindingOption_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_controllerBindingOption current (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOption current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_controllerBindingOption> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_controllerBindingOption_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_controllerBindingOption_5D_ (const class GGS__5B_controllerBindingOption_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_controllerBindingOption_5D_ (const UpEnumerator__5B_controllerBindingOption_5D_ &) = delete ;
  private: UpEnumerator__5B_controllerBindingOption_5D_ & operator = (const UpEnumerator__5B_controllerBindingOption_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_controllerBindingOption current (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOption current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_controllerBindingOption> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_controllerBindingOption_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_controllerBindingOption> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_controllerBindingOption_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_controllerBindingOption_5D_ (const GGS__5B_controllerBindingOption_5D_ & inSource) ;
  public: GGS__5B_controllerBindingOption_5D_ & operator = (const GGS__5B_controllerBindingOption_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_controllerBindingOption_5D_ init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_controllerBindingOption_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_controllerBindingOption & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_controllerBindingOption_5D_ add_operation (const GGS__5B_controllerBindingOption_5D_ & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_controllerBindingOption constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_controllerBindingOption constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_controllerBindingOption & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_controllerBindingOption & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_controllerBindingOption & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_controllerBindingOption constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOption getter_first (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOption getter_last (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_controllerBindingOption_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_controllerBindingOption_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                    const class GGS_uint & constinOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_controllerBindingOption readSubscript__3F_ (const class GGS_uint & in0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_controllerBindingOption_5D_ ;
  friend class DownEnumerator__5B_controllerBindingOption_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_controllerBindingOption_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [outletClassBindingSpecificationModel] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_outletClassBindingSpecificationModel_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_outletClassBindingSpecificationModel_5D_ (const class GGS__5B_outletClassBindingSpecificationModel_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_outletClassBindingSpecificationModel_5D_ (const DownEnumerator__5B_outletClassBindingSpecificationModel_5D_ &) = delete ;
  private: DownEnumerator__5B_outletClassBindingSpecificationModel_5D_ & operator = (const DownEnumerator__5B_outletClassBindingSpecificationModel_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_outletClassBindingSpecificationModel current (LOCATION_ARGS) const ;
  public: class GGS_outletClassBindingSpecificationModel current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_outletClassBindingSpecificationModel> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_outletClassBindingSpecificationModel_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_outletClassBindingSpecificationModel_5D_ (const class GGS__5B_outletClassBindingSpecificationModel_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_outletClassBindingSpecificationModel_5D_ (const UpEnumerator__5B_outletClassBindingSpecificationModel_5D_ &) = delete ;
  private: UpEnumerator__5B_outletClassBindingSpecificationModel_5D_ & operator = (const UpEnumerator__5B_outletClassBindingSpecificationModel_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_outletClassBindingSpecificationModel current (LOCATION_ARGS) const ;
  public: class GGS_outletClassBindingSpecificationModel current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_outletClassBindingSpecificationModel> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_outletClassBindingSpecificationModel_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_outletClassBindingSpecificationModel> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_outletClassBindingSpecificationModel_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_outletClassBindingSpecificationModel_5D_ (const GGS__5B_outletClassBindingSpecificationModel_5D_ & inSource) ;
  public: GGS__5B_outletClassBindingSpecificationModel_5D_ & operator = (const GGS__5B_outletClassBindingSpecificationModel_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_outletClassBindingSpecificationModel_5D_ init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_outletClassBindingSpecificationModel_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_outletClassBindingSpecificationModel & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_outletClassBindingSpecificationModel_5D_ add_operation (const GGS__5B_outletClassBindingSpecificationModel_5D_ & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_outletClassBindingSpecificationModel constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_outletClassBindingSpecificationModel constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_outletClassBindingSpecificationModel & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_outletClassBindingSpecificationModel & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_outletClassBindingSpecificationModel & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_outletClassBindingSpecificationModel constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_outletClassBindingSpecificationModel getter_first (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletClassBindingSpecificationModel getter_last (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_outletClassBindingSpecificationModel_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_outletClassBindingSpecificationModel_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                                 const class GGS_uint & constinOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_outletClassBindingSpecificationModel readSubscript__3F_ (const class GGS_uint & in0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_outletClassBindingSpecificationModel_5D_ ;
  friend class DownEnumerator__5B_outletClassBindingSpecificationModel_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_outletClassBindingSpecificationModel_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [outletClassBindingSpecification] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_outletClassBindingSpecification_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_outletClassBindingSpecification_5D_ (const class GGS__5B_outletClassBindingSpecification_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_outletClassBindingSpecification_5D_ (const DownEnumerator__5B_outletClassBindingSpecification_5D_ &) = delete ;
  private: DownEnumerator__5B_outletClassBindingSpecification_5D_ & operator = (const DownEnumerator__5B_outletClassBindingSpecification_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_outletClassBindingSpecification current (LOCATION_ARGS) const ;
  public: class GGS_outletClassBindingSpecification current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_outletClassBindingSpecification> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_outletClassBindingSpecification_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_outletClassBindingSpecification_5D_ (const class GGS__5B_outletClassBindingSpecification_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_outletClassBindingSpecification_5D_ (const UpEnumerator__5B_outletClassBindingSpecification_5D_ &) = delete ;
  private: UpEnumerator__5B_outletClassBindingSpecification_5D_ & operator = (const UpEnumerator__5B_outletClassBindingSpecification_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_outletClassBindingSpecification current (LOCATION_ARGS) const ;
  public: class GGS_outletClassBindingSpecification current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_outletClassBindingSpecification> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_outletClassBindingSpecification_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_outletClassBindingSpecification> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_outletClassBindingSpecification_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_outletClassBindingSpecification_5D_ (const GGS__5B_outletClassBindingSpecification_5D_ & inSource) ;
  public: GGS__5B_outletClassBindingSpecification_5D_ & operator = (const GGS__5B_outletClassBindingSpecification_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_outletClassBindingSpecification_5D_ init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_outletClassBindingSpecification_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_outletClassBindingSpecification & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_outletClassBindingSpecification_5D_ add_operation (const GGS__5B_outletClassBindingSpecification_5D_ & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_outletClassBindingSpecification constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_outletClassBindingSpecification constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_outletClassBindingSpecification & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_outletClassBindingSpecification & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_outletClassBindingSpecification & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_outletClassBindingSpecification constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_outletClassBindingSpecification getter_first (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletClassBindingSpecification getter_last (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_outletClassBindingSpecification_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_outletClassBindingSpecification_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                            const class GGS_uint & constinOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_outletClassBindingSpecification readSubscript__3F_ (const class GGS_uint & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_outletClassBindingSpecification_5D_ ;
  friend class DownEnumerator__5B_outletClassBindingSpecification_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_outletClassBindingSpecification_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractBooleanMultipleBindingExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractBooleanMultipleBindingExpressionAST (const class cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractBooleanMultipleBindingExpressionAST init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractBooleanMultipleBindingExpressionAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractBooleanMultipleBindingExpressionAST_init (Compiler * inCompiler) ;


//--- Extension proc analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractBooleanMultipleBindingExpressionAST (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @andBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_andBooleanMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_andBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_andBooleanMultipleBindingExpressionAST (const class cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_andBooleanMultipleBindingExpressionAST init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                          const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @andBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_andBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void andBooleanMultipleBindingExpressionAST_init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                    const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension proc analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_andBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_andBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
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
// Phase 1: @arrayControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_arrayControllerDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_arrayControllerDeclarationAST (const class cPtr_arrayControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mControllerName (void) const ;
  public: void setProperty_mControllerName (const GGS_lstring & inValue) ;

  public: class GGS_arrayControllerBoundModelAST readProperty_mModel (void) const ;
  public: void setProperty_mModel (const GGS_arrayControllerBoundModelAST & inValue) ;

  public: class GGS_lstring readProperty_mToManyPropertyName (void) const ;
  public: void setProperty_mToManyPropertyName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayControllerDeclarationAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_arrayControllerBoundModelAST & inOperand2,
                                                                         const class GGS_lstring & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//   enum arrayControllerBoundModelAST
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerBoundModelAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_arrayControllerBoundModelAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_rootToManyRelationship,
    enum_selfToManyRelationship
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_rootToManyRelationship (class GGS_lstring & out_rootEntityName) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerBoundModelAST class_func_rootToManyRelationship (const class GGS_lstring & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_arrayControllerBoundModelAST class_func_selfToManyRelationship (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractRootToManyRelationship (class GGS_lstring & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ getter_getRootToManyRelationship (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRootToManyRelationship (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfToManyRelationship (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @arrayControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_arrayControllerDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void arrayControllerDeclarationAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_arrayControllerBoundModelAST & inOperand2,
                                                                   const class GGS_lstring & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mControllerName ;
  public: GGS_arrayControllerBoundModelAST mProperty_mModel ;
  public: GGS_lstring mProperty_mToManyPropertyName ;


//--- Default constructor
  public: cPtr_arrayControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_arrayControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                              const GGS_lstring & in_mControllerName,
                                              const GGS_arrayControllerBoundModelAST & in_mModel,
                                              const GGS_lstring & in_mToManyPropertyName,
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
// Phase 1: @astAbstractViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astAbstractViewInstructionDeclaration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_astAbstractViewInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astAbstractViewInstructionDeclaration (const class cPtr_astAbstractViewInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAbstractViewInstructionDeclaration init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astAbstractViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astAbstractViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astAbstractViewInstructionDeclaration : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astAbstractViewInstructionDeclaration_init (Compiler * inCompiler) ;


//--- Extension proc generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_astAbstractViewInstructionDeclaration (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astAbstractViewDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astAbstractViewDeclaration : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astAbstractViewDeclaration_init (Compiler * inCompiler) ;


//--- Extension proc checkView
  public: virtual void method_checkView (const class GGS_string arg_inViewName,
           const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewGeneration & arg_outGeneration,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_astAbstractViewDeclaration (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astComputedHorizontalViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astComputedHorizontalViewDeclaration : public GGS_astAbstractViewDeclaration {
//--------------------------------- Default constructor
  public: GGS_astComputedHorizontalViewDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astComputedHorizontalViewDeclaration (const class cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astComputedHorizontalViewDeclaration init_21__21__21_ (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                            const class GGS_astViewInstructionList & inOperand1,
                                                                            const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedHorizontalViewDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewFunctionCallList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_astAutoLayoutViewFunctionCallList final {
  public: DownEnumerator_astAutoLayoutViewFunctionCallList (const class GGS_astAutoLayoutViewFunctionCallList & inList) ;

  public: ~ DownEnumerator_astAutoLayoutViewFunctionCallList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutViewFunctionCallList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astAutoLayoutViewFunctionCallList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astAutoLayoutViewFunctionCallList (const DownEnumerator_astAutoLayoutViewFunctionCallList &) = delete ;
  private: DownEnumerator_astAutoLayoutViewFunctionCallList & operator = (const DownEnumerator_astAutoLayoutViewFunctionCallList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astAutoLayoutViewFunctionCallList final {
  public: UpEnumerator_astAutoLayoutViewFunctionCallList (const class GGS_astAutoLayoutViewFunctionCallList & inList)  ;

  public: ~ UpEnumerator_astAutoLayoutViewFunctionCallList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutViewFunctionCallList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astAutoLayoutViewFunctionCallList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astAutoLayoutViewFunctionCallList (const UpEnumerator_astAutoLayoutViewFunctionCallList &) = delete ;
  private: UpEnumerator_astAutoLayoutViewFunctionCallList & operator = (const UpEnumerator_astAutoLayoutViewFunctionCallList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @astAutoLayoutViewFunctionCallList list
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionCallList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_astAutoLayoutViewFunctionCallList_2E_element> mArray ;

//--- Default constructor
  public: GGS_astAutoLayoutViewFunctionCallList (void) ;

//--- Destructor
  public: virtual ~ GGS_astAutoLayoutViewFunctionCallList (void) = default ;

//--- Copy
  public: GGS_astAutoLayoutViewFunctionCallList (const GGS_astAutoLayoutViewFunctionCallList &) = default ;
  public: GGS_astAutoLayoutViewFunctionCallList & operator = (const GGS_astAutoLayoutViewFunctionCallList &) = default ;

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
  public : inline GenericArray <GGS_astAutoLayoutViewFunctionCallList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_astAutoLayoutViewFunctionCallList subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_astAutoLayoutViewFunctionCallList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFunctionName,
                                                 const class GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionCallList init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewFunctionCallList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_astAutoLayoutViewFunctionCallList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_astAutoLayoutViewFunctionCallList add_operation (const GGS_astAutoLayoutViewFunctionCallList & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_astAutoLayoutViewInstructionParameterList constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_astAutoLayoutViewInstructionParameterList constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFunctionNameAtIndex (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterListAtIndex (class GGS_astAutoLayoutViewInstructionParameterList constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterList getter_mParameterListAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astAutoLayoutViewFunctionCallList ;
  friend class DownEnumerator_astAutoLayoutViewFunctionCallList ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astNewStackViewDeclarationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_astNewStackViewDeclarationList final {
  public: DownEnumerator_astNewStackViewDeclarationList (const class GGS_astNewStackViewDeclarationList & inList) ;

  public: ~ DownEnumerator_astNewStackViewDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInstanciedStackViewName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mTypeStackViewName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astNewStackViewDeclarationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astNewStackViewDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astNewStackViewDeclarationList (const DownEnumerator_astNewStackViewDeclarationList &) = delete ;
  private: DownEnumerator_astNewStackViewDeclarationList & operator = (const DownEnumerator_astNewStackViewDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astNewStackViewDeclarationList final {
  public: UpEnumerator_astNewStackViewDeclarationList (const class GGS_astNewStackViewDeclarationList & inList)  ;

  public: ~ UpEnumerator_astNewStackViewDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInstanciedStackViewName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mTypeStackViewName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astNewStackViewDeclarationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astNewStackViewDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astNewStackViewDeclarationList (const UpEnumerator_astNewStackViewDeclarationList &) = delete ;
  private: UpEnumerator_astNewStackViewDeclarationList & operator = (const UpEnumerator_astNewStackViewDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @astNewStackViewDeclarationList list
//--------------------------------------------------------------------------------------------------

class GGS_astNewStackViewDeclarationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_astNewStackViewDeclarationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_astNewStackViewDeclarationList (void) ;

//--- Destructor
  public: virtual ~ GGS_astNewStackViewDeclarationList (void) = default ;

//--- Copy
  public: GGS_astNewStackViewDeclarationList (const GGS_astNewStackViewDeclarationList &) = default ;
  public: GGS_astNewStackViewDeclarationList & operator = (const GGS_astNewStackViewDeclarationList &) = default ;

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
  public : inline GenericArray <GGS_astNewStackViewDeclarationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_astNewStackViewDeclarationList subList (const int32_t inStart,
                                                       const int32_t inLength,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_astNewStackViewDeclarationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInstanciedStackViewName,
                                                 const class GGS_lstring & in_mTypeStackViewName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astNewStackViewDeclarationList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_astNewStackViewDeclarationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_astNewStackViewDeclarationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_astNewStackViewDeclarationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_astNewStackViewDeclarationList add_operation (const GGS_astNewStackViewDeclarationList & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstanciedStackViewNameAtIndex (class GGS_lstring constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMTypeStackViewNameAtIndex (class GGS_lstring constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mInstanciedStackViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mTypeStackViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_astNewStackViewDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_astNewStackViewDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_astNewStackViewDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astNewStackViewDeclarationList ;
  friend class DownEnumerator_astNewStackViewDeclarationList ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astViewInstructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_astViewInstructionList final {
  public: DownEnumerator_astViewInstructionList (const class GGS_astViewInstructionList & inList) ;

  public: ~ DownEnumerator_astViewInstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_astAbstractViewInstructionDeclaration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astViewInstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astViewInstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astViewInstructionList (const DownEnumerator_astViewInstructionList &) = delete ;
  private: DownEnumerator_astViewInstructionList & operator = (const DownEnumerator_astViewInstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astViewInstructionList final {
  public: UpEnumerator_astViewInstructionList (const class GGS_astViewInstructionList & inList)  ;

  public: ~ UpEnumerator_astViewInstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_astAbstractViewInstructionDeclaration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astViewInstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astViewInstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astViewInstructionList (const UpEnumerator_astViewInstructionList &) = delete ;
  private: UpEnumerator_astViewInstructionList & operator = (const UpEnumerator_astViewInstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @astViewInstructionList list
//--------------------------------------------------------------------------------------------------

class GGS_astViewInstructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_astViewInstructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_astViewInstructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_astViewInstructionList (void) = default ;

//--- Copy
  public: GGS_astViewInstructionList (const GGS_astViewInstructionList &) = default ;
  public: GGS_astViewInstructionList & operator = (const GGS_astViewInstructionList &) = default ;

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
  public : inline GenericArray <GGS_astViewInstructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_astViewInstructionList subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_astViewInstructionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astViewInstructionList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_astViewInstructionList class_func_listWithValue (const class GGS_astAbstractViewInstructionDeclaration & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_astViewInstructionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_astAbstractViewInstructionDeclaration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_astViewInstructionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_astViewInstructionList add_operation (const GGS_astViewInstructionList & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_astAbstractViewInstructionDeclaration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_astAbstractViewInstructionDeclaration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_astAbstractViewInstructionDeclaration constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_astAbstractViewInstructionDeclaration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_astViewInstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_astViewInstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_astViewInstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astViewInstructionList ;
  friend class DownEnumerator_astViewInstructionList ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewInstructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astComputedHorizontalViewDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astComputedHorizontalViewDeclaration : public cPtr_astAbstractViewDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astComputedHorizontalViewDeclaration_init_21__21__21_ (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                      const class GGS_astViewInstructionList & inOperand1,
                                                                      const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                      Compiler * inCompiler) ;


//--- Extension proc checkView
  public: virtual void method_checkView (const class GGS_string arg_inViewName,
           const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewGeneration & arg_outGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_astViewInstructionList mProperty_mInstructionList ;
  public: GGS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_astComputedHorizontalViewDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astComputedHorizontalViewDeclaration (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                     const GGS_astViewInstructionList & in_mInstructionList,
                                                     const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
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
// Phase 1: @astComputedVerticalViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astComputedVerticalViewDeclaration : public GGS_astAbstractViewDeclaration {
//--------------------------------- Default constructor
  public: GGS_astComputedVerticalViewDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astComputedVerticalViewDeclaration (const class cPtr_astComputedVerticalViewDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mHasVerticalScroller (void) const ;

  public: class GGS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astComputedVerticalViewDeclaration init_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                  const class GGS_astViewInstructionList & inOperand3,
                                                                                  const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedVerticalViewDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astComputedVerticalViewDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astComputedVerticalViewDeclaration : public cPtr_astAbstractViewDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astComputedVerticalViewDeclaration_init_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                            const class GGS_astViewInstructionList & inOperand3,
                                                                            const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                            Compiler * inCompiler) ;


//--- Extension proc checkView
  public: virtual void method_checkView (const class GGS_string arg_inViewName,
           const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewGeneration & arg_outGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mHasVerticalScroller ;
  public: GGS_lstring mProperty_mConfiguratorName ;
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_astViewInstructionList mProperty_mInstructionList ;
  public: GGS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_astComputedVerticalViewDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astComputedVerticalViewDeclaration (const GGS_bool & in_mHasVerticalScroller,
                                                   const GGS_lstring & in_mConfiguratorName,
                                                   const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                   const GGS_astViewInstructionList & in_mInstructionList,
                                                   const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
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
// Phase 1: @astComputedViewInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_astComputedViewInstruction : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astComputedViewInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astComputedViewInstruction (const class cPtr_astComputedViewInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mAutoLayoutViewClassName (void) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterList readProperty_mParameterList (void) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_tableValueBinding readProperty_mTableValueBinding (void) const ;

  public: class GGS_runActionDescriptor readProperty_mRunActionDescriptor (void) const ;

  public: class GGS_multipleBindingDescriptor readProperty_mEnabledBindingDescriptor (void) const ;

  public: class GGS_multipleBindingDescriptor readProperty_mHiddenBindingDescriptor (void) const ;

  public: class GGS_graphicController readProperty_mGraphicController (void) const ;

  public: class GGS__5B_regularBinding_5D_ readProperty_mRegularBindingList (void) const ;

  public: class GGS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GGS_lstring readProperty_mOutletName (void) const ;

  public: class GGS_bool readProperty_mOutletIsArray (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astComputedViewInstruction init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                      const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                                                      const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                                      const class GGS_tableValueBinding & inOperand3,
                                                                                                      const class GGS_runActionDescriptor & inOperand4,
                                                                                                      const class GGS_multipleBindingDescriptor & inOperand5,
                                                                                                      const class GGS_multipleBindingDescriptor & inOperand6,
                                                                                                      const class GGS_graphicController & inOperand7,
                                                                                                      const class GGS__5B_regularBinding_5D_ & inOperand8,
                                                                                                      const class GGS_lstring & inOperand9,
                                                                                                      const class GGS_lstring & inOperand10,
                                                                                                      const class GGS_bool & inOperand11,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedViewInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astComputedViewInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_astComputedViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astComputedViewInstruction_init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                                                const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                                const class GGS_tableValueBinding & inOperand3,
                                                                                                const class GGS_runActionDescriptor & inOperand4,
                                                                                                const class GGS_multipleBindingDescriptor & inOperand5,
                                                                                                const class GGS_multipleBindingDescriptor & inOperand6,
                                                                                                const class GGS_graphicController & inOperand7,
                                                                                                const class GGS__5B_regularBinding_5D_ & inOperand8,
                                                                                                const class GGS_lstring & inOperand9,
                                                                                                const class GGS_lstring & inOperand10,
                                                                                                const class GGS_bool & inOperand11,
                                                                                                Compiler * inCompiler) ;


//--- Extension proc generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mAutoLayoutViewClassName ;
  public: GGS_astAutoLayoutViewInstructionParameterList mProperty_mParameterList ;
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_tableValueBinding mProperty_mTableValueBinding ;
  public: GGS_runActionDescriptor mProperty_mRunActionDescriptor ;
  public: GGS_multipleBindingDescriptor mProperty_mEnabledBindingDescriptor ;
  public: GGS_multipleBindingDescriptor mProperty_mHiddenBindingDescriptor ;
  public: GGS_graphicController mProperty_mGraphicController ;
  public: GGS__5B_regularBinding_5D_ mProperty_mRegularBindingList ;
  public: GGS_lstring mProperty_mConfiguratorName ;
  public: GGS_lstring mProperty_mOutletName ;
  public: GGS_bool mProperty_mOutletIsArray ;


//--- Default constructor
  public: cPtr_astComputedViewInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astComputedViewInstruction (const GGS_lstring & in_mAutoLayoutViewClassName,
                                           const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                           const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                           const GGS_tableValueBinding & in_mTableValueBinding,
                                           const GGS_runActionDescriptor & in_mRunActionDescriptor,
                                           const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                           const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                           const GGS_graphicController & in_mGraphicController,
                                           const GGS__5B_regularBinding_5D_ & in_mRegularBindingList,
                                           const GGS_lstring & in_mConfiguratorName,
                                           const GGS_lstring & in_mOutletName,
                                           const GGS_bool & in_mOutletIsArray,
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
// Phase 1: @astDividerInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astDividerInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astDividerInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astDividerInstructionDeclaration (const class cPtr_astDividerInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astDividerInstructionDeclaration init_21_horizontal (const class GGS_bool & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astDividerInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astDividerInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astDividerInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astDividerInstructionDeclaration_init_21_horizontal (const class GGS_bool & inOperand0,
                                                                    Compiler * inCompiler) ;


//--- Extension proc generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_horizontal ;


//--- Default constructor
  public: cPtr_astDividerInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astDividerInstructionDeclaration (const GGS_bool & in_horizontal,
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
// Phase 1: @astGutterInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astGutterInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astGutterInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astGutterInstructionDeclaration (const class cPtr_astGutterInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astGutterInstructionDeclaration init_21_horizontal (const class GGS_bool & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astGutterInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astGutterInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astGutterInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astGutterInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astGutterInstructionDeclaration_init_21_horizontal (const class GGS_bool & inOperand0,
                                                                   Compiler * inCompiler) ;


//--- Extension proc generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_horizontal ;


//--- Default constructor
  public: cPtr_astGutterInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astGutterInstructionDeclaration (const GGS_bool & in_horizontal,
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
// Phase 1: @astHStackViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astHStackViewInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astHStackViewInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astHStackViewInstructionDeclaration (const class cPtr_astHStackViewInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_optionalHiddenBinding readProperty_mOptionalHiddenBinding (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mAstNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astHStackViewInstructionDeclaration init_21__21__21__21_ (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                               const class GGS_astViewInstructionList & inOperand1,
                                                                               const class GGS_optionalHiddenBinding & inOperand2,
                                                                               const class GGS_astNewStackViewDeclarationList & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astHStackViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
//   enum optionalHiddenBinding
//--------------------------------------------------------------------------------------------------

class GGS_optionalHiddenBinding : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_optionalHiddenBinding (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noBinding,
    enum_binding
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_binding (class GGS_abstractBooleanMultipleBindingExpressionAST & out_hidden) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_optionalHiddenBinding class_func_binding (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_optionalHiddenBinding class_func_noBinding (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractBinding (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_optionalHiddenBinding_2E_binding_3F_ getter_getBinding (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBinding (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNoBinding (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astHStackViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astHStackViewInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astHStackViewInstructionDeclaration_init_21__21__21__21_ (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                         const class GGS_astViewInstructionList & inOperand1,
                                                                         const class GGS_optionalHiddenBinding & inOperand2,
                                                                         const class GGS_astNewStackViewDeclarationList & inOperand3,
                                                                         Compiler * inCompiler) ;


//--- Extension proc generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_astViewInstructionList mProperty_mInstructionList ;
  public: GGS_optionalHiddenBinding mProperty_mOptionalHiddenBinding ;
  public: GGS_astNewStackViewDeclarationList mProperty_mAstNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_astHStackViewInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astHStackViewInstructionDeclaration (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                    const GGS_astViewInstructionList & in_mInstructionList,
                                                    const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                    const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
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
// Phase 1: @astLocalViewInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_astLocalViewInstruction : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astLocalViewInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astLocalViewInstruction (const class cPtr_astLocalViewInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLocalView (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astLocalViewInstruction init_21_ (const class GGS_lstring & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astLocalViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astLocalViewInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astLocalViewInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_astLocalViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astLocalViewInstruction_init_21_ (const class GGS_lstring & inOperand0,
                                                 Compiler * inCompiler) ;


//--- Extension proc generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLocalView ;


//--- Default constructor
  public: cPtr_astLocalViewInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astLocalViewInstruction (const GGS_lstring & in_mLocalView,
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
// Phase 1: @astSeparatorInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astSeparatorInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astSeparatorInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astSeparatorInstructionDeclaration (const class cPtr_astSeparatorInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astSeparatorInstructionDeclaration init_21_horizontal (const class GGS_bool & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astSeparatorInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astSeparatorInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astSeparatorInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astSeparatorInstructionDeclaration_init_21_horizontal (const class GGS_bool & inOperand0,
                                                                      Compiler * inCompiler) ;


//--- Extension proc generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_horizontal ;


//--- Default constructor
  public: cPtr_astSeparatorInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astSeparatorInstructionDeclaration (const GGS_bool & in_horizontal,
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
// Phase 1: @astSpaceViewInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_astSpaceViewInstruction : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astSpaceViewInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astSpaceViewInstruction (const class cPtr_astSpaceViewInstruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astSpaceViewInstruction init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astSpaceViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astSpaceViewInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_astSpaceViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astSpaceViewInstruction_init (Compiler * inCompiler) ;


//--- Extension proc generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_astSpaceViewInstruction (Compiler * inCompiler
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
// Phase 1: @astVStackViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astVStackViewInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astVStackViewInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astVStackViewInstructionDeclaration (const class cPtr_astVStackViewInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mHasVerticalScroller (void) const ;

  public: class GGS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_optionalHiddenBinding readProperty_mOptionalHiddenBinding (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mAstNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astVStackViewInstructionDeclaration init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                       const class GGS_astViewInstructionList & inOperand3,
                                                                                       const class GGS_optionalHiddenBinding & inOperand4,
                                                                                       const class GGS_astNewStackViewDeclarationList & inOperand5,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astVStackViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astVStackViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astVStackViewInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astVStackViewInstructionDeclaration_init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                 const class GGS_astViewInstructionList & inOperand3,
                                                                                 const class GGS_optionalHiddenBinding & inOperand4,
                                                                                 const class GGS_astNewStackViewDeclarationList & inOperand5,
                                                                                 Compiler * inCompiler) ;


//--- Extension proc generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mHasVerticalScroller ;
  public: GGS_lstring mProperty_mConfiguratorName ;
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_astViewInstructionList mProperty_mInstructionList ;
  public: GGS_optionalHiddenBinding mProperty_mOptionalHiddenBinding ;
  public: GGS_astNewStackViewDeclarationList mProperty_mAstNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_astVStackViewInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astVStackViewInstructionDeclaration (const GGS_bool & in_mHasVerticalScroller,
                                                    const GGS_lstring & in_mConfiguratorName,
                                                    const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                    const GGS_astViewInstructionList & in_mInstructionList,
                                                    const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                    const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
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
// Phase 1: @autoLayoutTableViewControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutTableViewControllerDeclarationAST (const class cPtr_autoLayoutTableViewControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mControllerName (void) const ;

  public: class GGS_bool readProperty_mIsRoot (void) const ;

  public: class GGS_lstring readProperty_mRootEntityName (void) const ;

  public: class GGS_lstring readProperty_mToManyPropertyName (void) const ;

  public: class GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ readProperty_mTableViewControllerBoundColumnListAST (void) const ;

  public: class GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ readProperty_mTableViewControllerAttributListAST (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerDeclarationAST init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_lstring & inOperand1,
                                                                                                   const class GGS_bool & inOperand2,
                                                                                                   const class GGS_lstring & inOperand3,
                                                                                                   const class GGS_lstring & inOperand4,
                                                                                                   const class GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ & inOperand5,
                                                                                                   const class GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ & inOperand6,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutTableViewControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutTableViewControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutTableViewControllerDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutTableViewControllerDeclarationAST_init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_bool & inOperand2,
                                                                                             const class GGS_lstring & inOperand3,
                                                                                             const class GGS_lstring & inOperand4,
                                                                                             const class GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ & inOperand5,
                                                                                             const class GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ & inOperand6,
                                                                                             Compiler * inCompiler) ;


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mControllerName ;
  public: GGS_bool mProperty_mIsRoot ;
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mToManyPropertyName ;
  public: GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ mProperty_mTableViewControllerBoundColumnListAST ;
  public: GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ mProperty_mTableViewControllerAttributListAST ;


//--- Default constructor
  public: cPtr_autoLayoutTableViewControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutTableViewControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                            const GGS_lstring & in_mControllerName,
                                                            const GGS_bool & in_mIsRoot,
                                                            const GGS_lstring & in_mRootEntityName,
                                                            const GGS_lstring & in_mToManyPropertyName,
                                                            const GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ & in_mTableViewControllerBoundColumnListAST,
                                                            const GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ & in_mTableViewControllerAttributListAST,
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
// Phase 1: @comparisonMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_comparisonMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_comparisonMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_comparisonMultipleBindingExpressionAST (const class cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;

  public: class GGS_multipleBindingComparisonAST readProperty_mOperator (void) const ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_comparisonMultipleBindingExpressionAST init_21__21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                              const class GGS_multipleBindingComparisonAST & inOperand1,
                                                                              const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_comparisonMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
//   enum multipleBindingComparisonAST
//--------------------------------------------------------------------------------------------------

class GGS_multipleBindingComparisonAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_multipleBindingComparisonAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_equal,
    enum_notEqual,
    enum_lower,
    enum_lowerOrEqual,
    enum_greater,
    enum_greaterOrEqual
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
//--------------------------------- GALGAS class functions
  public: static class GGS_multipleBindingComparisonAST class_func_equal (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_greater (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_greaterOrEqual (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_lower (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_lowerOrEqual (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isGreater (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLower (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @comparisonMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_comparisonMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void comparisonMultipleBindingExpressionAST_init_21__21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                        const class GGS_multipleBindingComparisonAST & inOperand1,
                                                                        const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand2,
                                                                        Compiler * inCompiler) ;


//--- Extension proc analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GGS_multipleBindingComparisonAST mProperty_mOperator ;
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_comparisonMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_comparisonMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GGS_multipleBindingComparisonAST & in_mOperator,
                                                       const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
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
// Phase 1: @computedPropertyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedPropertyDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_computedPropertyDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_computedPropertyDeclarationAST (const class cPtr_computedPropertyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRootEntityName (void) const ;
  public: void setProperty_mRootEntityName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mComputedPropertyTypeName (void) const ;
  public: void setProperty_mComputedPropertyTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mComputedPropertyName (void) const ;
  public: void setProperty_mComputedPropertyName (const GGS_lstring & inValue) ;

  public: class GGS__5B_observablePropertyAST_5D_ readProperty_mDependencyList (void) const ;
  public: void setProperty_mDependencyList (const GGS__5B_observablePropertyAST_5D_ & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computedPropertyDeclarationAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              const class GGS_lstring & inOperand3,
                                                                              const class GGS__5B_observablePropertyAST_5D_ & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @computedPropertyDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_computedPropertyDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void computedPropertyDeclarationAST_init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_lstring & inOperand3,
                                                                        const class GGS__5B_observablePropertyAST_5D_ & inOperand4,
                                                                        Compiler * inCompiler) ;


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mComputedPropertyTypeName ;
  public: GGS_lstring mProperty_mComputedPropertyName ;
  public: GGS__5B_observablePropertyAST_5D_ mProperty_mDependencyList ;


//--- Default constructor
  public: cPtr_computedPropertyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_computedPropertyDeclarationAST (const GGS_lstring & in_mClassName,
                                               const GGS_lstring & in_mRootEntityName,
                                               const GGS_lstring & in_mComputedPropertyTypeName,
                                               const GGS_lstring & in_mComputedPropertyName,
                                               const GGS__5B_observablePropertyAST_5D_ & in_mDependencyList,
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
// Phase 1: @entityDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_entityDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_entityDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_entityDeclarationAST (const class cPtr_entityDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsAbstract (void) const ;

  public: class GGS_lstring readProperty_mSuperEntityName (void) const ;

  public: class GGS_bool readProperty_mHandlingOpposite (void) const ;

  public: class GGS__5B_simpleStoredProperty_5D_ readProperty_mSimpleStoredPropertyList (void) const ;

  public: class GGS_stringset readProperty_mSignatureList (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mActionDeclarationList (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mObsoleteEntityNames (void) const ;

  public: class GGS_bool readProperty_mIsGraphicEntity (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mExternSwiftDelegateList (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mGraphicOptionArray (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityDeclarationAST init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS_bool & inOperand3,
                                                                                            const class GGS__5B_simpleStoredProperty_5D_ & inOperand4,
                                                                                            const class GGS_stringset & inOperand5,
                                                                                            const class GGS__5B_lstring_5D_ & inOperand6,
                                                                                            const class GGS__5B_lstring_5D_ & inOperand7,
                                                                                            const class GGS_bool & inOperand8,
                                                                                            const class GGS__5B_lstring_5D_ & inOperand9,
                                                                                            const class GGS__5B_lstring_5D_ & inOperand10,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_entityDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @entityDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_entityDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void entityDeclarationAST_init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_bool & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_bool & inOperand3,
                                                                                      const class GGS__5B_simpleStoredProperty_5D_ & inOperand4,
                                                                                      const class GGS_stringset & inOperand5,
                                                                                      const class GGS__5B_lstring_5D_ & inOperand6,
                                                                                      const class GGS__5B_lstring_5D_ & inOperand7,
                                                                                      const class GGS_bool & inOperand8,
                                                                                      const class GGS__5B_lstring_5D_ & inOperand9,
                                                                                      const class GGS__5B_lstring_5D_ & inOperand10,
                                                                                      Compiler * inCompiler) ;


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc fourthAnalysisPhase
  public: virtual void method_fourthAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc secondAnalysisPhase
  public: virtual void method_secondAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsAbstract ;
  public: GGS_lstring mProperty_mSuperEntityName ;
  public: GGS_bool mProperty_mHandlingOpposite ;
  public: GGS__5B_simpleStoredProperty_5D_ mProperty_mSimpleStoredPropertyList ;
  public: GGS_stringset mProperty_mSignatureList ;
  public: GGS__5B_lstring_5D_ mProperty_mActionDeclarationList ;
  public: GGS__5B_lstring_5D_ mProperty_mObsoleteEntityNames ;
  public: GGS_bool mProperty_mIsGraphicEntity ;
  public: GGS__5B_lstring_5D_ mProperty_mExternSwiftDelegateList ;
  public: GGS__5B_lstring_5D_ mProperty_mGraphicOptionArray ;


//--- Default constructor
  public: cPtr_entityDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_entityDeclarationAST (const GGS_lstring & in_mClassName,
                                     const GGS_bool & in_mIsAbstract,
                                     const GGS_lstring & in_mSuperEntityName,
                                     const GGS_bool & in_mHandlingOpposite,
                                     const GGS__5B_simpleStoredProperty_5D_ & in_mSimpleStoredPropertyList,
                                     const GGS_stringset & in_mSignatureList,
                                     const GGS__5B_lstring_5D_ & in_mActionDeclarationList,
                                     const GGS__5B_lstring_5D_ & in_mObsoleteEntityNames,
                                     const GGS_bool & in_mIsGraphicEntity,
                                     const GGS__5B_lstring_5D_ & in_mExternSwiftDelegateList,
                                     const GGS__5B_lstring_5D_ & in_mGraphicOptionArray,
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
// Phase 1: @enumerationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumerationDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_enumerationDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumerationDeclarationAST (const class cPtr_enumerationDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS__5B_lstring_5D_ readProperty_mEnumConstantNameList (void) const ;

  public: class GGS_bool readProperty_mCaseIterable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationDeclarationAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS__5B_lstring_5D_ & inOperand1,
                                                                 const class GGS_bool & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumerationDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumerationDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_enumerationDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumerationDeclarationAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS__5B_lstring_5D_ & inOperand1,
                                                           const class GGS_bool & inOperand2,
                                                           Compiler * inCompiler) ;


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS__5B_lstring_5D_ mProperty_mEnumConstantNameList ;
  public: GGS_bool mProperty_mCaseIterable ;


//--- Default constructor
  public: cPtr_enumerationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumerationDeclarationAST (const GGS_lstring & in_mClassName,
                                          const GGS__5B_lstring_5D_ & in_mEnumConstantNameList,
                                          const GGS_bool & in_mCaseIterable,
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
// Phase 1: @literalIntMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalIntMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_literalIntMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalIntMultipleBindingExpressionAST (const class cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalIntMultipleBindingExpressionAST init_21_ (const class GGS_luint & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalIntMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalIntMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_literalIntMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalIntMultipleBindingExpressionAST_init_21_ (const class GGS_luint & inOperand0,
                                                                Compiler * inCompiler) ;


//--- Extension proc analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalIntMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalIntMultipleBindingExpressionAST (const GGS_luint & in_mValue,
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
// Phase 1: @negateBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_negateBooleanMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_negateBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_negateBooleanMultipleBindingExpressionAST (const class cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mBinding (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_negateBooleanMultipleBindingExpressionAST init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_negateBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @negateBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_negateBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void negateBooleanMultipleBindingExpressionAST_init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                   Compiler * inCompiler) ;


//--- Extension proc analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mBinding ;


//--- Default constructor
  public: cPtr_negateBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_negateBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mBinding,
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
// Phase 1: @observablePropertyInMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyInMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_observablePropertyInMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_observablePropertyInMultipleBindingExpressionAST (const class cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_observablePropertyAST readProperty_mProperty (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyInMultipleBindingExpressionAST init_21_ (const class GGS_observablePropertyAST & inOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_observablePropertyInMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @observablePropertyInMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_observablePropertyInMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void observablePropertyInMultipleBindingExpressionAST_init_21_ (const class GGS_observablePropertyAST & inOperand0,
                                                                          Compiler * inCompiler) ;


//--- Extension proc analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_observablePropertyAST mProperty_mProperty ;


//--- Default constructor
  public: cPtr_observablePropertyInMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_observablePropertyInMultipleBindingExpressionAST (const GGS_observablePropertyAST & in_mProperty,
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
// Phase 1: @orBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_orBooleanMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_orBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_orBooleanMultipleBindingExpressionAST (const class cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_orBooleanMultipleBindingExpressionAST init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                         const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @orBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_orBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void orBooleanMultipleBindingExpressionAST_init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                   const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension proc analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_orBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_orBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                      const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
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
// Phase 1: @proxyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_proxyDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_proxyDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_proxyDeclarationAST (const class cPtr_proxyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_proxyKind readProperty_mProxyKind (void) const ;
  public: void setProperty_mProxyKind (const GGS_proxyKind & inValue) ;

  public: class GGS_lstring readProperty_mProxyTypeName (void) const ;
  public: void setProperty_mProxyTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mProxyName (void) const ;
  public: void setProperty_mProxyName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mToOneRelationshipName (void) const ;
  public: void setProperty_mToOneRelationshipName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mPropertyName (void) const ;
  public: void setProperty_mPropertyName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_proxyDeclarationAST init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_proxyKind & inOperand1,
                                                                       const class GGS_lstring & inOperand2,
                                                                       const class GGS_lstring & inOperand3,
                                                                       const class GGS_lstring & inOperand4,
                                                                       const class GGS_lstring & inOperand5,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_proxyDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_proxyDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//   enum proxyKind
//--------------------------------------------------------------------------------------------------

class GGS_proxyKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_proxyKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_propertyProxy,
    enum_toManyProxy
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
//--------------------------------- GALGAS class functions
  public: static class GGS_proxyKind class_func_propertyProxy (LOCATION_ARGS) ;

  public: static class GGS_proxyKind class_func_toManyProxy (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_proxyKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isPropertyProxy (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isToManyProxy (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_proxyKind ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @proxyDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_proxyDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void proxyDeclarationAST_init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_proxyKind & inOperand1,
                                                                 const class GGS_lstring & inOperand2,
                                                                 const class GGS_lstring & inOperand3,
                                                                 const class GGS_lstring & inOperand4,
                                                                 const class GGS_lstring & inOperand5,
                                                                 Compiler * inCompiler) ;


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc secondAnalysisPhase
  public: virtual void method_secondAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_proxyKind mProperty_mProxyKind ;
  public: GGS_lstring mProperty_mProxyTypeName ;
  public: GGS_lstring mProperty_mProxyName ;
  public: GGS_lstring mProperty_mToOneRelationshipName ;
  public: GGS_lstring mProperty_mPropertyName ;


//--- Default constructor
  public: cPtr_proxyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_proxyDeclarationAST (const GGS_lstring & in_mClassName,
                                    const GGS_proxyKind & in_mProxyKind,
                                    const GGS_lstring & in_mProxyTypeName,
                                    const GGS_lstring & in_mProxyName,
                                    const GGS_lstring & in_mToOneRelationshipName,
                                    const GGS_lstring & in_mPropertyName,
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
// Phase 1: @selectionControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectionControllerDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_selectionControllerDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectionControllerDeclarationAST (const class cPtr_selectionControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSelectionControllerName (void) const ;

  public: class GGS_lstring readProperty_mModelControllerName (void) const ;

  public: class GGS_lstring readProperty_mModelControllerPropertyName (void) const ;

  public: class GGS_lstring readProperty_mSelectionEntityName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectionControllerDeclarationAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_lstring & inOperand3,
                                                                                 const class GGS_lstring & inOperand4,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectionControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selectionControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selectionControllerDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selectionControllerDeclarationAST_init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_lstring & inOperand3,
                                                                           const class GGS_lstring & inOperand4,
                                                                           Compiler * inCompiler) ;


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc fourthAnalysisPhase
  public: virtual void method_fourthAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSelectionControllerName ;
  public: GGS_lstring mProperty_mModelControllerName ;
  public: GGS_lstring mProperty_mModelControllerPropertyName ;
  public: GGS_lstring mProperty_mSelectionEntityName ;


//--- Default constructor
  public: cPtr_selectionControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selectionControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                  const GGS_lstring & in_mSelectionControllerName,
                                                  const GGS_lstring & in_mModelControllerName,
                                                  const GGS_lstring & in_mModelControllerPropertyName,
                                                  const GGS_lstring & in_mSelectionEntityName,
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
// Phase 1: @toOneRelationshipAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_toOneRelationshipAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_toOneRelationshipAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_toOneRelationshipAST (const class cPtr_toOneRelationshipAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDestinationEntityName (void) const ;
  public: void setProperty_mDestinationEntityName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mToOneRelationshipName (void) const ;
  public: void setProperty_mToOneRelationshipName (const GGS_lstring & inValue) ;

  public: class GGS_toOneOppositeRelationship readProperty_mOpposite (void) const ;
  public: void setProperty_mOpposite (const GGS_toOneOppositeRelationship & inValue) ;

  public: class GGS_bool readProperty_mUsedForSignature (void) const ;
  public: void setProperty_mUsedForSignature (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mWeak (void) const ;
  public: void setProperty_mWeak (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toOneRelationshipAST init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_toOneOppositeRelationship & inOperand3,
                                                                        const class GGS_bool & inOperand4,
                                                                        const class GGS_bool & inOperand5,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneRelationshipAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneRelationshipAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @toOneRelationshipAST class
//--------------------------------------------------------------------------------------------------

class cPtr_toOneRelationshipAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void toOneRelationshipAST_init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  const class GGS_toOneOppositeRelationship & inOperand3,
                                                                  const class GGS_bool & inOperand4,
                                                                  const class GGS_bool & inOperand5,
                                                                  Compiler * inCompiler) ;


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDestinationEntityName ;
  public: GGS_lstring mProperty_mToOneRelationshipName ;
  public: GGS_toOneOppositeRelationship mProperty_mOpposite ;
  public: GGS_bool mProperty_mUsedForSignature ;
  public: GGS_bool mProperty_mWeak ;


//--- Default constructor
  public: cPtr_toOneRelationshipAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_toOneRelationshipAST (const GGS_lstring & in_mClassName,
                                     const GGS_lstring & in_mDestinationEntityName,
                                     const GGS_lstring & in_mToOneRelationshipName,
                                     const GGS_toOneOppositeRelationship & in_mOpposite,
                                     const GGS_bool & in_mUsedForSignature,
                                     const GGS_bool & in_mWeak,
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
// Phase 1: @transientClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_transientClassDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_transientClassDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_transientClassDeclarationAST (const class cPtr_transientClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsClass (void) const ;
  public: void setProperty_mIsClass (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientClassDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_bool & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @transientClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_transientClassDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void transientClassDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_bool & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsClass ;


//--- Default constructor
  public: cPtr_transientClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_transientClassDeclarationAST (const GGS_lstring & in_mClassName,
                                             const GGS_bool & in_mIsClass,
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
// Phase 1: @transientDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_transientDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_transientDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_transientDeclarationAST (const class cPtr_transientDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRootEntityName (void) const ;
  public: void setProperty_mRootEntityName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mTransientTypeName (void) const ;
  public: void setProperty_mTransientTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mTransientName (void) const ;
  public: void setProperty_mTransientName (const GGS_lstring & inValue) ;

  public: class GGS__5B_observablePropertyAST_5D_ readProperty_mDependencyList (void) const ;
  public: void setProperty_mDependencyList (const GGS__5B_observablePropertyAST_5D_ & inValue) ;

  public: class GGS_bool readProperty_mIsOverriding (void) const ;
  public: void setProperty_mIsOverriding (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientDeclarationAST init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_lstring & inOperand3,
                                                                           const class GGS__5B_observablePropertyAST_5D_ & inOperand4,
                                                                           const class GGS_bool & inOperand5,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @transientDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_transientDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void transientDeclarationAST_init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_lstring & inOperand3,
                                                                     const class GGS__5B_observablePropertyAST_5D_ & inOperand4,
                                                                     const class GGS_bool & inOperand5,
                                                                     Compiler * inCompiler) ;


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mTransientTypeName ;
  public: GGS_lstring mProperty_mTransientName ;
  public: GGS__5B_observablePropertyAST_5D_ mProperty_mDependencyList ;
  public: GGS_bool mProperty_mIsOverriding ;


//--- Default constructor
  public: cPtr_transientDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_transientDeclarationAST (const GGS_lstring & in_mClassName,
                                        const GGS_lstring & in_mRootEntityName,
                                        const GGS_lstring & in_mTransientTypeName,
                                        const GGS_lstring & in_mTransientName,
                                        const GGS__5B_observablePropertyAST_5D_ & in_mDependencyList,
                                        const GGS_bool & in_mIsOverriding,
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
// Phase 1: @xorBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_xorBooleanMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_xorBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_xorBooleanMultipleBindingExpressionAST (const class cPtr_xorBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_xorBooleanMultipleBindingExpressionAST init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                          const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xorBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @xorBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_xorBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void xorBooleanMultipleBindingExpressionAST_init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                    const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension proc analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_xorBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_xorBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
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
//  GRAMMAR easyBindings_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_easyBindings_5F_grammar : public cParser_easyBindings_5F_syntax {
//------------------------------------- 'action_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_action_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_action_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_action_5F_declaration_ (GGS__5B_lstring_5D_ & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_func_call_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (GGS_stringset & ioArgument0,
                                                                   GGS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_view_binding_specification' non terminal
//--- 'parse' label
 /*  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const GGS_lstring inArgument0,
                                                                               GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & ioArgument1,
                                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_class_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_autolayout_5F_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_autolayout_5F_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_class_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_formal_parameter_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const GGS_lstring inArgument0,
                                                                      GGS__5B_autoLayoutClassParameter_5D_ & outArgument1,
                                                                      GGS_lstring & outArgument2,
                                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_option_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_binding_5F_option_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_binding_5F_option_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_binding_5F_option_5F_list_ (GGS_bindingOptionList & outArgument0,
                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingComparison' non terminal
//--- 'parse' label
 /*  public: virtual void nt_booleanMultipleBindingComparison_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_booleanMultipleBindingComparison_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingComparison_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingExpression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_booleanMultipleBindingExpression_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_booleanMultipleBindingExpression_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingExpression_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingOperand' non terminal
//--- 'parse' label
 /*  public: virtual void nt_booleanMultipleBindingOperand_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_booleanMultipleBindingOperand_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingOperand_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingTerm' non terminal
//--- 'parse' label
 /*  public: virtual void nt_booleanMultipleBindingTerm_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_booleanMultipleBindingTerm_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingTerm_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                       Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'class_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_class_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                 Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'computed_view_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_computed_5F_view_5F_instruction_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_computed_5F_view_5F_instruction_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_computed_5F_view_5F_instruction_ (GGS_stringset & ioArgument0,
                                                            GGS_astComputedViewInstruction & outArgument1,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'controller_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_controller_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_controller_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_controller_5F_declaration_ (const GGS_lstring inArgument0,
                                                      const GGS_lstring inArgument1,
                                                      GGS__5B_arrayControllerBindingAST_5D_ & ioArgument2,
                                                      GGS_astDeclarationStruct & ioArgument3,
                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'document_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_document_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_document_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_document_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'entity_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_entity_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_entity_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_entity_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_enum_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_enum_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_function_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_enum_5F_function_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_enum_5F_function_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_function_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'explicit_value' non terminal
//--- 'parse' label
 /*  public: virtual void nt_explicit_5F_value_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_explicit_5F_value_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_explicit_5F_value_ (GGS_abstractDefaultValue & outArgument0,
                                              Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_delegate' non terminal
//--- 'parse' label
 /*  public: virtual void nt_extern_5F_swift_5F_delegate_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_extern_5F_swift_5F_delegate_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_delegate_ (GGS__5B_lstring_5D_ & ioArgument0,
                                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_func' non terminal
//--- 'parse' label
 /*  public: virtual void nt_extern_5F_swift_5F_func_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_extern_5F_swift_5F_func_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_func_ (GGS_externSwiftFunctionList & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'graphviz_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_graphviz_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_graphviz_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_graphviz_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib' non terminal
//--- 'parse' label
 /*  public: virtual void nt_main_5F_xib_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_main_5F_xib_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_ (GGS__5B_mainXibDescriptor_5D_ & ioArgument0,
                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib_line' non terminal
//--- 'parse' label
 /*  public: virtual void nt_main_5F_xib_5F_line_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_main_5F_xib_5F_line_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_5F_line_ (GGS__5B_mainXibElement_5D_ & outArgument0,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'observable_property' non terminal
//--- 'parse' label
 /*  public: virtual void nt_observable_5F_property_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_observable_5F_property_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_observable_5F_property_ (GGS_observablePropertyAST & outArgument0,
                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding' non terminal
//--- 'parse' label
 /*  public: virtual void nt_outlet_5F_binding_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_outlet_5F_binding_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_ (GGS_tableValueBinding & outArgument0,
                                              GGS_runActionDescriptor & outArgument1,
                                              GGS_multipleBindingDescriptor & outArgument2,
                                              GGS_multipleBindingDescriptor & outArgument3,
                                              GGS_graphicController & outArgument4,
                                              GGS__5B_regularBinding_5D_ & outArgument5,
                                              Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding_specification' non terminal
//--- 'parse' label
 /*  public: virtual void nt_outlet_5F_binding_5F_specification_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_outlet_5F_binding_5F_specification_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_5F_specification_ (GGS__5B_outletClassBindingSpecification_5D_ & ioArgument0,
                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_class_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_outlet_5F_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_outlet_5F_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_class_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                           Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_outlet_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_outlet_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_declaration_ (GGS__5B_outletDeclarationAST_5D_ & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'preferences_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_preferences_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_preferences_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_preferences_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                       Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_stored_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_simple_5F_stored_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_simple_5F_stored_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_stored_5F_declaration_ (const GGS_lstring inArgument0,
                                                            GGS__5B_simpleStoredProperty_5D_ & ioArgument1,
                                                            GGS_stringset & ioArgument2,
                                                            GGS_astDeclarationStruct & ioArgument3,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'stack_view_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_stack_5F_view_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_stack_5F_view_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_stack_5F_view_5F_declaration_ (GGS__5B_astViewDeclaration_5D_ & ioArgument0,
                                                         Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
 /*  public: virtual void nt_start_5F_symbol_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GGS_astDeclarationStruct & ioArgument0,
                                            GGS_location & outArgument1,
                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_astDeclarationStruct & ioArgument0,
                                                  GGS_location & outArgument1
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_astDeclarationStruct & ioArgument0,
                                                    GGS_location & outArgument1
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'toMany_relationship' non terminal
//--- 'parse' label
 /*  public: virtual void nt_toMany_5F_relationship_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_toMany_5F_relationship_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toMany_5F_relationship_ (const GGS_lstring inArgument0,
                                                   GGS_stringset & ioArgument1,
                                                   GGS_astDeclarationStruct & ioArgument2,
                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'toOne_relationship' non terminal
//--- 'parse' label
 /*  public: virtual void nt_toOne_5F_relationship_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_toOne_5F_relationship_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toOne_5F_relationship_ (const GGS_lstring inArgument0,
                                                  GGS_astDeclarationStruct & ioArgument1,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'transient_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_transient_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_transient_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_transient_5F_declaration_ (const GGS_lstring inArgument0,
                                                     const GGS_lstring inArgument1,
                                                     GGS_astDeclarationStruct & ioArgument2,
                                                     Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_actual_parameter_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (GGS_stringset & ioArgument0,
                                                                GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_view_5F_instruction_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_view_5F_instruction_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_ (GGS_stringset & ioArgument0,
                                                GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_view_5F_instruction_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_view_5F_instruction_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_5F_list_ (const GGS_bool inArgument0,
                                                        GGS_stringset & ioArgument1,
                                                        GGS_astNewStackViewDeclarationList & ioArgument2,
                                                        GGS_astViewInstructionList & ioArgument3,
                                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'xcode_project' non terminal
//--- 'parse' label
 /*  public: virtual void nt_xcode_5F_project_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_xcode_5F_project_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_xcode_5F_project_ (GGS_lstring & ioArgument0,
                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

  public: virtual int32_t select_easyBindings_5F_syntax_0 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_1 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_2 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_3 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_4 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_5 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_6 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_7 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_8 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_9 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_10 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_11 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_12 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_13 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_14 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_15 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_16 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_17 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_18 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_19 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_20 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_21 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_22 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_23 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_24 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_25 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_26 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_27 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_28 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_29 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_30 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_31 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_32 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_33 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_34 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_35 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_36 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_37 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_38 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_39 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_40 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_41 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_42 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_43 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_44 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_45 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_46 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_47 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_48 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_49 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_50 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_51 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_52 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_53 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_54 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_55 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_56 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_57 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_58 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_59 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_60 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_61 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_62 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_63 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_64 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_65 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_66 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_67 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_68 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_69 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_70 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_71 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_72 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_73 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_74 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_75 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_76 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_77 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_78 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_79 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_80 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_81 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_82 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_83 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_84 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_85 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_86 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_87 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_88 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_89 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_90 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_91 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_92 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_93 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_94 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_95 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_96 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_97 (Lexique_easyBindings_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// Phase 1: @_32_lstring struct
//--------------------------------------------------------------------------------------------------

class GGS__32_lstring : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mValue_30_ ;
  public: inline GGS_lstring readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GGS_lstring mProperty_mValue_31_ ;
  public: inline GGS_lstring readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS__32_lstring (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS__32_lstring (const GGS_lstring & in_mValue_30_,
                           const GGS_lstring & in_mValue_31_) ;

//--------------------------------- Copy constructor
  public: GGS__32_lstring (const GGS__32_lstring & inSource) ;

//--------------------------------- Assignment operator
  public: GGS__32_lstring & operator = (const GGS__32_lstring & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstring init_21__21_ (const class GGS_lstring & inOperand0,
                                               const class GGS_lstring & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstring ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astDeclarationStruct struct
//--------------------------------------------------------------------------------------------------

class GGS_astDeclarationStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_abstractDeclarationAST_5D_ mProperty_mUnifiedDeclarationList ;
  public: inline GGS__5B_abstractDeclarationAST_5D_ readProperty_mUnifiedDeclarationList (void) const {
    return mProperty_mUnifiedDeclarationList ;
  }

  public: GGS__5B_outletClassBindingSpecification_5D_ mProperty_mBindingSpecificationListMap ;
  public: inline GGS__5B_outletClassBindingSpecification_5D_ readProperty_mBindingSpecificationListMap (void) const {
    return mProperty_mBindingSpecificationListMap ;
  }

  public: GGS__5B_autoLayoutViewClassBindingSpecification_5D_ mProperty_mAutoLayoutBindingSpecificationList ;
  public: inline GGS__5B_autoLayoutViewClassBindingSpecification_5D_ readProperty_mAutoLayoutBindingSpecificationList (void) const {
    return mProperty_mAutoLayoutBindingSpecificationList ;
  }

  public: GGS_prefDeclaration mProperty_mPreferences ;
  public: inline GGS_prefDeclaration readProperty_mPreferences (void) const {
    return mProperty_mPreferences ;
  }

  public: GGS_lstring mProperty_mXcodeProject ;
  public: inline GGS_lstring readProperty_mXcodeProject (void) const {
    return mProperty_mXcodeProject ;
  }

  public: GGS__5B_lstring_5D_ mProperty_mGraphvizList ;
  public: inline GGS__5B_lstring_5D_ readProperty_mGraphvizList (void) const {
    return mProperty_mGraphvizList ;
  }

  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutVStackFunctionMap ;
  public: inline GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutVStackFunctionMap (void) const {
    return mProperty_mAutoLayoutVStackFunctionMap ;
  }

  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutHStackFunctionMap ;
  public: inline GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutHStackFunctionMap (void) const {
    return mProperty_mAutoLayoutHStackFunctionMap ;
  }

  public: GGS_enumerationFunctionListAST mProperty_mEnumerationFunctionListAST ;
  public: inline GGS_enumerationFunctionListAST readProperty_mEnumerationFunctionListAST (void) const {
    return mProperty_mEnumerationFunctionListAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astDeclarationStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMUnifiedDeclarationList (const GGS__5B_abstractDeclarationAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnifiedDeclarationList = inValue ;
  }

  public: inline void setter_setMBindingSpecificationListMap (const GGS__5B_outletClassBindingSpecification_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingSpecificationListMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutBindingSpecificationList (const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutBindingSpecificationList = inValue ;
  }

  public: inline void setter_setMPreferences (const GGS_prefDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreferences = inValue ;
  }

  public: inline void setter_setMXcodeProject (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mXcodeProject = inValue ;
  }

  public: inline void setter_setMGraphvizList (const GGS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGraphvizList = inValue ;
  }

  public: inline void setter_setMAutoLayoutVStackFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutVStackFunctionMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutHStackFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutHStackFunctionMap = inValue ;
  }

  public: inline void setter_setMEnumerationFunctionListAST (const GGS_enumerationFunctionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationFunctionListAST = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astDeclarationStruct (const GGS__5B_abstractDeclarationAST_5D_ & in_mUnifiedDeclarationList,
                                    const GGS__5B_outletClassBindingSpecification_5D_ & in_mBindingSpecificationListMap,
                                    const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & in_mAutoLayoutBindingSpecificationList,
                                    const GGS_prefDeclaration & in_mPreferences,
                                    const GGS_lstring & in_mXcodeProject,
                                    const GGS__5B_lstring_5D_ & in_mGraphvizList,
                                    const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutVStackFunctionMap,
                                    const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutHStackFunctionMap,
                                    const GGS_enumerationFunctionListAST & in_mEnumerationFunctionListAST) ;

//--------------------------------- Copy constructor
  public: GGS_astDeclarationStruct (const GGS_astDeclarationStruct & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astDeclarationStruct & operator = (const GGS_astDeclarationStruct & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astDeclarationStruct init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDeclarationStruct ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewClassBindingSpecification struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewClassBindingSpecification : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOutletClassName ;
  public: inline GGS_lstring readProperty_mOutletClassName (void) const {
    return mProperty_mOutletClassName ;
  }

  public: GGS_lstring mProperty_mBindingName ;
  public: inline GGS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS__5B_outletClassBindingSpecificationModel_5D_ mProperty_mOutletClassBindingSpecificationModelList ;
  public: inline GGS__5B_outletClassBindingSpecificationModel_5D_ readProperty_mOutletClassBindingSpecificationModelList (void) const {
    return mProperty_mOutletClassBindingSpecificationModelList ;
  }

  public: GGS__5B_controllerBindingOption_5D_ mProperty_mBindingOptionList ;
  public: inline GGS__5B_controllerBindingOption_5D_ readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewClassBindingSpecification (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassName = inValue ;
  }

  public: inline void setter_setMBindingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMOutletClassBindingSpecificationModelList (const GGS__5B_outletClassBindingSpecificationModel_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GGS__5B_controllerBindingOption_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewClassBindingSpecification (const GGS_lstring & in_mOutletClassName,
                                                       const GGS_lstring & in_mBindingName,
                                                       const GGS__5B_outletClassBindingSpecificationModel_5D_ & in_mOutletClassBindingSpecificationModelList,
                                                       const GGS__5B_controllerBindingOption_5D_ & in_mBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewClassBindingSpecification (const GGS_autoLayoutViewClassBindingSpecification & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewClassBindingSpecification & operator = (const GGS_autoLayoutViewClassBindingSpecification & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewClassBindingSpecification init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS__5B_outletClassBindingSpecificationModel_5D_ & inOperand2,
                                                                                   const class GGS__5B_controllerBindingOption_5D_ & inOperand3,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecification ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controllerBindingOption struct
//--------------------------------------------------------------------------------------------------

class GGS_controllerBindingOption : public AC_GALGAS_root {
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
  public: GGS_controllerBindingOption (void) ;

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
  public: GGS_controllerBindingOption (const GGS_lstring & in_mOptionName,
                                       const GGS_lstring & in_mOptionTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_controllerBindingOption (const GGS_controllerBindingOption & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controllerBindingOption & operator = (const GGS_controllerBindingOption & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controllerBindingOption init_21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_lstring & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOption ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassBindingSpecification struct
//--------------------------------------------------------------------------------------------------

class GGS_outletClassBindingSpecification : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOutletClassName ;
  public: inline GGS_lstring readProperty_mOutletClassName (void) const {
    return mProperty_mOutletClassName ;
  }

  public: GGS_lstring mProperty_mBindingName ;
  public: inline GGS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS__5B_outletClassBindingSpecificationModel_5D_ mProperty_mOutletClassBindingSpecificationModelList ;
  public: inline GGS__5B_outletClassBindingSpecificationModel_5D_ readProperty_mOutletClassBindingSpecificationModelList (void) const {
    return mProperty_mOutletClassBindingSpecificationModelList ;
  }

  public: GGS__5B_controllerBindingOption_5D_ mProperty_mBindingOptionList ;
  public: inline GGS__5B_controllerBindingOption_5D_ readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_outletClassBindingSpecification (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassName = inValue ;
  }

  public: inline void setter_setMBindingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMOutletClassBindingSpecificationModelList (const GGS__5B_outletClassBindingSpecificationModel_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GGS__5B_controllerBindingOption_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletClassBindingSpecification (const GGS_lstring & in_mOutletClassName,
                                               const GGS_lstring & in_mBindingName,
                                               const GGS__5B_outletClassBindingSpecificationModel_5D_ & in_mOutletClassBindingSpecificationModelList,
                                               const GGS__5B_controllerBindingOption_5D_ & in_mBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_outletClassBindingSpecification (const GGS_outletClassBindingSpecification & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletClassBindingSpecification & operator = (const GGS_outletClassBindingSpecification & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassBindingSpecification init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS__5B_outletClassBindingSpecificationModel_5D_ & inOperand2,
                                                                           const class GGS__5B_controllerBindingOption_5D_ & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecification ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassBindingSpecificationModel struct
//--------------------------------------------------------------------------------------------------

class GGS_outletClassBindingSpecificationModel : public AC_GALGAS_root {
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
  public: GGS_outletClassBindingSpecificationModel (void) ;

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
  public: GGS_outletClassBindingSpecificationModel (const GGS_lstring & in_mModelTypeName,
                                                    const GGS_bool & in_mModelShouldBeWritableProperty) ;

//--------------------------------- Copy constructor
  public: GGS_outletClassBindingSpecificationModel (const GGS_outletClassBindingSpecificationModel & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletClassBindingSpecificationModel & operator = (const GGS_outletClassBindingSpecificationModel & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassBindingSpecificationModel init_21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_bool & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModel ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @regularBinding struct
//--------------------------------------------------------------------------------------------------

class GGS_regularBinding : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mBindingName ;
  public: inline GGS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS__5B_observablePropertyAST_5D_ mProperty_mObservablePropertyList ;
  public: inline GGS__5B_observablePropertyAST_5D_ readProperty_mObservablePropertyList (void) const {
    return mProperty_mObservablePropertyList ;
  }

  public: GGS_bindingOptionList mProperty_mBindingOptionList ;
  public: inline GGS_bindingOptionList readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_regularBinding (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBindingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMObservablePropertyList (const GGS__5B_observablePropertyAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservablePropertyList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GGS_bindingOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_regularBinding (const GGS_lstring & in_mBindingName,
                              const GGS__5B_observablePropertyAST_5D_ & in_mObservablePropertyList,
                              const GGS_bindingOptionList & in_mBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_regularBinding (const GGS_regularBinding & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_regularBinding & operator = (const GGS_regularBinding & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_regularBinding init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                      const class GGS__5B_observablePropertyAST_5D_ & inOperand1,
                                                      const class GGS_bindingOptionList & inOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBinding ;

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


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
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

class GGS_entityStrongReferenceGraph final : public AC_GALGAS_root {
//--- Private Data member
  private: class SharedGraph_entityStrongReferenceGraph * mSharedGraph ;

//--- Default constructor
  public: GGS_entityStrongReferenceGraph (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_entityStrongReferenceGraph (void) ;

//--- count
  public: uint32_t count (void) const ;

//--- isValid
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return mSharedGraph != nullptr ;
  }

//--- drop
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--- Handle copy
  public: GGS_entityStrongReferenceGraph (const GGS_entityStrongReferenceGraph & inSource) ;
  public: GGS_entityStrongReferenceGraph & operator = (const GGS_entityStrongReferenceGraph & inSource) ;

//--- Create a new list
  protected: void makeNewEmptyGraph (LOCATION_ARGS) ;

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNodeDefined (const GGS_string & inKey COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_string_5D_ getter_keyList (LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_lkeyList (LOCATION_ARGS) const ;

  public: class GGS_uint getter_undefinedNodeCount (LOCATION_ARGS) const ;

  public: class GGS__5B_string_5D_ getter_undefinedNodeKeyList (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Setters
  public: void setter_addEdge (const class GGS_lstring & inSourceNodeKey,
                               const class GGS_lstring & inTargetNodeKey
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeEdgesToNode (const GGS_string & inNodeName,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

  public: void setter_removeEdgesToDominators (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_entityStrongReferenceGraph & inOperand) const ;

//--- Description
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--- Internal methods for handling graph
  protected: void reversedGraphFromGraph (const GGS_entityStrongReferenceGraph & inGraph
                                          COMMA_LOCATION_ARGS) ;

  protected: void subGraph (GGS_entityStrongReferenceGraph & outResultingGraph,
                            const class GGS__5B_lstring_5D_ & inStartNodes,
                            const class GGS_stringset & inNodesToExclude,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;


  protected: GGS__5B_string_5D_ graph (void) const ;

  private: void insulateGraph (LOCATION_ARGS) ;

  protected: void internalAddNode (const GGS_lstring & inKey,
                                   const char * inErrorMessage,
                                   const GGS_string & inElement,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_noteNode (const GGS_lstring & inKey
                                COMMA_LOCATION_ARGS) ;

  public: GGS__5B_lstring_5D_ getter_undefinedNodeReferenceList (LOCATION_ARGS) const ;

  protected: void internalTopologicalSort (GGS__5B_string_5D_ & outSortedList,
                                           GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                           GGS__5B_string_5D_ & outUnsortedList,
                                           GGS__5B_lstring_5D_ & outUnsortedNodeKeyList,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  protected: void internalFindCircularities (GGS__5B_string_5D_ & outInfoList,
                                             GGS__5B_lstring_5D_ & outNodeKeyList
                                             COMMA_UNUSED_LOCATION_ARGS) const ;

  protected: void internalNodesWithNoPredecessor (GGS__5B_string_5D_ & outSortedList,
                                                  GGS__5B_lstring_5D_ & outSortedNodeKeyList
                                                  COMMA_LOCATION_ARGS) const ;

  protected: void internalNodesWithNoSuccessor (GGS__5B_string_5D_ & outSortedList,
                                                GGS__5B_lstring_5D_ & outSortedNodeKeyList
                                                COMMA_LOCATION_ARGS) const ;


  protected: void internalDepthFirstTopologicalSort (GGS__5B_string_5D_ & outSortedList,
                                                     GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                                     GGS__5B_string_5D_ & outUnsortedList,
                                                     GGS__5B_lstring_5D_ & outUnsortedNodeKeyList,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: GGS_string getter_graphviz (UNUSED_LOCATION_ARGS) const ;

  public: class GGS__32_stringlist getter_edges (UNUSED_LOCATION_ARGS) const ;

  friend class SharedGraph_entityStrongReferenceGraph ;


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityStrongReferenceGraph init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_addNode (class GGS_lstring inArgument0,
                               class GGS_string inArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_circularities (class GGS__5B_string_5D_ & outArgument0,
                                     class GGS__5B_lstring_5D_ & outArgument1
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_depthFirstTopologicalSort (class GGS__5B_string_5D_ & outArgument0,
                                                 class GGS__5B_lstring_5D_ & outArgument1,
                                                 class GGS__5B_string_5D_ & outArgument2,
                                                 class GGS__5B_lstring_5D_ & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoPredecessor (class GGS__5B_string_5D_ & outArgument0,
                                              class GGS__5B_lstring_5D_ & outArgument1
                                              COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoSuccessor (class GGS__5B_string_5D_ & outArgument0,
                                            class GGS__5B_lstring_5D_ & outArgument1
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_topologicalSort (class GGS__5B_string_5D_ & outArgument0,
                                       class GGS__5B_lstring_5D_ & outArgument1,
                                       class GGS__5B_string_5D_ & outArgument2,
                                       class GGS__5B_lstring_5D_ & outArgument3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS__5B_lstring_5D_ getter_accessibleNodesFrom (const class GGS__5B_lstring_5D_ & constinOperand0,
                                                                const class GGS_stringset & constinOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_string_5D_ getter_nodeList (LOCATION_ARGS) const ;

  public: class GGS_entityStrongReferenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: class GGS_entityStrongReferenceGraph getter_subgraphFromNodes (const class GGS__5B_lstring_5D_ & constinOperand0,
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
// Phase 1: [controllerBindingOptionDecorated] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_controllerBindingOptionDecorated_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_controllerBindingOptionDecorated_5D_ (const class GGS__5B_controllerBindingOptionDecorated_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_controllerBindingOptionDecorated_5D_ (const DownEnumerator__5B_controllerBindingOptionDecorated_5D_ &) = delete ;
  private: DownEnumerator__5B_controllerBindingOptionDecorated_5D_ & operator = (const DownEnumerator__5B_controllerBindingOptionDecorated_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_controllerBindingOptionDecorated current (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionDecorated current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_controllerBindingOptionDecorated> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_controllerBindingOptionDecorated_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_controllerBindingOptionDecorated_5D_ (const class GGS__5B_controllerBindingOptionDecorated_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_controllerBindingOptionDecorated_5D_ (const UpEnumerator__5B_controllerBindingOptionDecorated_5D_ &) = delete ;
  private: UpEnumerator__5B_controllerBindingOptionDecorated_5D_ & operator = (const UpEnumerator__5B_controllerBindingOptionDecorated_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_controllerBindingOptionDecorated current (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionDecorated current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_controllerBindingOptionDecorated> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_controllerBindingOptionDecorated_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_controllerBindingOptionDecorated> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_controllerBindingOptionDecorated_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_controllerBindingOptionDecorated_5D_ (const GGS__5B_controllerBindingOptionDecorated_5D_ & inSource) ;
  public: GGS__5B_controllerBindingOptionDecorated_5D_ & operator = (const GGS__5B_controllerBindingOptionDecorated_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_controllerBindingOptionDecorated_5D_ init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_controllerBindingOptionDecorated_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_controllerBindingOptionDecorated & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_controllerBindingOptionDecorated_5D_ add_operation (const GGS__5B_controllerBindingOptionDecorated_5D_ & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_controllerBindingOptionDecorated constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_controllerBindingOptionDecorated constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_controllerBindingOptionDecorated & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_controllerBindingOptionDecorated & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_controllerBindingOptionDecorated & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_controllerBindingOptionDecorated constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionDecorated getter_first (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionDecorated getter_last (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_controllerBindingOptionDecorated_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_controllerBindingOptionDecorated_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                             const class GGS_uint & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_controllerBindingOptionDecorated readSubscript__3F_ (const class GGS_uint & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_controllerBindingOptionDecorated_5D_ ;
  friend class DownEnumerator__5B_controllerBindingOptionDecorated_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_controllerBindingOptionDecorated_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [outletBindingSpecificationModel] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_outletBindingSpecificationModel_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_outletBindingSpecificationModel_5D_ (const class GGS__5B_outletBindingSpecificationModel_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_outletBindingSpecificationModel_5D_ (const DownEnumerator__5B_outletBindingSpecificationModel_5D_ &) = delete ;
  private: DownEnumerator__5B_outletBindingSpecificationModel_5D_ & operator = (const DownEnumerator__5B_outletBindingSpecificationModel_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_outletBindingSpecificationModel current (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationModel current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_outletBindingSpecificationModel> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_outletBindingSpecificationModel_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_outletBindingSpecificationModel_5D_ (const class GGS__5B_outletBindingSpecificationModel_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_outletBindingSpecificationModel_5D_ (const UpEnumerator__5B_outletBindingSpecificationModel_5D_ &) = delete ;
  private: UpEnumerator__5B_outletBindingSpecificationModel_5D_ & operator = (const UpEnumerator__5B_outletBindingSpecificationModel_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_outletBindingSpecificationModel current (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationModel current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_outletBindingSpecificationModel> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_outletBindingSpecificationModel_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_outletBindingSpecificationModel> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_outletBindingSpecificationModel_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_outletBindingSpecificationModel_5D_ (const GGS__5B_outletBindingSpecificationModel_5D_ & inSource) ;
  public: GGS__5B_outletBindingSpecificationModel_5D_ & operator = (const GGS__5B_outletBindingSpecificationModel_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_outletBindingSpecificationModel_5D_ init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_outletBindingSpecificationModel_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_outletBindingSpecificationModel & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_outletBindingSpecificationModel_5D_ add_operation (const GGS__5B_outletBindingSpecificationModel_5D_ & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_outletBindingSpecificationModel constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_outletBindingSpecificationModel constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_outletBindingSpecificationModel & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_outletBindingSpecificationModel & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_outletBindingSpecificationModel & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_outletBindingSpecificationModel constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationModel getter_first (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationModel getter_last (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_outletBindingSpecificationModel_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_outletBindingSpecificationModel_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                            const class GGS_uint & constinOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_outletBindingSpecificationModel readSubscript__3F_ (const class GGS_uint & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_outletBindingSpecificationModel_5D_ ;
  friend class DownEnumerator__5B_outletBindingSpecificationModel_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_outletBindingSpecificationModel_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewBindingSpecificationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewBindingSpecificationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_outletBindingSpecificationModel_5D_ mProperty_mOutletBindingSpecificationModelList ;
  public: inline GGS__5B_outletBindingSpecificationModel_5D_ readProperty_mOutletBindingSpecificationModelList (void) const {
    return mProperty_mOutletBindingSpecificationModelList ;
  }

  public: GGS__5B_controllerBindingOptionDecorated_5D_ mProperty_mControllerBindingOptionList ;
  public: inline GGS__5B_controllerBindingOptionDecorated_5D_ readProperty_mControllerBindingOptionList (void) const {
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

  public: inline void setter_setMOutletBindingSpecificationModelList (const GGS__5B_outletBindingSpecificationModel_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMControllerBindingOptionList (const GGS__5B_controllerBindingOptionDecorated_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControllerBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                                const GGS__5B_outletBindingSpecificationModel_5D_ & in_mOutletBindingSpecificationModelList,
                                                                const GGS__5B_controllerBindingOptionDecorated_5D_ & in_mControllerBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element & operator = (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewBindingSpecificationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                        const class GGS__5B_outletBindingSpecificationModel_5D_ & inOperand1,
                                                                                        const class GGS__5B_controllerBindingOptionDecorated_5D_ & inOperand2,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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
// Phase 1: @outletBindingSpecificationModel struct
//--------------------------------------------------------------------------------------------------

class GGS_outletBindingSpecificationModel : public AC_GALGAS_root {
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
  public: GGS_outletBindingSpecificationModel (void) ;

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
  public: GGS_outletBindingSpecificationModel (const GGS_typeKind & in_mModelType,
                                               const GGS_bool & in_mModelShouldBeWritableProperty) ;

//--------------------------------- Copy constructor
  public: GGS_outletBindingSpecificationModel (const GGS_outletBindingSpecificationModel & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletBindingSpecificationModel & operator = (const GGS_outletBindingSpecificationModel & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingSpecificationModel init_21__21_ (const class GGS_typeKind & inOperand0,
                                                                   const class GGS_bool & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModel ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controllerBindingOptionDecorated struct
//--------------------------------------------------------------------------------------------------

class GGS_controllerBindingOptionDecorated : public AC_GALGAS_root {
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
  public: GGS_controllerBindingOptionDecorated (void) ;

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
  public: GGS_controllerBindingOptionDecorated (const GGS_typeKind & in_mOptionType,
                                                const GGS_lstring & in_mOptionName) ;

//--------------------------------- Copy constructor
  public: GGS_controllerBindingOptionDecorated (const GGS_controllerBindingOptionDecorated & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controllerBindingOptionDecorated & operator = (const GGS_controllerBindingOptionDecorated & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controllerBindingOptionDecorated init_21__21_ (const class GGS_typeKind & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecorated ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingSpecificationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_outletBindingSpecificationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_outletBindingSpecificationModel_5D_ mProperty_mOutletBindingSpecificationModelList ;
  public: inline GGS__5B_outletBindingSpecificationModel_5D_ readProperty_mOutletBindingSpecificationModelList (void) const {
    return mProperty_mOutletBindingSpecificationModelList ;
  }

  public: GGS__5B_controllerBindingOptionDecorated_5D_ mProperty_mControllerBindingOptionList ;
  public: inline GGS__5B_controllerBindingOptionDecorated_5D_ readProperty_mControllerBindingOptionList (void) const {
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

  public: inline void setter_setMOutletBindingSpecificationModelList (const GGS__5B_outletBindingSpecificationModel_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMControllerBindingOptionList (const GGS__5B_controllerBindingOptionDecorated_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControllerBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletBindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                        const GGS__5B_outletBindingSpecificationModel_5D_ & in_mOutletBindingSpecificationModelList,
                                                        const GGS__5B_controllerBindingOptionDecorated_5D_ & in_mControllerBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_outletBindingSpecificationMap_2E_element (const GGS_outletBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletBindingSpecificationMap_2E_element & operator = (const GGS_outletBindingSpecificationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingSpecificationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS__5B_outletBindingSpecificationModel_5D_ & inOperand1,
                                                                                const class GGS__5B_controllerBindingOptionDecorated_5D_ & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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
//--------------------------------- Implementation of func 'description'
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

