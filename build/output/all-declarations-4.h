#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astGutterInstructionDeclaration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration_2E_weak ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding_3F_ ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction_2E_weak ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astLocalViewInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @tableValueBinding_2E_tableValueBinding struct
//--------------------------------------------------------------------------------------------------

class GGS_tableValueBinding_2E_tableValueBinding : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_tableValueBinding_2E_tableValueBinding (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_tableValueBinding_2E_tableValueBinding (const GGS_lstring & in_controllerName) ;

//--------------------------------- Copy constructor
  public: GGS_tableValueBinding_2E_tableValueBinding (const GGS_tableValueBinding_2E_tableValueBinding & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_tableValueBinding_2E_tableValueBinding & operator = (const GGS_tableValueBinding_2E_tableValueBinding & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_tableValueBinding_2E_tableValueBinding init_21_ (const class GGS_lstring & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tableValueBinding_2E_tableValueBinding extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_tableValueBinding_2E_tableValueBinding & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableValueBinding_2E_tableValueBinding ;

//--------------------------------------------------------------------------------------------------
// Phase 1: tableValueBinding.tableValueBinding? optional
//--------------------------------------------------------------------------------------------------

class GGS_tableValueBinding_2E_tableValueBinding_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_tableValueBinding_2E_tableValueBinding mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_tableValueBinding_2E_tableValueBinding_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_tableValueBinding_2E_tableValueBinding_3F_ (const GGS_tableValueBinding_2E_tableValueBinding & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_tableValueBinding_2E_tableValueBinding_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_tableValueBinding_2E_tableValueBinding unwrappedValue (void) const {
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
  public: static GGS_tableValueBinding_2E_tableValueBinding_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_tableValueBinding_2E_tableValueBinding_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableValueBinding_2E_tableValueBinding_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @runActionDescriptor_2E_action struct
//--------------------------------------------------------------------------------------------------

class GGS_runActionDescriptor_2E_action : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_target ;
  public: inline GGS_lstring readProperty_target (void) const {
    return mProperty_target ;
  }

  public: GGS_lstring mProperty_action ;
  public: inline GGS_lstring readProperty_action (void) const {
    return mProperty_action ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_runActionDescriptor_2E_action (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTarget (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_target = inValue ;
  }

  public: inline void setter_setAction (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_action = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_runActionDescriptor_2E_action (const GGS_lstring & in_target,
                                             const GGS_lstring & in_action) ;

//--------------------------------- Copy constructor
  public: GGS_runActionDescriptor_2E_action (const GGS_runActionDescriptor_2E_action & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_runActionDescriptor_2E_action & operator = (const GGS_runActionDescriptor_2E_action & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_runActionDescriptor_2E_action init_21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_lstring & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_runActionDescriptor_2E_action extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_runActionDescriptor_2E_action & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_runActionDescriptor_2E_action ;

//--------------------------------------------------------------------------------------------------
// Phase 1: runActionDescriptor.action? optional
//--------------------------------------------------------------------------------------------------

class GGS_runActionDescriptor_2E_action_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_runActionDescriptor_2E_action mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_runActionDescriptor_2E_action_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_runActionDescriptor_2E_action_3F_ (const GGS_runActionDescriptor_2E_action & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_runActionDescriptor_2E_action_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_runActionDescriptor_2E_action unwrappedValue (void) const {
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
  public: static GGS_runActionDescriptor_2E_action_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_runActionDescriptor_2E_action_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_runActionDescriptor_2E_action_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @graphicController_2E_defined struct
//--------------------------------------------------------------------------------------------------

class GGS_graphicController_2E_defined : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controller ;
  public: inline GGS_lstring readProperty_controller (void) const {
    return mProperty_controller ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_graphicController_2E_defined (void) ;

//--------------------------------- Property setters
  public: inline void setter_setController (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controller = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_graphicController_2E_defined (const GGS_lstring & in_controller,
                                            const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_graphicController_2E_defined (const GGS_graphicController_2E_defined & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_graphicController_2E_defined & operator = (const GGS_graphicController_2E_defined & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_graphicController_2E_defined init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphicController_2E_defined extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphicController_2E_defined ;

//--------------------------------------------------------------------------------------------------
// Phase 1: graphicController.defined? optional
//--------------------------------------------------------------------------------------------------

class GGS_graphicController_2E_defined_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_graphicController_2E_defined mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_graphicController_2E_defined_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_graphicController_2E_defined_3F_ (const GGS_graphicController_2E_defined & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_graphicController_2E_defined_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_graphicController_2E_defined unwrappedValue (void) const {
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
  public: static GGS_graphicController_2E_defined_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphicController_2E_defined_3F_ ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: static class GGS_autoLayoutViewDeclarationMap class_func_mapWithMapToOverride (const class GGS_autoLayoutViewDeclarationMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewDeclarationMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutViewDeclarationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: static class GGS_enumFunAssociationSortedList class_func_sortedListWithValue (const class GGS_uint & inOperand0,
                                                                                        const class GGS_string & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_enumFunAssociationSortedList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_uint & inOperand0,
                                   const class GGS_string & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_enumFunAssociationSortedList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumFunAssociationSortedList & inOperand) const ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_uint inArgument0,
                              class GGS_string inArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_popGreatest (class GGS_uint & outArgument0,
                                   class GGS_string & outArgument1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_popSmallest (class GGS_uint & outArgument0,
                                   class GGS_string & outArgument1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_greatest (class GGS_uint & outArgument0,
                                class GGS_string & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

  public: void method_smallest (class GGS_uint & outArgument0,
                                class GGS_string & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractEnabled (class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ getter_getEnabled (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEnabled (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractRun (class GGS_string & outArgument0,
                                  class GGS_string & outArgument1,
                                  class GGS_string & outArgument2,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_autolayoutRunBindingForGeneration_2E_run_3F_ getter_getRun (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNone (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRun (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_autoLayoutViewInstructionGenerationFuncCallList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                     const class GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationFuncCallList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList add_operation (const GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_autoLayoutViewInstructionGenerationParameterList constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_autoLayoutViewInstructionGenerationParameterList constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFunctionNameAtIndex (class GGS_string constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMParametersAtIndex (class GGS_autoLayoutViewInstructionGenerationParameterList constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewInstructionGenerationParameterList getter_mParametersAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: GGS_autoLayoutViewInstructionGenerationParameterList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_autoLayoutViewInstructionGenerationParameterList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                      const class GGS_string & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_string & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_autoLayoutViewInstructionGenerationParameterList add_operation (const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_string constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_string & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_string & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterNameAtIndex (class GGS_string constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterValueAtIndex (class GGS_string constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_string & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_string & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mParameterNameAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mParameterValueAtIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewInstructionGenerationParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewInstructionGenerationParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewInstructionGenerationParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
// Phase 1: @classKind_2E_atomic struct
//--------------------------------------------------------------------------------------------------

class GGS_classKind_2E_atomic : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_typeKind mProperty_kind ;
  public: inline GGS_typeKind readProperty_kind (void) const {
    return mProperty_kind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classKind_2E_atomic (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKind (const GGS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_kind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classKind_2E_atomic (const GGS_typeKind & in_kind) ;

//--------------------------------- Copy constructor
  public: GGS_classKind_2E_atomic (const GGS_classKind_2E_atomic & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_classKind_2E_atomic & operator = (const GGS_classKind_2E_atomic & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classKind_2E_atomic init_21_ (const class GGS_typeKind & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classKind_2E_atomic extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_atomic ;

//--------------------------------------------------------------------------------------------------
// Phase 1: classKind.atomic? optional
//--------------------------------------------------------------------------------------------------

class GGS_classKind_2E_atomic_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classKind_2E_atomic mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classKind_2E_atomic_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classKind_2E_atomic_3F_ (const GGS_classKind_2E_atomic & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classKind_2E_atomic_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classKind_2E_atomic unwrappedValue (void) const {
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
  public: static GGS_classKind_2E_atomic_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_atomic_3F_ ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_autoLayoutViewInstructionGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_autoLayoutViewInstructionGenerationList class_func_listWithValue (const class GGS_abstractViewInstructionGeneration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_abstractViewInstructionGeneration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_autoLayoutViewInstructionGenerationList add_operation (const GGS_autoLayoutViewInstructionGenerationList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_abstractViewInstructionGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_abstractViewInstructionGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_abstractViewInstructionGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_abstractViewInstructionGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_abstractViewInstructionGeneration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_abstractViewInstructionGeneration constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_abstractViewInstructionGeneration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_abstractViewInstructionGeneration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_abstractViewInstructionGeneration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewInstructionGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewInstructionGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewInstructionGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedHorizontalViewGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedVerticalViewGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_autoLayoutMultipleBindingGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_autoLayoutMultipleBindingGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                             const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_autoLayoutMultipleBindingGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_autoLayoutMultipleBindingGenerationList add_operation (const GGS_autoLayoutMultipleBindingGenerationList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingNameAtIndex (class GGS_string constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMBoundObjectExpressionAtIndex (class GGS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBoundObjectExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutMultipleBindingGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutMultipleBindingGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutMultipleBindingGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_hStackViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_vStackViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutSpaceViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutSeparatorInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutGutterInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDividerInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutLocalViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_autoLayoutRegularBindingsGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_autoLayoutRegularBindingsGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                             const class GGS_boundObjectList & inOperand1,
                                                                                             const class GGS_string & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_autoLayoutRegularBindingsGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_boundObjectList & inOperand1,
                                   const class GGS_string & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_autoLayoutRegularBindingsGenerationList add_operation (const GGS_autoLayoutRegularBindingsGenerationList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_boundObjectList constinArgument1,
                              class GGS_string constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_boundObjectList constinArgument1,
                                     class GGS_string constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_boundObjectList & outArgument1,
                                class GGS_string & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_boundObjectList & outArgument1,
                               class GGS_string & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_boundObjectList & outArgument1,
                                     class GGS_string & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingNameAtIndex (class GGS_string constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingOptionsStringAtIndex (class GGS_string constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMBoundObjectListAtIndex (class GGS_boundObjectList constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_boundObjectList & outArgument1,
                             class GGS_string & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_boundObjectList & outArgument1,
                            class GGS_string & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mBindingOptionsStringAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_boundObjectList getter_mBoundObjectListAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutRegularBindingsGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutRegularBindingsGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutRegularBindingsGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boundObjectList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_boundObjectList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mBoundObjectString ;
  public: inline GGS_string readProperty_mBoundObjectString (void) const {
    return mProperty_mBoundObjectString ;
  }

  public: GGS_propertyKind mProperty_mKind ;
  public: inline GGS_propertyKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_boundObjectList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBoundObjectString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundObjectString = inValue ;
  }

  public: inline void setter_setMKind (const GGS_propertyKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_boundObjectList_2E_element (const GGS_string & in_mBoundObjectString,
                                          const GGS_propertyKind & in_mKind) ;

//--------------------------------- Copy constructor
  public: GGS_boundObjectList_2E_element (const GGS_boundObjectList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_boundObjectList_2E_element & operator = (const GGS_boundObjectList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boundObjectList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                              const class GGS_propertyKind & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boundObjectList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boundObjectList_2E_element ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractBinding (class GGS_string & outArgument0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ getter_getBinding (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBinding (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autolayoutEnabledBindingForGeneration_2E_enabled struct
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutEnabledBindingForGeneration_2E_enabled : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_binding ;
  public: inline GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_binding (void) const {
    return mProperty_binding ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autolayoutEnabledBindingForGeneration_2E_enabled (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_binding = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autolayoutEnabledBindingForGeneration_2E_enabled (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_binding) ;

//--------------------------------- Copy constructor
  public: GGS_autolayoutEnabledBindingForGeneration_2E_enabled (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autolayoutEnabledBindingForGeneration_2E_enabled & operator = (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autolayoutEnabledBindingForGeneration_2E_enabled init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autolayoutEnabledBindingForGeneration_2E_enabled extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration_2E_enabled ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autolayoutEnabledBindingForGeneration.enabled? optional
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autolayoutEnabledBindingForGeneration_2E_enabled mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autolayoutEnabledBindingForGeneration_2E_enabled unwrappedValue (void) const {
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
  public: static GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewInstructionGenerationParameterList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewInstructionGenerationParameterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mParameterName ;
  public: inline GGS_string readProperty_mParameterName (void) const {
    return mProperty_mParameterName ;
  }

  public: GGS_string mProperty_mParameterValue ;
  public: inline GGS_string readProperty_mParameterValue (void) const {
    return mProperty_mParameterValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewInstructionGenerationParameterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameterName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterName = inValue ;
  }

  public: inline void setter_setMParameterValue (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewInstructionGenerationParameterList_2E_element (const GGS_string & in_mParameterName,
                                                                           const GGS_string & in_mParameterValue) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewInstructionGenerationParameterList_2E_element (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & operator = (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewInstructionGenerationParameterList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                               const class GGS_string & inOperand1,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewInstructionGenerationParameterList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutComputedViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutComputedViewInstructionGeneration : public GGS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GGS_autoLayoutComputedViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutComputedViewInstructionGeneration (const class cPtr_autoLayoutComputedViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mAutoLayoutViewClassName (void) const ;

  public: class GGS_autoLayoutViewInstructionGenerationParameterList readProperty_mParameterList (void) const ;

  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_autoLayoutRegularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GGS_autoLayoutMultipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GGS_autolayoutRunBindingForGeneration readProperty_mRunBindingGeneration (void) const ;

  public: class GGS_string readProperty_mTableViewBindingGeneration (void) const ;

  public: class GGS_autoLayoutViewGraphicControllerBindingGeneration readProperty_mEBViewGraphicControllerBindingGeneration (void) const ;

  public: class GGS_string readProperty_mConfiguratorName (void) const ;

  public: class GGS_string readProperty_mOutletName (void) const ;

  public: class GGS_bool readProperty_mOutletIsArray (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutComputedViewInstructionGeneration init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                                   const class GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1,
                                                                                                                   const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand2,
                                                                                                                   const class GGS_autoLayoutRegularBindingsGenerationList & inOperand3,
                                                                                                                   const class GGS_autoLayoutMultipleBindingGenerationList & inOperand4,
                                                                                                                   const class GGS_autolayoutRunBindingForGeneration & inOperand5,
                                                                                                                   const class GGS_string & inOperand6,
                                                                                                                   const class GGS_autoLayoutViewGraphicControllerBindingGeneration & inOperand7,
                                                                                                                   const class GGS_string & inOperand8,
                                                                                                                   const class GGS_string & inOperand9,
                                                                                                                   const class GGS_bool & inOperand10,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutComputedViewInstructionGeneration extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutComputedViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutComputedViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutComputedViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutComputedViewInstructionGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                             const class GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1,
                                                                                                             const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand2,
                                                                                                             const class GGS_autoLayoutRegularBindingsGenerationList & inOperand3,
                                                                                                             const class GGS_autoLayoutMultipleBindingGenerationList & inOperand4,
                                                                                                             const class GGS_autolayoutRunBindingForGeneration & inOperand5,
                                                                                                             const class GGS_string & inOperand6,
                                                                                                             const class GGS_autoLayoutViewGraphicControllerBindingGeneration & inOperand7,
                                                                                                             const class GGS_string & inOperand8,
                                                                                                             const class GGS_string & inOperand9,
                                                                                                             const class GGS_bool & inOperand10,
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
  public: GGS_lstring mProperty_mAutoLayoutViewClassName ;
  public: GGS_autoLayoutViewInstructionGenerationParameterList mProperty_mParameterList ;
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFunctionCallList ;
  public: GGS_autoLayoutRegularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GGS_autoLayoutMultipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;
  public: GGS_autolayoutRunBindingForGeneration mProperty_mRunBindingGeneration ;
  public: GGS_string mProperty_mTableViewBindingGeneration ;
  public: GGS_autoLayoutViewGraphicControllerBindingGeneration mProperty_mEBViewGraphicControllerBindingGeneration ;
  public: GGS_string mProperty_mConfiguratorName ;
  public: GGS_string mProperty_mOutletName ;
  public: GGS_bool mProperty_mOutletIsArray ;


//--- Default constructor
  public: cPtr_autoLayoutComputedViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutComputedViewInstructionGeneration (const GGS_lstring & in_mAutoLayoutViewClassName,
                                                            const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameterList,
                                                            const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFunctionCallList,
                                                            const GGS_autoLayoutRegularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                            const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                            const GGS_autolayoutRunBindingForGeneration & in_mRunBindingGeneration,
                                                            const GGS_string & in_mTableViewBindingGeneration,
                                                            const GGS_autoLayoutViewGraphicControllerBindingGeneration & in_mEBViewGraphicControllerBindingGeneration,
                                                            const GGS_string & in_mConfiguratorName,
                                                            const GGS_string & in_mOutletName,
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
// Phase 1: @autoLayoutComputedViewInstructionGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutComputedViewInstructionGeneration_2E_weak : public GGS_abstractViewInstructionGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutComputedViewInstructionGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutComputedViewInstructionGeneration_2E_weak (const class GGS_autoLayoutComputedViewInstructionGeneration & inSource) ;

  public: GGS_autoLayoutComputedViewInstructionGeneration_2E_weak & operator = (const class GGS_autoLayoutComputedViewInstructionGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutComputedViewInstructionGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutComputedViewInstructionGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutComputedViewInstructionGeneration bang_autoLayoutComputedViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutComputedViewInstructionGeneration unwrappedValue (void) const ;

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
  public: static GGS_autoLayoutComputedViewInstructionGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutComputedViewInstructionGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutComputedViewInstructionGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@autoLayoutViewInstructionGenerationFuncCallList generate'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generate (const class GGS_autoLayoutViewInstructionGenerationFuncCallList inObject,
                               const class GGS_string constin_inIndentation,
                               class GGS_string & io_ioStr,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateViewBuilder (const class cPtr_abstractViewGeneration * inObject,
                                                          const class GGS_bool constin_inPreferences,
                                                          const class GGS_string constin_inViewName,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingModelList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletBindingModelList final {
  public: DownEnumerator_outletBindingModelList (const class GGS_outletBindingModelList & inList) ;

  public: ~ DownEnumerator_outletBindingModelList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletBindingModelList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_outletBindingModelList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_outletBindingModelList (const DownEnumerator_outletBindingModelList &) = delete ;
  private: DownEnumerator_outletBindingModelList & operator = (const DownEnumerator_outletBindingModelList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletBindingModelList final {
  public: UpEnumerator_outletBindingModelList (const class GGS_outletBindingModelList & inList)  ;

  public: ~ UpEnumerator_outletBindingModelList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletBindingModelList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_outletBindingModelList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_outletBindingModelList (const UpEnumerator_outletBindingModelList &) = delete ;
  private: UpEnumerator_outletBindingModelList & operator = (const UpEnumerator_outletBindingModelList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @outletBindingModelList list
//--------------------------------------------------------------------------------------------------

class GGS_outletBindingModelList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_outletBindingModelList_2E_element> mArray ;

//--- Default constructor
  public: GGS_outletBindingModelList (void) ;

//--- Destructor
  public: virtual ~ GGS_outletBindingModelList (void) = default ;

//--- Copy
  public: GGS_outletBindingModelList (const GGS_outletBindingModelList &) = default ;
  public: GGS_outletBindingModelList & operator = (const GGS_outletBindingModelList &) = default ;

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
  public : inline GenericArray <GGS_outletBindingModelList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_outletBindingModelList subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_outletBindingModelList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_propertyKind & in_mKind,
                                                 const class GGS_location & in_mErrorLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingModelList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletBindingModelList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletBindingModelList class_func_listWithValue (const class GGS_propertyKind & inOperand0,
                                                                            const class GGS_location & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_outletBindingModelList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_propertyKind & inOperand0,
                                   const class GGS_location & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_outletBindingModelList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_outletBindingModelList add_operation (const GGS_outletBindingModelList & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_propertyKind constinArgument0,
                              class GGS_location constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_propertyKind constinArgument0,
                                     class GGS_location constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_propertyKind & outArgument0,
                                class GGS_location & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_propertyKind & outArgument0,
                               class GGS_location & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_propertyKind & outArgument0,
                                     class GGS_location & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMErrorLocationAtIndex (class GGS_location constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMKindAtIndex (class GGS_propertyKind constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_propertyKind & outArgument0,
                             class GGS_location & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_propertyKind & outArgument0,
                            class GGS_location & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mErrorLocationAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyKind getter_mKindAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_outletBindingModelList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletBindingModelList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletBindingModelList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletBindingModelList ;
  friend class DownEnumerator_outletBindingModelList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingModelList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingModelList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_outletBindingModelList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_propertyKind mProperty_mKind ;
  public: inline GGS_propertyKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GGS_location mProperty_mErrorLocation ;
  public: inline GGS_location readProperty_mErrorLocation (void) const {
    return mProperty_mErrorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_outletBindingModelList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMKind (const GGS_propertyKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletBindingModelList_2E_element (const GGS_propertyKind & in_mKind,
                                                 const GGS_location & in_mErrorLocation) ;

//--------------------------------- Copy constructor
  public: GGS_outletBindingModelList_2E_element (const GGS_outletBindingModelList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletBindingModelList_2E_element & operator = (const GGS_outletBindingModelList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingModelList_2E_element init_21__21_ (const class GGS_propertyKind & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletBindingModelList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingModelList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_transientDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_transientDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_transientDeclarationAST_2E_weak (const class GGS_transientDeclarationAST & inSource) ;

  public: GGS_transientDeclarationAST_2E_weak & operator = (const class GGS_transientDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_transientDeclarationAST_2E_weak init_nil (void) {
    GGS_transientDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_transientDeclarationAST bang_transientDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_transientDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_transientDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_transientDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientDependencyListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_transientDependencyListForGeneration final {
  public: DownEnumerator_transientDependencyListForGeneration (const class GGS_transientDependencyListForGeneration & inList) ;

  public: ~ DownEnumerator_transientDependencyListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_observablePropertyAST current_mDependency (LOCATION_ARGS) const ;
  public: class GGS_string current_mFunctionArgumentName (LOCATION_ARGS) const ;
  public: class GGS_string current_mFunctionArgumentTypeString (LOCATION_ARGS) const ;
  public: class GGS_string current_mDefaultValueAsString (LOCATION_ARGS) const ;
  public: class GGS_string current_mProtocolName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_transientDependencyListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_transientDependencyListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_transientDependencyListForGeneration (const DownEnumerator_transientDependencyListForGeneration &) = delete ;
  private: DownEnumerator_transientDependencyListForGeneration & operator = (const DownEnumerator_transientDependencyListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_transientDependencyListForGeneration final {
  public: UpEnumerator_transientDependencyListForGeneration (const class GGS_transientDependencyListForGeneration & inList)  ;

  public: ~ UpEnumerator_transientDependencyListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_observablePropertyAST current_mDependency (LOCATION_ARGS) const ;
  public: class GGS_string current_mFunctionArgumentName (LOCATION_ARGS) const ;
  public: class GGS_string current_mFunctionArgumentTypeString (LOCATION_ARGS) const ;
  public: class GGS_string current_mDefaultValueAsString (LOCATION_ARGS) const ;
  public: class GGS_string current_mProtocolName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_transientDependencyListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_transientDependencyListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_transientDependencyListForGeneration (const UpEnumerator_transientDependencyListForGeneration &) = delete ;
  private: UpEnumerator_transientDependencyListForGeneration & operator = (const UpEnumerator_transientDependencyListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @transientDependencyListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_transientDependencyListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_transientDependencyListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_transientDependencyListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_transientDependencyListForGeneration (void) = default ;

//--- Copy
  public: GGS_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration &) = default ;
  public: GGS_transientDependencyListForGeneration & operator = (const GGS_transientDependencyListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_transientDependencyListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_transientDependencyListForGeneration subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_transientDependencyListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_observablePropertyAST & in_mDependency,
                                                 const class GGS_string & in_mFunctionArgumentName,
                                                 const class GGS_string & in_mFunctionArgumentTypeString,
                                                 const class GGS_string & in_mDefaultValueAsString,
                                                 const class GGS_string & in_mProtocolName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientDependencyListForGeneration init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientDependencyListForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_transientDependencyListForGeneration class_func_listWithValue (const class GGS_observablePropertyAST & inOperand0,
                                                                                          const class GGS_string & inOperand1,
                                                                                          const class GGS_string & inOperand2,
                                                                                          const class GGS_string & inOperand3,
                                                                                          const class GGS_string & inOperand4
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_transientDependencyListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_observablePropertyAST & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_string & inOperand2,
                                   const class GGS_string & inOperand3,
                                   const class GGS_string & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_transientDependencyListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_transientDependencyListForGeneration add_operation (const GGS_transientDependencyListForGeneration & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_observablePropertyAST constinArgument0,
                              class GGS_string constinArgument1,
                              class GGS_string constinArgument2,
                              class GGS_string constinArgument3,
                              class GGS_string constinArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_observablePropertyAST constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_string constinArgument2,
                                     class GGS_string constinArgument3,
                                     class GGS_string constinArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_observablePropertyAST & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_string & outArgument2,
                                class GGS_string & outArgument3,
                                class GGS_string & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_observablePropertyAST & outArgument0,
                               class GGS_string & outArgument1,
                               class GGS_string & outArgument2,
                               class GGS_string & outArgument3,
                               class GGS_string & outArgument4,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_observablePropertyAST & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_string & outArgument2,
                                     class GGS_string & outArgument3,
                                     class GGS_string & outArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMDefaultValueAsStringAtIndex (class GGS_string constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMDependencyAtIndex (class GGS_observablePropertyAST constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMFunctionArgumentNameAtIndex (class GGS_string constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMFunctionArgumentTypeStringAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMProtocolNameAtIndex (class GGS_string constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_observablePropertyAST & outArgument0,
                             class GGS_string & outArgument1,
                             class GGS_string & outArgument2,
                             class GGS_string & outArgument3,
                             class GGS_string & outArgument4,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_observablePropertyAST & outArgument0,
                            class GGS_string & outArgument1,
                            class GGS_string & outArgument2,
                            class GGS_string & outArgument3,
                            class GGS_string & outArgument4,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mDefaultValueAsStringAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST getter_mDependencyAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mFunctionArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mFunctionArgumentTypeStringAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mProtocolNameAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_transientDependencyListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_transientDependencyListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_transientDependencyListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_transientDependencyListForGeneration ;
  friend class DownEnumerator_transientDependencyListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientDependencyListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_transientDependencyListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_observablePropertyAST mProperty_mDependency ;
  public: inline GGS_observablePropertyAST readProperty_mDependency (void) const {
    return mProperty_mDependency ;
  }

  public: GGS_string mProperty_mFunctionArgumentName ;
  public: inline GGS_string readProperty_mFunctionArgumentName (void) const {
    return mProperty_mFunctionArgumentName ;
  }

  public: GGS_string mProperty_mFunctionArgumentTypeString ;
  public: inline GGS_string readProperty_mFunctionArgumentTypeString (void) const {
    return mProperty_mFunctionArgumentTypeString ;
  }

  public: GGS_string mProperty_mDefaultValueAsString ;
  public: inline GGS_string readProperty_mDefaultValueAsString (void) const {
    return mProperty_mDefaultValueAsString ;
  }

  public: GGS_string mProperty_mProtocolName ;
  public: inline GGS_string readProperty_mProtocolName (void) const {
    return mProperty_mProtocolName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_transientDependencyListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDependency (const GGS_observablePropertyAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependency = inValue ;
  }

  public: inline void setter_setMFunctionArgumentName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionArgumentName = inValue ;
  }

  public: inline void setter_setMFunctionArgumentTypeString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionArgumentTypeString = inValue ;
  }

  public: inline void setter_setMDefaultValueAsString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultValueAsString = inValue ;
  }

  public: inline void setter_setMProtocolName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProtocolName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_transientDependencyListForGeneration_2E_element (const GGS_observablePropertyAST & in_mDependency,
                                                               const GGS_string & in_mFunctionArgumentName,
                                                               const GGS_string & in_mFunctionArgumentTypeString,
                                                               const GGS_string & in_mDefaultValueAsString,
                                                               const GGS_string & in_mProtocolName) ;

//--------------------------------- Copy constructor
  public: GGS_transientDependencyListForGeneration_2E_element (const GGS_transientDependencyListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_transientDependencyListForGeneration_2E_element & operator = (const GGS_transientDependencyListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientDependencyListForGeneration_2E_element init_21__21__21__21__21_ (const class GGS_observablePropertyAST & inOperand0,
                                                                                               const class GGS_string & inOperand1,
                                                                                               const class GGS_string & inOperand2,
                                                                                               const class GGS_string & inOperand3,
                                                                                               const class GGS_string & inOperand4,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientDependencyListForGeneration_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_transientPropertyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_transientPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_transientPropertyGeneration (const class cPtr_transientPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mClassName (void) const ;
  public: void setProperty_mClassName (const GGS_string & inValue) ;

  public: class GGS_typeKind readProperty_mType (void) const ;
  public: void setProperty_mType (const GGS_typeKind & inValue) ;

  public: class GGS_transientDependencyListForGeneration readProperty_mDependencyList (void) const ;
  public: void setProperty_mDependencyList (const GGS_transientDependencyListForGeneration & inValue) ;

  public: class GGS_bool readProperty_mGenerate (void) const ;
  public: void setProperty_mGenerate (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientPropertyGeneration init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           const class GGS_typeKind & inOperand2,
                                                                           const class GGS_transientDependencyListForGeneration & inOperand3,
                                                                           const class GGS_bool & inOperand4,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientPropertyGeneration extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @transientPropertyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_transientPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void transientPropertyGeneration_init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     const class GGS_typeKind & inOperand2,
                                                                     const class GGS_transientDependencyListForGeneration & inOperand3,
                                                                     const class GGS_bool & inOperand4,
                                                                     Compiler * inCompiler) ;


//--- Extension getter bindPropertyInSelectionController
  public: virtual class GGS_string getter_bindPropertyInSelectionController (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter configurationCode
  public: virtual class GGS_string getter_configurationCode (const class GGS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter declarationInSelectionControllerCode
  public: virtual class GGS_string getter_declarationInSelectionControllerCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GGS_string getter_initCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_string mProperty_mClassName ;
  public: GGS_typeKind mProperty_mType ;
  public: GGS_transientDependencyListForGeneration mProperty_mDependencyList ;
  public: GGS_bool mProperty_mGenerate ;


//--- Default constructor
  public: cPtr_transientPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_transientPropertyGeneration (const GGS_string & in_mPropertyName,
                                            const GGS_string & in_mClassName,
                                            const GGS_typeKind & in_mType,
                                            const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                            const GGS_bool & in_mGenerate,
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
// Phase 1: @transientPropertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_transientPropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_transientPropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_transientPropertyGeneration_2E_weak (const class GGS_transientPropertyGeneration & inSource) ;

  public: GGS_transientPropertyGeneration_2E_weak & operator = (const class GGS_transientPropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_transientPropertyGeneration_2E_weak init_nil (void) {
    GGS_transientPropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_transientPropertyGeneration bang_transientPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_transientPropertyGeneration unwrappedValue (void) const ;

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
  public: static GGS_transientPropertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_transientPropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientPropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientPropertyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_transientPropertyGenerationList final {
  public: DownEnumerator_transientPropertyGenerationList (const class GGS_transientPropertyGenerationList & inList) ;

  public: ~ DownEnumerator_transientPropertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_transientPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_transientPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_transientPropertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_transientPropertyGenerationList (const DownEnumerator_transientPropertyGenerationList &) = delete ;
  private: DownEnumerator_transientPropertyGenerationList & operator = (const DownEnumerator_transientPropertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_transientPropertyGenerationList final {
  public: UpEnumerator_transientPropertyGenerationList (const class GGS_transientPropertyGenerationList & inList)  ;

  public: ~ UpEnumerator_transientPropertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_transientPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_transientPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_transientPropertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_transientPropertyGenerationList (const UpEnumerator_transientPropertyGenerationList &) = delete ;
  private: UpEnumerator_transientPropertyGenerationList & operator = (const UpEnumerator_transientPropertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @transientPropertyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_transientPropertyGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_transientPropertyGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_transientPropertyGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_transientPropertyGenerationList (void) = default ;

//--- Copy
  public: GGS_transientPropertyGenerationList (const GGS_transientPropertyGenerationList &) = default ;
  public: GGS_transientPropertyGenerationList & operator = (const GGS_transientPropertyGenerationList &) = default ;

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
  public : inline GenericArray <GGS_transientPropertyGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_transientPropertyGenerationList subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_transientPropertyGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_transientPropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientPropertyGenerationList init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientPropertyGenerationList extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_transientPropertyGenerationList class_func_listWithValue (const class GGS_transientPropertyGeneration & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_transientPropertyGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_transientPropertyGeneration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_transientPropertyGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_transientPropertyGenerationList add_operation (const GGS_transientPropertyGenerationList & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_transientPropertyGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_transientPropertyGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_transientPropertyGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_transientPropertyGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_transientPropertyGeneration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyAtIndex (class GGS_transientPropertyGeneration constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_transientPropertyGeneration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_transientPropertyGeneration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_transientPropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_transientPropertyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_transientPropertyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_transientPropertyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_transientPropertyGenerationList ;
  friend class DownEnumerator_transientPropertyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientPropertyGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_transientPropertyGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_transientPropertyGeneration mProperty_mProperty ;
  public: inline GGS_transientPropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_transientPropertyGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GGS_transientPropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_transientPropertyGenerationList_2E_element (const GGS_transientPropertyGeneration & in_mProperty) ;

//--------------------------------- Copy constructor
  public: GGS_transientPropertyGenerationList_2E_element (const GGS_transientPropertyGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_transientPropertyGenerationList_2E_element & operator = (const GGS_transientPropertyGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientPropertyGenerationList_2E_element init_21_ (const class GGS_transientPropertyGeneration & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientPropertyGenerationList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@transientDependencyListForGeneration transientComputeFunctionCall' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_transientComputeFunctionCall (const class GGS_transientDependencyListForGeneration & inObject,
                                                               const class GGS_bool & constinArgument0,
                                                               const class GGS_string & constinArgument1,
                                                               const class GGS_string & constinArgument2,
                                                               const class GGS_string & constinArgument3,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@transientDependencyListForGeneration needs_unwSelf' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_needs_5F_unwSelf (const class GGS_transientDependencyListForGeneration & inObject,
                                                 const class GGS_bool & constinArgument0,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST generateAddObserverCall' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_generateAddObserverCall (const class GGS_observablePropertyAST & inObject,
                                                          const class GGS_bool & constinArgument0,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST generateRemoveObserverCall' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_generateRemoveObserverCall (const class GGS_observablePropertyAST & inObject,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientRoutineGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_transientRoutineGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_transientRoutineGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_transientRoutineGeneration (const class cPtr_transientRoutineGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mOwnerName (void) const ;

  public: class GGS_string readProperty_mTransientName (void) const ;

  public: class GGS_typeKind readProperty_mTransientType (void) const ;

  public: class GGS_string readProperty_mGeneratedFunctionNamePrefix (void) const ;

  public: class GGS_transientDependencyListForGeneration readProperty_mDependencyList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientRoutineGeneration init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          const class GGS_typeKind & inOperand2,
                                                                          const class GGS_string & inOperand3,
                                                                          const class GGS_transientDependencyListForGeneration & inOperand4,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientRoutineGeneration extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientRoutineGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientRoutineGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @transientRoutineGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_transientRoutineGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void transientRoutineGeneration_init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_typeKind & inOperand2,
                                                                    const class GGS_string & inOperand3,
                                                                    const class GGS_transientDependencyListForGeneration & inOperand4,
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
  public: GGS_string mProperty_mTransientName ;
  public: GGS_typeKind mProperty_mTransientType ;
  public: GGS_string mProperty_mGeneratedFunctionNamePrefix ;
  public: GGS_transientDependencyListForGeneration mProperty_mDependencyList ;


//--- Default constructor
  public: cPtr_transientRoutineGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_transientRoutineGeneration (const GGS_string & in_mOwnerName,
                                           const GGS_string & in_mTransientName,
                                           const GGS_typeKind & in_mTransientType,
                                           const GGS_string & in_mGeneratedFunctionNamePrefix,
                                           const GGS_transientDependencyListForGeneration & in_mDependencyList,
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
// Phase 1: @transientRoutineGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_transientRoutineGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_transientRoutineGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_transientRoutineGeneration_2E_weak (const class GGS_transientRoutineGeneration & inSource) ;

  public: GGS_transientRoutineGeneration_2E_weak & operator = (const class GGS_transientRoutineGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_transientRoutineGeneration_2E_weak init_nil (void) {
    GGS_transientRoutineGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_transientRoutineGeneration bang_transientRoutineGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_transientRoutineGeneration unwrappedValue (void) const ;

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
  public: static GGS_transientRoutineGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_transientRoutineGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientRoutineGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientRoutineGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientExternTypeList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_transientExternTypeList final {
  public: DownEnumerator_transientExternTypeList (const class GGS_transientExternTypeList & inList) ;

  public: ~ DownEnumerator_transientExternTypeList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsClass (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_transientExternTypeList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_transientExternTypeList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_transientExternTypeList (const DownEnumerator_transientExternTypeList &) = delete ;
  private: DownEnumerator_transientExternTypeList & operator = (const DownEnumerator_transientExternTypeList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_transientExternTypeList final {
  public: UpEnumerator_transientExternTypeList (const class GGS_transientExternTypeList & inList)  ;

  public: ~ UpEnumerator_transientExternTypeList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsClass (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_transientExternTypeList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_transientExternTypeList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_transientExternTypeList (const UpEnumerator_transientExternTypeList &) = delete ;
  private: UpEnumerator_transientExternTypeList & operator = (const UpEnumerator_transientExternTypeList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @transientExternTypeList list
//--------------------------------------------------------------------------------------------------

class GGS_transientExternTypeList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_transientExternTypeList_2E_element> mArray ;

//--- Default constructor
  public: GGS_transientExternTypeList (void) ;

//--- Destructor
  public: virtual ~ GGS_transientExternTypeList (void) = default ;

//--- Copy
  public: GGS_transientExternTypeList (const GGS_transientExternTypeList &) = default ;
  public: GGS_transientExternTypeList & operator = (const GGS_transientExternTypeList &) = default ;

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
  public : inline GenericArray <GGS_transientExternTypeList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_transientExternTypeList subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_transientExternTypeList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mTypeName,
                                                 const class GGS_bool & in_mIsClass
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientExternTypeList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientExternTypeList extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_transientExternTypeList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                             const class GGS_bool & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_transientExternTypeList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_bool & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_transientExternTypeList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_transientExternTypeList add_operation (const GGS_transientExternTypeList & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_bool constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_bool constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_bool & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_bool & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_bool & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsClassAtIndex (class GGS_bool constinArgument0,
                                          class GGS_uint constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMTypeNameAtIndex (class GGS_string constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_bool & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_bool & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsClassAtIndex (const class GGS_uint & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_transientExternTypeList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_transientExternTypeList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_transientExternTypeList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_transientExternTypeList ;
  friend class DownEnumerator_transientExternTypeList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientExternTypeList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientExternTypeList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_transientExternTypeList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTypeName ;
  public: inline GGS_string readProperty_mTypeName (void) const {
    return mProperty_mTypeName ;
  }

  public: GGS_bool mProperty_mIsClass ;
  public: inline GGS_bool readProperty_mIsClass (void) const {
    return mProperty_mIsClass ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_transientExternTypeList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeName = inValue ;
  }

  public: inline void setter_setMIsClass (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsClass = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_transientExternTypeList_2E_element (const GGS_string & in_mTypeName,
                                                  const GGS_bool & in_mIsClass) ;

//--------------------------------- Copy constructor
  public: GGS_transientExternTypeList_2E_element (const GGS_transientExternTypeList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_transientExternTypeList_2E_element & operator = (const GGS_transientExternTypeList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientExternTypeList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                      const class GGS_bool & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientExternTypeList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientExternTypeList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFileGeneration generateCodePhase1'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCodePhase_31_ (class cPtr_abstractFileGeneration * inObject,
                                                const class GGS_string constin_inOutputDirectory,
                                                const class GGS_generationStruct constin_inGenerationStruct,
                                                class GGS_stringset & io_ioUsedProtocolSet,
                                                class GGS_stringset & io_ioGeneratedFileSet,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityListForGeneratingEBManagedObjectContext list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_entityListForGeneratingEBManagedObjectContext final {
  public: DownEnumerator_entityListForGeneratingEBManagedObjectContext (const class GGS_entityListForGeneratingEBManagedObjectContext & inList) ;

  public: ~ DownEnumerator_entityListForGeneratingEBManagedObjectContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mEntityName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mObsoleteEntityNames (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_entityListForGeneratingEBManagedObjectContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_entityListForGeneratingEBManagedObjectContext_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_entityListForGeneratingEBManagedObjectContext (const DownEnumerator_entityListForGeneratingEBManagedObjectContext &) = delete ;
  private: DownEnumerator_entityListForGeneratingEBManagedObjectContext & operator = (const DownEnumerator_entityListForGeneratingEBManagedObjectContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_entityListForGeneratingEBManagedObjectContext final {
  public: UpEnumerator_entityListForGeneratingEBManagedObjectContext (const class GGS_entityListForGeneratingEBManagedObjectContext & inList)  ;

  public: ~ UpEnumerator_entityListForGeneratingEBManagedObjectContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mEntityName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mObsoleteEntityNames (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_entityListForGeneratingEBManagedObjectContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_entityListForGeneratingEBManagedObjectContext_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_entityListForGeneratingEBManagedObjectContext (const UpEnumerator_entityListForGeneratingEBManagedObjectContext &) = delete ;
  private: UpEnumerator_entityListForGeneratingEBManagedObjectContext & operator = (const UpEnumerator_entityListForGeneratingEBManagedObjectContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @entityListForGeneratingEBManagedObjectContext list
//--------------------------------------------------------------------------------------------------

class GGS_entityListForGeneratingEBManagedObjectContext : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_entityListForGeneratingEBManagedObjectContext_2E_element> mArray ;

//--- Default constructor
  public: GGS_entityListForGeneratingEBManagedObjectContext (void) ;

//--- Destructor
  public: virtual ~ GGS_entityListForGeneratingEBManagedObjectContext (void) = default ;

//--- Copy
  public: GGS_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext &) = default ;
  public: GGS_entityListForGeneratingEBManagedObjectContext & operator = (const GGS_entityListForGeneratingEBManagedObjectContext &) = default ;

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
  public : inline GenericArray <GGS_entityListForGeneratingEBManagedObjectContext_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_entityListForGeneratingEBManagedObjectContext subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_entityListForGeneratingEBManagedObjectContext (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mEntityName,
                                                 const class GGS_lstringlist & in_mObsoleteEntityNames
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityListForGeneratingEBManagedObjectContext init (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_entityListForGeneratingEBManagedObjectContext extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_entityListForGeneratingEBManagedObjectContext class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                   const class GGS_lstringlist & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_entityListForGeneratingEBManagedObjectContext inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_lstringlist & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_entityListForGeneratingEBManagedObjectContext add_operation (const GGS_entityListForGeneratingEBManagedObjectContext & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_lstringlist constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_lstringlist constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_lstringlist & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_lstringlist & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_lstringlist & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEntityNameAtIndex (class GGS_string constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMObsoleteEntityNamesAtIndex (class GGS_lstringlist constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_lstringlist & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_lstringlist & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mEntityNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_mObsoleteEntityNamesAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_entityListForGeneratingEBManagedObjectContext getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_entityListForGeneratingEBManagedObjectContext getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_entityListForGeneratingEBManagedObjectContext getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_entityListForGeneratingEBManagedObjectContext ;
  friend class DownEnumerator_entityListForGeneratingEBManagedObjectContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fileGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_fileGenerationList final {
  public: DownEnumerator_fileGenerationList (const class GGS_fileGenerationList & inList) ;

  public: ~ DownEnumerator_fileGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractFileGeneration current_mFileGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_fileGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_fileGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_fileGenerationList (const DownEnumerator_fileGenerationList &) = delete ;
  private: DownEnumerator_fileGenerationList & operator = (const DownEnumerator_fileGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_fileGenerationList final {
  public: UpEnumerator_fileGenerationList (const class GGS_fileGenerationList & inList)  ;

  public: ~ UpEnumerator_fileGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractFileGeneration current_mFileGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_fileGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_fileGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_fileGenerationList (const UpEnumerator_fileGenerationList &) = delete ;
  private: UpEnumerator_fileGenerationList & operator = (const UpEnumerator_fileGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @fileGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_fileGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_fileGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_fileGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_fileGenerationList (void) = default ;

//--- Copy
  public: GGS_fileGenerationList (const GGS_fileGenerationList &) = default ;
  public: GGS_fileGenerationList & operator = (const GGS_fileGenerationList &) = default ;

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
  public : inline GenericArray <GGS_fileGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_fileGenerationList subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_fileGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_abstractFileGeneration & in_mFileGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fileGenerationList init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fileGenerationList extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fileGenerationList class_func_listWithValue (const class GGS_abstractFileGeneration & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_fileGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_abstractFileGeneration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_fileGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_fileGenerationList add_operation (const GGS_fileGenerationList & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_abstractFileGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_abstractFileGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_abstractFileGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_abstractFileGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_abstractFileGeneration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFileGenerationAtIndex (class GGS_abstractFileGeneration constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_abstractFileGeneration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_abstractFileGeneration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_abstractFileGeneration getter_mFileGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_fileGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_fileGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_fileGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_fileGenerationList ;
  friend class DownEnumerator_fileGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fileGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @generationStruct struct
//--------------------------------------------------------------------------------------------------

class GGS_generationStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_validationStubRoutineListForGeneration mProperty_mValidationStubRoutineListForGeneration ;
  public: inline GGS_validationStubRoutineListForGeneration readProperty_mValidationStubRoutineListForGeneration (void) const {
    return mProperty_mValidationStubRoutineListForGeneration ;
  }

  public: GGS_fileGenerationList mProperty_mFileGenerationList ;
  public: inline GGS_fileGenerationList readProperty_mFileGenerationList (void) const {
    return mProperty_mFileGenerationList ;
  }

  public: GGS_entityListForGeneratingEBManagedObjectContext mProperty_mEntityListForGeneration ;
  public: inline GGS_entityListForGeneratingEBManagedObjectContext readProperty_mEntityListForGeneration (void) const {
    return mProperty_mEntityListForGeneration ;
  }

  public: GGS_bool mProperty_mGenerateEBManagedXibDocumentSwift ;
  public: inline GGS_bool readProperty_mGenerateEBManagedXibDocumentSwift (void) const {
    return mProperty_mGenerateEBManagedXibDocumentSwift ;
  }

  public: GGS_bool mProperty_mGenerateEBManagedAutoLayoutDocumentSwift ;
  public: inline GGS_bool readProperty_mGenerateEBManagedAutoLayoutDocumentSwift (void) const {
    return mProperty_mGenerateEBManagedAutoLayoutDocumentSwift ;
  }

  public: GGS_stringset mProperty_mNeededOutletClasses ;
  public: inline GGS_stringset readProperty_mNeededOutletClasses (void) const {
    return mProperty_mNeededOutletClasses ;
  }

  public: GGS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;
  public: inline GGS_mainXibDescriptorList readProperty_mMainXibDescriptorList (void) const {
    return mProperty_mMainXibDescriptorList ;
  }

  public: GGS_stringset mProperty_mToOneClassImplementations ;
  public: inline GGS_stringset readProperty_mToOneClassImplementations (void) const {
    return mProperty_mToOneClassImplementations ;
  }

  public: GGS_stringset mProperty_mToManyClassImplementations ;
  public: inline GGS_stringset readProperty_mToManyClassImplementations (void) const {
    return mProperty_mToManyClassImplementations ;
  }

  public: GGS_selectionControllerForGeneration mProperty_mSelectionControllerListForGeneration ;
  public: inline GGS_selectionControllerForGeneration readProperty_mSelectionControllerListForGeneration (void) const {
    return mProperty_mSelectionControllerListForGeneration ;
  }

  public: GGS_stringlist mProperty_mPropertyClassList ;
  public: inline GGS_stringlist readProperty_mPropertyClassList (void) const {
    return mProperty_mPropertyClassList ;
  }

  public: GGS_transientExternTypeList mProperty_mTransientPropertyTypeList ;
  public: inline GGS_transientExternTypeList readProperty_mTransientPropertyTypeList (void) const {
    return mProperty_mTransientPropertyTypeList ;
  }

  public: GGS_stringset mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ;
  public: inline GGS_stringset readProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ (void) const {
    return mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ;
  }

  public: GGS_stringset mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ;
  public: inline GGS_stringset readProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (void) const {
    return mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ;
  }

  public: GGS_stringset mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ;
  public: inline GGS_stringset readProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (void) const {
    return mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ;
  }

  public: GGS_stringset mProperty_mGenerateClass_5F_TransientArrayOf_5F_ ;
  public: inline GGS_stringset readProperty_mGenerateClass_5F_TransientArrayOf_5F_ (void) const {
    return mProperty_mGenerateClass_5F_TransientArrayOf_5F_ ;
  }

  public: GGS_stringset mProperty_mGenerateClass_5F_StoredArrayOf_5F_ ;
  public: inline GGS_stringset readProperty_mGenerateClass_5F_StoredArrayOf_5F_ (void) const {
    return mProperty_mGenerateClass_5F_StoredArrayOf_5F_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_generationStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValidationStubRoutineListForGeneration (const GGS_validationStubRoutineListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValidationStubRoutineListForGeneration = inValue ;
  }

  public: inline void setter_setMFileGenerationList (const GGS_fileGenerationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileGenerationList = inValue ;
  }

  public: inline void setter_setMEntityListForGeneration (const GGS_entityListForGeneratingEBManagedObjectContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntityListForGeneration = inValue ;
  }

  public: inline void setter_setMGenerateEBManagedXibDocumentSwift (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateEBManagedXibDocumentSwift = inValue ;
  }

  public: inline void setter_setMGenerateEBManagedAutoLayoutDocumentSwift (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = inValue ;
  }

  public: inline void setter_setMNeededOutletClasses (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeededOutletClasses = inValue ;
  }

  public: inline void setter_setMMainXibDescriptorList (const GGS_mainXibDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainXibDescriptorList = inValue ;
  }

  public: inline void setter_setMToOneClassImplementations (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mToOneClassImplementations = inValue ;
  }

  public: inline void setter_setMToManyClassImplementations (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mToManyClassImplementations = inValue ;
  }

  public: inline void setter_setMSelectionControllerListForGeneration (const GGS_selectionControllerForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectionControllerListForGeneration = inValue ;
  }

  public: inline void setter_setMPropertyClassList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyClassList = inValue ;
  }

  public: inline void setter_setMTransientPropertyTypeList (const GGS_transientExternTypeList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTransientPropertyTypeList = inValue ;
  }

  public: inline void setter_setMGenerateClass_5F_PreferencesArrayOf_5F_ (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ = inValue ;
  }

  public: inline void setter_setMGenerateClass_5F_ProxyArrayOf_5F_ (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ = inValue ;
  }

  public: inline void setter_setMGenerateClass_5F_TransientArrayOfSuperOf_5F_ (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ = inValue ;
  }

  public: inline void setter_setMGenerateClass_5F_TransientArrayOf_5F_ (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateClass_5F_TransientArrayOf_5F_ = inValue ;
  }

  public: inline void setter_setMGenerateClass_5F_StoredArrayOf_5F_ (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateClass_5F_StoredArrayOf_5F_ = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_generationStruct (const GGS_validationStubRoutineListForGeneration & in_mValidationStubRoutineListForGeneration,
                                const GGS_fileGenerationList & in_mFileGenerationList,
                                const GGS_entityListForGeneratingEBManagedObjectContext & in_mEntityListForGeneration,
                                const GGS_bool & in_mGenerateEBManagedXibDocumentSwift,
                                const GGS_bool & in_mGenerateEBManagedAutoLayoutDocumentSwift,
                                const GGS_stringset & in_mNeededOutletClasses,
                                const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                const GGS_stringset & in_mToOneClassImplementations,
                                const GGS_stringset & in_mToManyClassImplementations,
                                const GGS_selectionControllerForGeneration & in_mSelectionControllerListForGeneration,
                                const GGS_stringlist & in_mPropertyClassList,
                                const GGS_transientExternTypeList & in_mTransientPropertyTypeList,
                                const GGS_stringset & in_mGenerateClass_5F_PreferencesArrayOf_5F_,
                                const GGS_stringset & in_mGenerateClass_5F_ProxyArrayOf_5F_,
                                const GGS_stringset & in_mGenerateClass_5F_TransientArrayOfSuperOf_5F_,
                                const GGS_stringset & in_mGenerateClass_5F_TransientArrayOf_5F_,
                                const GGS_stringset & in_mGenerateClass_5F_StoredArrayOf_5F_) ;

//--------------------------------- Copy constructor
  public: GGS_generationStruct (const GGS_generationStruct & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_generationStruct & operator = (const GGS_generationStruct & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_generationStruct init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_generationStruct extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generationStruct ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFileGeneration generateCodePhase2'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCodePhase_32_ (class cPtr_abstractFileGeneration * inObject,
                                                const class GGS_string constin_inOutputDirectory,
                                                const class GGS_generationStruct constin_inGenerationStruct,
                                                const class GGS_stringset constin_inUsedProtocolSet,
                                                class GGS_stringset & io_ioGeneratedFileSet,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fileGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_fileGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractFileGeneration mProperty_mFileGeneration ;
  public: inline GGS_abstractFileGeneration readProperty_mFileGeneration (void) const {
    return mProperty_mFileGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fileGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFileGeneration (const GGS_abstractFileGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileGeneration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fileGenerationList_2E_element (const GGS_abstractFileGeneration & in_mFileGeneration) ;

//--------------------------------- Copy constructor
  public: GGS_fileGenerationList_2E_element (const GGS_fileGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fileGenerationList_2E_element & operator = (const GGS_fileGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fileGenerationList_2E_element init_21_ (const class GGS_abstractFileGeneration & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fileGenerationList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fileGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityListForGeneratingEBManagedObjectContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_entityListForGeneratingEBManagedObjectContext_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mEntityName ;
  public: inline GGS_string readProperty_mEntityName (void) const {
    return mProperty_mEntityName ;
  }

  public: GGS_lstringlist mProperty_mObsoleteEntityNames ;
  public: inline GGS_lstringlist readProperty_mObsoleteEntityNames (void) const {
    return mProperty_mObsoleteEntityNames ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_entityListForGeneratingEBManagedObjectContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEntityName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntityName = inValue ;
  }

  public: inline void setter_setMObsoleteEntityNames (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObsoleteEntityNames = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_entityListForGeneratingEBManagedObjectContext_2E_element (const GGS_string & in_mEntityName,
                                                                        const GGS_lstringlist & in_mObsoleteEntityNames) ;

//--------------------------------- Copy constructor
  public: GGS_entityListForGeneratingEBManagedObjectContext_2E_element (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_entityListForGeneratingEBManagedObjectContext_2E_element & operator = (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityListForGeneratingEBManagedObjectContext_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                            const class GGS_lstringlist & inOperand1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_entityListForGeneratingEBManagedObjectContext_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externFunctionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_externFunctionMap final {

  public: DownEnumerator_externFunctionMap (const class GGS_externFunctionMap & inMap) ;

  public: ~ DownEnumerator_externFunctionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_externFunctionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_externFunctionMap (const DownEnumerator_externFunctionMap &) = delete ;
  private: DownEnumerator_externFunctionMap & operator = (const DownEnumerator_externFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_externFunctionMap final {
  public: UpEnumerator_externFunctionMap (const class GGS_externFunctionMap & inMap)  ;

  public: ~ UpEnumerator_externFunctionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_externFunctionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_externFunctionMap (const UpEnumerator_externFunctionMap &) = delete ;
  private: UpEnumerator_externFunctionMap & operator = (const UpEnumerator_externFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_externFunctionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_externFunctionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_externFunctionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_externFunctionMap (void) ;

//--- Handle copy
  public: GGS_externFunctionMap (const GGS_externFunctionMap & inSource) ;
  public: GGS_externFunctionMap & operator = (const GGS_externFunctionMap & inSource) ;

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
  protected: void performInsert (const class GGS_externFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externFunctionMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externFunctionMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externFunctionMap class_func_mapWithMapToOverride (const class GGS_externFunctionMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_externFunctionMap getter_overriddenMap (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_externFunctionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_externFunctionMap ;
  friend class DownEnumerator_externFunctionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externFunctionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_externFunctionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_externFunctionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externFunctionMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_externFunctionMap_2E_element (const GGS_externFunctionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externFunctionMap_2E_element & operator = (const GGS_externFunctionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externFunctionMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externFunctionMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: externFunctionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_externFunctionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_externFunctionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_externFunctionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_externFunctionMap_2E_element_3F_ (const GGS_externFunctionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_externFunctionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_externFunctionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_externFunctionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumerationDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumerationDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumerationDeclarationAST_2E_weak (const class GGS_enumerationDeclarationAST & inSource) ;

  public: GGS_enumerationDeclarationAST_2E_weak & operator = (const class GGS_enumerationDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumerationDeclarationAST_2E_weak init_nil (void) {
    GGS_enumerationDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumerationDeclarationAST bang_enumerationDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumerationDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_enumerationDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumerationDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumerationDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumConstantMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_enumConstantMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumConstantMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumConstantMap_2E_element (const GGS_lstring & in_lkey,
                                          const GGS_uint & in_mIndex) ;

//--------------------------------- Copy constructor
  public: GGS_enumConstantMap_2E_element (const GGS_enumConstantMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumConstantMap_2E_element & operator = (const GGS_enumConstantMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumConstantMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_uint & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumConstantMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumConstantMap_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: enumConstantMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_enumConstantMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_enumConstantMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_enumConstantMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_enumConstantMap_2E_element_3F_ (const GGS_enumConstantMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_enumConstantMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_enumConstantMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_enumConstantMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumConstantMap_2E_element_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantMap_2E_element_3F_ ;

