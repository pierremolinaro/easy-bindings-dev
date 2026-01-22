#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

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

  public: class GGS_observablePropertyList readProperty_mDependencyList (void) const ;
  public: void setProperty_mDependencyList (const GGS_observablePropertyList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computedPropertyDeclarationAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              const class GGS_lstring & inOperand3,
                                                                              const class GGS_observablePropertyList & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedPropertyDeclarationAST extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                        const class GGS_observablePropertyList & inOperand4,
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
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mComputedPropertyTypeName ;
  public: GGS_lstring mProperty_mComputedPropertyName ;
  public: GGS_observablePropertyList mProperty_mDependencyList ;


//--- Default constructor
  public: cPtr_computedPropertyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_computedPropertyDeclarationAST (const GGS_lstring & in_mClassName,
                                               const GGS_lstring & in_mRootEntityName,
                                               const GGS_lstring & in_mComputedPropertyTypeName,
                                               const GGS_lstring & in_mComputedPropertyName,
                                               const GGS_observablePropertyList & in_mDependencyList,
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
// Phase 1: @computedPropertyDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedPropertyDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_computedPropertyDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_computedPropertyDeclarationAST_2E_weak (const class GGS_computedPropertyDeclarationAST & inSource) ;

  public: GGS_computedPropertyDeclarationAST_2E_weak & operator = (const class GGS_computedPropertyDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_computedPropertyDeclarationAST_2E_weak init_nil (void) {
    GGS_computedPropertyDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_computedPropertyDeclarationAST bang_computedPropertyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_computedPropertyDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_computedPropertyDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedPropertyDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedPropertyDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum typeKind
//--------------------------------------------------------------------------------------------------

class GGS_typeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_typeKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_boolType,
    enum_integerType,
    enum_uint_33__32_Type,
    enum_doubleType,
    enum_stringType,
    enum_dataType,
    enum_dateType,
    enum_fontType,
    enum_colorType,
    enum_bezierPathType,
    enum_bezierPathArrayType,
    enum_enumType,
    enum_entityType,
    enum_classType,
    enum_transientPropertyExternType
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_enumType (class GGS_string & out_enumTypeName,
                                                                 class GGS_enumConstantMap & out_constantMap,
                                                                 class GGS_enumFuncMap & out_funcMap) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_entityType (class GGS_string & out_entityName,
                                                                   class GGS_bool & out_graphic) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_classType (class GGS_string & out_className) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_transientPropertyExternType (class GGS_string & out_externTypeName) const ;

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
  public: static GGS_typeKind extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind class_func_bezierPathArrayType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_bezierPathType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_boolType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_classType (const class GGS_string & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_colorType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_dataType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_dateType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_doubleType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_entityType (const class GGS_string & inOperand0,
                                                           const class GGS_bool & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_enumType (const class GGS_string & inOperand0,
                                                         const class GGS_enumConstantMap & inOperand1,
                                                         const class GGS_enumFuncMap & inOperand2
                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_fontType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_integerType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_stringType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_transientPropertyExternType (const class GGS_string & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_uint_33__32_Type (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractClassType (class GGS_string & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractEntityType (class GGS_string & outArgument0,
                                                          class GGS_bool & outArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractEnumType (class GGS_string & outArgument0,
                                                        class GGS_enumConstantMap & outArgument1,
                                                        class GGS_enumFuncMap & outArgument2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractTransientPropertyExternType (class GGS_string & outArgument0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_classType_3F_ getter_getClassType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_entityType_3F_ getter_getEntityType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_enumType_3F_ getter_getEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_transientPropertyExternType_3F_ getter_getTransientPropertyExternType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBezierPathArrayType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBezierPathType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBoolType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isClassType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isColorType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDataType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDateType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDoubleType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEntityType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFontType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIntegerType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStringType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTransientPropertyExternType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUint_33__32_Type (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_classType struct
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_classType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_className ;
  public: inline GGS_string readProperty_className (void) const {
    return mProperty_className ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_classType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setClassName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_className = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_classType (const GGS_string & in_className) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_classType (const GGS_typeKind_2E_classType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_classType & operator = (const GGS_typeKind_2E_classType & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_classType init_21_ (const class GGS_string & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_classType extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_classType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_classType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.classType? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_classType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_classType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_classType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_classType_3F_ (const GGS_typeKind_2E_classType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_classType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_classType unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_classType_3F_ extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_classType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_classType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_entityType struct
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_entityType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_entityName ;
  public: inline GGS_string readProperty_entityName (void) const {
    return mProperty_entityName ;
  }

  public: GGS_bool mProperty_graphic ;
  public: inline GGS_bool readProperty_graphic (void) const {
    return mProperty_graphic ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_entityType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setEntityName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_entityName = inValue ;
  }

  public: inline void setter_setGraphic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_graphic = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_entityType (const GGS_string & in_entityName,
                                      const GGS_bool & in_graphic) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_entityType (const GGS_typeKind_2E_entityType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_entityType & operator = (const GGS_typeKind_2E_entityType & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_entityType init_21__21_ (const class GGS_string & inOperand0,
                                                          const class GGS_bool & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_entityType extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_entityType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_entityType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.entityType? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_entityType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_entityType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_entityType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_entityType_3F_ (const GGS_typeKind_2E_entityType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_entityType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_entityType unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_entityType_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_entityType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_entityType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumConstantMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumConstantMap final {

  public: DownEnumerator_enumConstantMap (const class GGS_enumConstantMap & inMap) ;

  public: ~ DownEnumerator_enumConstantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;

  public: class GGS_enumConstantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_enumConstantMap (const DownEnumerator_enumConstantMap &) = delete ;
  private: DownEnumerator_enumConstantMap & operator = (const DownEnumerator_enumConstantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumConstantMap final {
  public: UpEnumerator_enumConstantMap (const class GGS_enumConstantMap & inMap)  ;

  public: ~ UpEnumerator_enumConstantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_enumConstantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_enumConstantMap (const UpEnumerator_enumConstantMap &) = delete ;
  private: UpEnumerator_enumConstantMap & operator = (const UpEnumerator_enumConstantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_enumConstantMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_enumConstantMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_enumConstantMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_enumConstantMap (void) ;

//--- Handle copy
  public: GGS_enumConstantMap (const GGS_enumConstantMap & inSource) ;
  public: GGS_enumConstantMap & operator = (const GGS_enumConstantMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Compare
  public: ComparisonResult objectCompare (const GGS_enumConstantMap & inOperand) const ;



//--- performInsert
  protected: void performInsert (const class GGS_enumConstantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumConstantMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumConstantMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumConstantMap class_func_mapWithMapToOverride (const class GGS_enumConstantMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
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

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumConstantMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_enumConstantMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_enumConstantMap ;
  friend class DownEnumerator_enumConstantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumFuncMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumFuncMap final {

  public: DownEnumerator_enumFuncMap (const class GGS_enumFuncMap & inMap) ;

  public: ~ DownEnumerator_enumFuncMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_enumFunAssociationSortedList current_mAssociationSortedList (LOCATION_ARGS) const ;

  public: class GGS_enumFuncMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_enumFuncMap (const DownEnumerator_enumFuncMap &) = delete ;
  private: DownEnumerator_enumFuncMap & operator = (const DownEnumerator_enumFuncMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumFuncMap final {
  public: UpEnumerator_enumFuncMap (const class GGS_enumFuncMap & inMap)  ;

  public: ~ UpEnumerator_enumFuncMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_enumFunAssociationSortedList current_mAssociationSortedList (LOCATION_ARGS) const ;
  public: class GGS_enumFuncMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_enumFuncMap (const UpEnumerator_enumFuncMap &) = delete ;
  private: UpEnumerator_enumFuncMap & operator = (const UpEnumerator_enumFuncMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_enumFuncMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_enumFuncMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_enumFuncMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_enumFuncMap (void) ;

//--- Handle copy
  public: GGS_enumFuncMap (const GGS_enumFuncMap & inSource) ;
  public: GGS_enumFuncMap & operator = (const GGS_enumFuncMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Compare
  public: ComparisonResult objectCompare (const GGS_enumFuncMap & inOperand) const ;



//--- performInsert
  protected: void performInsert (const class GGS_enumFuncMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumFuncMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumFuncMap extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumFuncMap class_func_mapWithMapToOverride (const class GGS_enumFuncMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_enumFunAssociationSortedList constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociationSortedListForKey (class GGS_enumFunAssociationSortedList constinArgument0,
                                                                        class GGS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_enumFunAssociationSortedList & outArgument1,
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

  public: VIRTUAL_IN_DEBUG class GGS_enumFunAssociationSortedList getter_mAssociationSortedListForKey (const class GGS_string & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumFuncMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_enumFuncMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_enumFuncMap ;
  friend class DownEnumerator_enumFuncMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumFuncMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_enumType struct
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_enumType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_enumTypeName ;
  public: inline GGS_string readProperty_enumTypeName (void) const {
    return mProperty_enumTypeName ;
  }

  public: GGS_enumConstantMap mProperty_constantMap ;
  public: inline GGS_enumConstantMap readProperty_constantMap (void) const {
    return mProperty_constantMap ;
  }

  public: GGS_enumFuncMap mProperty_funcMap ;
  public: inline GGS_enumFuncMap readProperty_funcMap (void) const {
    return mProperty_funcMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_enumType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setEnumTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enumTypeName = inValue ;
  }

  public: inline void setter_setConstantMap (const GGS_enumConstantMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantMap = inValue ;
  }

  public: inline void setter_setFuncMap (const GGS_enumFuncMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_funcMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_enumType (const GGS_string & in_enumTypeName,
                                    const GGS_enumConstantMap & in_constantMap,
                                    const GGS_enumFuncMap & in_funcMap) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_enumType (const GGS_typeKind_2E_enumType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_enumType & operator = (const GGS_typeKind_2E_enumType & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_enumType init_21__21__21_ (const class GGS_string & inOperand0,
                                                            const class GGS_enumConstantMap & inOperand1,
                                                            const class GGS_enumFuncMap & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_enumType extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_enumType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_enumType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.enumType? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_enumType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_enumType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_enumType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_enumType_3F_ (const GGS_typeKind_2E_enumType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_enumType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_enumType unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_enumType_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_enumType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_enumType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_transientPropertyExternType struct
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_transientPropertyExternType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_externTypeName ;
  public: inline GGS_string readProperty_externTypeName (void) const {
    return mProperty_externTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_transientPropertyExternType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExternTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_externTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_transientPropertyExternType (const GGS_string & in_externTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_transientPropertyExternType (const GGS_typeKind_2E_transientPropertyExternType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_transientPropertyExternType & operator = (const GGS_typeKind_2E_transientPropertyExternType & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_transientPropertyExternType init_21_ (const class GGS_string & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_transientPropertyExternType extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_transientPropertyExternType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.transientPropertyExternType? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_transientPropertyExternType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_transientPropertyExternType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_transientPropertyExternType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_transientPropertyExternType_3F_ (const GGS_typeKind_2E_transientPropertyExternType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_transientPropertyExternType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_transientPropertyExternType unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_transientPropertyExternType_3F_ extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_transientPropertyExternType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType_3F_ ;

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
  public: GGS_transientDependencyListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_transientDependencyListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_observablePropertyAST & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_string & inOperand3,
                                                    const class GGS_string & inOperand4
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_transientDependencyListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_transientDependencyListForGeneration add_operation (const GGS_transientDependencyListForGeneration & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_observablePropertyAST constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_string constinArgument3,
                                               class GGS_string constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_observablePropertyAST constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_string constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_observablePropertyAST & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_string & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_observablePropertyAST & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                class GGS_string & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_observablePropertyAST & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_string & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefaultValueAsStringAtIndex (class GGS_string constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependencyAtIndex (class GGS_observablePropertyAST constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionArgumentNameAtIndex (class GGS_string constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionArgumentTypeStringAtIndex (class GGS_string constinArgument0,
                                                                              class GGS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProtocolNameAtIndex (class GGS_string constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_observablePropertyAST & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              class GGS_string & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_observablePropertyAST & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_string & outArgument3,
                                             class GGS_string & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mDefaultValueAsStringAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST getter_mDependencyAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFunctionArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFunctionArgumentTypeStringAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProtocolNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_transientDependencyListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_transientDependencyListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_transientDependencyListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedPropertyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_computedPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_computedPropertyGeneration (const class cPtr_computedPropertyGeneration * inSourcePtr) ;

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
  public: static GGS_computedPropertyGeneration init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          const class GGS_typeKind & inOperand2,
                                                                          const class GGS_transientDependencyListForGeneration & inOperand3,
                                                                          const class GGS_bool & inOperand4,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedPropertyGeneration extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @computedPropertyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_computedPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void computedPropertyGeneration_init_21__21__21__21__21_ (const class GGS_string & inOperand0,
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
  public: cPtr_computedPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_computedPropertyGeneration (const GGS_string & in_mPropertyName,
                                           const GGS_string & in_mClassName,
                                           const GGS_typeKind & in_mType,
                                           const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                           const GGS_bool & in_mGenerate,
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
// Phase 1: @computedPropertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedPropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_computedPropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_computedPropertyGeneration_2E_weak (const class GGS_computedPropertyGeneration & inSource) ;

  public: GGS_computedPropertyGeneration_2E_weak & operator = (const class GGS_computedPropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_computedPropertyGeneration_2E_weak init_nil (void) {
    GGS_computedPropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_computedPropertyGeneration bang_computedPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_computedPropertyGeneration unwrappedValue (void) const ;

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
  public: static GGS_computedPropertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedPropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedPropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedPropertyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_computedPropertyGenerationList final {
  public: DownEnumerator_computedPropertyGenerationList (const class GGS_computedPropertyGenerationList & inList) ;

  public: ~ DownEnumerator_computedPropertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_computedPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_computedPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_computedPropertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_computedPropertyGenerationList (const DownEnumerator_computedPropertyGenerationList &) = delete ;
  private: DownEnumerator_computedPropertyGenerationList & operator = (const DownEnumerator_computedPropertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_computedPropertyGenerationList final {
  public: UpEnumerator_computedPropertyGenerationList (const class GGS_computedPropertyGenerationList & inList)  ;

  public: ~ UpEnumerator_computedPropertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_computedPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_computedPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_computedPropertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_computedPropertyGenerationList (const UpEnumerator_computedPropertyGenerationList &) = delete ;
  private: UpEnumerator_computedPropertyGenerationList & operator = (const UpEnumerator_computedPropertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @computedPropertyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_computedPropertyGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_computedPropertyGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_computedPropertyGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_computedPropertyGenerationList (void) = default ;

//--- Copy
  public: GGS_computedPropertyGenerationList (const GGS_computedPropertyGenerationList &) = default ;
  public: GGS_computedPropertyGenerationList & operator = (const GGS_computedPropertyGenerationList &) = default ;

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
  public : inline GenericArray <GGS_computedPropertyGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_computedPropertyGenerationList subList (const int32_t inStart,
                                                       const int32_t inLength,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_computedPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_computedPropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computedPropertyGenerationList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedPropertyGenerationList extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedPropertyGenerationList class_func_listWithValue (const class GGS_computedPropertyGeneration & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_computedPropertyGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_computedPropertyGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_computedPropertyGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_computedPropertyGenerationList add_operation (const GGS_computedPropertyGenerationList & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_computedPropertyGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_computedPropertyGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_computedPropertyGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_computedPropertyGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_computedPropertyGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GGS_computedPropertyGeneration constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_computedPropertyGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_computedPropertyGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_computedPropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_computedPropertyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_computedPropertyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_computedPropertyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_computedPropertyGenerationList ;
  friend class DownEnumerator_computedPropertyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedPropertyGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_computedPropertyGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_computedPropertyGeneration mProperty_mProperty ;
  public: inline GGS_computedPropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_computedPropertyGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GGS_computedPropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_computedPropertyGenerationList_2E_element (const GGS_computedPropertyGeneration & in_mProperty) ;

//--------------------------------- Copy constructor
  public: GGS_computedPropertyGenerationList_2E_element (const GGS_computedPropertyGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_computedPropertyGenerationList_2E_element & operator = (const GGS_computedPropertyGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computedPropertyGenerationList_2E_element init_21_ (const class GGS_computedPropertyGeneration & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedPropertyGenerationList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computeRoutineGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_computeRoutineGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_computeRoutineGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_computeRoutineGeneration (const class cPtr_computeRoutineGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mOwnerName (void) const ;
  public: void setProperty_mOwnerName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mTransientName (void) const ;
  public: void setProperty_mTransientName (const GGS_string & inValue) ;

  public: class GGS_typeKind readProperty_mTransientType (void) const ;
  public: void setProperty_mTransientType (const GGS_typeKind & inValue) ;

  public: class GGS_transientDependencyListForGeneration readProperty_mDependencyList (void) const ;
  public: void setProperty_mDependencyList (const GGS_transientDependencyListForGeneration & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computeRoutineGeneration init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_typeKind & inOperand2,
                                                                    const class GGS_transientDependencyListForGeneration & inOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computeRoutineGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computeRoutineGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computeRoutineGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @computeRoutineGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_computeRoutineGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void computeRoutineGeneration_init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                              const class GGS_string & inOperand1,
                                                              const class GGS_typeKind & inOperand2,
                                                              const class GGS_transientDependencyListForGeneration & inOperand3,
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
  public: GGS_transientDependencyListForGeneration mProperty_mDependencyList ;


//--- Default constructor
  public: cPtr_computeRoutineGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_computeRoutineGeneration (const GGS_string & in_mOwnerName,
                                         const GGS_string & in_mTransientName,
                                         const GGS_typeKind & in_mTransientType,
                                         const GGS_transientDependencyListForGeneration & in_mDependencyList,
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
// Phase 1: @computeRoutineGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_computeRoutineGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_computeRoutineGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_computeRoutineGeneration_2E_weak (const class GGS_computeRoutineGeneration & inSource) ;

  public: GGS_computeRoutineGeneration_2E_weak & operator = (const class GGS_computeRoutineGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_computeRoutineGeneration_2E_weak init_nil (void) {
    GGS_computeRoutineGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_computeRoutineGeneration bang_computeRoutineGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_computeRoutineGeneration unwrappedValue (void) const ;

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
  public: static GGS_computeRoutineGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computeRoutineGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computeRoutineGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computeRoutineGeneration_2E_weak ;

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

  public: class GGS_observablePropertyList readProperty_mDependencyList (void) const ;
  public: void setProperty_mDependencyList (const GGS_observablePropertyList & inValue) ;

  public: class GGS_bool readProperty_mIsOverriding (void) const ;
  public: void setProperty_mIsOverriding (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientDeclarationAST init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_lstring & inOperand3,
                                                                           const class GGS_observablePropertyList & inOperand4,
                                                                           const class GGS_bool & inOperand5,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientDeclarationAST extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                     const class GGS_observablePropertyList & inOperand4,
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
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mTransientTypeName ;
  public: GGS_lstring mProperty_mTransientName ;
  public: GGS_observablePropertyList mProperty_mDependencyList ;
  public: GGS_bool mProperty_mIsOverriding ;


//--- Default constructor
  public: cPtr_transientDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_transientDeclarationAST (const GGS_lstring & in_mClassName,
                                        const GGS_lstring & in_mRootEntityName,
                                        const GGS_lstring & in_mTransientTypeName,
                                        const GGS_lstring & in_mTransientName,
                                        const GGS_observablePropertyList & in_mDependencyList,
                                        const GGS_bool & in_mIsOverriding,
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDeclarationAST_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_transientPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_transientPropertyGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_transientPropertyGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_transientPropertyGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_transientPropertyGenerationList add_operation (const GGS_transientPropertyGenerationList & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_transientPropertyGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_transientPropertyGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_transientPropertyGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_transientPropertyGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_transientPropertyGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GGS_transientPropertyGeneration constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_transientPropertyGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_transientPropertyGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_transientPropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_transientPropertyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_transientPropertyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_transientPropertyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
//Extension getter '@observablePropertyAST modelStringForSelf' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_modelStringForSelf (const class GGS_observablePropertyAST & inObject,
                                                     const class GGS_string & constinArgument0,
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
//Extension getter '@observablePropertyAST needs_unwSelf' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_needs_5F_unwSelf (const class GGS_observablePropertyAST & inObject,
                                                 const class GGS_bool & constinArgument0,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_prefsPropertyWithOption struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_prefsPropertyWithOption : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_optionName ;
  public: inline GGS_lstring readProperty_optionName (void) const {
    return mProperty_optionName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption (const GGS_lstring & in_propertyName,
                                                                const GGS_lstring & in_optionName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption (const GGS_observablePropertyAST_2E_prefsPropertyWithOption & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption & operator = (const GGS_observablePropertyAST_2E_prefsPropertyWithOption & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_prefsPropertyWithOption init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_prefsPropertyWithOption extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.prefsPropertyWithOption? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_prefsPropertyWithOption mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ (const GGS_observablePropertyAST_2E_prefsPropertyWithOption & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_prefsPropertyWithOption unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_prefsProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_prefsProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_prefsProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_prefsProperty (const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_prefsProperty (const GGS_observablePropertyAST_2E_prefsProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_prefsProperty & operator = (const GGS_observablePropertyAST_2E_prefsProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_prefsProperty init_21_ (const class GGS_lstring & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_prefsProperty extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.prefsProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_prefsProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_prefsProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_prefsProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_prefsProperty_3F_ (const GGS_observablePropertyAST_2E_prefsProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_prefsProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_prefsProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_prefsProperty_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_rootPropertyNone struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyNone : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_relationshipName ;
  public: inline GGS_lstring readProperty_relationshipName (void) const {
    return mProperty_relationshipName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyNone (void) ;

//--------------------------------- Property setters
  public: inline void setter_setRelationshipName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_relationshipName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_rootPropertyNone (const GGS_lstring & in_relationshipName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_rootPropertyNone (const GGS_observablePropertyAST_2E_rootPropertyNone & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_rootPropertyNone & operator = (const GGS_observablePropertyAST_2E_rootPropertyNone & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_rootPropertyNone init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_rootPropertyNone extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.rootPropertyNone? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyNone_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_rootPropertyNone mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyNone_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_rootPropertyNone_3F_ (const GGS_observablePropertyAST_2E_rootPropertyNone & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_rootPropertyNone_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_rootPropertyNone unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_rootPropertyNone_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_rootPropertyRelationship struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyRelationship : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_relationshipName ;
  public: inline GGS_lstring readProperty_relationshipName (void) const {
    return mProperty_relationshipName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship (void) ;

//--------------------------------- Property setters
  public: inline void setter_setRelationshipName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_relationshipName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship (const GGS_lstring & in_relationshipName,
                                                                 const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship (const GGS_observablePropertyAST_2E_rootPropertyRelationship & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship & operator = (const GGS_observablePropertyAST_2E_rootPropertyRelationship & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_rootPropertyRelationship init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_rootPropertyRelationship extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.rootPropertyRelationship? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_rootPropertyRelationship mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ (const GGS_observablePropertyAST_2E_rootPropertyRelationship & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_rootPropertyRelationship unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_rootPropertyWithOption struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyWithOption : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_optionName ;
  public: inline GGS_lstring readProperty_optionName (void) const {
    return mProperty_optionName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption (const GGS_lstring & in_propertyName,
                                                               const GGS_lstring & in_optionName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption (const GGS_observablePropertyAST_2E_rootPropertyWithOption & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption & operator = (const GGS_observablePropertyAST_2E_rootPropertyWithOption & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_rootPropertyWithOption init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_rootPropertyWithOption extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.rootPropertyWithOption? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_rootPropertyWithOption mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ (const GGS_observablePropertyAST_2E_rootPropertyWithOption & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_rootPropertyWithOption unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_rootProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_rootProperty (const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_rootProperty (const GGS_observablePropertyAST_2E_rootProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_rootProperty & operator = (const GGS_observablePropertyAST_2E_rootProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_rootProperty init_21_ (const class GGS_lstring & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_rootProperty extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.rootProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_rootProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_rootProperty_3F_ (const GGS_observablePropertyAST_2E_rootProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_rootProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_rootProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_rootProperty_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfControllerAllProperties struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerAllProperties : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_secondaryPropertyName ;
  public: inline GGS_lstring readProperty_secondaryPropertyName (void) const {
    return mProperty_secondaryPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setSecondaryPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_secondaryPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties (const GGS_lstring & in_controllerName,
                                                                    const GGS_lstring & in_propertyName,
                                                                    const GGS_lstring & in_secondaryPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties (const GGS_observablePropertyAST_2E_selfControllerAllProperties & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties & operator = (const GGS_observablePropertyAST_2E_selfControllerAllProperties & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfControllerAllProperties init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfControllerAllProperties extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfControllerAllProperties? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfControllerAllProperties mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ (const GGS_observablePropertyAST_2E_selfControllerAllProperties & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfControllerAllProperties unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfControllerOneProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerOneProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty (const GGS_lstring & in_controllerName,
                                                                  const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty (const GGS_observablePropertyAST_2E_selfControllerOneProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty & operator = (const GGS_observablePropertyAST_2E_selfControllerOneProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfControllerOneProperty init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfControllerOneProperty extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfControllerOneProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfControllerOneProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ (const GGS_observablePropertyAST_2E_selfControllerOneProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfControllerOneProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfControllerProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfControllerProperty (const GGS_lstring & in_controllerName,
                                                               const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfControllerProperty (const GGS_observablePropertyAST_2E_selfControllerProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfControllerProperty & operator = (const GGS_observablePropertyAST_2E_selfControllerProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfControllerProperty init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfControllerProperty extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfControllerProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfControllerProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfControllerProperty_3F_ (const GGS_observablePropertyAST_2E_selfControllerProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfControllerProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfControllerProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfControllerProperty_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfControllerSecondaryProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerSecondaryProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_secondaryPropertyName ;
  public: inline GGS_lstring readProperty_secondaryPropertyName (void) const {
    return mProperty_secondaryPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setSecondaryPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_secondaryPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (const GGS_lstring & in_controllerName,
                                                                        const GGS_lstring & in_propertyName,
                                                                        const GGS_lstring & in_secondaryPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & operator = (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfControllerSecondaryProperty init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_lstring & inOperand2,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfControllerSecondaryProperty extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfControllerSecondaryProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfControllerSecondaryProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfPropertyArray struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyArray : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_elementPropertyName ;
  public: inline GGS_lstring readProperty_elementPropertyName (void) const {
    return mProperty_elementPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyArray (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setElementPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_elementPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfPropertyArray (const GGS_lstring & in_propertyName,
                                                          const GGS_lstring & in_elementPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfPropertyArray (const GGS_observablePropertyAST_2E_selfPropertyArray & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfPropertyArray & operator = (const GGS_observablePropertyAST_2E_selfPropertyArray & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfPropertyArray init_21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfPropertyArray extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfPropertyArray? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyArray_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfPropertyArray mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyArray_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfPropertyArray_3F_ (const GGS_observablePropertyAST_2E_selfPropertyArray & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfPropertyArray_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfPropertyArray unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfPropertyArray_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfPropertyNone struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyNone : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyNone (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfPropertyNone (const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfPropertyNone (const GGS_observablePropertyAST_2E_selfPropertyNone & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfPropertyNone & operator = (const GGS_observablePropertyAST_2E_selfPropertyNone & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfPropertyNone init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfPropertyNone extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfPropertyNone? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyNone_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfPropertyNone mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyNone_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfPropertyNone_3F_ (const GGS_observablePropertyAST_2E_selfPropertyNone & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfPropertyNone_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfPropertyNone unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfPropertyNone_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfPropertyObject struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyObject : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_elementPropertyName ;
  public: inline GGS_lstring readProperty_elementPropertyName (void) const {
    return mProperty_elementPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyObject (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setElementPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_elementPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfPropertyObject (const GGS_lstring & in_propertyName,
                                                           const GGS_lstring & in_elementPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfPropertyObject (const GGS_observablePropertyAST_2E_selfPropertyObject & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfPropertyObject & operator = (const GGS_observablePropertyAST_2E_selfPropertyObject & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfPropertyObject init_21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfPropertyObject extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfPropertyObject? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyObject_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfPropertyObject mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyObject_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfPropertyObject_3F_ (const GGS_observablePropertyAST_2E_selfPropertyObject & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfPropertyObject_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfPropertyObject unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfPropertyObject_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfPropertyWithOption struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyWithOption : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_optionName ;
  public: inline GGS_lstring readProperty_optionName (void) const {
    return mProperty_optionName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption (const GGS_lstring & in_propertyName,
                                                               const GGS_lstring & in_optionName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption (const GGS_observablePropertyAST_2E_selfPropertyWithOption & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption & operator = (const GGS_observablePropertyAST_2E_selfPropertyWithOption & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfPropertyWithOption init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfPropertyWithOption extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfPropertyWithOption? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfPropertyWithOption mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ (const GGS_observablePropertyAST_2E_selfPropertyWithOption & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfPropertyWithOption unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfProperty (const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfProperty (const GGS_observablePropertyAST_2E_selfProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfProperty & operator = (const GGS_observablePropertyAST_2E_selfProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfProperty init_21_ (const class GGS_lstring & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfProperty extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfProperty_3F_ (const GGS_observablePropertyAST_2E_selfProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfProperty_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfWithoutProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfWithoutProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_issueLocation ;
  public: inline GGS_location readProperty_issueLocation (void) const {
    return mProperty_issueLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfWithoutProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIssueLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_issueLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfWithoutProperty (const GGS_location & in_issueLocation) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfWithoutProperty (const GGS_observablePropertyAST_2E_selfWithoutProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfWithoutProperty & operator = (const GGS_observablePropertyAST_2E_selfWithoutProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfWithoutProperty init_21_ (const class GGS_location & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfWithoutProperty extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfWithoutProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfWithoutProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ (const GGS_observablePropertyAST_2E_selfWithoutProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfWithoutProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_signatureProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_signatureProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_signatureProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_signatureProperty (const GGS_location & in_location) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_signatureProperty (const GGS_observablePropertyAST_2E_signatureProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_signatureProperty & operator = (const GGS_observablePropertyAST_2E_signatureProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_signatureProperty init_21_ (const class GGS_location & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_signatureProperty extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.signatureProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_signatureProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_signatureProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_signatureProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_signatureProperty_3F_ (const GGS_observablePropertyAST_2E_signatureProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_signatureProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_signatureProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_signatureProperty_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_superPropertyWithDefaultValue struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_superPropertyWithDefaultValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_superEntityName ;
  public: inline GGS_lstring readProperty_superEntityName (void) const {
    return mProperty_superEntityName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_abstractDefaultValue mProperty_defaultValue ;
  public: inline GGS_abstractDefaultValue readProperty_defaultValue (void) const {
    return mProperty_defaultValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSuperEntityName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_superEntityName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setDefaultValue (const GGS_abstractDefaultValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_defaultValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (const GGS_lstring & in_superEntityName,
                                                                      const GGS_lstring & in_propertyName,
                                                                      const GGS_abstractDefaultValue & in_defaultValue) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & operator = (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_superPropertyWithDefaultValue init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                              const class GGS_lstring & inOperand1,
                                                                                              const class GGS_abstractDefaultValue & inOperand2,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_superPropertyWithDefaultValue extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.superPropertyWithDefaultValue? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_superPropertyWithDefaultValue unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_superProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_superProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_superEntityName ;
  public: inline GGS_lstring readProperty_superEntityName (void) const {
    return mProperty_superEntityName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_superProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSuperEntityName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_superEntityName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_superProperty (const GGS_lstring & in_superEntityName,
                                                      const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_superProperty (const GGS_observablePropertyAST_2E_superProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_superProperty & operator = (const GGS_observablePropertyAST_2E_superProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_superProperty init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_superProperty extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.superProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_superProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_superProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_superProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_superProperty_3F_ (const GGS_observablePropertyAST_2E_superProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_superProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_superProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_superProperty_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_versionProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_versionProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_versionProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_versionProperty (const GGS_location & in_location) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_versionProperty (const GGS_observablePropertyAST_2E_versionProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_versionProperty & operator = (const GGS_observablePropertyAST_2E_versionProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_versionProperty init_21_ (const class GGS_location & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_versionProperty extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.versionProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_versionProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_versionProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_versionProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_versionProperty_3F_ (const GGS_observablePropertyAST_2E_versionProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_versionProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_versionProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_versionProperty_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_versionShouldChangeProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_versionShouldChangeProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty (const GGS_location & in_location) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty (const GGS_observablePropertyAST_2E_versionShouldChangeProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty & operator = (const GGS_observablePropertyAST_2E_versionShouldChangeProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_versionShouldChangeProperty init_21_ (const class GGS_location & inOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_versionShouldChangeProperty extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.versionShouldChangeProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_versionShouldChangeProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ (const GGS_observablePropertyAST_2E_versionShouldChangeProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_versionShouldChangeProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientRoutineGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum toManyRelationshipOptionAST
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_hasOpposite,
    enum_hasDependance
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_hasOpposite (class GGS_lstring & out_oppositeName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_hasDependance (class GGS_lstring & out_masterPropertyName) const ;

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
  public: static GGS_toManyRelationshipOptionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipOptionAST class_func_hasDependance (const class GGS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_toManyRelationshipOptionAST class_func_hasOpposite (const class GGS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_toManyRelationshipOptionAST class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractHasDependance (class GGS_lstring & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractHasOpposite (class GGS_lstring & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ getter_getHasDependance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ getter_getHasOpposite (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isHasDependance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isHasOpposite (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyRelationshipOptionAST_2E_hasDependance struct
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionAST_2E_hasDependance : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_masterPropertyName ;
  public: inline GGS_lstring readProperty_masterPropertyName (void) const {
    return mProperty_masterPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasDependance (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMasterPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_masterPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasDependance (const GGS_lstring & in_masterPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasDependance (const GGS_toManyRelationshipOptionAST_2E_hasDependance & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toManyRelationshipOptionAST_2E_hasDependance & operator = (const GGS_toManyRelationshipOptionAST_2E_hasDependance & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyRelationshipOptionAST_2E_hasDependance init_21_ (const class GGS_lstring & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyRelationshipOptionAST_2E_hasDependance extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasDependance ;

//--------------------------------------------------------------------------------------------------
// Phase 1: toManyRelationshipOptionAST.hasDependance? optional
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_toManyRelationshipOptionAST_2E_hasDependance mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ (const GGS_toManyRelationshipOptionAST_2E_hasDependance & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_toManyRelationshipOptionAST_2E_hasDependance unwrappedValue (void) const {
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
  public: static GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasDependance_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyRelationshipOptionAST_2E_hasOpposite struct
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionAST_2E_hasOpposite : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_oppositeName ;
  public: inline GGS_lstring readProperty_oppositeName (void) const {
    return mProperty_oppositeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasOpposite (void) ;

//--------------------------------- Property setters
  public: inline void setter_setOppositeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_oppositeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasOpposite (const GGS_lstring & in_oppositeName) ;

//--------------------------------- Copy constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasOpposite (const GGS_toManyRelationshipOptionAST_2E_hasOpposite & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toManyRelationshipOptionAST_2E_hasOpposite & operator = (const GGS_toManyRelationshipOptionAST_2E_hasOpposite & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyRelationshipOptionAST_2E_hasOpposite init_21_ (const class GGS_lstring & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyRelationshipOptionAST_2E_hasOpposite extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite ;

//--------------------------------------------------------------------------------------------------
// Phase 1: toManyRelationshipOptionAST.hasOpposite? optional
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_toManyRelationshipOptionAST_2E_hasOpposite mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ (const GGS_toManyRelationshipOptionAST_2E_hasOpposite & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_toManyRelationshipOptionAST_2E_hasOpposite unwrappedValue (void) const {
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
  public: static GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyRelationshipAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_toManyRelationshipAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_toManyRelationshipAST (const class cPtr_toManyRelationshipAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDestinationEntityName (void) const ;

  public: class GGS_lstring readProperty_mToManyRelationshipName (void) const ;

  public: class GGS_toManyRelationshipOptionAST readProperty_mOption (void) const ;

  public: class GGS_bool readProperty_mCustomStore (void) const ;

  public: class GGS_bool readProperty_mUsedForSignature (void) const ;

  public: class GGS_bool readProperty_mGenerateDirectAccess (void) const ;

  public: class GGS_bool readProperty_mGenerateDirectRead (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyRelationshipAST init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_toManyRelationshipOptionAST & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 const class GGS_bool & inOperand5,
                                                                                 const class GGS_bool & inOperand6,
                                                                                 const class GGS_bool & inOperand7,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyRelationshipAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyRelationshipAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @toManyRelationshipAST class
//--------------------------------------------------------------------------------------------------

class cPtr_toManyRelationshipAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void toManyRelationshipAST_init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_toManyRelationshipOptionAST & inOperand3,
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
  public: GGS_lstring mProperty_mDestinationEntityName ;
  public: GGS_lstring mProperty_mToManyRelationshipName ;
  public: GGS_toManyRelationshipOptionAST mProperty_mOption ;
  public: GGS_bool mProperty_mCustomStore ;
  public: GGS_bool mProperty_mUsedForSignature ;
  public: GGS_bool mProperty_mGenerateDirectAccess ;
  public: GGS_bool mProperty_mGenerateDirectRead ;


//--- Default constructor
  public: cPtr_toManyRelationshipAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_toManyRelationshipAST (const GGS_lstring & in_mClassName,
                                      const GGS_lstring & in_mDestinationEntityName,
                                      const GGS_lstring & in_mToManyRelationshipName,
                                      const GGS_toManyRelationshipOptionAST & in_mOption,
                                      const GGS_bool & in_mCustomStore,
                                      const GGS_bool & in_mUsedForSignature,
                                      const GGS_bool & in_mGenerateDirectAccess,
                                      const GGS_bool & in_mGenerateDirectRead,
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
// Phase 1: @toManyRelationshipAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_toManyRelationshipAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_toManyRelationshipAST_2E_weak (const class GGS_toManyRelationshipAST & inSource) ;

  public: GGS_toManyRelationshipAST_2E_weak & operator = (const class GGS_toManyRelationshipAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_toManyRelationshipAST_2E_weak init_nil (void) {
    GGS_toManyRelationshipAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_toManyRelationshipAST bang_toManyRelationshipAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_toManyRelationshipAST unwrappedValue (void) const ;

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
  public: static GGS_toManyRelationshipAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyRelationshipAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum toManyRelationshipOptionGeneration
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionGeneration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_hasOpposite,
    enum_hasDependance
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_hasOpposite (class GGS_string & out_oppositeName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_hasDependance (class GGS_string & out_masterPropertyName,
                                                                      class GGS_string & out_masterPropertySwiftTypeName) const ;

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
  public: static GGS_toManyRelationshipOptionGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipOptionGeneration class_func_hasDependance (const class GGS_string & inOperand0,
                                                                                        const class GGS_string & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_toManyRelationshipOptionGeneration class_func_hasOpposite (const class GGS_string & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_toManyRelationshipOptionGeneration class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractHasDependance (class GGS_string & outArgument0,
                                                             class GGS_string & outArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractHasOpposite (class GGS_string & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ getter_getHasDependance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ getter_getHasOpposite (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isHasDependance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isHasOpposite (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyRelationshipOptionGeneration_2E_hasDependance struct
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionGeneration_2E_hasDependance : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_masterPropertyName ;
  public: inline GGS_string readProperty_masterPropertyName (void) const {
    return mProperty_masterPropertyName ;
  }

  public: GGS_string mProperty_masterPropertySwiftTypeName ;
  public: inline GGS_string readProperty_masterPropertySwiftTypeName (void) const {
    return mProperty_masterPropertySwiftTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasDependance (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMasterPropertyName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_masterPropertyName = inValue ;
  }

  public: inline void setter_setMasterPropertySwiftTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_masterPropertySwiftTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasDependance (const GGS_string & in_masterPropertyName,
                                                                   const GGS_string & in_masterPropertySwiftTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasDependance (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toManyRelationshipOptionGeneration_2E_hasDependance & operator = (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasDependance init_21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_string & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasDependance extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasDependance ;

//--------------------------------------------------------------------------------------------------
// Phase 1: toManyRelationshipOptionGeneration.hasDependance? optional
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_toManyRelationshipOptionGeneration_2E_hasDependance mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_toManyRelationshipOptionGeneration_2E_hasDependance unwrappedValue (void) const {
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
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyRelationshipOptionGeneration_2E_hasOpposite struct
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionGeneration_2E_hasOpposite : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_oppositeName ;
  public: inline GGS_string readProperty_oppositeName (void) const {
    return mProperty_oppositeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (void) ;

//--------------------------------- Property setters
  public: inline void setter_setOppositeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_oppositeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (const GGS_string & in_oppositeName) ;

//--------------------------------- Copy constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite & operator = (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasOpposite init_21_ (const class GGS_string & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasOpposite extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasOpposite ;

//--------------------------------------------------------------------------------------------------
// Phase 1: toManyRelationshipOptionGeneration.hasOpposite? optional
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_toManyRelationshipOptionGeneration_2E_hasOpposite unwrappedValue (void) const {
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
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKind_2E_arrayController struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_arrayController : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_bool mProperty_graphic ;
  public: inline GGS_bool readProperty_graphic (void) const {
    return mProperty_graphic ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_arrayController (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setGraphic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_graphic = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKind_2E_arrayController (const GGS_lstring & in_typeName,
                                               const GGS_bool & in_graphic) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKind_2E_arrayController (const GGS_propertyKind_2E_arrayController & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKind_2E_arrayController & operator = (const GGS_propertyKind_2E_arrayController & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKind_2E_arrayController init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_bool & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKind_2E_arrayController extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_arrayController ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKind.arrayController? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_arrayController_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKind_2E_arrayController mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_arrayController_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKind_2E_arrayController_3F_ (const GGS_propertyKind_2E_arrayController & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKind_2E_arrayController_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKind_2E_arrayController unwrappedValue (void) const {
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
  public: static GGS_propertyKind_2E_arrayController_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_arrayController_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum propertyAccessibility
//--------------------------------------------------------------------------------------------------

class GGS_propertyAccessibility : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_propertyAccessibility (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_stored,
    enum_computed,
    enum_transient
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_transient (class GGS_bool & out_isAbstract) const ;

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
  public: static GGS_propertyAccessibility extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyAccessibility class_func_computed (LOCATION_ARGS) ;

  public: static class GGS_propertyAccessibility class_func_stored (LOCATION_ARGS) ;

  public: static class GGS_propertyAccessibility class_func_transient (const class GGS_bool & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractTransient (class GGS_bool & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_propertyAccessibility_2E_transient_3F_ getter_getTransient (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isComputed (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStored (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTransient (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessibility ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKind_2E_property struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_property : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_typeKind mProperty_type ;
  public: inline GGS_typeKind readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_propertyAccessibility mProperty_accessibility ;
  public: inline GGS_propertyAccessibility readProperty_accessibility (void) const {
    return mProperty_accessibility ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_property (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setAccessibility (const GGS_propertyAccessibility & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_accessibility = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKind_2E_property (const GGS_typeKind & in_type,
                                        const GGS_propertyAccessibility & in_accessibility) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKind_2E_property (const GGS_propertyKind_2E_property & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKind_2E_property & operator = (const GGS_propertyKind_2E_property & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKind_2E_property init_21__21_ (const class GGS_typeKind & inOperand0,
                                                            const class GGS_propertyAccessibility & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKind_2E_property extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_property ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKind.property? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_property_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKind_2E_property mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_property_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKind_2E_property_3F_ (const GGS_propertyKind_2E_property & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKind_2E_property_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKind_2E_property unwrappedValue (void) const {
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
  public: static GGS_propertyKind_2E_property_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_property_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKind_2E_selectionController struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_selectionController : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_typeName ;
  public: inline GGS_string readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_selectionController (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKind_2E_selectionController (const GGS_string & in_typeName) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKind_2E_selectionController (const GGS_propertyKind_2E_selectionController & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKind_2E_selectionController & operator = (const GGS_propertyKind_2E_selectionController & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKind_2E_selectionController init_21_ (const class GGS_string & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKind_2E_selectionController extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_selectionController ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKind.selectionController? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_selectionController_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKind_2E_selectionController mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_selectionController_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKind_2E_selectionController_3F_ (const GGS_propertyKind_2E_selectionController & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKind_2E_selectionController_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKind_2E_selectionController unwrappedValue (void) const {
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
  public: static GGS_propertyKind_2E_selectionController_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_selectionController_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKind_2E_toMany struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_toMany : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_propertyAccessibility mProperty_accessibility ;
  public: inline GGS_propertyAccessibility readProperty_accessibility (void) const {
    return mProperty_accessibility ;
  }

  public: GGS_bool mProperty_graphic ;
  public: inline GGS_bool readProperty_graphic (void) const {
    return mProperty_graphic ;
  }

  public: GGS_toManyRelationshipOptionAST mProperty_optionKind ;
  public: inline GGS_toManyRelationshipOptionAST readProperty_optionKind (void) const {
    return mProperty_optionKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_toMany (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setAccessibility (const GGS_propertyAccessibility & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_accessibility = inValue ;
  }

  public: inline void setter_setGraphic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_graphic = inValue ;
  }

  public: inline void setter_setOptionKind (const GGS_toManyRelationshipOptionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionKind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKind_2E_toMany (const GGS_lstring & in_typeName,
                                      const GGS_propertyAccessibility & in_accessibility,
                                      const GGS_bool & in_graphic,
                                      const GGS_toManyRelationshipOptionAST & in_optionKind) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKind_2E_toMany (const GGS_propertyKind_2E_toMany & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKind_2E_toMany & operator = (const GGS_propertyKind_2E_toMany & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKind_2E_toMany init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_propertyAccessibility & inOperand1,
                                                                  const class GGS_bool & inOperand2,
                                                                  const class GGS_toManyRelationshipOptionAST & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKind_2E_toMany extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_toMany ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKind.toMany? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_toMany_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKind_2E_toMany mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_toMany_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKind_2E_toMany_3F_ (const GGS_propertyKind_2E_toMany & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKind_2E_toMany_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKind_2E_toMany unwrappedValue (void) const {
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
  public: static GGS_propertyKind_2E_toMany_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_toMany_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum toOneOppositeRelationship
//--------------------------------------------------------------------------------------------------

class GGS_toOneOppositeRelationship : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_toOneOppositeRelationship (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_oppositeIsToOne,
    enum_oppositeIsToMany
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_oppositeIsToOne (class GGS_lstring & out_oppositeRelationshipName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_oppositeIsToMany (class GGS_lstring & out_oppositeRelationshipName) const ;

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
  public: static GGS_toOneOppositeRelationship extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toOneOppositeRelationship class_func_none (LOCATION_ARGS) ;

  public: static class GGS_toOneOppositeRelationship class_func_oppositeIsToMany (const class GGS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_toOneOppositeRelationship class_func_oppositeIsToOne (const class GGS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneOppositeRelationship & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractOppositeIsToMany (class GGS_lstring & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractOppositeIsToOne (class GGS_lstring & outArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ getter_getOppositeIsToMany (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ getter_getOppositeIsToOne (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOppositeIsToMany (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOppositeIsToOne (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKind_2E_toOne struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_toOne : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_propertyAccessibility mProperty_accessibility ;
  public: inline GGS_propertyAccessibility readProperty_accessibility (void) const {
    return mProperty_accessibility ;
  }

  public: GGS_bool mProperty_graphic ;
  public: inline GGS_bool readProperty_graphic (void) const {
    return mProperty_graphic ;
  }

  public: GGS_toOneOppositeRelationship mProperty_opposite ;
  public: inline GGS_toOneOppositeRelationship readProperty_opposite (void) const {
    return mProperty_opposite ;
  }

  public: GGS_bool mProperty_isWeak ;
  public: inline GGS_bool readProperty_isWeak (void) const {
    return mProperty_isWeak ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_toOne (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setAccessibility (const GGS_propertyAccessibility & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_accessibility = inValue ;
  }

  public: inline void setter_setGraphic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_graphic = inValue ;
  }

  public: inline void setter_setOpposite (const GGS_toOneOppositeRelationship & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_opposite = inValue ;
  }

  public: inline void setter_setIsWeak (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isWeak = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKind_2E_toOne (const GGS_lstring & in_typeName,
                                     const GGS_propertyAccessibility & in_accessibility,
                                     const GGS_bool & in_graphic,
                                     const GGS_toOneOppositeRelationship & in_opposite,
                                     const GGS_bool & in_isWeak) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKind_2E_toOne (const GGS_propertyKind_2E_toOne & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKind_2E_toOne & operator = (const GGS_propertyKind_2E_toOne & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKind_2E_toOne init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_propertyAccessibility & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     const class GGS_toOneOppositeRelationship & inOperand3,
                                                                     const class GGS_bool & inOperand4,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKind_2E_toOne extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_toOne ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKind.toOne? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_toOne_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKind_2E_toOne mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_toOne_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKind_2E_toOne_3F_ (const GGS_propertyKind_2E_toOne & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKind_2E_toOne_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKind_2E_toOne unwrappedValue (void) const {
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
  public: static GGS_propertyKind_2E_toOne_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_toOne_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_toManyPropertyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_toManyPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_toManyPropertyGeneration (const class cPtr_toManyPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mGenerateDirectAccess (void) const ;

  public: class GGS_bool readProperty_mGenerateDirectRead (void) const ;

  public: class GGS_propertyKind readProperty_mRelationshipType (void) const ;

  public: class GGS_toManyRelationshipOptionGeneration readProperty_mOption (void) const ;

  public: class GGS_bool readProperty_mInPreferences (void) const ;

  public: class GGS_bool readProperty_mCustomStore (void) const ;

  public: class GGS_bool readProperty_mUsedForSignature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyPropertyGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                    const class GGS_bool & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
                                                                                    const class GGS_propertyKind & inOperand3,
                                                                                    const class GGS_toManyRelationshipOptionGeneration & inOperand4,
                                                                                    const class GGS_bool & inOperand5,
                                                                                    const class GGS_bool & inOperand6,
                                                                                    const class GGS_bool & inOperand7,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyPropertyGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @toManyPropertyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_toManyPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void toManyPropertyGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                              const class GGS_bool & inOperand1,
                                                                              const class GGS_bool & inOperand2,
                                                                              const class GGS_propertyKind & inOperand3,
                                                                              const class GGS_toManyRelationshipOptionGeneration & inOperand4,
                                                                              const class GGS_bool & inOperand5,
                                                                              const class GGS_bool & inOperand6,
                                                                              const class GGS_bool & inOperand7,
                                                                              Compiler * inCompiler) ;


//--- Extension getter configurationCode
  public: virtual class GGS_string getter_configurationCode (const class GGS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GGS_string getter_initCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter prefKeyDefinitionCode
  public: virtual class GGS_string getter_prefKeyDefinitionCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_bool mProperty_mGenerateDirectAccess ;
  public: GGS_bool mProperty_mGenerateDirectRead ;
  public: GGS_propertyKind mProperty_mRelationshipType ;
  public: GGS_toManyRelationshipOptionGeneration mProperty_mOption ;
  public: GGS_bool mProperty_mInPreferences ;
  public: GGS_bool mProperty_mCustomStore ;
  public: GGS_bool mProperty_mUsedForSignature ;


//--- Default constructor
  public: cPtr_toManyPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_toManyPropertyGeneration (const GGS_string & in_mPropertyName,
                                         const GGS_bool & in_mGenerateDirectAccess,
                                         const GGS_bool & in_mGenerateDirectRead,
                                         const GGS_propertyKind & in_mRelationshipType,
                                         const GGS_toManyRelationshipOptionGeneration & in_mOption,
                                         const GGS_bool & in_mInPreferences,
                                         const GGS_bool & in_mCustomStore,
                                         const GGS_bool & in_mUsedForSignature,
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
// Phase 1: @toManyPropertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_toManyPropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_toManyPropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_toManyPropertyGeneration_2E_weak (const class GGS_toManyPropertyGeneration & inSource) ;

  public: GGS_toManyPropertyGeneration_2E_weak & operator = (const class GGS_toManyPropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_toManyPropertyGeneration_2E_weak init_nil (void) {
    GGS_toManyPropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_toManyPropertyGeneration bang_toManyPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_toManyPropertyGeneration unwrappedValue (void) const ;

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
  public: static GGS_toManyPropertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyPropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyPropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyPropertyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_toManyPropertyGenerationList final {
  public: DownEnumerator_toManyPropertyGenerationList (const class GGS_toManyPropertyGenerationList & inList) ;

  public: ~ DownEnumerator_toManyPropertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_toManyPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toManyPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_toManyPropertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_toManyPropertyGenerationList (const DownEnumerator_toManyPropertyGenerationList &) = delete ;
  private: DownEnumerator_toManyPropertyGenerationList & operator = (const DownEnumerator_toManyPropertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_toManyPropertyGenerationList final {
  public: UpEnumerator_toManyPropertyGenerationList (const class GGS_toManyPropertyGenerationList & inList)  ;

  public: ~ UpEnumerator_toManyPropertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_toManyPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toManyPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_toManyPropertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_toManyPropertyGenerationList (const UpEnumerator_toManyPropertyGenerationList &) = delete ;
  private: UpEnumerator_toManyPropertyGenerationList & operator = (const UpEnumerator_toManyPropertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @toManyPropertyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_toManyPropertyGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_toManyPropertyGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_toManyPropertyGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_toManyPropertyGenerationList (void) = default ;

//--- Copy
  public: GGS_toManyPropertyGenerationList (const GGS_toManyPropertyGenerationList &) = default ;
  public: GGS_toManyPropertyGenerationList & operator = (const GGS_toManyPropertyGenerationList &) = default ;

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
  public : inline GenericArray <GGS_toManyPropertyGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_toManyPropertyGenerationList subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_toManyPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_toManyPropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyPropertyGenerationList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyPropertyGenerationList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyPropertyGenerationList class_func_listWithValue (const class GGS_toManyPropertyGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_toManyPropertyGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_toManyPropertyGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_toManyPropertyGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_toManyPropertyGenerationList add_operation (const GGS_toManyPropertyGenerationList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_toManyPropertyGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_toManyPropertyGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_toManyPropertyGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_toManyPropertyGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_toManyPropertyGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GGS_toManyPropertyGeneration constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_toManyPropertyGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_toManyPropertyGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyPropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyPropertyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyPropertyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyPropertyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_toManyPropertyGenerationList ;
  friend class DownEnumerator_toManyPropertyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyPropertyGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_toManyPropertyGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_toManyPropertyGeneration mProperty_mProperty ;
  public: inline GGS_toManyPropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toManyPropertyGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GGS_toManyPropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toManyPropertyGenerationList_2E_element (const GGS_toManyPropertyGeneration & in_mProperty) ;

//--------------------------------- Copy constructor
  public: GGS_toManyPropertyGenerationList_2E_element (const GGS_toManyPropertyGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toManyPropertyGenerationList_2E_element & operator = (const GGS_toManyPropertyGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyPropertyGenerationList_2E_element init_21_ (const class GGS_toManyPropertyGeneration & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyPropertyGenerationList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum mainXibElement
//--------------------------------------------------------------------------------------------------

class GGS_mainXibElement : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_mainXibElement (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_text,
    enum_outlet
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_text (class GGS_lstring & out_text) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_outlet (class GGS_lstring & out_outletType,
                                                               class GGS_lstring & out_outletName) const ;

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
  public: static GGS_mainXibElement extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mainXibElement class_func_outlet (const class GGS_lstring & inOperand0,
                                                             const class GGS_lstring & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_mainXibElement class_func_text (const class GGS_lstring & inOperand0
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractOutlet (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractText (class GGS_lstring & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_mainXibElement_2E_outlet_3F_ getter_getOutlet (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mainXibElement_2E_text_3F_ getter_getText (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOutlet (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isText (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mainXibLineDescriptorList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_mainXibLineDescriptorList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_mainXibElement mProperty_mElement ;
  public: inline GGS_mainXibElement readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_mainXibLineDescriptorList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GGS_mainXibElement & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mainXibLineDescriptorList_2E_element (const GGS_mainXibElement & in_mElement) ;

//--------------------------------- Copy constructor
  public: GGS_mainXibLineDescriptorList_2E_element (const GGS_mainXibLineDescriptorList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_mainXibLineDescriptorList_2E_element & operator = (const GGS_mainXibLineDescriptorList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mainXibLineDescriptorList_2E_element init_21_ (const class GGS_mainXibElement & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mainXibLineDescriptorList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mainXibElement_2E_outlet struct
//--------------------------------------------------------------------------------------------------

class GGS_mainXibElement_2E_outlet : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_outletType ;
  public: inline GGS_lstring readProperty_outletType (void) const {
    return mProperty_outletType ;
  }

  public: GGS_lstring mProperty_outletName ;
  public: inline GGS_lstring readProperty_outletName (void) const {
    return mProperty_outletName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_mainXibElement_2E_outlet (void) ;

//--------------------------------- Property setters
  public: inline void setter_setOutletType (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_outletType = inValue ;
  }

  public: inline void setter_setOutletName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_outletName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mainXibElement_2E_outlet (const GGS_lstring & in_outletType,
                                        const GGS_lstring & in_outletName) ;

//--------------------------------- Copy constructor
  public: GGS_mainXibElement_2E_outlet (const GGS_mainXibElement_2E_outlet & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_mainXibElement_2E_outlet & operator = (const GGS_mainXibElement_2E_outlet & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mainXibElement_2E_outlet init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mainXibElement_2E_outlet extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement_2E_outlet ;

//--------------------------------------------------------------------------------------------------
// Phase 1: mainXibElement.outlet? optional
//--------------------------------------------------------------------------------------------------

class GGS_mainXibElement_2E_outlet_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_mainXibElement_2E_outlet mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_mainXibElement_2E_outlet_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_mainXibElement_2E_outlet_3F_ (const GGS_mainXibElement_2E_outlet & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_mainXibElement_2E_outlet_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_mainXibElement_2E_outlet unwrappedValue (void) const {
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
  public: static GGS_mainXibElement_2E_outlet_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement_2E_outlet_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mainXibElement_2E_text struct
//--------------------------------------------------------------------------------------------------

class GGS_mainXibElement_2E_text : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_text ;
  public: inline GGS_lstring readProperty_text (void) const {
    return mProperty_text ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_mainXibElement_2E_text (void) ;

//--------------------------------- Property setters
  public: inline void setter_setText (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_text = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mainXibElement_2E_text (const GGS_lstring & in_text) ;

//--------------------------------- Copy constructor
  public: GGS_mainXibElement_2E_text (const GGS_mainXibElement_2E_text & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_mainXibElement_2E_text & operator = (const GGS_mainXibElement_2E_text & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mainXibElement_2E_text init_21_ (const class GGS_lstring & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mainXibElement_2E_text extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement_2E_text ;

//--------------------------------------------------------------------------------------------------
// Phase 1: mainXibElement.text? optional
//--------------------------------------------------------------------------------------------------

class GGS_mainXibElement_2E_text_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_mainXibElement_2E_text mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_mainXibElement_2E_text_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_mainXibElement_2E_text_3F_ (const GGS_mainXibElement_2E_text & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_mainXibElement_2E_text_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_mainXibElement_2E_text unwrappedValue (void) const {
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
  public: static GGS_mainXibElement_2E_text_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement_2E_text_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mainXibDescriptorList generateCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_generateCode (const class GGS_mainXibDescriptorList & inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_classMap final {

  public: DownEnumerator_classMap (const class GGS_classMap & inMap) ;

  public: ~ DownEnumerator_classMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_classKind current_mClassKind (LOCATION_ARGS) const ;

  public: class GGS_propertyMap current_mPropertyMap (LOCATION_ARGS) const ;

  public: class GGS_actionMap current_mActionMap (LOCATION_ARGS) const ;

  public: class GGS_propertyGenerationList current_mPropertyGenerationList (LOCATION_ARGS) const ;

  public: class GGS_classMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_classMap (const DownEnumerator_classMap &) = delete ;
  private: DownEnumerator_classMap & operator = (const DownEnumerator_classMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_classMap final {
  public: UpEnumerator_classMap (const class GGS_classMap & inMap)  ;

  public: ~ UpEnumerator_classMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_classKind current_mClassKind (LOCATION_ARGS) const ;
  public: class GGS_propertyMap current_mPropertyMap (LOCATION_ARGS) const ;
  public: class GGS_actionMap current_mActionMap (LOCATION_ARGS) const ;
  public: class GGS_propertyGenerationList current_mPropertyGenerationList (LOCATION_ARGS) const ;
  public: class GGS_classMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_classMap (const UpEnumerator_classMap &) = delete ;
  private: UpEnumerator_classMap & operator = (const UpEnumerator_classMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_classMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_classMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_classMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_classMap (void) ;

//--- Handle copy
  public: GGS_classMap (const GGS_classMap & inSource) ;
  public: GGS_classMap & operator = (const GGS_classMap & inSource) ;

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
  protected: void performInsert (const class GGS_classMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classMap init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classMap extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classMap class_func_mapWithMapToOverride (const class GGS_classMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_classKind constinArgument1,
                                                  class GGS_propertyMap constinArgument2,
                                                  class GGS_actionMap constinArgument3,
                                                  class GGS_propertyGenerationList constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_replace (class GGS_classMap_2E_element constinArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActionMapForKey (class GGS_actionMap constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMClassKindForKey (class GGS_classKind constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationListForKey (class GGS_propertyGenerationList constinArgument0,
                                                                         class GGS_string constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyMapForKey (class GGS_propertyMap constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_classKind & outArgument1,
                                                  class GGS_propertyMap & outArgument2,
                                                  class GGS_actionMap & outArgument3,
                                                  class GGS_propertyGenerationList & outArgument4,
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

  public: VIRTUAL_IN_DEBUG class GGS_actionMap getter_mActionMapForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_classKind getter_mClassKindForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGenerationList getter_mPropertyGenerationListForKey (const class GGS_string & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyMap getter_mPropertyMapForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_classMap getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_classMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_classMap_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_classMap ;
  friend class DownEnumerator_classMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMap ;

//--------------------------------------------------------------------------------------------------
//   enum classKind
//--------------------------------------------------------------------------------------------------

class GGS_classKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_classKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_prefs,
    enum_atomic,
    enum_document,
    enum_entity
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_atomic (class GGS_typeKind & out_kind) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_document (class GGS_lstring & out_rootEntityName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_entity (class GGS_string & out_superEntityName,
                                                               class GGS_bool & out_isGraphic,
                                                               class GGS_bool & out_isAbstract,
                                                               class GGS_bool & out_handlingOpposite) const ;

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
  public: static GGS_classKind extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classKind class_func_atomic (const class GGS_typeKind & inOperand0
                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_classKind class_func_document (const class GGS_lstring & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_classKind class_func_entity (const class GGS_string & inOperand0,
                                                        const class GGS_bool & inOperand1,
                                                        const class GGS_bool & inOperand2,
                                                        const class GGS_bool & inOperand3
                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_classKind class_func_prefs (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractAtomic (class GGS_typeKind & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractDocument (class GGS_lstring & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractEntity (class GGS_string & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_bool & outArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_classKind_2E_atomic_3F_ getter_getAtomic (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_classKind_2E_document_3F_ getter_getDocument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_classKind_2E_entity_3F_ getter_getEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAtomic (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDocument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPrefs (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_classMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_classKind mProperty_mClassKind ;
  public: inline GGS_classKind readProperty_mClassKind (void) const {
    return mProperty_mClassKind ;
  }

  public: GGS_propertyMap mProperty_mPropertyMap ;
  public: inline GGS_propertyMap readProperty_mPropertyMap (void) const {
    return mProperty_mPropertyMap ;
  }

  public: GGS_actionMap mProperty_mActionMap ;
  public: inline GGS_actionMap readProperty_mActionMap (void) const {
    return mProperty_mActionMap ;
  }

  public: GGS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public: inline GGS_propertyGenerationList readProperty_mPropertyGenerationList (void) const {
    return mProperty_mPropertyGenerationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMClassKind (const GGS_classKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mClassKind = inValue ;
  }

  public: inline void setter_setMPropertyMap (const GGS_propertyMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyMap = inValue ;
  }

  public: inline void setter_setMActionMap (const GGS_actionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionMap = inValue ;
  }

  public: inline void setter_setMPropertyGenerationList (const GGS_propertyGenerationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyGenerationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classMap_2E_element (const GGS_lstring & in_lkey,
                                   const GGS_classKind & in_mClassKind,
                                   const GGS_propertyMap & in_mPropertyMap,
                                   const GGS_actionMap & in_mActionMap,
                                   const GGS_propertyGenerationList & in_mPropertyGenerationList) ;

//--------------------------------- Copy constructor
  public: GGS_classMap_2E_element (const GGS_classMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_classMap_2E_element & operator = (const GGS_classMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_classKind & inOperand1,
                                                                   const class GGS_propertyMap & inOperand2,
                                                                   const class GGS_actionMap & inOperand3,
                                                                   const class GGS_propertyGenerationList & inOperand4,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: classMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_classMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classMap_2E_element_3F_ (const GGS_classMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_classMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletClassMap final {

  public: DownEnumerator_outletClassMap (const class GGS_outletClassMap & inMap) ;

  public: ~ DownEnumerator_outletClassMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mSuperClassName (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mUserDefined (LOCATION_ARGS) const ;

  public: class GGS_outletClassMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_outletClassMap (const DownEnumerator_outletClassMap &) = delete ;
  private: DownEnumerator_outletClassMap & operator = (const DownEnumerator_outletClassMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletClassMap final {
  public: UpEnumerator_outletClassMap (const class GGS_outletClassMap & inMap)  ;

  public: ~ UpEnumerator_outletClassMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mUserDefined (LOCATION_ARGS) const ;
  public: class GGS_outletClassMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_outletClassMap (const UpEnumerator_outletClassMap &) = delete ;
  private: UpEnumerator_outletClassMap & operator = (const UpEnumerator_outletClassMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_outletClassMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_outletClassMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_outletClassMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_outletClassMap (void) ;

//--- Handle copy
  public: GGS_outletClassMap (const GGS_outletClassMap & inSource) ;
  public: GGS_outletClassMap & operator = (const GGS_outletClassMap & inSource) ;

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
  protected: void performInsert (const class GGS_outletClassMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassMap class_func_mapWithMapToOverride (const class GGS_outletClassMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  class GGS_bool constinArgument3,
                                                  class GGS_bool constinArgument4,
                                                  class GGS_bool constinArgument5,
                                                  class GGS_bool constinArgument6,
                                                  class GGS_bool constinArgument7,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleEnabledBindingForKey (class GGS_bool constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleGraphicControllerBindingForKey (class GGS_bool constinArgument0,
                                                                                 class GGS_string constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleHiddenBindingForKey (class GGS_bool constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesRunActionForKey (class GGS_bool constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBindingForKey (class GGS_bool constinArgument0,
                                                                           class GGS_string constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserDefinedForKey (class GGS_bool constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  class GGS_bool & outArgument3,
                                                  class GGS_bool & outArgument4,
                                                  class GGS_bool & outArgument5,
                                                  class GGS_bool & outArgument6,
                                                  class GGS_bool & outArgument7,
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

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandleEnabledBindingForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandleGraphicControllerBindingForKey (const class GGS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandleHiddenBindingForKey (const class GGS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandlesRunActionForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandlesTableValueBindingForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mUserDefinedForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_outletClassMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletClassMap ;
  friend class DownEnumerator_outletClassMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_outletClassMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mSuperClassName ;
  public: inline GGS_lstring readProperty_mSuperClassName (void) const {
    return mProperty_mSuperClassName ;
  }

  public: GGS_bool mProperty_mHandlesRunAction ;
  public: inline GGS_bool readProperty_mHandlesRunAction (void) const {
    return mProperty_mHandlesRunAction ;
  }

  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: inline GGS_bool readProperty_mHandlesTableValueBinding (void) const {
    return mProperty_mHandlesTableValueBinding ;
  }

  public: GGS_bool mProperty_mHandleEnabledBinding ;
  public: inline GGS_bool readProperty_mHandleEnabledBinding (void) const {
    return mProperty_mHandleEnabledBinding ;
  }

  public: GGS_bool mProperty_mHandleHiddenBinding ;
  public: inline GGS_bool readProperty_mHandleHiddenBinding (void) const {
    return mProperty_mHandleHiddenBinding ;
  }

  public: GGS_bool mProperty_mHandleGraphicControllerBinding ;
  public: inline GGS_bool readProperty_mHandleGraphicControllerBinding (void) const {
    return mProperty_mHandleGraphicControllerBinding ;
  }

  public: GGS_bool mProperty_mUserDefined ;
  public: inline GGS_bool readProperty_mUserDefined (void) const {
    return mProperty_mUserDefined ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_outletClassMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSuperClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSuperClassName = inValue ;
  }

  public: inline void setter_setMHandlesRunAction (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesRunAction = inValue ;
  }

  public: inline void setter_setMHandlesTableValueBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesTableValueBinding = inValue ;
  }

  public: inline void setter_setMHandleEnabledBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleEnabledBinding = inValue ;
  }

  public: inline void setter_setMHandleHiddenBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleHiddenBinding = inValue ;
  }

  public: inline void setter_setMHandleGraphicControllerBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleGraphicControllerBinding = inValue ;
  }

  public: inline void setter_setMUserDefined (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserDefined = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletClassMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_lstring & in_mSuperClassName,
                                         const GGS_bool & in_mHandlesRunAction,
                                         const GGS_bool & in_mHandlesTableValueBinding,
                                         const GGS_bool & in_mHandleEnabledBinding,
                                         const GGS_bool & in_mHandleHiddenBinding,
                                         const GGS_bool & in_mHandleGraphicControllerBinding,
                                         const GGS_bool & in_mUserDefined) ;

//--------------------------------- Copy constructor
  public: GGS_outletClassMap_2E_element (const GGS_outletClassMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletClassMap_2E_element & operator = (const GGS_outletClassMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassMap_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
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
  public: static GGS_outletClassMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: outletClassMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_outletClassMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_outletClassMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_outletClassMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_outletClassMap_2E_element_3F_ (const GGS_outletClassMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_outletClassMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_outletClassMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_outletClassMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bindingSpecificationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_bindingSpecificationMap final {

  public: DownEnumerator_bindingSpecificationMap (const class GGS_bindingSpecificationMap & inMap) ;

  public: ~ DownEnumerator_bindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;

  public: class GGS_bindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_bindingSpecificationMap (const DownEnumerator_bindingSpecificationMap &) = delete ;
  private: DownEnumerator_bindingSpecificationMap & operator = (const DownEnumerator_bindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_bindingSpecificationMap final {
  public: UpEnumerator_bindingSpecificationMap (const class GGS_bindingSpecificationMap & inMap)  ;

  public: ~ UpEnumerator_bindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
  public: class GGS_bindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_bindingSpecificationMap (const UpEnumerator_bindingSpecificationMap &) = delete ;
  private: UpEnumerator_bindingSpecificationMap & operator = (const UpEnumerator_bindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_bindingSpecificationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_bindingSpecificationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_bindingSpecificationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_bindingSpecificationMap (void) ;

//--- Handle copy
  public: GGS_bindingSpecificationMap (const GGS_bindingSpecificationMap & inSource) ;
  public: GGS_bindingSpecificationMap & operator = (const GGS_bindingSpecificationMap & inSource) ;

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
  protected: void performInsert (const class GGS_bindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingSpecificationMap init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bindingSpecificationMap extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_bindingSpecificationMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  class GGS_outletBindingSpecificationMap constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_outletBindingSpecificationMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingMapForKey (class GGS_outletBindingSpecificationMap constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_outletBindingSpecificationMap & outArgument2,
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

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationMap getter_mBindingMapForKey (const class GGS_string & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOutletSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_bindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_bindingSpecificationMap ;
  friend class DownEnumerator_bindingSpecificationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingSpecificationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletBindingSpecificationMap final {

  public: DownEnumerator_outletBindingSpecificationMap (const class GGS_outletBindingSpecificationMap & inMap) ;

  public: ~ DownEnumerator_outletBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_outletBindingSpecificationMap (const DownEnumerator_outletBindingSpecificationMap &) = delete ;
  private: DownEnumerator_outletBindingSpecificationMap & operator = (const DownEnumerator_outletBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletBindingSpecificationMap final {
  public: UpEnumerator_outletBindingSpecificationMap (const class GGS_outletBindingSpecificationMap & inMap)  ;

  public: ~ UpEnumerator_outletBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_outletBindingSpecificationMap (const UpEnumerator_outletBindingSpecificationMap &) = delete ;
  private: UpEnumerator_outletBindingSpecificationMap & operator = (const UpEnumerator_outletBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_outletBindingSpecificationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_outletBindingSpecificationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_outletBindingSpecificationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_outletBindingSpecificationMap (void) ;

//--- Handle copy
  public: GGS_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inSource) ;
  public: GGS_outletBindingSpecificationMap & operator = (const GGS_outletBindingSpecificationMap & inSource) ;

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
  protected: void performInsert (const class GGS_outletBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingSpecificationMap init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletBindingSpecificationMap extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletBindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_outletBindingSpecificationMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_outletBindingSpecificationModelList constinArgument1,
                                                  class GGS_controllerBindingOptionDecoratedList constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControllerBindingOptionListForKey (class GGS_controllerBindingOptionDecoratedList constinArgument0,
                                                                              class GGS_string constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletBindingSpecificationModelListForKey (class GGS_outletBindingSpecificationModelList constinArgument0,
                                                                                      class GGS_string constinArgument1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_outletBindingSpecificationModelList & outArgument1,
                                                  class GGS_controllerBindingOptionDecoratedList & outArgument2,
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

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionDecoratedList getter_mControllerBindingOptionListForKey (const class GGS_string & constinOperand0,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationModelList getter_mOutletBindingSpecificationModelListForKey (const class GGS_string & constinOperand0,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletBindingSpecificationMap ;
  friend class DownEnumerator_outletBindingSpecificationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bindingSpecificationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_bindingSpecificationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mOutletSuperClassName ;
  public: inline GGS_lstring readProperty_mOutletSuperClassName (void) const {
    return mProperty_mOutletSuperClassName ;
  }

  public: GGS_outletBindingSpecificationMap mProperty_mBindingMap ;
  public: inline GGS_outletBindingSpecificationMap readProperty_mBindingMap (void) const {
    return mProperty_mBindingMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bindingSpecificationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletSuperClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletSuperClassName = inValue ;
  }

  public: inline void setter_setMBindingMap (const GGS_outletBindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_lstring & in_mOutletSuperClassName,
                                                  const GGS_outletBindingSpecificationMap & in_mBindingMap) ;

//--------------------------------- Copy constructor
  public: GGS_bindingSpecificationMap_2E_element (const GGS_bindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_bindingSpecificationMap_2E_element & operator = (const GGS_bindingSpecificationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingSpecificationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_outletBindingSpecificationMap & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bindingSpecificationMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: bindingSpecificationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_bindingSpecificationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_bindingSpecificationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_bindingSpecificationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_bindingSpecificationMap_2E_element_3F_ (const GGS_bindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_bindingSpecificationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_bindingSpecificationMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_bindingSpecificationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autolayoutViewClassMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autolayoutViewClassMap final {

  public: DownEnumerator_autolayoutViewClassMap (const class GGS_autolayoutViewClassMap & inMap) ;

  public: ~ DownEnumerator_autolayoutViewClassMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mSuperClassName (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mUserDefined (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameterList current_mParameterList (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionMap current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;

  public: class GGS_autolayoutViewClassMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autolayoutViewClassMap (const DownEnumerator_autolayoutViewClassMap &) = delete ;
  private: DownEnumerator_autolayoutViewClassMap & operator = (const DownEnumerator_autolayoutViewClassMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autolayoutViewClassMap final {
  public: UpEnumerator_autolayoutViewClassMap (const class GGS_autolayoutViewClassMap & inMap)  ;

  public: ~ UpEnumerator_autolayoutViewClassMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mUserDefined (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterList current_mParameterList (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewFunctionMap current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;
  public: class GGS_autolayoutViewClassMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autolayoutViewClassMap (const UpEnumerator_autolayoutViewClassMap &) = delete ;
  private: UpEnumerator_autolayoutViewClassMap & operator = (const UpEnumerator_autolayoutViewClassMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autolayoutViewClassMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autolayoutViewClassMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autolayoutViewClassMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autolayoutViewClassMap (void) ;

//--- Handle copy
  public: GGS_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inSource) ;
  public: GGS_autolayoutViewClassMap & operator = (const GGS_autolayoutViewClassMap & inSource) ;

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
  protected: void performInsert (const class GGS_autolayoutViewClassMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autolayoutViewClassMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autolayoutViewClassMap extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autolayoutViewClassMap class_func_mapWithMapToOverride (const class GGS_autolayoutViewClassMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  class GGS_bool constinArgument3,
                                                  class GGS_bool constinArgument4,
                                                  class GGS_bool constinArgument5,
                                                  class GGS_bool constinArgument6,
                                                  class GGS_bool constinArgument7,
                                                  class GGS_autoLayoutClassParameterList constinArgument8,
                                                  class GGS_astAutoLayoutViewFunctionMap constinArgument9,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewFunctionMapForKey (class GGS_astAutoLayoutViewFunctionMap constinArgument0,
                                                                            class GGS_string constinArgument1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleEnabledBindingForKey (class GGS_bool constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleGraphicControllerBindingForKey (class GGS_bool constinArgument0,
                                                                                 class GGS_string constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleHiddenBindingForKey (class GGS_bool constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesRunActionForKey (class GGS_bool constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBindingForKey (class GGS_bool constinArgument0,
                                                                           class GGS_string constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListForKey (class GGS_autoLayoutClassParameterList constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserDefinedForKey (class GGS_bool constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  class GGS_bool & outArgument3,
                                                  class GGS_bool & outArgument4,
                                                  class GGS_bool & outArgument5,
                                                  class GGS_bool & outArgument6,
                                                  class GGS_bool & outArgument7,
                                                  class GGS_autoLayoutClassParameterList & outArgument8,
                                                  class GGS_astAutoLayoutViewFunctionMap & outArgument9,
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

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMapForKey (const class GGS_string & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandleEnabledBindingForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandleGraphicControllerBindingForKey (const class GGS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandleHiddenBindingForKey (const class GGS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandlesRunActionForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandlesTableValueBindingForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterList getter_mParameterListForKey (const class GGS_string & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mUserDefinedForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autolayoutViewClassMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_autolayoutViewClassMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autolayoutViewClassMap ;
  friend class DownEnumerator_autolayoutViewClassMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutClassParameterList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutClassParameterList final {
  public: DownEnumerator_autoLayoutClassParameterList (const class GGS_autoLayoutClassParameterList & inList) ;

  public: ~ DownEnumerator_autoLayoutClassParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutClassParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutClassParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutClassParameterList (const DownEnumerator_autoLayoutClassParameterList &) = delete ;
  private: DownEnumerator_autoLayoutClassParameterList & operator = (const DownEnumerator_autoLayoutClassParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutClassParameterList final {
  public: UpEnumerator_autoLayoutClassParameterList (const class GGS_autoLayoutClassParameterList & inList)  ;

  public: ~ UpEnumerator_autoLayoutClassParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutClassParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutClassParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutClassParameterList (const UpEnumerator_autoLayoutClassParameterList &) = delete ;
  private: UpEnumerator_autoLayoutClassParameterList & operator = (const UpEnumerator_autoLayoutClassParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutClassParameterList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameterList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutClassParameterList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutClassParameterList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutClassParameterList (void) = default ;

//--- Copy
  public: GGS_autoLayoutClassParameterList (const GGS_autoLayoutClassParameterList &) = default ;
  public: GGS_autoLayoutClassParameterList & operator = (const GGS_autoLayoutClassParameterList &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutClassParameterList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutClassParameterList subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutClassParameterList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mParameterName,
                                                 const class GGS_autoLayoutClassParameterType & in_mParameterType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutClassParameterList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutClassParameterList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutClassParameterList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_autoLayoutClassParameterType & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutClassParameterList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_autoLayoutClassParameterType & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutClassParameterList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutClassParameterList add_operation (const GGS_autoLayoutClassParameterList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_autoLayoutClassParameterType constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_autoLayoutClassParameterType constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_autoLayoutClassParameterType & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_autoLayoutClassParameterType & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_autoLayoutClassParameterType & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterTypeAtIndex (class GGS_autoLayoutClassParameterType constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_autoLayoutClassParameterType & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_autoLayoutClassParameterType & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mParameterNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterType getter_mParameterTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutClassParameterList ;
  friend class DownEnumerator_autoLayoutClassParameterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewFunctionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_astAutoLayoutViewFunctionMap final {

  public: DownEnumerator_astAutoLayoutViewFunctionMap (const class GGS_astAutoLayoutViewFunctionMap & inMap) ;

  public: ~ DownEnumerator_astAutoLayoutViewFunctionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameterList current_mFomalParameterList (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astAutoLayoutViewFunctionMap (const DownEnumerator_astAutoLayoutViewFunctionMap &) = delete ;
  private: DownEnumerator_astAutoLayoutViewFunctionMap & operator = (const DownEnumerator_astAutoLayoutViewFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astAutoLayoutViewFunctionMap final {
  public: UpEnumerator_astAutoLayoutViewFunctionMap (const class GGS_astAutoLayoutViewFunctionMap & inMap)  ;

  public: ~ UpEnumerator_astAutoLayoutViewFunctionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterList current_mFomalParameterList (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewFunctionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astAutoLayoutViewFunctionMap (const UpEnumerator_astAutoLayoutViewFunctionMap &) = delete ;
  private: UpEnumerator_astAutoLayoutViewFunctionMap & operator = (const UpEnumerator_astAutoLayoutViewFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_astAutoLayoutViewFunctionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_astAutoLayoutViewFunctionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_astAutoLayoutViewFunctionMap (void) ;

//--- Handle copy
  public: GGS_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inSource) ;
  public: GGS_astAutoLayoutViewFunctionMap & operator = (const GGS_astAutoLayoutViewFunctionMap & inSource) ;

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
  protected: void performInsert (const class GGS_astAutoLayoutViewFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionMap init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewFunctionMap extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewFunctionMap class_func_mapWithMapToOverride (const class GGS_astAutoLayoutViewFunctionMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_autoLayoutClassParameterList constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFomalParameterListForKey (class GGS_autoLayoutClassParameterList constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_autoLayoutClassParameterList & outArgument1,
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

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterList getter_mFomalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewFunctionMap getter_overriddenMap (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astAutoLayoutViewFunctionMap ;
  friend class DownEnumerator_astAutoLayoutViewFunctionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autolayoutViewClassMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutViewClassMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mSuperClassName ;
  public: inline GGS_lstring readProperty_mSuperClassName (void) const {
    return mProperty_mSuperClassName ;
  }

  public: GGS_bool mProperty_mHandlesRunAction ;
  public: inline GGS_bool readProperty_mHandlesRunAction (void) const {
    return mProperty_mHandlesRunAction ;
  }

  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: inline GGS_bool readProperty_mHandlesTableValueBinding (void) const {
    return mProperty_mHandlesTableValueBinding ;
  }

  public: GGS_bool mProperty_mHandleEnabledBinding ;
  public: inline GGS_bool readProperty_mHandleEnabledBinding (void) const {
    return mProperty_mHandleEnabledBinding ;
  }

  public: GGS_bool mProperty_mHandleHiddenBinding ;
  public: inline GGS_bool readProperty_mHandleHiddenBinding (void) const {
    return mProperty_mHandleHiddenBinding ;
  }

  public: GGS_bool mProperty_mHandleGraphicControllerBinding ;
  public: inline GGS_bool readProperty_mHandleGraphicControllerBinding (void) const {
    return mProperty_mHandleGraphicControllerBinding ;
  }

  public: GGS_bool mProperty_mUserDefined ;
  public: inline GGS_bool readProperty_mUserDefined (void) const {
    return mProperty_mUserDefined ;
  }

  public: GGS_autoLayoutClassParameterList mProperty_mParameterList ;
  public: inline GGS_autoLayoutClassParameterList readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;
  public: inline GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutViewFunctionMap (void) const {
    return mProperty_mAutoLayoutViewFunctionMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autolayoutViewClassMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSuperClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSuperClassName = inValue ;
  }

  public: inline void setter_setMHandlesRunAction (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesRunAction = inValue ;
  }

  public: inline void setter_setMHandlesTableValueBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesTableValueBinding = inValue ;
  }

  public: inline void setter_setMHandleEnabledBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleEnabledBinding = inValue ;
  }

  public: inline void setter_setMHandleHiddenBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleHiddenBinding = inValue ;
  }

  public: inline void setter_setMHandleGraphicControllerBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleGraphicControllerBinding = inValue ;
  }

  public: inline void setter_setMUserDefined (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserDefined = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_autoLayoutClassParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutViewFunctionMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autolayoutViewClassMap_2E_element (const GGS_lstring & in_lkey,
                                                 const GGS_lstring & in_mSuperClassName,
                                                 const GGS_bool & in_mHandlesRunAction,
                                                 const GGS_bool & in_mHandlesTableValueBinding,
                                                 const GGS_bool & in_mHandleEnabledBinding,
                                                 const GGS_bool & in_mHandleHiddenBinding,
                                                 const GGS_bool & in_mHandleGraphicControllerBinding,
                                                 const GGS_bool & in_mUserDefined,
                                                 const GGS_autoLayoutClassParameterList & in_mParameterList,
                                                 const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap) ;

//--------------------------------- Copy constructor
  public: GGS_autolayoutViewClassMap_2E_element (const GGS_autolayoutViewClassMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autolayoutViewClassMap_2E_element & operator = (const GGS_autolayoutViewClassMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autolayoutViewClassMap_2E_element init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                     const class GGS_bool & inOperand2,
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
  public: static GGS_autolayoutViewClassMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autolayoutViewClassMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutViewClassMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autolayoutViewClassMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autolayoutViewClassMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autolayoutViewClassMap_2E_element_3F_ (const GGS_autolayoutViewClassMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autolayoutViewClassMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autolayoutViewClassMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_autolayoutViewClassMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutBindingSpecificationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutBindingSpecificationMap final {

  public: DownEnumerator_autoLayoutBindingSpecificationMap (const class GGS_autoLayoutBindingSpecificationMap & inMap) ;

  public: ~ DownEnumerator_autoLayoutBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutBindingSpecificationMap (const DownEnumerator_autoLayoutBindingSpecificationMap &) = delete ;
  private: DownEnumerator_autoLayoutBindingSpecificationMap & operator = (const DownEnumerator_autoLayoutBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutBindingSpecificationMap final {
  public: UpEnumerator_autoLayoutBindingSpecificationMap (const class GGS_autoLayoutBindingSpecificationMap & inMap)  ;

  public: ~ UpEnumerator_autoLayoutBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutBindingSpecificationMap (const UpEnumerator_autoLayoutBindingSpecificationMap &) = delete ;
  private: UpEnumerator_autoLayoutBindingSpecificationMap & operator = (const UpEnumerator_autoLayoutBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutBindingSpecificationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autoLayoutBindingSpecificationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autoLayoutBindingSpecificationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autoLayoutBindingSpecificationMap (void) ;

//--- Handle copy
  public: GGS_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inSource) ;
  public: GGS_autoLayoutBindingSpecificationMap & operator = (const GGS_autoLayoutBindingSpecificationMap & inSource) ;

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
  protected: void performInsert (const class GGS_autoLayoutBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutBindingSpecificationMap init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutBindingSpecificationMap extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutBindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_autoLayoutBindingSpecificationMap & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  class GGS_autoLayoutViewBindingSpecificationMap constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_autoLayoutViewBindingSpecificationMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingMapForKey (class GGS_autoLayoutViewBindingSpecificationMap constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_autoLayoutViewBindingSpecificationMap & outArgument2,
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

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewBindingSpecificationMap getter_mBindingMapForKey (const class GGS_string & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOutletSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutBindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutBindingSpecificationMap ;
  friend class DownEnumerator_autoLayoutBindingSpecificationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewBindingSpecificationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewBindingSpecificationMap final {

  public: DownEnumerator_autoLayoutViewBindingSpecificationMap (const class GGS_autoLayoutViewBindingSpecificationMap & inMap) ;

  public: ~ DownEnumerator_autoLayoutViewBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutViewBindingSpecificationMap (const DownEnumerator_autoLayoutViewBindingSpecificationMap &) = delete ;
  private: DownEnumerator_autoLayoutViewBindingSpecificationMap & operator = (const DownEnumerator_autoLayoutViewBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewBindingSpecificationMap final {
  public: UpEnumerator_autoLayoutViewBindingSpecificationMap (const class GGS_autoLayoutViewBindingSpecificationMap & inMap)  ;

  public: ~ UpEnumerator_autoLayoutViewBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutViewBindingSpecificationMap (const UpEnumerator_autoLayoutViewBindingSpecificationMap &) = delete ;
  private: UpEnumerator_autoLayoutViewBindingSpecificationMap & operator = (const UpEnumerator_autoLayoutViewBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewBindingSpecificationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autoLayoutViewBindingSpecificationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autoLayoutViewBindingSpecificationMap (void) ;

//--- Handle copy
  public: GGS_autoLayoutViewBindingSpecificationMap (const GGS_autoLayoutViewBindingSpecificationMap & inSource) ;
  public: GGS_autoLayoutViewBindingSpecificationMap & operator = (const GGS_autoLayoutViewBindingSpecificationMap & inSource) ;

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
  protected: void performInsert (const class GGS_autoLayoutViewBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewBindingSpecificationMap init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewBindingSpecificationMap extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewBindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_autoLayoutViewBindingSpecificationMap & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_outletBindingSpecificationModelList constinArgument1,
                                                  class GGS_controllerBindingOptionDecoratedList constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControllerBindingOptionListForKey (class GGS_controllerBindingOptionDecoratedList constinArgument0,
                                                                              class GGS_string constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletBindingSpecificationModelListForKey (class GGS_outletBindingSpecificationModelList constinArgument0,
                                                                                      class GGS_string constinArgument1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_outletBindingSpecificationModelList & outArgument1,
                                                  class GGS_controllerBindingOptionDecoratedList & outArgument2,
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

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionDecoratedList getter_mControllerBindingOptionListForKey (const class GGS_string & constinOperand0,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationModelList getter_mOutletBindingSpecificationModelListForKey (const class GGS_string & constinOperand0,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewBindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutViewBindingSpecificationMap ;
  friend class DownEnumerator_autoLayoutViewBindingSpecificationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutBindingSpecificationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutBindingSpecificationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mOutletSuperClassName ;
  public: inline GGS_lstring readProperty_mOutletSuperClassName (void) const {
    return mProperty_mOutletSuperClassName ;
  }

  public: GGS_autoLayoutViewBindingSpecificationMap mProperty_mBindingMap ;
  public: inline GGS_autoLayoutViewBindingSpecificationMap readProperty_mBindingMap (void) const {
    return mProperty_mBindingMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletSuperClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletSuperClassName = inValue ;
  }

  public: inline void setter_setMBindingMap (const GGS_autoLayoutViewBindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                            const GGS_lstring & in_mOutletSuperClassName,
                                                            const GGS_autoLayoutViewBindingSpecificationMap & in_mBindingMap) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element (const GGS_autoLayoutBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutBindingSpecificationMap_2E_element & operator = (const GGS_autoLayoutBindingSpecificationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutBindingSpecificationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    const class GGS_autoLayoutViewBindingSpecificationMap & inOperand2,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutBindingSpecificationMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutBindingSpecificationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutBindingSpecificationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ (const GGS_autoLayoutBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutBindingSpecificationMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewFunctionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_autoLayoutClassParameterList mProperty_mFomalParameterList ;
  public: inline GGS_autoLayoutClassParameterList readProperty_mFomalParameterList (void) const {
    return mProperty_mFomalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFomalParameterList (const GGS_autoLayoutClassParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFomalParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element (const GGS_lstring & in_lkey,
                                                       const GGS_autoLayoutClassParameterList & in_mFomalParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element (const GGS_astAutoLayoutViewFunctionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewFunctionMap_2E_element & operator = (const GGS_astAutoLayoutViewFunctionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_autoLayoutClassParameterList & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewFunctionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewFunctionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ (const GGS_astAutoLayoutViewFunctionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewFunctionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationFunctionListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumerationFunctionListAST final {
  public: DownEnumerator_enumerationFunctionListAST (const class GGS_enumerationFunctionListAST & inList) ;

  public: ~ DownEnumerator_enumerationFunctionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mEnumName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS__32_lstringlist current_mAssociationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumerationFunctionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumerationFunctionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_enumerationFunctionListAST (const DownEnumerator_enumerationFunctionListAST &) = delete ;
  private: DownEnumerator_enumerationFunctionListAST & operator = (const DownEnumerator_enumerationFunctionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumerationFunctionListAST final {
  public: UpEnumerator_enumerationFunctionListAST (const class GGS_enumerationFunctionListAST & inList)  ;

  public: ~ UpEnumerator_enumerationFunctionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mEnumName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS__32_lstringlist current_mAssociationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumerationFunctionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumerationFunctionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_enumerationFunctionListAST (const UpEnumerator_enumerationFunctionListAST &) = delete ;
  private: UpEnumerator_enumerationFunctionListAST & operator = (const UpEnumerator_enumerationFunctionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @enumerationFunctionListAST list
//--------------------------------------------------------------------------------------------------

class GGS_enumerationFunctionListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_enumerationFunctionListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_enumerationFunctionListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_enumerationFunctionListAST (void) = default ;

//--- Copy
  public: GGS_enumerationFunctionListAST (const GGS_enumerationFunctionListAST &) = default ;
  public: GGS_enumerationFunctionListAST & operator = (const GGS_enumerationFunctionListAST &) = default ;

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
  public : inline GenericArray <GGS_enumerationFunctionListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_enumerationFunctionListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_enumerationFunctionListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mEnumName,
                                                 const class GGS_lstring & in_mFunctionName,
                                                 const class GGS__32_lstringlist & in_mAssociationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationFunctionListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationFunctionListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumerationFunctionListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS__32_lstringlist & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_enumerationFunctionListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS__32_lstringlist & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_enumerationFunctionListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_enumerationFunctionListAST add_operation (const GGS_enumerationFunctionListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS__32_lstringlist constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS__32_lstringlist constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS__32_lstringlist & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS__32_lstringlist & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS__32_lstringlist & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociationListAtIndex (class GGS__32_lstringlist constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumNameAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS__32_lstringlist & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS__32_lstringlist & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_mAssociationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mEnumNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumerationFunctionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumerationFunctionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumerationFunctionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_enumerationFunctionListAST ;
  friend class DownEnumerator_enumerationFunctionListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationFunctionListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_enumerationFunctionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mEnumName ;
  public: inline GGS_lstring readProperty_mEnumName (void) const {
    return mProperty_mEnumName ;
  }

  public: GGS_lstring mProperty_mFunctionName ;
  public: inline GGS_lstring readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GGS__32_lstringlist mProperty_mAssociationList ;
  public: inline GGS__32_lstringlist readProperty_mAssociationList (void) const {
    return mProperty_mAssociationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumerationFunctionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumName = inValue ;
  }

  public: inline void setter_setMFunctionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMAssociationList (const GGS__32_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumerationFunctionListAST_2E_element (const GGS_lstring & in_mEnumName,
                                                     const GGS_lstring & in_mFunctionName,
                                                     const GGS__32_lstringlist & in_mAssociationList) ;

//--------------------------------- Copy constructor
  public: GGS_enumerationFunctionListAST_2E_element (const GGS_enumerationFunctionListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumerationFunctionListAST_2E_element & operator = (const GGS_enumerationFunctionListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationFunctionListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS__32_lstringlist & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationFunctionListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerBoundColumnListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST final {
  public: DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const class GGS_autoLayoutTableViewControllerBoundColumnListAST & inList) ;

  public: ~ DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterList current_mColumnParameterListAST (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSortPropertyName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST &) = delete ;
  private: DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST & operator = (const DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST final {
  public: UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const class GGS_autoLayoutTableViewControllerBoundColumnListAST & inList)  ;

  public: ~ UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterList current_mColumnParameterListAST (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSortPropertyName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST &) = delete ;
  private: UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST & operator = (const UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerBoundColumnListAST list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutTableViewControllerBoundColumnListAST (void) = default ;

//--- Copy
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST &) = default ;
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST & operator = (const GGS_autoLayoutTableViewControllerBoundColumnListAST &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutTableViewControllerBoundColumnListAST subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_bool & in_mEditable,
                                                 const class GGS_lstring & in_mPropertyName,
                                                 const class GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                 const class GGS_lstring & in_mSortPropertyName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerBoundColumnListAST init (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerBoundColumnListAST extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerBoundColumnListAST class_func_listWithValue (const class GGS_bool & inOperand0,
                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                     const class GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                     const class GGS_lstring & inOperand3
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_bool & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                    const class GGS_lstring & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutTableViewControllerBoundColumnListAST add_operation (const GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_bool constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_astAutoLayoutViewInstructionParameterList constinArgument2,
                                               class GGS_lstring constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_bool constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_astAutoLayoutViewInstructionParameterList constinArgument2,
                                                      class GGS_lstring constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_bool & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                                 class GGS_lstring & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_bool & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                                class GGS_lstring & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_bool & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                                      class GGS_lstring & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMColumnParameterListASTAtIndex (class GGS_astAutoLayoutViewInstructionParameterList constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEditableAtIndex (class GGS_bool constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortPropertyNameAtIndex (class GGS_lstring constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_bool & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                              class GGS_lstring & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_bool & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                             class GGS_lstring & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterList getter_mColumnParameterListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mEditableAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSortPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerBoundColumnListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerBoundColumnListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerBoundColumnListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST ;
  friend class DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_astAutoLayoutViewInstructionParameterList final {
  public: DownEnumerator_astAutoLayoutViewInstructionParameterList (const class GGS_astAutoLayoutViewInstructionParameterList & inList) ;

  public: ~ DownEnumerator_astAutoLayoutViewInstructionParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterValue current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutViewInstructionParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astAutoLayoutViewInstructionParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astAutoLayoutViewInstructionParameterList (const DownEnumerator_astAutoLayoutViewInstructionParameterList &) = delete ;
  private: DownEnumerator_astAutoLayoutViewInstructionParameterList & operator = (const DownEnumerator_astAutoLayoutViewInstructionParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astAutoLayoutViewInstructionParameterList final {
  public: UpEnumerator_astAutoLayoutViewInstructionParameterList (const class GGS_astAutoLayoutViewInstructionParameterList & inList)  ;

  public: ~ UpEnumerator_astAutoLayoutViewInstructionParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterValue current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutViewInstructionParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astAutoLayoutViewInstructionParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astAutoLayoutViewInstructionParameterList (const UpEnumerator_astAutoLayoutViewInstructionParameterList &) = delete ;
  private: UpEnumerator_astAutoLayoutViewInstructionParameterList & operator = (const UpEnumerator_astAutoLayoutViewInstructionParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @astAutoLayoutViewInstructionParameterList list
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_astAutoLayoutViewInstructionParameterList_2E_element> mArray ;

//--- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterList (void) ;

//--- Destructor
  public: virtual ~ GGS_astAutoLayoutViewInstructionParameterList (void) = default ;

//--- Copy
  public: GGS_astAutoLayoutViewInstructionParameterList (const GGS_astAutoLayoutViewInstructionParameterList &) = default ;
  public: GGS_astAutoLayoutViewInstructionParameterList & operator = (const GGS_astAutoLayoutViewInstructionParameterList &) = default ;

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
  public : inline GenericArray <GGS_astAutoLayoutViewInstructionParameterList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_astAutoLayoutViewInstructionParameterList subList (const int32_t inStart,
                                                                  const int32_t inLength,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_astAutoLayoutViewInstructionParameterList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mParameterName,
                                                 const class GGS_autoLayoutClassParameterType & in_mParameterType,
                                                 const class GGS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterList init (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterList extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                               const class GGS_autoLayoutClassParameterType & inOperand1,
                                                                                               const class GGS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_astAutoLayoutViewInstructionParameterList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_autoLayoutClassParameterType & inOperand1,
                                                    const class GGS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_astAutoLayoutViewInstructionParameterList add_operation (const GGS_astAutoLayoutViewInstructionParameterList & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_autoLayoutClassParameterType constinArgument1,
                                               class GGS_astAutoLayoutViewInstructionParameterValue constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_autoLayoutClassParameterType constinArgument1,
                                                      class GGS_astAutoLayoutViewInstructionParameterValue constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_autoLayoutClassParameterType & outArgument1,
                                                 class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_autoLayoutClassParameterType & outArgument1,
                                                class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_autoLayoutClassParameterType & outArgument1,
                                                      class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterAtIndex (class GGS_astAutoLayoutViewInstructionParameterValue constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterTypeAtIndex (class GGS_autoLayoutClassParameterType constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_autoLayoutClassParameterType & outArgument1,
                                              class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_autoLayoutClassParameterType & outArgument1,
                                             class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterValue getter_mParameterAtIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mParameterNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterType getter_mParameterTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astAutoLayoutViewInstructionParameterList ;
  friend class DownEnumerator_astAutoLayoutViewInstructionParameterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerBoundColumnListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mEditable ;
  public: inline GGS_bool readProperty_mEditable (void) const {
    return mProperty_mEditable ;
  }

  public: GGS_lstring mProperty_mPropertyName ;
  public: inline GGS_lstring readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GGS_astAutoLayoutViewInstructionParameterList mProperty_mColumnParameterListAST ;
  public: inline GGS_astAutoLayoutViewInstructionParameterList readProperty_mColumnParameterListAST (void) const {
    return mProperty_mColumnParameterListAST ;
  }

  public: GGS_lstring mProperty_mSortPropertyName ;
  public: inline GGS_lstring readProperty_mSortPropertyName (void) const {
    return mProperty_mSortPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEditable (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEditable = inValue ;
  }

  public: inline void setter_setMPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMColumnParameterListAST (const GGS_astAutoLayoutViewInstructionParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnParameterListAST = inValue ;
  }

  public: inline void setter_setMSortPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element (const GGS_bool & in_mEditable,
                                                                          const GGS_lstring & in_mPropertyName,
                                                                          const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                          const GGS_lstring & in_mSortPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & operator = (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element init_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                      const class GGS_lstring & inOperand1,
                                                                                                      const class GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                      const class GGS_lstring & inOperand3,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum astAutoLayoutViewInstructionParameterValue
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_string,
    enum_menuItem,
    enum_enumFunc,
    enum_viewFunc,
    enum_entity
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_string (class GGS_string & out_value) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_menuItem (class GGS_string & out_title,
                                                                 class GGS_runActionDescriptor & out_run,
                                                                 class GGS_multipleBindingDescriptor & out_enabled) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_enumFunc (class GGS_lstring & out_enumTypeName,
                                                                 class GGS_lstring & out_enumFuncName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_viewFunc (class GGS_astAbstractViewInstructionDeclaration & out_instruction) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_entity (class GGS_lstring & out_entityName) const ;

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
  public: static GGS_astAutoLayoutViewInstructionParameterValue extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterValue class_func_entity (const class GGS_lstring & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutViewInstructionParameterValue class_func_enumFunc (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutViewInstructionParameterValue class_func_menuItem (const class GGS_string & inOperand0,
                                                                                           const class GGS_runActionDescriptor & inOperand1,
                                                                                           const class GGS_multipleBindingDescriptor & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutViewInstructionParameterValue class_func_string (const class GGS_string & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutViewInstructionParameterValue class_func_viewFunc (const class GGS_astAbstractViewInstructionDeclaration & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractEntity (class GGS_lstring & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractEnumFunc (class GGS_lstring & outArgument0,
                                                        class GGS_lstring & outArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractMenuItem (class GGS_string & outArgument0,
                                                        class GGS_runActionDescriptor & outArgument1,
                                                        class GGS_multipleBindingDescriptor & outArgument2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractString (class GGS_string & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractViewFunc (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ getter_getEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ getter_getEnumFunc (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ getter_getMenuItem (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ getter_getString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ getter_getViewFunc (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEnumFunc (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMenuItem (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isViewFunc (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue ;

//--------------------------------------------------------------------------------------------------
//   enum autoLayoutClassParameterType
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameterType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_autoLayoutClassParameterType (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_typeString,
    enum_typeStringArray,
    enum_typeInt,
    enum_typeBool,
    enum_typeView,
    enum_menuItem,
    enum_entity,
    enum_typeEnum
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_typeEnum (class GGS_lstring & out_name) const ;

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
  public: static GGS_autoLayoutClassParameterType extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutClassParameterType class_func_entity (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_menuItem (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_typeBool (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_typeEnum (const class GGS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_typeInt (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_typeString (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_typeStringArray (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_typeView (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutClassParameterType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractTypeEnum (class GGS_lstring & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ getter_getTypeEnum (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMenuItem (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTypeBool (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTypeEnum (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTypeInt (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTypeString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTypeStringArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTypeView (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mParameterName ;
  public: inline GGS_lstring readProperty_mParameterName (void) const {
    return mProperty_mParameterName ;
  }

  public: GGS_autoLayoutClassParameterType mProperty_mParameterType ;
  public: inline GGS_autoLayoutClassParameterType readProperty_mParameterType (void) const {
    return mProperty_mParameterType ;
  }

  public: GGS_astAutoLayoutViewInstructionParameterValue mProperty_mParameter ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue readProperty_mParameter (void) const {
    return mProperty_mParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterName = inValue ;
  }

  public: inline void setter_setMParameterType (const GGS_autoLayoutClassParameterType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterType = inValue ;
  }

  public: inline void setter_setMParameter (const GGS_astAutoLayoutViewInstructionParameterValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameter = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element (const GGS_lstring & in_mParameterName,
                                                                    const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                    const GGS_astAutoLayoutViewInstructionParameterValue & in_mParameter) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element & operator = (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterList_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_autoLayoutClassParameterType & inOperand1,
                                                                                            const class GGS_astAutoLayoutViewInstructionParameterValue & inOperand2,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerAttributListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutTableViewControllerAttributListAST final {
  public: DownEnumerator_autoLayoutTableViewControllerAttributListAST (const class GGS_autoLayoutTableViewControllerAttributListAST & inList) ;

  public: ~ DownEnumerator_autoLayoutTableViewControllerAttributListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mAttributeValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerAttributListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerAttributListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutTableViewControllerAttributListAST (const DownEnumerator_autoLayoutTableViewControllerAttributListAST &) = delete ;
  private: DownEnumerator_autoLayoutTableViewControllerAttributListAST & operator = (const DownEnumerator_autoLayoutTableViewControllerAttributListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutTableViewControllerAttributListAST final {
  public: UpEnumerator_autoLayoutTableViewControllerAttributListAST (const class GGS_autoLayoutTableViewControllerAttributListAST & inList)  ;

  public: ~ UpEnumerator_autoLayoutTableViewControllerAttributListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mAttributeValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerAttributListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerAttributListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutTableViewControllerAttributListAST (const UpEnumerator_autoLayoutTableViewControllerAttributListAST &) = delete ;
  private: UpEnumerator_autoLayoutTableViewControllerAttributListAST & operator = (const UpEnumerator_autoLayoutTableViewControllerAttributListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerAttributListAST list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerAttributListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutTableViewControllerAttributListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutTableViewControllerAttributListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutTableViewControllerAttributListAST (void) = default ;

//--- Copy
  public: GGS_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST &) = default ;
  public: GGS_autoLayoutTableViewControllerAttributListAST & operator = (const GGS_autoLayoutTableViewControllerAttributListAST &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutTableViewControllerAttributListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutTableViewControllerAttributListAST subList (const int32_t inStart,
                                                                     const int32_t inLength,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutTableViewControllerAttributListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mAttributeName,
                                                 const class GGS_abstractDefaultValue & in_mAttributeValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerAttributListAST init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerAttributListAST extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerAttributListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_abstractDefaultValue & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutTableViewControllerAttributListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_abstractDefaultValue & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutTableViewControllerAttributListAST add_operation (const GGS_autoLayoutTableViewControllerAttributListAST & inOperand,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_abstractDefaultValue constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_abstractDefaultValue constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_abstractDefaultValue & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_abstractDefaultValue & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_abstractDefaultValue & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeValueAtIndex (class GGS_abstractDefaultValue constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_abstractDefaultValue & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_abstractDefaultValue & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractDefaultValue getter_mAttributeValueAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerAttributListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerAttributListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerAttributListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutTableViewControllerAttributListAST ;
  friend class DownEnumerator_autoLayoutTableViewControllerAttributListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerAttributListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerAttributListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mAttributeName ;
  public: inline GGS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GGS_abstractDefaultValue mProperty_mAttributeValue ;
  public: inline GGS_abstractDefaultValue readProperty_mAttributeValue (void) const {
    return mProperty_mAttributeValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerAttributListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAttributeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMAttributeValue (const GGS_abstractDefaultValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutTableViewControllerAttributListAST_2E_element (const GGS_lstring & in_mAttributeName,
                                                                       const GGS_abstractDefaultValue & in_mAttributeValue) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerAttributListAST_2E_element (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerAttributListAST_2E_element & operator = (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerAttributListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_abstractDefaultValue & inOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerAttributListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST_2E_element ;

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

  public: class GGS_autoLayoutTableViewControllerBoundColumnListAST readProperty_mTableViewControllerBoundColumnListAST (void) const ;

  public: class GGS_autoLayoutTableViewControllerAttributListAST readProperty_mTableViewControllerAttributListAST (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerDeclarationAST init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_lstring & inOperand1,
                                                                                                   const class GGS_bool & inOperand2,
                                                                                                   const class GGS_lstring & inOperand3,
                                                                                                   const class GGS_lstring & inOperand4,
                                                                                                   const class GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand5,
                                                                                                   const class GGS_autoLayoutTableViewControllerAttributListAST & inOperand6,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerDeclarationAST extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                                             const class GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand5,
                                                                                             const class GGS_autoLayoutTableViewControllerAttributListAST & inOperand6,
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
  public: GGS_bool mProperty_mIsRoot ;
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mToManyPropertyName ;
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST mProperty_mTableViewControllerBoundColumnListAST ;
  public: GGS_autoLayoutTableViewControllerAttributListAST mProperty_mTableViewControllerAttributListAST ;


//--- Default constructor
  public: cPtr_autoLayoutTableViewControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutTableViewControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                            const GGS_lstring & in_mControllerName,
                                                            const GGS_bool & in_mIsRoot,
                                                            const GGS_lstring & in_mRootEntityName,
                                                            const GGS_lstring & in_mToManyPropertyName,
                                                            const GGS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                            const GGS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
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
// Phase 1: @autoLayoutTableViewControllerDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak (const class GGS_autoLayoutTableViewControllerDeclarationAST & inSource) ;

  public: GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak & operator = (const class GGS_autoLayoutTableViewControllerDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak init_nil (void) {
    GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutTableViewControllerDeclarationAST bang_autoLayoutTableViewControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutTableViewControllerDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerPropertyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutTableViewControllerPropertyGeneration (const class cPtr_autoLayoutTableViewControllerPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mModelString (void) const ;

  public: class GGS_string readProperty_mOwnerName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerPropertyGeneration init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_string & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerPropertyGeneration extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutTableViewControllerPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutTableViewControllerPropertyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutTableViewControllerPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutTableViewControllerPropertyGeneration_init_21__21__21_ (const class GGS_string & inOperand0,
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
  public: cPtr_autoLayoutTableViewControllerPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutTableViewControllerPropertyGeneration (const GGS_string & in_mPropertyName,
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
// Phase 1: @autoLayoutTableViewControllerPropertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak (const class GGS_autoLayoutTableViewControllerPropertyGeneration & inSource) ;

  public: GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak & operator = (const class GGS_autoLayoutTableViewControllerPropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutTableViewControllerPropertyGeneration bang_autoLayoutTableViewControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutTableViewControllerPropertyGeneration unwrappedValue (void) const ;

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
  public: static GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration_2E_weak ;

