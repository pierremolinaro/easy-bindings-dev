#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak ;

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
  public: void setProperty_mValue (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalIntMultipleBindingExpressionAST init_21_ (const class GGS_luint & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalIntMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method analyzeExpressionForMultipleBinding
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2E_weak ;

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
  public: void setProperty_mBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_negateBooleanMultipleBindingExpressionAST init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_negateBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method analyzeExpressionForMultipleBinding
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2E_weak ;

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
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

  public: class GGS_multipleBindingComparisonAST readProperty_mOperator (void) const ;
  public: void setProperty_mOperator (const GGS_multipleBindingComparisonAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_comparisonMultipleBindingExpressionAST init_21__21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                              const class GGS_multipleBindingComparisonAST & inOperand1,
                                                                              const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_comparisonMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;

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


//--- Extension method analyzeExpressionForMultipleBinding
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2E_weak ;

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
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_andBooleanMultipleBindingExpressionAST init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                          const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_andBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method analyzeExpressionForMultipleBinding
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2E_weak ;

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
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_orBooleanMultipleBindingExpressionAST init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                         const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_orBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method analyzeExpressionForMultipleBinding
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2E_weak ;

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
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_xorBooleanMultipleBindingExpressionAST init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                          const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_xorBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method analyzeExpressionForMultipleBinding
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2E_weak ;

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
  public: void setProperty_mProperty (const GGS_observablePropertyAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyInMultipleBindingExpressionAST init_21_ (const class GGS_observablePropertyAST & inOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyInMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method analyzeExpressionForMultipleBinding
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
// Phase 1: @semanticContext struct
//--------------------------------------------------------------------------------------------------

class GGS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_classMap mProperty_mClassMap ;
  public: inline GGS_classMap readProperty_mClassMap (void) const {
    return mProperty_mClassMap ;
  }

  public: GGS_outletClassMap mProperty_mOutletClassMap ;
  public: inline GGS_outletClassMap readProperty_mOutletClassMap (void) const {
    return mProperty_mOutletClassMap ;
  }

  public: GGS_bindingSpecificationMap mProperty_mBindingSpecificationMap ;
  public: inline GGS_bindingSpecificationMap readProperty_mBindingSpecificationMap (void) const {
    return mProperty_mBindingSpecificationMap ;
  }

  public: GGS_autolayoutViewClassMap mProperty_mAutolayoutViewClassMap ;
  public: inline GGS_autolayoutViewClassMap readProperty_mAutolayoutViewClassMap (void) const {
    return mProperty_mAutolayoutViewClassMap ;
  }

  public: GGS_autoLayoutBindingSpecificationMap mProperty_mAutoLayoutBindingSpecificationMap ;
  public: inline GGS_autoLayoutBindingSpecificationMap readProperty_mAutoLayoutBindingSpecificationMap (void) const {
    return mProperty_mAutoLayoutBindingSpecificationMap ;
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
  public: GGS_semanticContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMClassMap (const GGS_classMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mClassMap = inValue ;
  }

  public: inline void setter_setMOutletClassMap (const GGS_outletClassMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassMap = inValue ;
  }

  public: inline void setter_setMBindingSpecificationMap (const GGS_bindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingSpecificationMap = inValue ;
  }

  public: inline void setter_setMAutolayoutViewClassMap (const GGS_autolayoutViewClassMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutolayoutViewClassMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutBindingSpecificationMap = inValue ;
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
  public: GGS_semanticContext (const GGS_classMap & in_mClassMap,
                               const GGS_outletClassMap & in_mOutletClassMap,
                               const GGS_bindingSpecificationMap & in_mBindingSpecificationMap,
                               const GGS_autolayoutViewClassMap & in_mAutolayoutViewClassMap,
                               const GGS_autoLayoutBindingSpecificationMap & in_mAutoLayoutBindingSpecificationMap,
                               const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutVStackFunctionMap,
                               const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutHStackFunctionMap,
                               const GGS_enumerationFunctionListAST & in_mEnumerationFunctionListAST) ;

//--------------------------------- Copy constructor
  public: GGS_semanticContext (const GGS_semanticContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_semanticContext & operator = (const GGS_semanticContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticContext init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticContext extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_expressionString (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassBindingSpecificationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletClassBindingSpecificationList final {
  public: DownEnumerator_outletClassBindingSpecificationList (const class GGS_outletClassBindingSpecificationList & inList) ;

  public: ~ DownEnumerator_outletClassBindingSpecificationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletClassBindingSpecificationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_outletClassBindingSpecificationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_outletClassBindingSpecificationList (const DownEnumerator_outletClassBindingSpecificationList &) = delete ;
  private: DownEnumerator_outletClassBindingSpecificationList & operator = (const DownEnumerator_outletClassBindingSpecificationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletClassBindingSpecificationList final {
  public: UpEnumerator_outletClassBindingSpecificationList (const class GGS_outletClassBindingSpecificationList & inList)  ;

  public: ~ UpEnumerator_outletClassBindingSpecificationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletClassBindingSpecificationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_outletClassBindingSpecificationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_outletClassBindingSpecificationList (const UpEnumerator_outletClassBindingSpecificationList &) = delete ;
  private: UpEnumerator_outletClassBindingSpecificationList & operator = (const UpEnumerator_outletClassBindingSpecificationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @outletClassBindingSpecificationList list
//--------------------------------------------------------------------------------------------------

class GGS_outletClassBindingSpecificationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_outletClassBindingSpecificationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_outletClassBindingSpecificationList (void) ;

//--- Destructor
  public: virtual ~ GGS_outletClassBindingSpecificationList (void) = default ;

//--- Copy
  public: GGS_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList &) = default ;
  public: GGS_outletClassBindingSpecificationList & operator = (const GGS_outletClassBindingSpecificationList &) = default ;

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
  public : inline GenericArray <GGS_outletClassBindingSpecificationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_outletClassBindingSpecificationList subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_outletClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOutletClassName,
                                                 const class GGS_lstring & in_mBindingName,
                                                 const class GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                 const class GGS_controllerBindingOptionList & in_mBindingOptionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassBindingSpecificationList init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassBindingSpecificationList extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassBindingSpecificationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_lstring & inOperand1,
                                                                                         const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                         const class GGS_controllerBindingOptionList & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_outletClassBindingSpecificationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                    const class GGS_controllerBindingOptionList & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_outletClassBindingSpecificationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_outletClassBindingSpecificationList add_operation (const GGS_outletClassBindingSpecificationList & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_outletClassBindingSpecificationModelList constinArgument2,
                                               class GGS_controllerBindingOptionList constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_outletClassBindingSpecificationModelList constinArgument2,
                                                      class GGS_controllerBindingOptionList constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                                 class GGS_controllerBindingOptionList & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                                class GGS_controllerBindingOptionList & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                                      class GGS_controllerBindingOptionList & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionListAtIndex (class GGS_controllerBindingOptionList constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletClassBindingSpecificationModelListAtIndex (class GGS_outletClassBindingSpecificationModelList constinArgument0,
                                                                                            class GGS_uint constinArgument1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletClassNameAtIndex (class GGS_lstring constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                              class GGS_controllerBindingOptionList & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                             class GGS_controllerBindingOptionList & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionList getter_mBindingOptionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationModelList getter_mOutletClassBindingSpecificationModelListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOutletClassNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletClassBindingSpecificationList ;
  friend class DownEnumerator_outletClassBindingSpecificationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @validationStubRoutineListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_validationStubRoutineListForGeneration final {
  public: DownEnumerator_validationStubRoutineListForGeneration (const class GGS_validationStubRoutineListForGeneration & inList) ;

  public: ~ DownEnumerator_validationStubRoutineListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mObjectTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mModelName (LOCATION_ARGS) const ;
  public: class GGS_string current_mModelTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_validationStubRoutineListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_validationStubRoutineListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_validationStubRoutineListForGeneration (const DownEnumerator_validationStubRoutineListForGeneration &) = delete ;
  private: DownEnumerator_validationStubRoutineListForGeneration & operator = (const DownEnumerator_validationStubRoutineListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_validationStubRoutineListForGeneration final {
  public: UpEnumerator_validationStubRoutineListForGeneration (const class GGS_validationStubRoutineListForGeneration & inList)  ;

  public: ~ UpEnumerator_validationStubRoutineListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mObjectTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mModelName (LOCATION_ARGS) const ;
  public: class GGS_string current_mModelTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_validationStubRoutineListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_validationStubRoutineListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_validationStubRoutineListForGeneration (const UpEnumerator_validationStubRoutineListForGeneration &) = delete ;
  private: UpEnumerator_validationStubRoutineListForGeneration & operator = (const UpEnumerator_validationStubRoutineListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @validationStubRoutineListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_validationStubRoutineListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_validationStubRoutineListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_validationStubRoutineListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_validationStubRoutineListForGeneration (void) = default ;

//--- Copy
  public: GGS_validationStubRoutineListForGeneration (const GGS_validationStubRoutineListForGeneration &) = default ;
  public: GGS_validationStubRoutineListForGeneration & operator = (const GGS_validationStubRoutineListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_validationStubRoutineListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_validationStubRoutineListForGeneration subList (const int32_t inStart,
                                                               const int32_t inLength,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_validationStubRoutineListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mObjectTypeName,
                                                 const class GGS_string & in_mModelName,
                                                 const class GGS_string & in_mModelTypeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_validationStubRoutineListForGeneration init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_validationStubRoutineListForGeneration extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_validationStubRoutineListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                            const class GGS_string & inOperand1,
                                                                                            const class GGS_string & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_validationStubRoutineListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_validationStubRoutineListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_validationStubRoutineListForGeneration add_operation (const GGS_validationStubRoutineListForGeneration & inOperand,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelNameAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelTypeNameAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObjectTypeNameAtIndex (class GGS_string constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mModelNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mModelTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mObjectTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_validationStubRoutineListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_validationStubRoutineListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_validationStubRoutineListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_validationStubRoutineListForGeneration ;
  friend class DownEnumerator_validationStubRoutineListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @validationStubRoutineListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_validationStubRoutineListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mObjectTypeName ;
  public: inline GGS_string readProperty_mObjectTypeName (void) const {
    return mProperty_mObjectTypeName ;
  }

  public: GGS_string mProperty_mModelName ;
  public: inline GGS_string readProperty_mModelName (void) const {
    return mProperty_mModelName ;
  }

  public: GGS_string mProperty_mModelTypeName ;
  public: inline GGS_string readProperty_mModelTypeName (void) const {
    return mProperty_mModelTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_validationStubRoutineListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMObjectTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectTypeName = inValue ;
  }

  public: inline void setter_setMModelName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelName = inValue ;
  }

  public: inline void setter_setMModelTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_validationStubRoutineListForGeneration_2E_element (const GGS_string & in_mObjectTypeName,
                                                                 const GGS_string & in_mModelName,
                                                                 const GGS_string & in_mModelTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_validationStubRoutineListForGeneration_2E_element (const GGS_validationStubRoutineListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_validationStubRoutineListForGeneration_2E_element & operator = (const GGS_validationStubRoutineListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_validationStubRoutineListForGeneration_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                         const class GGS_string & inOperand1,
                                                                                         const class GGS_string & inOperand2,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_validationStubRoutineListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2E_element ;

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
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
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

  public: VIRTUAL_IN_DEBUG class GGS_externFunctionMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_externFunctionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionMap_2E_element_3F_ ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerBoundModelAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerBoundModelAST class_func_rootToManyRelationship (const class GGS_lstring & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_arrayControllerBoundModelAST class_func_selfToManyRelationship (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractRootToManyRelationship (class GGS_lstring & outArgument0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ getter_getRootToManyRelationship (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRootToManyRelationship (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfToManyRelationship (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerDeclarationAST extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;

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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayControllerBindingListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_arrayControllerBindingListAST final {
  public: DownEnumerator_arrayControllerBindingListAST (const class GGS_arrayControllerBindingListAST & inList) ;

  public: ~ DownEnumerator_arrayControllerBindingListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mControllerName (LOCATION_ARGS) const ;
  public: class GGS_multipleBindingDescriptor current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_arrayControllerBindingListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_arrayControllerBindingListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_arrayControllerBindingListAST (const DownEnumerator_arrayControllerBindingListAST &) = delete ;
  private: DownEnumerator_arrayControllerBindingListAST & operator = (const DownEnumerator_arrayControllerBindingListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_arrayControllerBindingListAST final {
  public: UpEnumerator_arrayControllerBindingListAST (const class GGS_arrayControllerBindingListAST & inList)  ;

  public: ~ UpEnumerator_arrayControllerBindingListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mControllerName (LOCATION_ARGS) const ;
  public: class GGS_multipleBindingDescriptor current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_arrayControllerBindingListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_arrayControllerBindingListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_arrayControllerBindingListAST (const UpEnumerator_arrayControllerBindingListAST &) = delete ;
  private: UpEnumerator_arrayControllerBindingListAST & operator = (const UpEnumerator_arrayControllerBindingListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @arrayControllerBindingListAST list
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerBindingListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_arrayControllerBindingListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_arrayControllerBindingListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_arrayControllerBindingListAST (void) = default ;

//--- Copy
  public: GGS_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST &) = default ;
  public: GGS_arrayControllerBindingListAST & operator = (const GGS_arrayControllerBindingListAST &) = default ;

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
  public : inline GenericArray <GGS_arrayControllerBindingListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_arrayControllerBindingListAST subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_arrayControllerBindingListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mControllerName,
                                                 const class GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayControllerBindingListAST init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerBindingListAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerBindingListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_multipleBindingDescriptor & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_arrayControllerBindingListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_multipleBindingDescriptor & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_arrayControllerBindingListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_arrayControllerBindingListAST add_operation (const GGS_arrayControllerBindingListAST & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_multipleBindingDescriptor constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_multipleBindingDescriptor constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_multipleBindingDescriptor & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_multipleBindingDescriptor & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_multipleBindingDescriptor & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControllerNameAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHiddenSelectionViewBindingDescriptorAtIndex (class GGS_multipleBindingDescriptor constinArgument0,
                                                                                        class GGS_uint constinArgument1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_multipleBindingDescriptor & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_multipleBindingDescriptor & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_multipleBindingDescriptor getter_mHiddenSelectionViewBindingDescriptorAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_arrayControllerBindingListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_arrayControllerBindingListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_arrayControllerBindingListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_arrayControllerBindingListAST ;
  friend class DownEnumerator_arrayControllerBindingListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayControllerBindingListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerBindingListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mControllerName ;
  public: inline GGS_lstring readProperty_mControllerName (void) const {
    return mProperty_mControllerName ;
  }

  public: GGS_multipleBindingDescriptor mProperty_mHiddenSelectionViewBindingDescriptor ;
  public: inline GGS_multipleBindingDescriptor readProperty_mHiddenSelectionViewBindingDescriptor (void) const {
    return mProperty_mHiddenSelectionViewBindingDescriptor ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_arrayControllerBindingListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControllerName = inValue ;
  }

  public: inline void setter_setMHiddenSelectionViewBindingDescriptor (const GGS_multipleBindingDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHiddenSelectionViewBindingDescriptor = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_arrayControllerBindingListAST_2E_element (const GGS_lstring & in_mControllerName,
                                                        const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor) ;

//--------------------------------- Copy constructor
  public: GGS_arrayControllerBindingListAST_2E_element (const GGS_arrayControllerBindingListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_arrayControllerBindingListAST_2E_element & operator = (const GGS_arrayControllerBindingListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayControllerBindingListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_multipleBindingDescriptor & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerBindingListAST_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEntityArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTransientArray (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerGeneration_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_outletClassDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_outletClassDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outletClassDeclarationAST (const class cPtr_outletClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mUserDefined (void) const ;
  public: void setProperty_mUserDefined (const GGS_bool & inValue) ;

  public: class GGS_lstring readProperty_mSuperClassName (void) const ;
  public: void setProperty_mSuperClassName (const GGS_lstring & inValue) ;

  public: class GGS_bool readProperty_mHasRunAction (void) const ;
  public: void setProperty_mHasRunAction (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHasEnabled (void) const ;
  public: void setProperty_mHasEnabled (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHandlesTableValueBinding (void) const ;
  public: void setProperty_mHandlesTableValueBinding (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHandlesGraphicControllerBinding (void) const ;
  public: void setProperty_mHandlesGraphicControllerBinding (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHasHidden (void) const ;
  public: void setProperty_mHasHidden (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassDeclarationAST init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_bool & inOperand1,
                                                                                     const class GGS_lstring & inOperand2,
                                                                                     const class GGS_bool & inOperand3,
                                                                                     const class GGS_bool & inOperand4,
                                                                                     const class GGS_bool & inOperand5,
                                                                                     const class GGS_bool & inOperand6,
                                                                                     const class GGS_bool & inOperand7,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassDeclarationAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outletClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @outletClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_outletClassDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outletClassDeclarationAST_init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_bool & inOperand1,
                                                                               const class GGS_lstring & inOperand2,
                                                                               const class GGS_bool & inOperand3,
                                                                               const class GGS_bool & inOperand4,
                                                                               const class GGS_bool & inOperand5,
                                                                               const class GGS_bool & inOperand6,
                                                                               const class GGS_bool & inOperand7,
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
  public: GGS_bool mProperty_mUserDefined ;
  public: GGS_lstring mProperty_mSuperClassName ;
  public: GGS_bool mProperty_mHasRunAction ;
  public: GGS_bool mProperty_mHasEnabled ;
  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: GGS_bool mProperty_mHandlesGraphicControllerBinding ;
  public: GGS_bool mProperty_mHasHidden ;


//--- Default constructor
  public: cPtr_outletClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outletClassDeclarationAST (const GGS_lstring & in_mClassName,
                                          const GGS_bool & in_mUserDefined,
                                          const GGS_lstring & in_mSuperClassName,
                                          const GGS_bool & in_mHasRunAction,
                                          const GGS_bool & in_mHasEnabled,
                                          const GGS_bool & in_mHandlesTableValueBinding,
                                          const GGS_bool & in_mHandlesGraphicControllerBinding,
                                          const GGS_bool & in_mHasHidden,
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
// Phase 1: @outletClassDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_outletClassDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_outletClassDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_outletClassDeclarationAST_2E_weak (const class GGS_outletClassDeclarationAST & inSource) ;

  public: GGS_outletClassDeclarationAST_2E_weak & operator = (const class GGS_outletClassDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_outletClassDeclarationAST_2E_weak init_nil (void) {
    GGS_outletClassDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_outletClassDeclarationAST bang_outletClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_outletClassDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_outletClassDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outletClassDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutOutletLinkerList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_astAutoLayoutOutletLinkerList final {
  public: DownEnumerator_astAutoLayoutOutletLinkerList (const class GGS_astAutoLayoutOutletLinkerList & inList) ;

  public: ~ DownEnumerator_astAutoLayoutOutletLinkerList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLinkerName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mOutletNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutOutletLinkerList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astAutoLayoutOutletLinkerList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astAutoLayoutOutletLinkerList (const DownEnumerator_astAutoLayoutOutletLinkerList &) = delete ;
  private: DownEnumerator_astAutoLayoutOutletLinkerList & operator = (const DownEnumerator_astAutoLayoutOutletLinkerList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astAutoLayoutOutletLinkerList final {
  public: UpEnumerator_astAutoLayoutOutletLinkerList (const class GGS_astAutoLayoutOutletLinkerList & inList)  ;

  public: ~ UpEnumerator_astAutoLayoutOutletLinkerList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLinkerName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mOutletNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutOutletLinkerList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astAutoLayoutOutletLinkerList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astAutoLayoutOutletLinkerList (const UpEnumerator_astAutoLayoutOutletLinkerList &) = delete ;
  private: UpEnumerator_astAutoLayoutOutletLinkerList & operator = (const UpEnumerator_astAutoLayoutOutletLinkerList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @astAutoLayoutOutletLinkerList list
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutOutletLinkerList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_astAutoLayoutOutletLinkerList_2E_element> mArray ;

//--- Default constructor
  public: GGS_astAutoLayoutOutletLinkerList (void) ;

//--- Destructor
  public: virtual ~ GGS_astAutoLayoutOutletLinkerList (void) = default ;

//--- Copy
  public: GGS_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList &) = default ;
  public: GGS_astAutoLayoutOutletLinkerList & operator = (const GGS_astAutoLayoutOutletLinkerList &) = default ;

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
  public : inline GenericArray <GGS_astAutoLayoutOutletLinkerList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_astAutoLayoutOutletLinkerList subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_astAutoLayoutOutletLinkerList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLinkerName,
                                                 const class GGS_lstringlist & in_mOutletNameList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutOutletLinkerList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutOutletLinkerList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutOutletLinkerList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstringlist & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_astAutoLayoutOutletLinkerList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstringlist & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_astAutoLayoutOutletLinkerList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_astAutoLayoutOutletLinkerList add_operation (const GGS_astAutoLayoutOutletLinkerList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstringlist constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstringlist & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLinkerNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameListAtIndex (class GGS_lstringlist constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mLinkerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mOutletNameListAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutOutletLinkerList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutOutletLinkerList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutOutletLinkerList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astAutoLayoutOutletLinkerList ;
  friend class DownEnumerator_astAutoLayoutOutletLinkerList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutOutletLinkerList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutOutletLinkerList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLinkerName ;
  public: inline GGS_lstring readProperty_mLinkerName (void) const {
    return mProperty_mLinkerName ;
  }

  public: GGS_lstringlist mProperty_mOutletNameList ;
  public: inline GGS_lstringlist readProperty_mOutletNameList (void) const {
    return mProperty_mOutletNameList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutOutletLinkerList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLinkerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLinkerName = inValue ;
  }

  public: inline void setter_setMOutletNameList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletNameList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutOutletLinkerList_2E_element (const GGS_lstring & in_mLinkerName,
                                                        const GGS_lstringlist & in_mOutletNameList) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutOutletLinkerList_2E_element (const GGS_astAutoLayoutOutletLinkerList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutOutletLinkerList_2E_element & operator = (const GGS_astAutoLayoutOutletLinkerList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutOutletLinkerList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lstringlist & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutOutletLinkerList_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutDocumentDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutDocumentDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_autoLayoutDocumentDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutDocumentDeclarationAST (const class cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRootEntityName (void) const ;

  public: class GGS_lstring readProperty_mMainViewName (void) const ;

  public: class GGS_outletDeclarationList readProperty_mOutletDeclarationList (void) const ;

  public: class GGS_lstringlist readProperty_mActionDeclarationList (void) const ;

  public: class GGS_arrayControllerBindingListAST readProperty_mArrayControllerBindingListAST (void) const ;

  public: class GGS_astViewDeclarationList readProperty_mViewDeclarationList (void) const ;

  public: class GGS_string readProperty_mCustomSuperClassName (void) const ;

  public: class GGS_astAutoLayoutOutletLinkerList readProperty_mOutletLinkerList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutDocumentDeclarationAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_lstring & inOperand2,
                                                                                                const class GGS_outletDeclarationList & inOperand3,
                                                                                                const class GGS_lstringlist & inOperand4,
                                                                                                const class GGS_arrayControllerBindingListAST & inOperand5,
                                                                                                const class GGS_astViewDeclarationList & inOperand6,
                                                                                                const class GGS_string & inOperand7,
                                                                                                const class GGS_astAutoLayoutOutletLinkerList & inOperand8,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutDocumentDeclarationAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDocumentDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutDocumentDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDocumentDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutDocumentDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_lstring & inOperand2,
                                                                                          const class GGS_outletDeclarationList & inOperand3,
                                                                                          const class GGS_lstringlist & inOperand4,
                                                                                          const class GGS_arrayControllerBindingListAST & inOperand5,
                                                                                          const class GGS_astViewDeclarationList & inOperand6,
                                                                                          const class GGS_string & inOperand7,
                                                                                          const class GGS_astAutoLayoutOutletLinkerList & inOperand8,
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

//--- Extension method fourthAnalysisPhase
  public: virtual void method_fourthAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mMainViewName ;
  public: GGS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public: GGS_lstringlist mProperty_mActionDeclarationList ;
  public: GGS_arrayControllerBindingListAST mProperty_mArrayControllerBindingListAST ;
  public: GGS_astViewDeclarationList mProperty_mViewDeclarationList ;
  public: GGS_string mProperty_mCustomSuperClassName ;
  public: GGS_astAutoLayoutOutletLinkerList mProperty_mOutletLinkerList ;


//--- Default constructor
  public: cPtr_autoLayoutDocumentDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutDocumentDeclarationAST (const GGS_lstring & in_mClassName,
                                                 const GGS_lstring & in_mRootEntityName,
                                                 const GGS_lstring & in_mMainViewName,
                                                 const GGS_outletDeclarationList & in_mOutletDeclarationList,
                                                 const GGS_lstringlist & in_mActionDeclarationList,
                                                 const GGS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                 const GGS_astViewDeclarationList & in_mViewDeclarationList,
                                                 const GGS_string & in_mCustomSuperClassName,
                                                 const GGS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList,
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
// Phase 1: @autoLayoutDocumentDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutDocumentDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutDocumentDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutDocumentDeclarationAST_2E_weak (const class GGS_autoLayoutDocumentDeclarationAST & inSource) ;

  public: GGS_autoLayoutDocumentDeclarationAST_2E_weak & operator = (const class GGS_autoLayoutDocumentDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutDocumentDeclarationAST_2E_weak init_nil (void) {
    GGS_autoLayoutDocumentDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutDocumentDeclarationAST bang_autoLayoutDocumentDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutDocumentDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_autoLayoutDocumentDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutDocumentDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDocumentDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutOutletLinkerGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutOutletLinkerGenerationList final {
  public: DownEnumerator_autoLayoutOutletLinkerGenerationList (const class GGS_autoLayoutOutletLinkerGenerationList & inList) ;

  public: ~ DownEnumerator_autoLayoutOutletLinkerGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mLinkerName (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mOutletNameAndTypeNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutOutletLinkerGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutOutletLinkerGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutOutletLinkerGenerationList (const DownEnumerator_autoLayoutOutletLinkerGenerationList &) = delete ;
  private: DownEnumerator_autoLayoutOutletLinkerGenerationList & operator = (const DownEnumerator_autoLayoutOutletLinkerGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutOutletLinkerGenerationList final {
  public: UpEnumerator_autoLayoutOutletLinkerGenerationList (const class GGS_autoLayoutOutletLinkerGenerationList & inList)  ;

  public: ~ UpEnumerator_autoLayoutOutletLinkerGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mLinkerName (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mOutletNameAndTypeNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutOutletLinkerGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutOutletLinkerGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutOutletLinkerGenerationList (const UpEnumerator_autoLayoutOutletLinkerGenerationList &) = delete ;
  private: UpEnumerator_autoLayoutOutletLinkerGenerationList & operator = (const UpEnumerator_autoLayoutOutletLinkerGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutOutletLinkerGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutOutletLinkerGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutOutletLinkerGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutOutletLinkerGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutOutletLinkerGenerationList (void) = default ;

//--- Copy
  public: GGS_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList &) = default ;
  public: GGS_autoLayoutOutletLinkerGenerationList & operator = (const GGS_autoLayoutOutletLinkerGenerationList &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutOutletLinkerGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutOutletLinkerGenerationList subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutOutletLinkerGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mLinkerName,
                                                 const class GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutOutletLinkerGenerationList init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutOutletLinkerGenerationList extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutOutletLinkerGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                          const class GGS__32_stringlist & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutOutletLinkerGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS__32_stringlist & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutOutletLinkerGenerationList add_operation (const GGS_autoLayoutOutletLinkerGenerationList & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS__32_stringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS__32_stringlist constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS__32_stringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS__32_stringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS__32_stringlist & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLinkerNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameAndTypeNameListAtIndex (class GGS__32_stringlist constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS__32_stringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS__32_stringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mLinkerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_mOutletNameAndTypeNameListAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutOutletLinkerGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutOutletLinkerGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutOutletLinkerGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutOutletLinkerGenerationList ;
  friend class DownEnumerator_autoLayoutOutletLinkerGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutOutletLinkerGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutOutletLinkerGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mLinkerName ;
  public: inline GGS_string readProperty_mLinkerName (void) const {
    return mProperty_mLinkerName ;
  }

  public: GGS__32_stringlist mProperty_mOutletNameAndTypeNameList ;
  public: inline GGS__32_stringlist readProperty_mOutletNameAndTypeNameList (void) const {
    return mProperty_mOutletNameAndTypeNameList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutOutletLinkerGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLinkerName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLinkerName = inValue ;
  }

  public: inline void setter_setMOutletNameAndTypeNameList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletNameAndTypeNameList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutOutletLinkerGenerationList_2E_element (const GGS_string & in_mLinkerName,
                                                               const GGS__32_stringlist & in_mOutletNameAndTypeNameList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutOutletLinkerGenerationList_2E_element (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutOutletLinkerGenerationList_2E_element & operator = (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutOutletLinkerGenerationList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                   const class GGS__32_stringlist & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutOutletLinkerGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutDocumentFileGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutDocumentFileGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_autoLayoutDocumentFileGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutDocumentFileGeneration (const class cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mDocumentName (void) const ;

  public: class GGS_string readProperty_mRootEntityName (void) const ;

  public: class GGS_string readProperty_mMainViewName (void) const ;

  public: class GGS_propertyGenerationList readProperty_mDocumentPropertyGenearionList (void) const ;

  public: class GGS_decoratedOutletMap readProperty_mOutletMap (void) const ;

  public: class GGS_autoLayoutOutletMap readProperty_mAutoLayoutOutletMap (void) const ;

  public: class GGS_actionBindingListForGeneration readProperty_mTargetActionList (void) const ;

  public: class GGS_regularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GGS_multipleBindingGenerationList readProperty_multipleBindingGenerationList (void) const ;

  public: class GGS_tableViewBindingGenerationList readProperty_mTableViewBindingGenerationList (void) const ;

  public: class GGS_ebViewGraphicControllerBindingGenerationList readProperty_mEBViewBindingGenerationList (void) const ;

  public: class GGS_viewGenerationList readProperty_mViewDeclarationList (void) const ;

  public: class GGS_implicitViewFunctionGenerationList readProperty_mImplicitViewFunctionGenerationList (void) const ;

  public: class GGS_autoLayoutConfiguratorMap readProperty_mConfiguratorMap (void) const ;

  public: class GGS_string readProperty_mCustomSuperClassName (void) const ;

  public: class GGS_autoLayoutOutletLinkerGenerationList readProperty_mOutletLinkerGenerationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutDocumentFileGeneration init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                            const class GGS_string & inOperand1,
                                                                                                                            const class GGS_string & inOperand2,
                                                                                                                            const class GGS_propertyGenerationList & inOperand3,
                                                                                                                            const class GGS_decoratedOutletMap & inOperand4,
                                                                                                                            const class GGS_autoLayoutOutletMap & inOperand5,
                                                                                                                            const class GGS_actionBindingListForGeneration & inOperand6,
                                                                                                                            const class GGS_regularBindingsGenerationList & inOperand7,
                                                                                                                            const class GGS_multipleBindingGenerationList & inOperand8,
                                                                                                                            const class GGS_tableViewBindingGenerationList & inOperand9,
                                                                                                                            const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                                                                            const class GGS_viewGenerationList & inOperand11,
                                                                                                                            const class GGS_implicitViewFunctionGenerationList & inOperand12,
                                                                                                                            const class GGS_autoLayoutConfiguratorMap & inOperand13,
                                                                                                                            const class GGS_string & inOperand14,
                                                                                                                            const class GGS_autoLayoutOutletLinkerGenerationList & inOperand15,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutDocumentFileGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDocumentFileGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutDocumentFileGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDocumentFileGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutDocumentFileGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                      const class GGS_string & inOperand1,
                                                                                                                      const class GGS_string & inOperand2,
                                                                                                                      const class GGS_propertyGenerationList & inOperand3,
                                                                                                                      const class GGS_decoratedOutletMap & inOperand4,
                                                                                                                      const class GGS_autoLayoutOutletMap & inOperand5,
                                                                                                                      const class GGS_actionBindingListForGeneration & inOperand6,
                                                                                                                      const class GGS_regularBindingsGenerationList & inOperand7,
                                                                                                                      const class GGS_multipleBindingGenerationList & inOperand8,
                                                                                                                      const class GGS_tableViewBindingGenerationList & inOperand9,
                                                                                                                      const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                                                                      const class GGS_viewGenerationList & inOperand11,
                                                                                                                      const class GGS_implicitViewFunctionGenerationList & inOperand12,
                                                                                                                      const class GGS_autoLayoutConfiguratorMap & inOperand13,
                                                                                                                      const class GGS_string & inOperand14,
                                                                                                                      const class GGS_autoLayoutOutletLinkerGenerationList & inOperand15,
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
  public: GGS_string mProperty_mDocumentName ;
  public: GGS_string mProperty_mRootEntityName ;
  public: GGS_string mProperty_mMainViewName ;
  public: GGS_propertyGenerationList mProperty_mDocumentPropertyGenearionList ;
  public: GGS_decoratedOutletMap mProperty_mOutletMap ;
  public: GGS_autoLayoutOutletMap mProperty_mAutoLayoutOutletMap ;
  public: GGS_actionBindingListForGeneration mProperty_mTargetActionList ;
  public: GGS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GGS_multipleBindingGenerationList mProperty_multipleBindingGenerationList ;
  public: GGS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GGS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;
  public: GGS_viewGenerationList mProperty_mViewDeclarationList ;
  public: GGS_implicitViewFunctionGenerationList mProperty_mImplicitViewFunctionGenerationList ;
  public: GGS_autoLayoutConfiguratorMap mProperty_mConfiguratorMap ;
  public: GGS_string mProperty_mCustomSuperClassName ;
  public: GGS_autoLayoutOutletLinkerGenerationList mProperty_mOutletLinkerGenerationList ;


//--- Default constructor
  public: cPtr_autoLayoutDocumentFileGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutDocumentFileGeneration (const GGS_string & in_mDocumentName,
                                                 const GGS_string & in_mRootEntityName,
                                                 const GGS_string & in_mMainViewName,
                                                 const GGS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                 const GGS_decoratedOutletMap & in_mOutletMap,
                                                 const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                 const GGS_actionBindingListForGeneration & in_mTargetActionList,
                                                 const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                 const GGS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                 const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                 const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                 const GGS_viewGenerationList & in_mViewDeclarationList,
                                                 const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                 const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                 const GGS_string & in_mCustomSuperClassName,
                                                 const GGS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList,
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
// Phase 1: @autoLayoutDocumentFileGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutDocumentFileGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutDocumentFileGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutDocumentFileGeneration_2E_weak (const class GGS_autoLayoutDocumentFileGeneration & inSource) ;

  public: GGS_autoLayoutDocumentFileGeneration_2E_weak & operator = (const class GGS_autoLayoutDocumentFileGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutDocumentFileGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutDocumentFileGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutDocumentFileGeneration bang_autoLayoutDocumentFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutDocumentFileGeneration unwrappedValue (void) const ;

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
  public: static GGS_autoLayoutDocumentFileGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutDocumentFileGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDocumentFileGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2E_weak ;

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
  public: GGS_transientExternTypeList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_transientExternTypeList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_bool & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_transientExternTypeList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_transientExternTypeList add_operation (const GGS_transientExternTypeList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_bool constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_bool & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsClassAtIndex (class GGS_bool constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeNameAtIndex (class GGS_string constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_bool & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_bool & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsClassAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_transientExternTypeList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_transientExternTypeList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_transientExternTypeList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: GGS_fileGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_fileGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractFileGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_fileGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_fileGenerationList add_operation (const GGS_fileGenerationList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractFileGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractFileGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractFileGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractFileGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractFileGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileGenerationAtIndex (class GGS_abstractFileGeneration constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractFileGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractFileGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractFileGeneration getter_mFileGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fileGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fileGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fileGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fileGenerationList_2E_element ;

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
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_runActionDescriptor_2E_action & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_runActionDescriptor_2E_action_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actionFileGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_actionFileGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_actionFileGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_actionFileGeneration (const class cPtr_actionFileGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mClassName (void) const ;
  public: void setProperty_mClassName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mActionName (void) const ;
  public: void setProperty_mActionName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actionFileGeneration init_21__21_ (const class GGS_string & inOperand0,
                                                        const class GGS_string & inOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actionFileGeneration extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_actionFileGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionFileGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @actionFileGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_actionFileGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void actionFileGeneration_init_21__21_ (const class GGS_string & inOperand0,
                                                  const class GGS_string & inOperand1,
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
  public: GGS_string mProperty_mClassName ;
  public: GGS_string mProperty_mActionName ;


//--- Default constructor
  public: cPtr_actionFileGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_actionFileGeneration (const GGS_string & in_mClassName,
                                     const GGS_string & in_mActionName,
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
// Phase 1: @actionFileGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_actionFileGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_actionFileGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_actionFileGeneration_2E_weak (const class GGS_actionFileGeneration & inSource) ;

  public: GGS_actionFileGeneration_2E_weak & operator = (const class GGS_actionFileGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_actionFileGeneration_2E_weak init_nil (void) {
    GGS_actionFileGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_actionFileGeneration bang_actionFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_actionFileGeneration unwrappedValue (void) const ;

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
  public: static GGS_actionFileGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actionFileGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_actionFileGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionFileGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutClassParameterList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mParameterName ;
  public: inline GGS_lstring readProperty_mParameterName (void) const {
    return mProperty_mParameterName ;
  }

  public: GGS_autoLayoutClassParameterType mProperty_mParameterType ;
  public: inline GGS_autoLayoutClassParameterType readProperty_mParameterType (void) const {
    return mProperty_mParameterType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutClassParameterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterName = inValue ;
  }

  public: inline void setter_setMParameterType (const GGS_autoLayoutClassParameterType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutClassParameterList_2E_element (const GGS_lstring & in_mParameterName,
                                                       const GGS_autoLayoutClassParameterType & in_mParameterType) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutClassParameterList_2E_element (const GGS_autoLayoutClassParameterList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutClassParameterList_2E_element & operator = (const GGS_autoLayoutClassParameterList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutClassParameterList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_autoLayoutClassParameterType & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutClassParameterList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList_2E_element ;

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
  public: void setProperty_mUserDefined (const GGS_bool & inValue) ;

  public: class GGS_lstring readProperty_mSuperClassName (void) const ;
  public: void setProperty_mSuperClassName (const GGS_lstring & inValue) ;

  public: class GGS_bool readProperty_mHasRunAction (void) const ;
  public: void setProperty_mHasRunAction (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHasEnabled (void) const ;
  public: void setProperty_mHasEnabled (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHandlesTableValueBinding (void) const ;
  public: void setProperty_mHandlesTableValueBinding (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHandlesGraphicControllerBinding (void) const ;
  public: void setProperty_mHandlesGraphicControllerBinding (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHasHidden (void) const ;
  public: void setProperty_mHasHidden (const GGS_bool & inValue) ;

  public: class GGS_autoLayoutClassParameterList readProperty_mParameterList (void) const ;
  public: void setProperty_mParameterList (const GGS_autoLayoutClassParameterList & inValue) ;

  public: class GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutViewFunctionMap (void) const ;
  public: void setProperty_mAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue) ;

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
                                                                                                     const class GGS_autoLayoutClassParameterList & inOperand8,
                                                                                                     const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewClassDeclarationAST extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                                               const class GGS_autoLayoutClassParameterList & inOperand8,
                                                                                               const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
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
  public: GGS_bool mProperty_mUserDefined ;
  public: GGS_lstring mProperty_mSuperClassName ;
  public: GGS_bool mProperty_mHasRunAction ;
  public: GGS_bool mProperty_mHasEnabled ;
  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: GGS_bool mProperty_mHandlesGraphicControllerBinding ;
  public: GGS_bool mProperty_mHasHidden ;
  public: GGS_autoLayoutClassParameterList mProperty_mParameterList ;
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
                                                  const GGS_autoLayoutClassParameterList & in_mParameterList,
                                                  const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewClassDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutClassParameterType_2E_typeEnum extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutClassParameterType_2E_typeEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@autoLayoutClassParameterType string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_autoLayoutClassParameterType & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_tableValueBinding_2E_tableValueBinding & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableValueBinding_2E_tableValueBinding_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphicController_2E_defined_3F_ ;

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
  public: GGS_outletBindingModelList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_outletBindingModelList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_propertyKind & inOperand0,
                                                    const class GGS_location & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_outletBindingModelList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_outletBindingModelList add_operation (const GGS_outletBindingModelList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_propertyKind constinArgument0,
                                               class GGS_location constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_propertyKind constinArgument0,
                                                      class GGS_location constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_propertyKind & outArgument0,
                                                 class GGS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_propertyKind & outArgument0,
                                                class GGS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_propertyKind & outArgument0,
                                                      class GGS_location & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GGS_location constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKindAtIndex (class GGS_propertyKind constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_propertyKind & outArgument0,
                                              class GGS_location & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_propertyKind & outArgument0,
                                             class GGS_location & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mErrorLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyKind getter_mKindAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingModelList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingModelList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingModelList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingModelList_2E_element ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boundObjectList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind typeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_typeName (const class GGS_typeKind & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind isComparable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isComparable (const class GGS_typeKind & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

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

