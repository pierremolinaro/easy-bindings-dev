#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind isGraphic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isGraphic (const class GGS_typeKind & inObject,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKindList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_typeKindList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_typeKind mProperty_mType ;
  public: inline GGS_typeKind readProperty_mType (void) const {
    return mProperty_mType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKindList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GGS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKindList_2E_element (const GGS_typeKind & in_mType) ;

//--------------------------------- Copy constructor
  public: GGS_typeKindList_2E_element (const GGS_typeKindList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKindList_2E_element & operator = (const GGS_typeKindList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindList_2E_element init_21_ (const class GGS_typeKind & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindList_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKindList_2E_element class_func_new (const class GGS_typeKind & inOperand0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind typeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_typeName (const class GGS_propertyKind & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind swiftTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_swiftTypeName (const class GGS_propertyKind & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind swiftTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_swiftTypeName (const class GGS_typeKind & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind isTransient' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isTransient (const class GGS_propertyKind & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind isComparable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isComparable (const class GGS_propertyKind & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind isEntityType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isEntityType (const class GGS_propertyKind & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind isEnumType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isEnumType (const class GGS_propertyKind & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientClassDeclarationAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_transientClassDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_bool & inOperand1,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_bool mProperty_mIsClass ;


//--- Default constructor
  public: cPtr_transientClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_transientClassDeclarationAST (const GGS_lstring & in_mClassName,
                                             const GGS_bool & in_mIsClass,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientClassDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_transientClassDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_transientClassDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_transientClassDeclarationAST_2E_weak (const class GGS_transientClassDeclarationAST & inSource) ;

  public: GGS_transientClassDeclarationAST_2E_weak & operator = (const class GGS_transientClassDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_transientClassDeclarationAST_2E_weak init_nil (void) {
    GGS_transientClassDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_transientClassDeclarationAST bang_transientClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_transientClassDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_transientClassDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_transientClassDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientClassDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST modelStringFunctionArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_modelStringFunctionArgument (const class GGS_observablePropertyAST & inObject,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST location' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_location extensionGetter_location (const class GGS_observablePropertyAST & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@observablePropertyAST analyzeObservableProperty'
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
// Phase 1: @toOneOppositeRelationship_2E_oppositeIsToMany struct
//--------------------------------------------------------------------------------------------------

class GGS_toOneOppositeRelationship_2E_oppositeIsToMany : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_oppositeRelationshipName ;
  public: inline GGS_lstring readProperty_oppositeRelationshipName (void) const {
    return mProperty_oppositeRelationshipName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toOneOppositeRelationship_2E_oppositeIsToMany (void) ;

//--------------------------------- Property setters
  public: inline void setter_setOppositeRelationshipName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_oppositeRelationshipName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toOneOppositeRelationship_2E_oppositeIsToMany (const GGS_lstring & in_oppositeRelationshipName) ;

//--------------------------------- Copy constructor
  public: GGS_toOneOppositeRelationship_2E_oppositeIsToMany (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toOneOppositeRelationship_2E_oppositeIsToMany & operator = (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toOneOppositeRelationship_2E_oppositeIsToMany init_21_ (const class GGS_lstring & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toOneOppositeRelationship_2E_oppositeIsToMany extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toOneOppositeRelationship_2E_oppositeIsToMany class_func_new (const class GGS_lstring & inOperand0,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToMany ;

//--------------------------------------------------------------------------------------------------
// Phase 1: toOneOppositeRelationship.oppositeIsToMany? optional
//--------------------------------------------------------------------------------------------------

class GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_toOneOppositeRelationship_2E_oppositeIsToMany mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_toOneOppositeRelationship_2E_oppositeIsToMany unwrappedValue (void) const {
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
  public: static GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toOneOppositeRelationship_2E_oppositeIsToOne struct
//--------------------------------------------------------------------------------------------------

class GGS_toOneOppositeRelationship_2E_oppositeIsToOne : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_oppositeRelationshipName ;
  public: inline GGS_lstring readProperty_oppositeRelationshipName (void) const {
    return mProperty_oppositeRelationshipName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toOneOppositeRelationship_2E_oppositeIsToOne (void) ;

//--------------------------------- Property setters
  public: inline void setter_setOppositeRelationshipName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_oppositeRelationshipName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toOneOppositeRelationship_2E_oppositeIsToOne (const GGS_lstring & in_oppositeRelationshipName) ;

//--------------------------------- Copy constructor
  public: GGS_toOneOppositeRelationship_2E_oppositeIsToOne (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toOneOppositeRelationship_2E_oppositeIsToOne & operator = (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toOneOppositeRelationship_2E_oppositeIsToOne init_21_ (const class GGS_lstring & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toOneOppositeRelationship_2E_oppositeIsToOne extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toOneOppositeRelationship_2E_oppositeIsToOne class_func_new (const class GGS_lstring & inOperand0,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToOne ;

//--------------------------------------------------------------------------------------------------
// Phase 1: toOneOppositeRelationship.oppositeIsToOne? optional
//--------------------------------------------------------------------------------------------------

class GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_toOneOppositeRelationship_2E_oppositeIsToOne mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_toOneOppositeRelationship_2E_oppositeIsToOne unwrappedValue (void) const {
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
  public: static GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toOneRelationshipAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toOneRelationshipAST class_func_new (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS_lstring & inOperand2,
                                                                const class GGS_toOneOppositeRelationship & inOperand3,
                                                                const class GGS_bool & inOperand4,
                                                                const class GGS_bool & inOperand5,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneRelationshipAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toOneRelationshipAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_toOneRelationshipAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_toOneRelationshipAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_toOneRelationshipAST_2E_weak (const class GGS_toOneRelationshipAST & inSource) ;

  public: GGS_toOneRelationshipAST_2E_weak & operator = (const class GGS_toOneRelationshipAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_toOneRelationshipAST_2E_weak init_nil (void) {
    GGS_toOneRelationshipAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_toOneRelationshipAST bang_toOneRelationshipAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_toOneRelationshipAST unwrappedValue (void) const ;

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
  public: static GGS_toOneRelationshipAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toOneRelationshipAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneRelationshipAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneRelationshipAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toOnePropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_toOnePropertyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_toOnePropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_toOnePropertyGeneration (const class cPtr_toOnePropertyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mClassName (void) const ;

  public: class GGS_propertyKind readProperty_mRelationshipType (void) const ;

  public: class GGS_toOneOppositeRelationship readProperty_mOpposite (void) const ;

  public: class GGS_propertyMap readProperty_mDestinationEntityObservablePropertyMap (void) const ;

  public: class GGS_bool readProperty_mUsedForSignature (void) const ;

  public: class GGS_bool readProperty_mStrongRef (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toOnePropertyGeneration init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_propertyKind & inOperand2,
                                                                               const class GGS_toOneOppositeRelationship & inOperand3,
                                                                               const class GGS_propertyMap & inOperand4,
                                                                               const class GGS_bool & inOperand5,
                                                                               const class GGS_bool & inOperand6,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toOnePropertyGeneration extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toOnePropertyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   const class GGS_propertyKind & inOperand2,
                                                                   const class GGS_toOneOppositeRelationship & inOperand3,
                                                                   const class GGS_propertyMap & inOperand4,
                                                                   const class GGS_bool & inOperand5,
                                                                   const class GGS_bool & inOperand6,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOnePropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @toOnePropertyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_toOnePropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void toOnePropertyGeneration_init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_propertyKind & inOperand2,
                                                                         const class GGS_toOneOppositeRelationship & inOperand3,
                                                                         const class GGS_propertyMap & inOperand4,
                                                                         const class GGS_bool & inOperand5,
                                                                         const class GGS_bool & inOperand6,
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
  public: GGS_string mProperty_mClassName ;
  public: GGS_propertyKind mProperty_mRelationshipType ;
  public: GGS_toOneOppositeRelationship mProperty_mOpposite ;
  public: GGS_propertyMap mProperty_mDestinationEntityObservablePropertyMap ;
  public: GGS_bool mProperty_mUsedForSignature ;
  public: GGS_bool mProperty_mStrongRef ;


//--- Default constructor
  public: cPtr_toOnePropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_toOnePropertyGeneration (const GGS_string & in_mPropertyName,
                                        const GGS_string & in_mClassName,
                                        const GGS_propertyKind & in_mRelationshipType,
                                        const GGS_toOneOppositeRelationship & in_mOpposite,
                                        const GGS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                        const GGS_bool & in_mUsedForSignature,
                                        const GGS_bool & in_mStrongRef,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toOnePropertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_toOnePropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_toOnePropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_toOnePropertyGeneration_2E_weak (const class GGS_toOnePropertyGeneration & inSource) ;

  public: GGS_toOnePropertyGeneration_2E_weak & operator = (const class GGS_toOnePropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_toOnePropertyGeneration_2E_weak init_nil (void) {
    GGS_toOnePropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_toOnePropertyGeneration bang_toOnePropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_toOnePropertyGeneration unwrappedValue (void) const ;

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
  public: static GGS_toOnePropertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toOnePropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOnePropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toOnePropertyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_toOnePropertyGenerationList final {
  public: DownEnumerator_toOnePropertyGenerationList (const class GGS_toOnePropertyGenerationList & inList) ;

  public: ~ DownEnumerator_toOnePropertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_toOnePropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toOnePropertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_toOnePropertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_toOnePropertyGenerationList (const DownEnumerator_toOnePropertyGenerationList &) = delete ;
  private: DownEnumerator_toOnePropertyGenerationList & operator = (const DownEnumerator_toOnePropertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_toOnePropertyGenerationList final {
  public: UpEnumerator_toOnePropertyGenerationList (const class GGS_toOnePropertyGenerationList & inList)  ;

  public: ~ UpEnumerator_toOnePropertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_toOnePropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toOnePropertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_toOnePropertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_toOnePropertyGenerationList (const UpEnumerator_toOnePropertyGenerationList &) = delete ;
  private: UpEnumerator_toOnePropertyGenerationList & operator = (const UpEnumerator_toOnePropertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @toOnePropertyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_toOnePropertyGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_toOnePropertyGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_toOnePropertyGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_toOnePropertyGenerationList (void) = default ;

//--- Copy
  public: GGS_toOnePropertyGenerationList (const GGS_toOnePropertyGenerationList &) = default ;
  public: GGS_toOnePropertyGenerationList & operator = (const GGS_toOnePropertyGenerationList &) = default ;

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
  public : inline GenericArray <GGS_toOnePropertyGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_toOnePropertyGenerationList subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_toOnePropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_toOnePropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toOnePropertyGenerationList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toOnePropertyGenerationList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toOnePropertyGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_toOnePropertyGenerationList class_func_listWithValue (const class GGS_toOnePropertyGeneration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_toOnePropertyGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_toOnePropertyGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_toOnePropertyGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_toOnePropertyGenerationList add_operation (const GGS_toOnePropertyGenerationList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_toOnePropertyGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_toOnePropertyGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_toOnePropertyGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_toOnePropertyGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_toOnePropertyGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GGS_toOnePropertyGeneration constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_toOnePropertyGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_toOnePropertyGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toOnePropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toOnePropertyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toOnePropertyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toOnePropertyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_toOnePropertyGenerationList ;
  friend class DownEnumerator_toOnePropertyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toOnePropertyGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_toOnePropertyGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_toOnePropertyGeneration mProperty_mProperty ;
  public: inline GGS_toOnePropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toOnePropertyGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GGS_toOnePropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toOnePropertyGenerationList_2E_element (const GGS_toOnePropertyGeneration & in_mProperty) ;

//--------------------------------- Copy constructor
  public: GGS_toOnePropertyGenerationList_2E_element (const GGS_toOnePropertyGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toOnePropertyGenerationList_2E_element & operator = (const GGS_toOnePropertyGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toOnePropertyGenerationList_2E_element init_21_ (const class GGS_toOnePropertyGeneration & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toOnePropertyGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toOnePropertyGenerationList_2E_element class_func_new (const class GGS_toOnePropertyGeneration & inOperand0,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2E_element ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2E_weak ;

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
  public: GGS_astAutoLayoutViewFunctionCallList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFunctionName,
                                                 const class GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionCallList init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewFunctionCallList extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewFunctionCallList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutViewFunctionCallList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_astAutoLayoutViewFunctionCallList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_astAutoLayoutViewFunctionCallList add_operation (const GGS_astAutoLayoutViewFunctionCallList & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_astAutoLayoutViewInstructionParameterList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_astAutoLayoutViewInstructionParameterList constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListAtIndex (class GGS_astAutoLayoutViewInstructionParameterList constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterList getter_mParameterListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewFunctionCallList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewFunctionCallList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewFunctionCallList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astAutoLayoutViewFunctionCallList ;
  friend class DownEnumerator_astAutoLayoutViewFunctionCallList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewFunctionCallList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList_2E_element ;

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
  public: GGS_astViewInstructionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astViewInstructionList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astViewInstructionList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astViewInstructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_astViewInstructionList class_func_listWithValue (const class GGS_astAbstractViewInstructionDeclaration & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_astViewInstructionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_astAbstractViewInstructionDeclaration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_astViewInstructionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_astViewInstructionList add_operation (const GGS_astViewInstructionList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_astAbstractViewInstructionDeclaration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_astAbstractViewInstructionDeclaration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_astAbstractViewInstructionDeclaration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAbstractViewInstructionDeclaration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astViewInstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astViewInstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astViewInstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astViewInstructionList ;
  friend class DownEnumerator_astViewInstructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewInstructionList ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAbstractViewInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astAbstractViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astAbstractViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astAbstractViewInstructionDeclaration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astAbstractViewInstructionDeclaration_init (Compiler * inCompiler) ;


//--- Extension method generateViewCode
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

//--------------------------------- GALGAS class functions
  public: static class GGS_astViewInstructionList_2E_element class_func_new (const class GGS_astAbstractViewInstructionDeclaration & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewInstructionList_2E_element ;

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
  public: GGS_astNewStackViewDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInstanciedStackViewName,
                                                 const class GGS_lstring & in_mTypeStackViewName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astNewStackViewDeclarationList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astNewStackViewDeclarationList extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astNewStackViewDeclarationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_astNewStackViewDeclarationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_astNewStackViewDeclarationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_astNewStackViewDeclarationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_astNewStackViewDeclarationList add_operation (const GGS_astNewStackViewDeclarationList & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstanciedStackViewNameAtIndex (class GGS_lstring constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeStackViewNameAtIndex (class GGS_lstring constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mInstanciedStackViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mTypeStackViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astNewStackViewDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astNewStackViewDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astNewStackViewDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astNewStackViewDeclarationList ;
  friend class DownEnumerator_astNewStackViewDeclarationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_astNewStackViewDeclarationList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedHorizontalViewDeclaration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astComputedHorizontalViewDeclaration class_func_new (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                                const class GGS_astViewInstructionList & inOperand1,
                                                                                const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedHorizontalViewDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;

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


//--- Extension method checkView
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedVerticalViewDeclaration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astComputedVerticalViewDeclaration class_func_new (const class GGS_bool & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                              const class GGS_astViewInstructionList & inOperand3,
                                                                              const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedVerticalViewDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method checkView
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astSeparatorInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astSeparatorInstructionDeclaration class_func_new (const class GGS_bool & inOperand0,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astSeparatorInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method generateViewCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astSeparatorInstructionDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astSeparatorInstructionDeclaration_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astSeparatorInstructionDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astSeparatorInstructionDeclaration_2E_weak (const class GGS_astSeparatorInstructionDeclaration & inSource) ;

  public: GGS_astSeparatorInstructionDeclaration_2E_weak & operator = (const class GGS_astSeparatorInstructionDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astSeparatorInstructionDeclaration_2E_weak init_nil (void) {
    GGS_astSeparatorInstructionDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astSeparatorInstructionDeclaration bang_astSeparatorInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astSeparatorInstructionDeclaration unwrappedValue (void) const ;

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
  public: static GGS_astSeparatorInstructionDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astSeparatorInstructionDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astSeparatorInstructionDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astGutterInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astGutterInstructionDeclaration class_func_new (const class GGS_bool & inOperand0,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astGutterInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method generateViewCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astGutterInstructionDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astGutterInstructionDeclaration_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astGutterInstructionDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astGutterInstructionDeclaration_2E_weak (const class GGS_astGutterInstructionDeclaration & inSource) ;

  public: GGS_astGutterInstructionDeclaration_2E_weak & operator = (const class GGS_astGutterInstructionDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astGutterInstructionDeclaration_2E_weak init_nil (void) {
    GGS_astGutterInstructionDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astGutterInstructionDeclaration bang_astGutterInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astGutterInstructionDeclaration unwrappedValue (void) const ;

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
  public: static GGS_astGutterInstructionDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astGutterInstructionDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astGutterInstructionDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astGutterInstructionDeclaration_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astDividerInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astDividerInstructionDeclaration class_func_new (const class GGS_bool & inOperand0,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astDividerInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method generateViewCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astDividerInstructionDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astDividerInstructionDeclaration_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astDividerInstructionDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astDividerInstructionDeclaration_2E_weak (const class GGS_astDividerInstructionDeclaration & inSource) ;

  public: GGS_astDividerInstructionDeclaration_2E_weak & operator = (const class GGS_astDividerInstructionDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astDividerInstructionDeclaration_2E_weak init_nil (void) {
    GGS_astDividerInstructionDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astDividerInstructionDeclaration bang_astDividerInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astDividerInstructionDeclaration unwrappedValue (void) const ;

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
  public: static GGS_astDividerInstructionDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astDividerInstructionDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astDividerInstructionDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalHiddenBinding extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionalHiddenBinding class_func_binding (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_optionalHiddenBinding class_func_noBinding (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractBinding (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_optionalHiddenBinding_2E_binding_3F_ getter_getBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoBinding (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionalHiddenBinding_2E_binding struct
//--------------------------------------------------------------------------------------------------

class GGS_optionalHiddenBinding_2E_binding : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_hidden ;
  public: inline GGS_abstractBooleanMultipleBindingExpressionAST readProperty_hidden (void) const {
    return mProperty_hidden ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_optionalHiddenBinding_2E_binding (void) ;

//--------------------------------- Property setters
  public: inline void setter_setHidden (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_hidden = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_optionalHiddenBinding_2E_binding (const GGS_abstractBooleanMultipleBindingExpressionAST & in_hidden) ;

//--------------------------------- Copy constructor
  public: GGS_optionalHiddenBinding_2E_binding (const GGS_optionalHiddenBinding_2E_binding & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_optionalHiddenBinding_2E_binding & operator = (const GGS_optionalHiddenBinding_2E_binding & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionalHiddenBinding_2E_binding init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalHiddenBinding_2E_binding extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionalHiddenBinding_2E_binding class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding ;

//--------------------------------------------------------------------------------------------------
// Phase 1: optionalHiddenBinding.binding? optional
//--------------------------------------------------------------------------------------------------

class GGS_optionalHiddenBinding_2E_binding_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_optionalHiddenBinding_2E_binding mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_optionalHiddenBinding_2E_binding_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_optionalHiddenBinding_2E_binding_3F_ (const GGS_optionalHiddenBinding_2E_binding & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_optionalHiddenBinding_2E_binding_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_optionalHiddenBinding_2E_binding unwrappedValue (void) const {
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
  public: static GGS_optionalHiddenBinding_2E_binding_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding_3F_ ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astHStackViewInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astHStackViewInstructionDeclaration class_func_new (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                               const class GGS_astViewInstructionList & inOperand1,
                                                                               const class GGS_optionalHiddenBinding & inOperand2,
                                                                               const class GGS_astNewStackViewDeclarationList & inOperand3,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astHStackViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;

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


//--- Extension method generateViewCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astHStackViewInstructionDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astHStackViewInstructionDeclaration_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astHStackViewInstructionDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astHStackViewInstructionDeclaration_2E_weak (const class GGS_astHStackViewInstructionDeclaration & inSource) ;

  public: GGS_astHStackViewInstructionDeclaration_2E_weak & operator = (const class GGS_astHStackViewInstructionDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astHStackViewInstructionDeclaration_2E_weak init_nil (void) {
    GGS_astHStackViewInstructionDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astHStackViewInstructionDeclaration bang_astHStackViewInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astHStackViewInstructionDeclaration unwrappedValue (void) const ;

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
  public: static GGS_astHStackViewInstructionDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astHStackViewInstructionDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astHStackViewInstructionDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astVStackViewInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astVStackViewInstructionDeclaration class_func_new (const class GGS_bool & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                               const class GGS_astViewInstructionList & inOperand3,
                                                                               const class GGS_optionalHiddenBinding & inOperand4,
                                                                               const class GGS_astNewStackViewDeclarationList & inOperand5,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astVStackViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method generateViewCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astVStackViewInstructionDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astVStackViewInstructionDeclaration_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astVStackViewInstructionDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astVStackViewInstructionDeclaration_2E_weak (const class GGS_astVStackViewInstructionDeclaration & inSource) ;

  public: GGS_astVStackViewInstructionDeclaration_2E_weak & operator = (const class GGS_astVStackViewInstructionDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astVStackViewInstructionDeclaration_2E_weak init_nil (void) {
    GGS_astVStackViewInstructionDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astVStackViewInstructionDeclaration bang_astVStackViewInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astVStackViewInstructionDeclaration unwrappedValue (void) const ;

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
  public: static GGS_astVStackViewInstructionDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astVStackViewInstructionDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astVStackViewInstructionDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astSpaceViewInstruction extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astSpaceViewInstruction class_func_new (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astSpaceViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method generateViewCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astSpaceViewInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astSpaceViewInstruction_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astSpaceViewInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astSpaceViewInstruction_2E_weak (const class GGS_astSpaceViewInstruction & inSource) ;

  public: GGS_astSpaceViewInstruction_2E_weak & operator = (const class GGS_astSpaceViewInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astSpaceViewInstruction_2E_weak init_nil (void) {
    GGS_astSpaceViewInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astSpaceViewInstruction bang_astSpaceViewInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astSpaceViewInstruction unwrappedValue (void) const ;

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
  public: static GGS_astSpaceViewInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astSpaceViewInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astSpaceViewInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astLocalViewInstruction extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astLocalViewInstruction class_func_new (const class GGS_lstring & inOperand0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astLocalViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method generateViewCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astLocalViewInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astLocalViewInstruction_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astLocalViewInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astLocalViewInstruction_2E_weak (const class GGS_astLocalViewInstruction & inSource) ;

  public: GGS_astLocalViewInstruction_2E_weak & operator = (const class GGS_astLocalViewInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astLocalViewInstruction_2E_weak init_nil (void) {
    GGS_astLocalViewInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astLocalViewInstruction bang_astLocalViewInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astLocalViewInstruction unwrappedValue (void) const ;

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
  public: static GGS_astLocalViewInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astLocalViewInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astLocalViewInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astLocalViewInstruction_2E_weak ;

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

  public: class GGS_regularBindingList readProperty_mRegularBindingList (void) const ;

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
                                                                                                      const class GGS_regularBindingList & inOperand8,
                                                                                                      const class GGS_lstring & inOperand9,
                                                                                                      const class GGS_lstring & inOperand10,
                                                                                                      const class GGS_bool & inOperand11,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedViewInstruction extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astComputedViewInstruction class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                      const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                      const class GGS_tableValueBinding & inOperand3,
                                                                      const class GGS_runActionDescriptor & inOperand4,
                                                                      const class GGS_multipleBindingDescriptor & inOperand5,
                                                                      const class GGS_multipleBindingDescriptor & inOperand6,
                                                                      const class GGS_graphicController & inOperand7,
                                                                      const class GGS_regularBindingList & inOperand8,
                                                                      const class GGS_lstring & inOperand9,
                                                                      const class GGS_lstring & inOperand10,
                                                                      const class GGS_bool & inOperand11,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                                                const class GGS_regularBindingList & inOperand8,
                                                                                                const class GGS_lstring & inOperand9,
                                                                                                const class GGS_lstring & inOperand10,
                                                                                                const class GGS_bool & inOperand11,
                                                                                                Compiler * inCompiler) ;


//--- Extension method generateViewCode
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
  public: GGS_regularBindingList mProperty_mRegularBindingList ;
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
                                           const GGS_regularBindingList & in_mRegularBindingList,
                                           const GGS_lstring & in_mConfiguratorName,
                                           const GGS_lstring & in_mOutletName,
                                           const GGS_bool & in_mOutletIsArray,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astComputedViewInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astComputedViewInstruction_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astComputedViewInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astComputedViewInstruction_2E_weak (const class GGS_astComputedViewInstruction & inSource) ;

  public: GGS_astComputedViewInstruction_2E_weak & operator = (const class GGS_astComputedViewInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astComputedViewInstruction_2E_weak init_nil (void) {
    GGS_astComputedViewInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astComputedViewInstruction bang_astComputedViewInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astComputedViewInstruction unwrappedValue (void) const ;

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
  public: static GGS_astComputedViewInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astComputedViewInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedViewInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedViewInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterValue_2E_entity struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_entity : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_entityName ;
  public: inline GGS_lstring readProperty_entityName (void) const {
    return mProperty_entityName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (void) ;

//--------------------------------- Property setters
  public: inline void setter_setEntityName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_entityName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (const GGS_lstring & in_entityName) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity & operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_entity init_21_ (const class GGS_lstring & inOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_entity extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterValue_2E_entity class_func_new (const class GGS_lstring & inOperand0,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_entity ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewInstructionParameterValue.entity? optional
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue_2E_entity unwrappedValue (void) const {
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
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterValue_2E_enumFunc struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_enumTypeName ;
  public: inline GGS_lstring readProperty_enumTypeName (void) const {
    return mProperty_enumTypeName ;
  }

  public: GGS_lstring mProperty_enumFuncName ;
  public: inline GGS_lstring readProperty_enumFuncName (void) const {
    return mProperty_enumFuncName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (void) ;

//--------------------------------- Property setters
  public: inline void setter_setEnumTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enumTypeName = inValue ;
  }

  public: inline void setter_setEnumFuncName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enumFuncName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (const GGS_lstring & in_enumTypeName,
                                                                      const GGS_lstring & in_enumFuncName) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc & operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc class_func_new (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewInstructionParameterValue.enumFunc? optional
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc unwrappedValue (void) const {
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
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterValue_2E_menuItem struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_title ;
  public: inline GGS_string readProperty_title (void) const {
    return mProperty_title ;
  }

  public: GGS_runActionDescriptor mProperty_run ;
  public: inline GGS_runActionDescriptor readProperty_run (void) const {
    return mProperty_run ;
  }

  public: GGS_multipleBindingDescriptor mProperty_enabled ;
  public: inline GGS_multipleBindingDescriptor readProperty_enabled (void) const {
    return mProperty_enabled ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTitle (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_title = inValue ;
  }

  public: inline void setter_setRun (const GGS_runActionDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_run = inValue ;
  }

  public: inline void setter_setEnabled (const GGS_multipleBindingDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enabled = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (const GGS_string & in_title,
                                                                      const GGS_runActionDescriptor & in_run,
                                                                      const GGS_multipleBindingDescriptor & in_enabled) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                              const class GGS_runActionDescriptor & inOperand1,
                                                                                              const class GGS_multipleBindingDescriptor & inOperand2,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem class_func_new (const class GGS_string & inOperand0,
                                                                                                  const class GGS_runActionDescriptor & inOperand1,
                                                                                                  const class GGS_multipleBindingDescriptor & inOperand2,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewInstructionParameterValue.menuItem? optional
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem unwrappedValue (void) const {
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
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterValue_2E_string struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_string : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_value ;
  public: inline GGS_string readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_string (void) ;

//--------------------------------- Property setters
  public: inline void setter_setValue (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_string (const GGS_string & in_value) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_string (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_string & operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_string init_21_ (const class GGS_string & inOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_string extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterValue_2E_string class_func_new (const class GGS_string & inOperand0,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewInstructionParameterValue.string? optional
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewInstructionParameterValue_2E_string mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue_2E_string unwrappedValue (void) const {
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
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterValue_2E_viewFunc struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_astAbstractViewInstructionDeclaration mProperty_instruction ;
  public: inline GGS_astAbstractViewInstructionDeclaration readProperty_instruction (void) const {
    return mProperty_instruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (void) ;

//--------------------------------- Property setters
  public: inline void setter_setInstruction (const GGS_astAbstractViewInstructionDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (const GGS_astAbstractViewInstructionDeclaration & in_instruction) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc init_21_ (const class GGS_astAbstractViewInstructionDeclaration & inOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc class_func_new (const class GGS_astAbstractViewInstructionDeclaration & inOperand0,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewInstructionParameterValue.viewFunc? optional
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc unwrappedValue (void) const {
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
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewDeclarationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewDeclarationMap final {

  public: DownEnumerator_autoLayoutViewDeclarationMap (const class GGS_autoLayoutViewDeclarationMap & inMap) ;

  public: ~ DownEnumerator_autoLayoutViewDeclarationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewDeclarationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutViewDeclarationMap (const DownEnumerator_autoLayoutViewDeclarationMap &) = delete ;
  private: DownEnumerator_autoLayoutViewDeclarationMap & operator = (const DownEnumerator_autoLayoutViewDeclarationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewDeclarationMap final {
  public: UpEnumerator_autoLayoutViewDeclarationMap (const class GGS_autoLayoutViewDeclarationMap & inMap)  ;

  public: ~ UpEnumerator_autoLayoutViewDeclarationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewDeclarationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutViewDeclarationMap (const UpEnumerator_autoLayoutViewDeclarationMap &) = delete ;
  private: UpEnumerator_autoLayoutViewDeclarationMap & operator = (const UpEnumerator_autoLayoutViewDeclarationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewDeclarationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewDeclarationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autoLayoutViewDeclarationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autoLayoutViewDeclarationMap (void) ;

//--- Handle copy
  public: GGS_autoLayoutViewDeclarationMap (const GGS_autoLayoutViewDeclarationMap & inSource) ;
  public: GGS_autoLayoutViewDeclarationMap & operator = (const GGS_autoLayoutViewDeclarationMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_autoLayoutViewDeclarationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewDeclarationMap init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewDeclarationMap extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewDeclarationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutViewDeclarationMap class_func_mapWithMapToOverride (const class GGS_autoLayoutViewDeclarationMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewDeclarationMap getter_overriddenMap (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewDeclarationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutViewDeclarationMap ;
  friend class DownEnumerator_autoLayoutViewDeclarationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewDeclarationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewDeclarationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewDeclarationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewDeclarationMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewDeclarationMap_2E_element (const GGS_autoLayoutViewDeclarationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewDeclarationMap_2E_element & operator = (const GGS_autoLayoutViewDeclarationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewDeclarationMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewDeclarationMap_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewDeclarationMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutViewDeclarationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewDeclarationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutViewDeclarationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewDeclarationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutViewDeclarationMap_2E_element_3F_ (const GGS_autoLayoutViewDeclarationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutViewDeclarationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutViewDeclarationMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_autoLayoutViewDeclarationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewDeclaration checkView'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkView (class cPtr_astAbstractViewDeclaration * inObject,
                                    const class GGS_string constin_inViewName,
                                    const class GGS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                    const class GGS_bool constin_inPreferences,
                                    const class GGS_propertyMap constin_inRootObservablePropertyMap,
                                    const class GGS_propertyMap constin_inPreferencesPropertyMap,
                                    const class GGS_semanticContext constin_inSemanticContext,
                                    const class GGS_propertyMap constin_inObservablePropertyMap,
                                    const class GGS_actionMap constin_inActionMap,
                                    const class GGS_string constin_inReceiverSwiftTypeName,
                                    const class GGS_classMap constin_inClassMap,
                                    class GGS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                    class GGS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                    class GGS_autoLayoutOutletMap & io_ioOutletMap,
                                    class GGS_abstractViewGeneration & out_outGeneration,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@astAutoLayoutViewFunctionCallList checkViewFunctionCallList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkViewFunctionCallList (const class GGS_astAutoLayoutViewFunctionCallList inObject,
                                                const class GGS_astAutoLayoutViewFunctionMap constin_inFunctionMap,
                                                const class GGS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                                const class GGS_bool constin_inPreferences,
                                                const class GGS_actionMap constin_inPreferencesActionMap,
                                                const class GGS_propertyMap constin_inRootObservablePropertyMap,
                                                const class GGS_propertyMap constin_inPreferencesPropertyMap,
                                                const class GGS_semanticContext constin_inSemanticContext,
                                                const class GGS_propertyMap constin_inObservablePropertyMap,
                                                const class GGS_actionMap constin_inActionMap,
                                                const class GGS_string constin_inReceiverSwiftTypeName,
                                                const class GGS_classMap constin_inClassMap,
                                                class GGS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                                class GGS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                                class GGS_autoLayoutOutletMap & io_ioOutletMap,
                                                class GGS_autoLayoutViewInstructionGenerationFuncCallList & out_outFuncCallList,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumFunAssociationSortedList sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumFunAssociationSortedList final {
//--- Constructor
  public: DownEnumerator_enumFunAssociationSortedList (const class GGS_enumFunAssociationSortedList & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_string current_mAssociatedString (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_enumFunAssociationSortedList_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_enumFunAssociationSortedList_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_enumFunAssociationSortedList (const DownEnumerator_enumFunAssociationSortedList &) = delete ;
  private: DownEnumerator_enumFunAssociationSortedList & operator = (const DownEnumerator_enumFunAssociationSortedList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumFunAssociationSortedList final {
//--- Constructor
  public: UpEnumerator_enumFunAssociationSortedList (const class GGS_enumFunAssociationSortedList & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_string current_mAssociatedString (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_enumFunAssociationSortedList_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_enumFunAssociationSortedList_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_enumFunAssociationSortedList (const UpEnumerator_enumFunAssociationSortedList &) = delete ;
  private: UpEnumerator_enumFunAssociationSortedList & operator = (const UpEnumerator_enumFunAssociationSortedList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumFunAssociationSortedList sorted list
//--------------------------------------------------------------------------------------------------

class GGS_enumFunAssociationSortedList final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_enumFunAssociationSortedList_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_enumFunAssociationSortedList (void) ;

//--- Destructor
  public: virtual ~ GGS_enumFunAssociationSortedList (void) = default ;

//--- Handle copy
  public: GGS_enumFunAssociationSortedList (const GGS_enumFunAssociationSortedList &) = default ;
  public: GGS_enumFunAssociationSortedList & operator = (const GGS_enumFunAssociationSortedList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mSharedArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline int32_t count (void) const { return mSharedArray.count () ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_enumFunAssociationSortedList_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumFunAssociationSortedList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumFunAssociationSortedList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumFunAssociationSortedList class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GGS_enumFunAssociationSortedList class_func_sortedListWithValue (const class GGS_uint & inOperand0,
                                                                                        const class GGS_string & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_enumFunAssociationSortedList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_uint & inOperand0,
                                                    const class GGS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_enumFunAssociationSortedList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumFunAssociationSortedList & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_uint inArgument0,
                                               class GGS_string inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_uint & outArgument0,
                                                    class GGS_string & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_uint & outArgument0,
                                                    class GGS_string & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_uint & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_uint & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_enumFunAssociationSortedList ;
  friend class DownEnumerator_enumFunAssociationSortedList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList ;

//--------------------------------------------------------------------------------------------------
//   enum autolayoutEnabledBindingForGeneration
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutEnabledBindingForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_autolayoutEnabledBindingForGeneration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_enabled
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_enabled (class GGS_abstractBooleanMultipleBindingExpressionForGeneration & out_binding) const ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autolayoutEnabledBindingForGeneration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autolayoutEnabledBindingForGeneration class_func_enabled (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_autolayoutEnabledBindingForGeneration class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractEnabled (class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ getter_getEnabled (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEnabled (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ;

//--------------------------------------------------------------------------------------------------
//   enum autolayoutRunBindingForGeneration
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutRunBindingForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_autolayoutRunBindingForGeneration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_run
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_run (class GGS_string & out_targetName,
                                                            class GGS_string & out_actionName,
                                                            class GGS_string & out_targetTypeName) const ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autolayoutRunBindingForGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autolayoutRunBindingForGeneration class_func_none (LOCATION_ARGS) ;

  public: static class GGS_autolayoutRunBindingForGeneration class_func_run (const class GGS_string & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_string & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractRun (class GGS_string & outArgument0,
                                                   class GGS_string & outArgument1,
                                                   class GGS_string & outArgument2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_autolayoutRunBindingForGeneration_2E_run_3F_ getter_getRun (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRun (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateViewInstruction (const class cPtr_abstractViewInstructionGeneration * inObject,
                                                              const class GGS_bool constin_inPreferences,
                                                              const class GGS_string constin_inName,
                                                              const class GGS_string constin_inIndentation,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewInstructionGenerationFuncCallList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList final {
  public: DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inList) ;

  public: ~ DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewInstructionGenerationParameterList current_mParameters (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList &) = delete ;
  private: DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList & operator = (const DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList final {
  public: UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inList)  ;

  public: ~ UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewInstructionGenerationParameterList current_mParameters (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList &) = delete ;
  private: UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList & operator = (const UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutViewInstructionGenerationFuncCallList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewInstructionGenerationFuncCallList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutViewInstructionGenerationFuncCallList (void) = default ;

//--- Copy
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList (const GGS_autoLayoutViewInstructionGenerationFuncCallList &) = default ;
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList & operator = (const GGS_autoLayoutViewInstructionGenerationFuncCallList &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutViewInstructionGenerationFuncCallList subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mFunctionName,
                                                 const class GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewInstructionGenerationFuncCallList init (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewInstructionGenerationFuncCallList extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewInstructionGenerationFuncCallList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutViewInstructionGenerationFuncCallList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                     const class GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationFuncCallList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutViewInstructionGenerationFuncCallList add_operation (const GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_autoLayoutViewInstructionGenerationParameterList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_autoLayoutViewInstructionGenerationParameterList constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GGS_string constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParametersAtIndex (class GGS_autoLayoutViewInstructionGenerationParameterList constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationParameterList getter_mParametersAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationFuncCallList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationFuncCallList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationFuncCallList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList ;
  friend class DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewInstructionGenerationParameterList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewInstructionGenerationParameterList final {
  public: DownEnumerator_autoLayoutViewInstructionGenerationParameterList (const class GGS_autoLayoutViewInstructionGenerationParameterList & inList) ;

  public: ~ DownEnumerator_autoLayoutViewInstructionGenerationParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_string current_mParameterValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewInstructionGenerationParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewInstructionGenerationParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutViewInstructionGenerationParameterList (const DownEnumerator_autoLayoutViewInstructionGenerationParameterList &) = delete ;
  private: DownEnumerator_autoLayoutViewInstructionGenerationParameterList & operator = (const DownEnumerator_autoLayoutViewInstructionGenerationParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewInstructionGenerationParameterList final {
  public: UpEnumerator_autoLayoutViewInstructionGenerationParameterList (const class GGS_autoLayoutViewInstructionGenerationParameterList & inList)  ;

  public: ~ UpEnumerator_autoLayoutViewInstructionGenerationParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_string current_mParameterValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewInstructionGenerationParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewInstructionGenerationParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutViewInstructionGenerationParameterList (const UpEnumerator_autoLayoutViewInstructionGenerationParameterList &) = delete ;
  private: UpEnumerator_autoLayoutViewInstructionGenerationParameterList & operator = (const UpEnumerator_autoLayoutViewInstructionGenerationParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutViewInstructionGenerationParameterList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewInstructionGenerationParameterList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutViewInstructionGenerationParameterList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutViewInstructionGenerationParameterList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutViewInstructionGenerationParameterList (void) = default ;

//--- Copy
  public: GGS_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList &) = default ;
  public: GGS_autoLayoutViewInstructionGenerationParameterList & operator = (const GGS_autoLayoutViewInstructionGenerationParameterList &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutViewInstructionGenerationParameterList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutViewInstructionGenerationParameterList subList (const int32_t inStart,
                                                                         const int32_t inLength,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutViewInstructionGenerationParameterList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mParameterName,
                                                 const class GGS_string & in_mParameterValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewInstructionGenerationParameterList init (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewInstructionGenerationParameterList extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewInstructionGenerationParameterList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutViewInstructionGenerationParameterList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                      const class GGS_string & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutViewInstructionGenerationParameterList add_operation (const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterValueAtIndex (class GGS_string constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mParameterNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mParameterValueAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutViewInstructionGenerationParameterList ;
  friend class DownEnumerator_autoLayoutViewInstructionGenerationParameterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateViewCode (class cPtr_astAbstractViewInstructionDeclaration * inObject,
                                           const class GGS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                           const class GGS_bool constin_inPreferences,
                                           const class GGS_propertyMap constin_inRootObservablePropertyMap,
                                           const class GGS_propertyMap constin_inPreferencesPropertyMap,
                                           const class GGS_semanticContext constin_inSemanticContext,
                                           const class GGS_propertyMap constin_inObservablePropertyMap,
                                           const class GGS_actionMap constin_inActionMap,
                                           const class GGS_string constin_inReceiverSwiftTypeName,
                                           const class GGS_classMap constin_inClassMap,
                                           class GGS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                           class GGS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                           class GGS_autoLayoutOutletMap & io_ioOutletMap,
                                           class GGS_abstractViewInstructionGeneration & out_outInstruction,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutEnableBinding??handlesEnabledBinding?prefs????prefsMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (const class GGS_multipleBindingDescriptor constinArgument0,
                                                                                                               const class GGS_bool constinArgument1,
                                                                                                               const class GGS_bool constinArgument2,
                                                                                                               const class GGS_propertyMap constinArgument3,
                                                                                                               const class GGS_semanticContext constinArgument4,
                                                                                                               const class GGS_propertyMap constinArgument5,
                                                                                                               const class GGS_propertyMap constinArgument6,
                                                                                                               class GGS_autolayoutEnabledBindingForGeneration & outArgument7,
                                                                                                               class Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRunBinding??handlesRunAction??????!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (const class GGS_runActionDescriptor constinArgument0,
                                                                                              const class GGS_bool constinArgument1,
                                                                                              const class GGS_bool constinArgument2,
                                                                                              const class GGS_lstring constinArgument3,
                                                                                              const class GGS_actionMap constinArgument4,
                                                                                              const class GGS_propertyMap constinArgument5,
                                                                                              const class GGS_string constinArgument6,
                                                                                              const class GGS_actionMap constinArgument7,
                                                                                              class GGS_autolayoutRunBindingForGeneration & outArgument8,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractViewGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractViewGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractViewGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractViewGeneration_2E_weak (const class GGS_abstractViewGeneration & inSource) ;

  public: GGS_abstractViewGeneration_2E_weak & operator = (const class GGS_abstractViewGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractViewGeneration_2E_weak init_nil (void) {
    GGS_abstractViewGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractViewGeneration bang_abstractViewGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractViewGeneration unwrappedValue (void) const ;

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
  public: static GGS_abstractViewGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractViewGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractViewGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewInstructionGenerationFuncCallList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mFunctionName ;
  public: inline GGS_string readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GGS_autoLayoutViewInstructionGenerationParameterList mProperty_mParameters ;
  public: inline GGS_autoLayoutViewInstructionGenerationParameterList readProperty_mParameters (void) const {
    return mProperty_mParameters ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFunctionName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMParameters (const GGS_autoLayoutViewInstructionGenerationParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameters = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (const GGS_string & in_mFunctionName,
                                                                          const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & operator = (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                              const class GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                                      const class GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1,
                                                                                                      class Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewInstructionGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewInstructionGenerationList final {
  public: DownEnumerator_autoLayoutViewInstructionGenerationList (const class GGS_autoLayoutViewInstructionGenerationList & inList) ;

  public: ~ DownEnumerator_autoLayoutViewInstructionGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewInstructionGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewInstructionGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutViewInstructionGenerationList (const DownEnumerator_autoLayoutViewInstructionGenerationList &) = delete ;
  private: DownEnumerator_autoLayoutViewInstructionGenerationList & operator = (const DownEnumerator_autoLayoutViewInstructionGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewInstructionGenerationList final {
  public: UpEnumerator_autoLayoutViewInstructionGenerationList (const class GGS_autoLayoutViewInstructionGenerationList & inList)  ;

  public: ~ UpEnumerator_autoLayoutViewInstructionGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewInstructionGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewInstructionGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutViewInstructionGenerationList (const UpEnumerator_autoLayoutViewInstructionGenerationList &) = delete ;
  private: UpEnumerator_autoLayoutViewInstructionGenerationList & operator = (const UpEnumerator_autoLayoutViewInstructionGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutViewInstructionGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewInstructionGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutViewInstructionGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutViewInstructionGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutViewInstructionGenerationList (void) = default ;

//--- Copy
  public: GGS_autoLayoutViewInstructionGenerationList (const GGS_autoLayoutViewInstructionGenerationList &) = default ;
  public: GGS_autoLayoutViewInstructionGenerationList & operator = (const GGS_autoLayoutViewInstructionGenerationList &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutViewInstructionGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutViewInstructionGenerationList subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutViewInstructionGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractViewInstructionGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewInstructionGenerationList init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewInstructionGenerationList extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewInstructionGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutViewInstructionGenerationList class_func_listWithValue (const class GGS_abstractViewInstructionGeneration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractViewInstructionGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutViewInstructionGenerationList add_operation (const GGS_autoLayoutViewInstructionGenerationList & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractViewInstructionGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractViewInstructionGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractViewInstructionGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractViewInstructionGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractViewInstructionGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_abstractViewInstructionGeneration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractViewInstructionGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractViewInstructionGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractViewInstructionGeneration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutViewInstructionGenerationList ;
  friend class DownEnumerator_autoLayoutViewInstructionGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewInstructionGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewInstructionGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractViewInstructionGeneration mProperty_mInstruction ;
  public: inline GGS_abstractViewInstructionGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewInstructionGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_abstractViewInstructionGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewInstructionGenerationList_2E_element (const GGS_abstractViewInstructionGeneration & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewInstructionGenerationList_2E_element (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewInstructionGenerationList_2E_element & operator = (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewInstructionGenerationList_2E_element init_21_ (const class GGS_abstractViewInstructionGeneration & inOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewInstructionGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewInstructionGenerationList_2E_element class_func_new (const class GGS_abstractViewInstructionGeneration & inOperand0,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedHorizontalViewGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedHorizontalViewGeneration : public GGS_abstractViewGeneration {
//--------------------------------- Default constructor
  public: GGS_computedHorizontalViewGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_computedHorizontalViewGeneration (const class cPtr_computedHorizontalViewGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GGS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computedHorizontalViewGeneration init_21__21__21_ (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                        const class GGS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                        const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedHorizontalViewGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedHorizontalViewGeneration class_func_new (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                            const class GGS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                            const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedHorizontalViewGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @computedHorizontalViewGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_computedHorizontalViewGeneration : public cPtr_abstractViewGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void computedHorizontalViewGeneration_init_21__21__21_ (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                  const class GGS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                  const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                  Compiler * inCompiler) ;


//--- Extension getter generateViewBuilder
  public: virtual class GGS_string getter_generateViewBuilder (const class GGS_bool inPreferences,
           const class GGS_string inViewName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public: GGS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public: GGS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_computedHorizontalViewGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_computedHorizontalViewGeneration (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                 const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                 const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedHorizontalViewGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedHorizontalViewGeneration_2E_weak : public GGS_abstractViewGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_computedHorizontalViewGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_computedHorizontalViewGeneration_2E_weak (const class GGS_computedHorizontalViewGeneration & inSource) ;

  public: GGS_computedHorizontalViewGeneration_2E_weak & operator = (const class GGS_computedHorizontalViewGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_computedHorizontalViewGeneration_2E_weak init_nil (void) {
    GGS_computedHorizontalViewGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_computedHorizontalViewGeneration bang_computedHorizontalViewGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_computedHorizontalViewGeneration unwrappedValue (void) const ;

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
  public: static GGS_computedHorizontalViewGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedHorizontalViewGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedHorizontalViewGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedVerticalViewGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedVerticalViewGeneration : public GGS_abstractViewGeneration {
//--------------------------------- Default constructor
  public: GGS_computedVerticalViewGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_computedVerticalViewGeneration (const class cPtr_computedVerticalViewGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mHasVerticalScroller (void) const ;

  public: class GGS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GGS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computedVerticalViewGeneration init_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand2,
                                                                              const class GGS_autoLayoutViewInstructionGenerationList & inOperand3,
                                                                              const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedVerticalViewGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedVerticalViewGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand2,
                                                                          const class GGS_autoLayoutViewInstructionGenerationList & inOperand3,
                                                                          const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedVerticalViewGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @computedVerticalViewGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_computedVerticalViewGeneration : public cPtr_abstractViewGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void computedVerticalViewGeneration_init_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand2,
                                                                        const class GGS_autoLayoutViewInstructionGenerationList & inOperand3,
                                                                        const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                        Compiler * inCompiler) ;


//--- Extension getter generateViewBuilder
  public: virtual class GGS_string getter_generateViewBuilder (const class GGS_bool inPreferences,
           const class GGS_string inViewName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_bool mProperty_mHasVerticalScroller ;
  public: GGS_lstring mProperty_mConfiguratorName ;
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public: GGS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public: GGS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_computedVerticalViewGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_computedVerticalViewGeneration (const GGS_bool & in_mHasVerticalScroller,
                                               const GGS_lstring & in_mConfiguratorName,
                                               const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                               const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                               const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedVerticalViewGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedVerticalViewGeneration_2E_weak : public GGS_abstractViewGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_computedVerticalViewGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_computedVerticalViewGeneration_2E_weak (const class GGS_computedVerticalViewGeneration & inSource) ;

  public: GGS_computedVerticalViewGeneration_2E_weak & operator = (const class GGS_computedVerticalViewGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_computedVerticalViewGeneration_2E_weak init_nil (void) {
    GGS_computedVerticalViewGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_computedVerticalViewGeneration bang_computedVerticalViewGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_computedVerticalViewGeneration unwrappedValue (void) const ;

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
  public: static GGS_computedVerticalViewGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedVerticalViewGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedVerticalViewGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateAppendViewInstruction (const class cPtr_abstractViewInstructionGeneration * inObject,
                                                                    const class GGS_bool constin_inPreferences,
                                                                    const class GGS_string constin_inReceiverViewName,
                                                                    const class GGS_string constin_inIndentation,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractViewInstructionGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractViewInstructionGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractViewInstructionGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractViewInstructionGeneration_2E_weak (const class GGS_abstractViewInstructionGeneration & inSource) ;

  public: GGS_abstractViewInstructionGeneration_2E_weak & operator = (const class GGS_abstractViewInstructionGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractViewInstructionGeneration_2E_weak init_nil (void) {
    GGS_abstractViewInstructionGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractViewInstructionGeneration bang_abstractViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractViewInstructionGeneration unwrappedValue (void) const ;

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
  public: static GGS_abstractViewInstructionGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractViewInstructionGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractViewInstructionGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutMultipleBindingGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutMultipleBindingGenerationList final {
  public: DownEnumerator_autoLayoutMultipleBindingGenerationList (const class GGS_autoLayoutMultipleBindingGenerationList & inList) ;

  public: ~ DownEnumerator_autoLayoutMultipleBindingGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutMultipleBindingGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutMultipleBindingGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutMultipleBindingGenerationList (const DownEnumerator_autoLayoutMultipleBindingGenerationList &) = delete ;
  private: DownEnumerator_autoLayoutMultipleBindingGenerationList & operator = (const DownEnumerator_autoLayoutMultipleBindingGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutMultipleBindingGenerationList final {
  public: UpEnumerator_autoLayoutMultipleBindingGenerationList (const class GGS_autoLayoutMultipleBindingGenerationList & inList)  ;

  public: ~ UpEnumerator_autoLayoutMultipleBindingGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutMultipleBindingGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutMultipleBindingGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutMultipleBindingGenerationList (const UpEnumerator_autoLayoutMultipleBindingGenerationList &) = delete ;
  private: UpEnumerator_autoLayoutMultipleBindingGenerationList & operator = (const UpEnumerator_autoLayoutMultipleBindingGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutMultipleBindingGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutMultipleBindingGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutMultipleBindingGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutMultipleBindingGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutMultipleBindingGenerationList (void) = default ;

//--- Copy
  public: GGS_autoLayoutMultipleBindingGenerationList (const GGS_autoLayoutMultipleBindingGenerationList &) = default ;
  public: GGS_autoLayoutMultipleBindingGenerationList & operator = (const GGS_autoLayoutMultipleBindingGenerationList &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutMultipleBindingGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutMultipleBindingGenerationList subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutMultipleBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mBindingName,
                                                 const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutMultipleBindingGenerationList init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutMultipleBindingGenerationList extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutMultipleBindingGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutMultipleBindingGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                             const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutMultipleBindingGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutMultipleBindingGenerationList add_operation (const GGS_autoLayoutMultipleBindingGenerationList & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GGS_string constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectExpressionAtIndex (class GGS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBoundObjectExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutMultipleBindingGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutMultipleBindingGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutMultipleBindingGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutMultipleBindingGenerationList ;
  friend class DownEnumerator_autoLayoutMultipleBindingGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutMultipleBindingGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutMultipleBindingGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mBindingName ;
  public: inline GGS_string readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mBoundObjectExpression ;
  public: inline GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mBoundObjectExpression (void) const {
    return mProperty_mBoundObjectExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutMultipleBindingGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBindingName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMBoundObjectExpression (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundObjectExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutMultipleBindingGenerationList_2E_element (const GGS_string & in_mBindingName,
                                                                  const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutMultipleBindingGenerationList_2E_element (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutMultipleBindingGenerationList_2E_element & operator = (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutMultipleBindingGenerationList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                      const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutMultipleBindingGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutMultipleBindingGenerationList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                              const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @hStackViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_hStackViewInstructionGeneration : public GGS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GGS_hStackViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_hStackViewInstructionGeneration (const class cPtr_hStackViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GGS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GGS_autoLayoutMultipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_hStackViewInstructionGeneration init_21__21__21__21_ (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                           const class GGS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                           const class GGS_autoLayoutMultipleBindingGenerationList & inOperand2,
                                                                           const class GGS_astNewStackViewDeclarationList & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_hStackViewInstructionGeneration extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_hStackViewInstructionGeneration class_func_new (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                           const class GGS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                           const class GGS_autoLayoutMultipleBindingGenerationList & inOperand2,
                                                                           const class GGS_astNewStackViewDeclarationList & inOperand3,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_hStackViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @hStackViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_hStackViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void hStackViewInstructionGeneration_init_21__21__21__21_ (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                     const class GGS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                     const class GGS_autoLayoutMultipleBindingGenerationList & inOperand2,
                                                                     const class GGS_astNewStackViewDeclarationList & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension getter generateAppendViewInstruction
  public: virtual class GGS_string getter_generateAppendViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inReceiverViewName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateViewInstruction
  public: virtual class GGS_string getter_generateViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public: GGS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public: GGS_autoLayoutMultipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;
  public: GGS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_hStackViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_hStackViewInstructionGeneration (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @hStackViewInstructionGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_hStackViewInstructionGeneration_2E_weak : public GGS_abstractViewInstructionGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_hStackViewInstructionGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_hStackViewInstructionGeneration_2E_weak (const class GGS_hStackViewInstructionGeneration & inSource) ;

  public: GGS_hStackViewInstructionGeneration_2E_weak & operator = (const class GGS_hStackViewInstructionGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_hStackViewInstructionGeneration_2E_weak init_nil (void) {
    GGS_hStackViewInstructionGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_hStackViewInstructionGeneration bang_hStackViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_hStackViewInstructionGeneration unwrappedValue (void) const ;

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
  public: static GGS_hStackViewInstructionGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_hStackViewInstructionGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_hStackViewInstructionGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @vStackViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_vStackViewInstructionGeneration : public GGS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GGS_vStackViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_vStackViewInstructionGeneration (const class cPtr_vStackViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mHasVerticalScroller (void) const ;

  public: class GGS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GGS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GGS_autoLayoutMultipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_vStackViewInstructionGeneration init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand2,
                                                                                   const class GGS_autoLayoutViewInstructionGenerationList & inOperand3,
                                                                                   const class GGS_autoLayoutMultipleBindingGenerationList & inOperand4,
                                                                                   const class GGS_astNewStackViewDeclarationList & inOperand5,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_vStackViewInstructionGeneration extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_vStackViewInstructionGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand2,
                                                                           const class GGS_autoLayoutViewInstructionGenerationList & inOperand3,
                                                                           const class GGS_autoLayoutMultipleBindingGenerationList & inOperand4,
                                                                           const class GGS_astNewStackViewDeclarationList & inOperand5,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_vStackViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @vStackViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_vStackViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void vStackViewInstructionGeneration_init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand2,
                                                                             const class GGS_autoLayoutViewInstructionGenerationList & inOperand3,
                                                                             const class GGS_autoLayoutMultipleBindingGenerationList & inOperand4,
                                                                             const class GGS_astNewStackViewDeclarationList & inOperand5,
                                                                             Compiler * inCompiler) ;


//--- Extension getter generateAppendViewInstruction
  public: virtual class GGS_string getter_generateAppendViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inReceiverViewName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateViewInstruction
  public: virtual class GGS_string getter_generateViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_bool mProperty_mHasVerticalScroller ;
  public: GGS_lstring mProperty_mConfiguratorName ;
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public: GGS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public: GGS_autoLayoutMultipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;
  public: GGS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_vStackViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_vStackViewInstructionGeneration (const GGS_bool & in_mHasVerticalScroller,
                                                const GGS_lstring & in_mConfiguratorName,
                                                const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @vStackViewInstructionGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_vStackViewInstructionGeneration_2E_weak : public GGS_abstractViewInstructionGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_vStackViewInstructionGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_vStackViewInstructionGeneration_2E_weak (const class GGS_vStackViewInstructionGeneration & inSource) ;

  public: GGS_vStackViewInstructionGeneration_2E_weak & operator = (const class GGS_vStackViewInstructionGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_vStackViewInstructionGeneration_2E_weak init_nil (void) {
    GGS_vStackViewInstructionGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_vStackViewInstructionGeneration bang_vStackViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_vStackViewInstructionGeneration unwrappedValue (void) const ;

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
  public: static GGS_vStackViewInstructionGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_vStackViewInstructionGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_vStackViewInstructionGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_vStackViewInstructionGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutSpaceViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutSpaceViewInstructionGeneration : public GGS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GGS_autoLayoutSpaceViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutSpaceViewInstructionGeneration (const class cPtr_autoLayoutSpaceViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutSpaceViewInstructionGeneration init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutSpaceViewInstructionGeneration extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutSpaceViewInstructionGeneration class_func_new (Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutSpaceViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutSpaceViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutSpaceViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutSpaceViewInstructionGeneration_init (Compiler * inCompiler) ;


//--- Extension getter generateAppendViewInstruction
  public: virtual class GGS_string getter_generateAppendViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inReceiverViewName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateViewInstruction
  public: virtual class GGS_string getter_generateViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties



//--- Constructor
  public: cPtr_autoLayoutSpaceViewInstructionGeneration (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutSpaceViewInstructionGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak : public GGS_abstractViewInstructionGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak (const class GGS_autoLayoutSpaceViewInstructionGeneration & inSource) ;

  public: GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak & operator = (const class GGS_autoLayoutSpaceViewInstructionGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutSpaceViewInstructionGeneration bang_autoLayoutSpaceViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutSpaceViewInstructionGeneration unwrappedValue (void) const ;

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
  public: static GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutSeparatorInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutSeparatorInstructionGeneration : public GGS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GGS_autoLayoutSeparatorInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutSeparatorInstructionGeneration (const class cPtr_autoLayoutSeparatorInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutSeparatorInstructionGeneration init_21_horizontal (const class GGS_bool & inOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutSeparatorInstructionGeneration extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutSeparatorInstructionGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutSeparatorInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutSeparatorInstructionGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutSeparatorInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutSeparatorInstructionGeneration_init_21_horizontal (const class GGS_bool & inOperand0,
                                                                            Compiler * inCompiler) ;


//--- Extension getter generateAppendViewInstruction
  public: virtual class GGS_string getter_generateAppendViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inReceiverViewName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateViewInstruction
  public: virtual class GGS_string getter_generateViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_bool mProperty_horizontal ;


//--- Default constructor
  public: cPtr_autoLayoutSeparatorInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutSeparatorInstructionGeneration (const GGS_bool & in_horizontal,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutSeparatorInstructionGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutSeparatorInstructionGeneration_2E_weak : public GGS_abstractViewInstructionGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutSeparatorInstructionGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutSeparatorInstructionGeneration_2E_weak (const class GGS_autoLayoutSeparatorInstructionGeneration & inSource) ;

  public: GGS_autoLayoutSeparatorInstructionGeneration_2E_weak & operator = (const class GGS_autoLayoutSeparatorInstructionGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutSeparatorInstructionGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutSeparatorInstructionGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutSeparatorInstructionGeneration bang_autoLayoutSeparatorInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutSeparatorInstructionGeneration unwrappedValue (void) const ;

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
  public: static GGS_autoLayoutSeparatorInstructionGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutSeparatorInstructionGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutSeparatorInstructionGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutGutterInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutGutterInstructionGeneration : public GGS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GGS_autoLayoutGutterInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutGutterInstructionGeneration (const class cPtr_autoLayoutGutterInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutGutterInstructionGeneration init_21_horizontal (const class GGS_bool & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutGutterInstructionGeneration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutGutterInstructionGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutGutterInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutGutterInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutGutterInstructionGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutGutterInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutGutterInstructionGeneration_init_21_horizontal (const class GGS_bool & inOperand0,
                                                                         Compiler * inCompiler) ;


//--- Extension getter generateAppendViewInstruction
  public: virtual class GGS_string getter_generateAppendViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inReceiverViewName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateViewInstruction
  public: virtual class GGS_string getter_generateViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_bool mProperty_horizontal ;


//--- Default constructor
  public: cPtr_autoLayoutGutterInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutGutterInstructionGeneration (const GGS_bool & in_horizontal,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutGutterInstructionGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutGutterInstructionGeneration_2E_weak : public GGS_abstractViewInstructionGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutGutterInstructionGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutGutterInstructionGeneration_2E_weak (const class GGS_autoLayoutGutterInstructionGeneration & inSource) ;

  public: GGS_autoLayoutGutterInstructionGeneration_2E_weak & operator = (const class GGS_autoLayoutGutterInstructionGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutGutterInstructionGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutGutterInstructionGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutGutterInstructionGeneration bang_autoLayoutGutterInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutGutterInstructionGeneration unwrappedValue (void) const ;

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
  public: static GGS_autoLayoutGutterInstructionGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutGutterInstructionGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutGutterInstructionGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutGutterInstructionGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutDividerInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutDividerInstructionGeneration : public GGS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GGS_autoLayoutDividerInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutDividerInstructionGeneration (const class cPtr_autoLayoutDividerInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutDividerInstructionGeneration init_21_horizontal (const class GGS_bool & inOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutDividerInstructionGeneration extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutDividerInstructionGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDividerInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutDividerInstructionGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDividerInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutDividerInstructionGeneration_init_21_horizontal (const class GGS_bool & inOperand0,
                                                                          Compiler * inCompiler) ;


//--- Extension getter generateAppendViewInstruction
  public: virtual class GGS_string getter_generateAppendViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inReceiverViewName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateViewInstruction
  public: virtual class GGS_string getter_generateViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_bool mProperty_horizontal ;


//--- Default constructor
  public: cPtr_autoLayoutDividerInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutDividerInstructionGeneration (const GGS_bool & in_horizontal,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutDividerInstructionGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutDividerInstructionGeneration_2E_weak : public GGS_abstractViewInstructionGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutDividerInstructionGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutDividerInstructionGeneration_2E_weak (const class GGS_autoLayoutDividerInstructionGeneration & inSource) ;

  public: GGS_autoLayoutDividerInstructionGeneration_2E_weak & operator = (const class GGS_autoLayoutDividerInstructionGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutDividerInstructionGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutDividerInstructionGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutDividerInstructionGeneration bang_autoLayoutDividerInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutDividerInstructionGeneration unwrappedValue (void) const ;

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
  public: static GGS_autoLayoutDividerInstructionGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutDividerInstructionGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDividerInstructionGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutLocalViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutLocalViewInstructionGeneration : public GGS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GGS_autoLayoutLocalViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutLocalViewInstructionGeneration (const class cPtr_autoLayoutLocalViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLocalView (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutLocalViewInstructionGeneration init_21_ (const class GGS_string & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutLocalViewInstructionGeneration extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutLocalViewInstructionGeneration class_func_new (const class GGS_string & inOperand0,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutLocalViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutLocalViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutLocalViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutLocalViewInstructionGeneration_init_21_ (const class GGS_string & inOperand0,
                                                                  Compiler * inCompiler) ;


//--- Extension getter generateAppendViewInstruction
  public: virtual class GGS_string getter_generateAppendViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inReceiverViewName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateViewInstruction
  public: virtual class GGS_string getter_generateViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_string mProperty_mLocalView ;


//--- Default constructor
  public: cPtr_autoLayoutLocalViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutLocalViewInstructionGeneration (const GGS_string & in_mLocalView,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutLocalViewInstructionGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutLocalViewInstructionGeneration_2E_weak : public GGS_abstractViewInstructionGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutLocalViewInstructionGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutLocalViewInstructionGeneration_2E_weak (const class GGS_autoLayoutLocalViewInstructionGeneration & inSource) ;

  public: GGS_autoLayoutLocalViewInstructionGeneration_2E_weak & operator = (const class GGS_autoLayoutLocalViewInstructionGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutLocalViewInstructionGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutLocalViewInstructionGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutLocalViewInstructionGeneration bang_autoLayoutLocalViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutLocalViewInstructionGeneration unwrappedValue (void) const ;

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
  public: static GGS_autoLayoutLocalViewInstructionGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutLocalViewInstructionGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutLocalViewInstructionGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutRegularBindingsGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutRegularBindingsGenerationList final {
  public: DownEnumerator_autoLayoutRegularBindingsGenerationList (const class GGS_autoLayoutRegularBindingsGenerationList & inList) ;

  public: ~ DownEnumerator_autoLayoutRegularBindingsGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_boundObjectList current_mBoundObjectList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingOptionsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutRegularBindingsGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutRegularBindingsGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutRegularBindingsGenerationList (const DownEnumerator_autoLayoutRegularBindingsGenerationList &) = delete ;
  private: DownEnumerator_autoLayoutRegularBindingsGenerationList & operator = (const DownEnumerator_autoLayoutRegularBindingsGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutRegularBindingsGenerationList final {
  public: UpEnumerator_autoLayoutRegularBindingsGenerationList (const class GGS_autoLayoutRegularBindingsGenerationList & inList)  ;

  public: ~ UpEnumerator_autoLayoutRegularBindingsGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_boundObjectList current_mBoundObjectList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingOptionsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutRegularBindingsGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutRegularBindingsGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutRegularBindingsGenerationList (const UpEnumerator_autoLayoutRegularBindingsGenerationList &) = delete ;
  private: UpEnumerator_autoLayoutRegularBindingsGenerationList & operator = (const UpEnumerator_autoLayoutRegularBindingsGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutRegularBindingsGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutRegularBindingsGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutRegularBindingsGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutRegularBindingsGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutRegularBindingsGenerationList (void) = default ;

//--- Copy
  public: GGS_autoLayoutRegularBindingsGenerationList (const GGS_autoLayoutRegularBindingsGenerationList &) = default ;
  public: GGS_autoLayoutRegularBindingsGenerationList & operator = (const GGS_autoLayoutRegularBindingsGenerationList &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutRegularBindingsGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutRegularBindingsGenerationList subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutRegularBindingsGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mBindingName,
                                                 const class GGS_boundObjectList & in_mBoundObjectList,
                                                 const class GGS_string & in_mBindingOptionsString
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutRegularBindingsGenerationList init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutRegularBindingsGenerationList extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutRegularBindingsGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutRegularBindingsGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                             const class GGS_boundObjectList & inOperand1,
                                                                                             const class GGS_string & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutRegularBindingsGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_boundObjectList & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutRegularBindingsGenerationList add_operation (const GGS_autoLayoutRegularBindingsGenerationList & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_boundObjectList constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_boundObjectList constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_boundObjectList & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_boundObjectList & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_boundObjectList & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GGS_string constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionsStringAtIndex (class GGS_string constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectListAtIndex (class GGS_boundObjectList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_boundObjectList & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_boundObjectList & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBindingOptionsStringAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_boundObjectList getter_mBoundObjectListAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutRegularBindingsGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutRegularBindingsGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutRegularBindingsGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutRegularBindingsGenerationList ;
  friend class DownEnumerator_autoLayoutRegularBindingsGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutRegularBindingsGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutRegularBindingsGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mBindingName ;
  public: inline GGS_string readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS_boundObjectList mProperty_mBoundObjectList ;
  public: inline GGS_boundObjectList readProperty_mBoundObjectList (void) const {
    return mProperty_mBoundObjectList ;
  }

  public: GGS_string mProperty_mBindingOptionsString ;
  public: inline GGS_string readProperty_mBindingOptionsString (void) const {
    return mProperty_mBindingOptionsString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutRegularBindingsGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBindingName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMBoundObjectList (const GGS_boundObjectList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundObjectList = inValue ;
  }

  public: inline void setter_setMBindingOptionsString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionsString = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutRegularBindingsGenerationList_2E_element (const GGS_string & in_mBindingName,
                                                                  const GGS_boundObjectList & in_mBoundObjectList,
                                                                  const GGS_string & in_mBindingOptionsString) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutRegularBindingsGenerationList_2E_element (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutRegularBindingsGenerationList_2E_element & operator = (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutRegularBindingsGenerationList_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                          const class GGS_boundObjectList & inOperand1,
                                                                                          const class GGS_string & inOperand2,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutRegularBindingsGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutRegularBindingsGenerationList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                              const class GGS_boundObjectList & inOperand1,
                                                                                              const class GGS_string & inOperand2,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autolayoutRunBindingForGeneration_2E_run struct
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutRunBindingForGeneration_2E_run : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_targetName ;
  public: inline GGS_string readProperty_targetName (void) const {
    return mProperty_targetName ;
  }

  public: GGS_string mProperty_actionName ;
  public: inline GGS_string readProperty_actionName (void) const {
    return mProperty_actionName ;
  }

  public: GGS_string mProperty_targetTypeName ;
  public: inline GGS_string readProperty_targetTypeName (void) const {
    return mProperty_targetTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autolayoutRunBindingForGeneration_2E_run (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTargetName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetName = inValue ;
  }

  public: inline void setter_setActionName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_actionName = inValue ;
  }

  public: inline void setter_setTargetTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autolayoutRunBindingForGeneration_2E_run (const GGS_string & in_targetName,
                                                        const GGS_string & in_actionName,
                                                        const GGS_string & in_targetTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_autolayoutRunBindingForGeneration_2E_run (const GGS_autolayoutRunBindingForGeneration_2E_run & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autolayoutRunBindingForGeneration_2E_run & operator = (const GGS_autolayoutRunBindingForGeneration_2E_run & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autolayoutRunBindingForGeneration_2E_run init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                const class GGS_string & inOperand1,
                                                                                const class GGS_string & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autolayoutRunBindingForGeneration_2E_run extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autolayoutRunBindingForGeneration_2E_run class_func_new (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1,
                                                                                    const class GGS_string & inOperand2,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration_2E_run ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autolayoutRunBindingForGeneration.run? optional
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutRunBindingForGeneration_2E_run_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autolayoutRunBindingForGeneration_2E_run mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autolayoutRunBindingForGeneration_2E_run_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autolayoutRunBindingForGeneration_2E_run_3F_ (const GGS_autolayoutRunBindingForGeneration_2E_run & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autolayoutRunBindingForGeneration_2E_run_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autolayoutRunBindingForGeneration_2E_run unwrappedValue (void) const {
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
  public: static GGS_autolayoutRunBindingForGeneration_2E_run_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration_2E_run_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum autoLayoutViewGraphicControllerBindingGeneration
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewGraphicControllerBindingGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_autoLayoutViewGraphicControllerBindingGeneration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_binding
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_binding (class GGS_string & out_arrayControllerControllerName) const ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewGraphicControllerBindingGeneration extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewGraphicControllerBindingGeneration class_func_binding (const class GGS_string & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_autoLayoutViewGraphicControllerBindingGeneration class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractBinding (class GGS_string & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ getter_getBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewGraphicControllerBindingGeneration_2E_binding struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_arrayControllerControllerName ;
  public: inline GGS_string readProperty_arrayControllerControllerName (void) const {
    return mProperty_arrayControllerControllerName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (void) ;

//--------------------------------- Property setters
  public: inline void setter_setArrayControllerControllerName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_arrayControllerControllerName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (const GGS_string & in_arrayControllerControllerName) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding & operator = (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding init_21_ (const class GGS_string & inOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding class_func_new (const class GGS_string & inOperand0,
                                                                                                       class Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutViewGraphicControllerBindingGeneration.binding? optional
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding unwrappedValue (void) const {
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
  public: static GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ ;

