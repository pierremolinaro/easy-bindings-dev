#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

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

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipOptionAST_2E_hasDependance class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasDependance ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: toManyRelationshipOptionAST.hasDependance? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasDependance_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipOptionAST_2E_hasOpposite class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: toManyRelationshipOptionAST.hasOpposite? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyRelationshipAST_2E_weak weak reference class
//
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
  public: inline GGS_toManyRelationshipAST unwrappedValue (void) const {
    GGS_toManyRelationshipAST result ;
    if (isValid ()) {
      const cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_toManyRelationshipAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipAST_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipOptionGeneration_2E_hasDependance class_func_new (const class GGS_string & inOperand0,
                                                                                               const class GGS_string & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasDependance ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: toManyRelationshipOptionGeneration.hasDependance? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipOptionGeneration_2E_hasOpposite class_func_new (const class GGS_string & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasOpposite ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: toManyRelationshipOptionGeneration.hasOpposite? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyPropertyGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyPropertyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                    const class GGS_bool & inOperand1,
                                                                    const class GGS_bool & inOperand2,
                                                                    const class GGS_propertyKind & inOperand3,
                                                                    const class GGS_toManyRelationshipOptionGeneration & inOperand4,
                                                                    const class GGS_bool & inOperand5,
                                                                    const class GGS_bool & inOperand6,
                                                                    const class GGS_bool & inOperand7,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toManyPropertyGeneration class
//
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

//--- Extension getter objectAccessibilityCodeForSaveOperation
  public: virtual class GGS_string getter_objectAccessibilityCodeForSaveOperation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter prefKeyDefinitionCode
  public: virtual class GGS_string getter_prefKeyDefinitionCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter resetToManyRelationships
  public: virtual class GGS_string getter_resetToManyRelationships (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter setupRelationshipFromDictionaryCode
  public: virtual class GGS_string getter_setupRelationshipFromDictionaryCode (Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyPropertyGeneration_2E_weak weak reference class
//
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
  public: inline GGS_toManyPropertyGeneration unwrappedValue (void) const {
    GGS_toManyPropertyGeneration result ;
    if (isValid ()) {
      const cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_toManyPropertyGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyPropertyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_toManyPropertyGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_toManyPropertyGenerationList (const class GGS_toManyPropertyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_toManyPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toManyPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_toManyPropertyGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_toManyPropertyGenerationList (const class GGS_toManyPropertyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_toManyPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toManyPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyPropertyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_toManyPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_toManyPropertyGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_toManyPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: static class GGS_toManyPropertyGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_toManyPropertyGenerationList class_func_listWithValue (const class GGS_toManyPropertyGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_toManyPropertyGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_toManyPropertyGeneration & inOperand0
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
  public: VIRTUAL_IN_DEBUG class GGS_toManyPropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_toManyPropertyGenerationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_toManyPropertyGenerationList ;
  friend class DownEnumerator_toManyPropertyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyPropertyGenerationList_2E_element class_func_new (const class GGS_toManyPropertyGeneration & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @validationStubRoutineListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_validationStubRoutineListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_validationStubRoutineListForGeneration (const class GGS_validationStubRoutineListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mObjectTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mModelName (LOCATION_ARGS) const ;
  public: class GGS_string current_mModelTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_validationStubRoutineListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_validationStubRoutineListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_validationStubRoutineListForGeneration (const class GGS_validationStubRoutineListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mObjectTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mModelName (LOCATION_ARGS) const ;
  public: class GGS_string current_mModelTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_validationStubRoutineListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @validationStubRoutineListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_validationStubRoutineListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_validationStubRoutineListForGeneration (void) ;

//--------------------------------- List constructor by graph
  public: GGS_validationStubRoutineListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: static class GGS_validationStubRoutineListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_validationStubRoutineListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                            const class GGS_string & inOperand1,
                                                                                            const class GGS_string & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_validationStubRoutineListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_string & inOperand2
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
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mModelNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mModelTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mObjectTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_validationStubRoutineListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_validationStubRoutineListForGeneration ;
  friend class DownEnumerator_validationStubRoutineListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_validationStubRoutineListForGeneration_2E_element class_func_new (const class GGS_string & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_actionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_actionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_actionMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_actionMap_2E_element (const GGS_actionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_actionMap_2E_element & operator = (const GGS_actionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actionMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actionMap_2E_element extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: actionMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_actionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_actionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_actionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_actionMap_2E_element_3F_ (const GGS_actionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_actionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_actionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_actionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actionFileGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_actionFileGeneration class_func_new (const class GGS_string & inOperand0,
                                                                const class GGS_string & inOperand1,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_actionFileGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionFileGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @actionFileGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_actionFileGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void actionFileGeneration_init_21__21_ (const class GGS_string & inOperand0,
                                                  const class GGS_string & inOperand1,
                                                  Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actionFileGeneration_2E_weak weak reference class
//
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
  public: inline GGS_actionFileGeneration unwrappedValue (void) const {
    GGS_actionFileGeneration result ;
    if (isValid ()) {
      const cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_actionFileGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionFileGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBooleanMultipleBindingExpressionAST_2E_weak weak reference class
//
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
  public: inline GGS_abstractBooleanMultipleBindingExpressionAST unwrappedValue (void) const {
    GGS_abstractBooleanMultipleBindingExpressionAST result ;
    if (isValid ()) {
      const cPtr_abstractBooleanMultipleBindingExpressionAST * p = (cPtr_abstractBooleanMultipleBindingExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractBooleanMultipleBindingExpressionAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalIntMultipleBindingExpressionAST_2E_weak weak reference class
//
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
  public: inline GGS_literalIntMultipleBindingExpressionAST unwrappedValue (void) const {
    GGS_literalIntMultipleBindingExpressionAST result ;
    if (isValid ()) {
      const cPtr_literalIntMultipleBindingExpressionAST * p = (cPtr_literalIntMultipleBindingExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_literalIntMultipleBindingExpressionAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @negateBooleanMultipleBindingExpressionAST_2E_weak weak reference class
//
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
  public: inline GGS_negateBooleanMultipleBindingExpressionAST unwrappedValue (void) const {
    GGS_negateBooleanMultipleBindingExpressionAST result ;
    if (isValid ()) {
      const cPtr_negateBooleanMultipleBindingExpressionAST * p = (cPtr_negateBooleanMultipleBindingExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_negateBooleanMultipleBindingExpressionAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonMultipleBindingExpressionAST_2E_weak weak reference class
//
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
  public: inline GGS_comparisonMultipleBindingExpressionAST unwrappedValue (void) const {
    GGS_comparisonMultipleBindingExpressionAST result ;
    if (isValid ()) {
      const cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_comparisonMultipleBindingExpressionAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @andBooleanMultipleBindingExpressionAST_2E_weak weak reference class
//
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
  public: inline GGS_andBooleanMultipleBindingExpressionAST unwrappedValue (void) const {
    GGS_andBooleanMultipleBindingExpressionAST result ;
    if (isValid ()) {
      const cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_andBooleanMultipleBindingExpressionAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orBooleanMultipleBindingExpressionAST_2E_weak weak reference class
//
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
  public: inline GGS_orBooleanMultipleBindingExpressionAST unwrappedValue (void) const {
    GGS_orBooleanMultipleBindingExpressionAST result ;
    if (isValid ()) {
      const cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_orBooleanMultipleBindingExpressionAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @xorBooleanMultipleBindingExpressionAST_2E_weak weak reference class
//
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
  public: inline GGS_xorBooleanMultipleBindingExpressionAST unwrappedValue (void) const {
    GGS_xorBooleanMultipleBindingExpressionAST result ;
    if (isValid ()) {
      const cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_xorBooleanMultipleBindingExpressionAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyInMultipleBindingExpressionAST_2E_weak weak reference class
//
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
  public: inline GGS_observablePropertyInMultipleBindingExpressionAST unwrappedValue (void) const {
    GGS_observablePropertyInMultipleBindingExpressionAST result ;
    if (isValid ()) {
      const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (cPtr_observablePropertyInMultipleBindingExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_observablePropertyInMultipleBindingExpressionAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBooleanMultipleBindingExpressionForGeneration_2E_weak weak reference class
//
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
  public: inline GGS_abstractBooleanMultipleBindingExpressionForGeneration unwrappedValue (void) const {
    GGS_abstractBooleanMultipleBindingExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * p = (cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractBooleanMultipleBindingExpressionForGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyAsBooleanMultipleBindingExpressionForGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration class_func_new (const class GGS_string & inOperand0,
                                                                                                             class Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class
//
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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak weak reference class
//
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
  public: inline GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration unwrappedValue (void) const {
    GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @booleanMultipleBindingLiteralIntForGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_booleanMultipleBindingLiteralIntForGeneration class_func_new (const class GGS_uint & inOperand0,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_booleanMultipleBindingLiteralIntForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @booleanMultipleBindingLiteralIntForGeneration class
//
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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @booleanMultipleBindingLiteralIntForGeneration_2E_weak weak reference class
//
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
  public: inline GGS_booleanMultipleBindingLiteralIntForGeneration unwrappedValue (void) const {
    GGS_booleanMultipleBindingLiteralIntForGeneration result ;
    if (isValid ()) {
      const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (cPtr_booleanMultipleBindingLiteralIntForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_booleanMultipleBindingLiteralIntForGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @negateBooleanMultipleBindingExpressionForGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_negateBooleanMultipleBindingExpressionForGeneration class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @negateBooleanMultipleBindingExpressionForGeneration class
//
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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @negateBooleanMultipleBindingExpressionForGeneration_2E_weak weak reference class
//
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
  public: inline GGS_negateBooleanMultipleBindingExpressionForGeneration unwrappedValue (void) const {
    GGS_negateBooleanMultipleBindingExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (cPtr_negateBooleanMultipleBindingExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_negateBooleanMultipleBindingExpressionForGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orBooleanMultipleBindingExpressionForGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_orBooleanMultipleBindingExpressionForGeneration class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                           const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orBooleanMultipleBindingExpressionForGeneration class
//
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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orBooleanMultipleBindingExpressionForGeneration_2E_weak weak reference class
//
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
  public: inline GGS_orBooleanMultipleBindingExpressionForGeneration unwrappedValue (void) const {
    GGS_orBooleanMultipleBindingExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_orBooleanMultipleBindingExpressionForGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @xorBooleanMultipleBindingExpressionForGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_xorBooleanMultipleBindingExpressionForGeneration class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                            const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xorBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xorBooleanMultipleBindingExpressionForGeneration class
//
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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @xorBooleanMultipleBindingExpressionForGeneration_2E_weak weak reference class
//
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
  public: inline GGS_xorBooleanMultipleBindingExpressionForGeneration unwrappedValue (void) const {
    GGS_xorBooleanMultipleBindingExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_xorBooleanMultipleBindingExpressionForGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @andBooleanMultipleBindingExpressionForGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_andBooleanMultipleBindingExpressionForGeneration class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                            const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @andBooleanMultipleBindingExpressionForGeneration class
//
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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @andBooleanMultipleBindingExpressionForGeneration_2E_weak weak reference class
//
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
  public: inline GGS_andBooleanMultipleBindingExpressionForGeneration unwrappedValue (void) const {
    GGS_andBooleanMultipleBindingExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_andBooleanMultipleBindingExpressionForGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonMultipleBindingExpressionForGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_comparisonMultipleBindingExpressionForGeneration class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                            const class GGS_multipleBindingComparisonAST & inOperand1,
                                                                                            const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_comparisonMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonMultipleBindingExpressionForGeneration class
//
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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonMultipleBindingExpressionForGeneration_2E_weak weak reference class
//
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
  public: inline GGS_comparisonMultipleBindingExpressionForGeneration unwrappedValue (void) const {
    GGS_comparisonMultipleBindingExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_comparisonMultipleBindingExpressionForGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST_2E_rootToManyRelationship ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: arrayControllerBoundModelAST.rootToManyRelationship? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerDeclarationAST_2E_weak weak reference class
//
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
  public: inline GGS_arrayControllerDeclarationAST unwrappedValue (void) const {
    GGS_arrayControllerDeclarationAST result ;
    if (isValid ()) {
      const cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_arrayControllerDeclarationAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerPropertyGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerPropertyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_string & inOperand2,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayControllerPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayControllerPropertyGeneration class
//
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

//--- Extension getter populateExplorerWindowCode
  public: virtual class GGS_string getter_populateExplorerWindowCode (Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerPropertyGeneration_2E_weak weak reference class
//
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
  public: inline GGS_arrayControllerPropertyGeneration unwrappedValue (void) const {
    GGS_arrayControllerPropertyGeneration result ;
    if (isValid ()) {
      const cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_arrayControllerPropertyGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerModelKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerGeneration class_func_new (const class GGS_string & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     const class GGS_arrayControllerModelKind & inOperand3,
                                                                     const class GGS_string & inOperand4,
                                                                     const class GGS_bool & inOperand5,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayControllerGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayControllerGeneration class
//
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


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerGeneration_2E_weak weak reference class
//
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
  public: inline GGS_arrayControllerGeneration unwrappedValue (void) const {
    GGS_arrayControllerGeneration result ;
    if (isValid ()) {
      const cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_arrayControllerGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerGeneration_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element class_func_new (const class GGS_bool & inOperand0,
                                                                                                      const class GGS_lstring & inOperand1,
                                                                                                      const class GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                      const class GGS_lstring & inOperand3,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2E_element ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerAttributListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_abstractDefaultValue & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerDeclarationAST_2E_weak weak reference class
//
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
  public: inline GGS_autoLayoutTableViewControllerDeclarationAST unwrappedValue (void) const {
    GGS_autoLayoutTableViewControllerDeclarationAST result ;
    if (isValid ()) {
      const cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_autoLayoutTableViewControllerDeclarationAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerPropertyGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerPropertyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                                           const class GGS_string & inOperand1,
                                                                                           const class GGS_string & inOperand2,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutTableViewControllerPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutTableViewControllerPropertyGeneration class
//
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

//--- Extension getter populateExplorerWindowCode
  public: virtual class GGS_string getter_populateExplorerWindowCode (Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerPropertyGeneration_2E_weak weak reference class
//
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
  public: inline GGS_autoLayoutTableViewControllerPropertyGeneration unwrappedValue (void) const {
    GGS_autoLayoutTableViewControllerPropertyGeneration result ;
    if (isValid ()) {
      const cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_autoLayoutTableViewControllerPropertyGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum autoLayoutTableViewControllerModelKind
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerModelKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerModelKind (void) ;

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
  public: static GGS_autoLayoutTableViewControllerModelKind extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerModelKind class_func_entityArray (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutTableViewControllerModelKind class_func_transientArray (LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerBoundColumnListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GGS_string current_mSortPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mDisplayedPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mColumnObjectTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mRunAction (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mActualParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GGS_string current_mSortPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mDisplayedPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mColumnObjectTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mRunAction (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mActualParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerBoundColumnListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (void) ;

//--------------------------------- List constructor by graph
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_bool & in_mEditable,
                                                 const class GGS_string & in_mSortPropertyName,
                                                 const class GGS_string & in_mDisplayedPropertyName,
                                                 const class GGS_string & in_mColumnObjectTypeName,
                                                 const class GGS_string & in_mRunAction,
                                                 const class GGS__32_stringlist & in_mActualParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerBoundColumnListForGeneration init (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerBoundColumnListForGeneration extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration class_func_listWithValue (const class GGS_bool & inOperand0,
                                                                                                               const class GGS_string & inOperand1,
                                                                                                               const class GGS_string & inOperand2,
                                                                                                               const class GGS_string & inOperand3,
                                                                                                               const class GGS_string & inOperand4,
                                                                                                               const class GGS__32_stringlist & inOperand5
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_bool & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_string & inOperand2,
                                                     const class GGS_string & inOperand3,
                                                     const class GGS_string & inOperand4,
                                                     const class GGS__32_stringlist & inOperand5
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutTableViewControllerBoundColumnListForGeneration add_operation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_bool constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_string constinArgument3,
                                               class GGS_string constinArgument4,
                                               class GGS__32_stringlist constinArgument5,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_bool constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_string constinArgument4,
                                                      class GGS__32_stringlist constinArgument5,
                                                      class GGS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_bool & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_string & outArgument4,
                                                 class GGS__32_stringlist & outArgument5,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_bool & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                class GGS_string & outArgument4,
                                                class GGS__32_stringlist & outArgument5,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_bool & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_string & outArgument4,
                                                      class GGS__32_stringlist & outArgument5,
                                                      class GGS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualParameterListAtIndex (class GGS__32_stringlist constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMColumnObjectTypeNameAtIndex (class GGS_string constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDisplayedPropertyNameAtIndex (class GGS_string constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEditableAtIndex (class GGS_bool constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRunActionAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortPropertyNameAtIndex (class GGS_string constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_bool & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              class GGS_string & outArgument4,
                                              class GGS__32_stringlist & outArgument5,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_bool & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_string & outArgument3,
                                             class GGS_string & outArgument4,
                                             class GGS__32_stringlist & outArgument5,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_mActualParameterListAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mColumnObjectTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mDisplayedPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mEditableAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mRunActionAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSortPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration ;
  friend class DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mEditable ;
  public: inline GGS_bool readProperty_mEditable (void) const {
    return mProperty_mEditable ;
  }

  public: GGS_string mProperty_mSortPropertyName ;
  public: inline GGS_string readProperty_mSortPropertyName (void) const {
    return mProperty_mSortPropertyName ;
  }

  public: GGS_string mProperty_mDisplayedPropertyName ;
  public: inline GGS_string readProperty_mDisplayedPropertyName (void) const {
    return mProperty_mDisplayedPropertyName ;
  }

  public: GGS_string mProperty_mColumnObjectTypeName ;
  public: inline GGS_string readProperty_mColumnObjectTypeName (void) const {
    return mProperty_mColumnObjectTypeName ;
  }

  public: GGS_string mProperty_mRunAction ;
  public: inline GGS_string readProperty_mRunAction (void) const {
    return mProperty_mRunAction ;
  }

  public: GGS__32_stringlist mProperty_mActualParameterList ;
  public: inline GGS__32_stringlist readProperty_mActualParameterList (void) const {
    return mProperty_mActualParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEditable (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEditable = inValue ;
  }

  public: inline void setter_setMSortPropertyName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortPropertyName = inValue ;
  }

  public: inline void setter_setMDisplayedPropertyName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDisplayedPropertyName = inValue ;
  }

  public: inline void setter_setMColumnObjectTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnObjectTypeName = inValue ;
  }

  public: inline void setter_setMRunAction (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRunAction = inValue ;
  }

  public: inline void setter_setMActualParameterList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (const GGS_bool & in_mEditable,
                                                                                    const GGS_string & in_mSortPropertyName,
                                                                                    const GGS_string & in_mDisplayedPropertyName,
                                                                                    const GGS_string & in_mColumnObjectTypeName,
                                                                                    const GGS_string & in_mRunAction,
                                                                                    const GGS__32_stringlist & in_mActualParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & operator = (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                        const class GGS_string & inOperand1,
                                                                                                                        const class GGS_string & inOperand2,
                                                                                                                        const class GGS_string & inOperand3,
                                                                                                                        const class GGS_string & inOperand4,
                                                                                                                        const class GGS__32_stringlist & inOperand5,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element class_func_new (const class GGS_bool & inOperand0,
                                                                                                                const class GGS_string & inOperand1,
                                                                                                                const class GGS_string & inOperand2,
                                                                                                                const class GGS_string & inOperand3,
                                                                                                                const class GGS_string & inOperand4,
                                                                                                                const class GGS__32_stringlist & inOperand5,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerSortedColumnListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mColumnName (LOCATION_ARGS) const ;
  public: class GGS_propertyKind current_mSortPropertyKind (LOCATION_ARGS) const ;
  public: class GGS_string current_mObservablePropertyForSorting (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mColumnName (LOCATION_ARGS) const ;
  public: class GGS_propertyKind current_mSortPropertyKind (LOCATION_ARGS) const ;
  public: class GGS_string current_mObservablePropertyForSorting (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerSortedColumnListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (void) ;

//--------------------------------- List constructor by graph
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mColumnName,
                                                 const class GGS_propertyKind & in_mSortPropertyKind,
                                                 const class GGS_string & in_mObservablePropertyForSorting
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerSortedColumnListForGeneration init (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerSortedColumnListForGeneration extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                                const class GGS_propertyKind & inOperand1,
                                                                                                                const class GGS_string & inOperand2
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_propertyKind & inOperand1,
                                                     const class GGS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutTableViewControllerSortedColumnListForGeneration add_operation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_propertyKind constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_propertyKind constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_propertyKind & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_propertyKind & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_propertyKind & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMColumnNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObservablePropertyForSortingAtIndex (class GGS_string constinArgument0,
                                                                                class GGS_uint constinArgument1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortPropertyKindAtIndex (class GGS_propertyKind constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_propertyKind & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_propertyKind & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mColumnNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mObservablePropertyForSortingAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyKind getter_mSortPropertyKindAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration ;
  friend class DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mColumnName ;
  public: inline GGS_string readProperty_mColumnName (void) const {
    return mProperty_mColumnName ;
  }

  public: GGS_propertyKind mProperty_mSortPropertyKind ;
  public: inline GGS_propertyKind readProperty_mSortPropertyKind (void) const {
    return mProperty_mSortPropertyKind ;
  }

  public: GGS_string mProperty_mObservablePropertyForSorting ;
  public: inline GGS_string readProperty_mObservablePropertyForSorting (void) const {
    return mProperty_mObservablePropertyForSorting ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMColumnName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnName = inValue ;
  }

  public: inline void setter_setMSortPropertyKind (const GGS_propertyKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortPropertyKind = inValue ;
  }

  public: inline void setter_setMObservablePropertyForSorting (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservablePropertyForSorting = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (const GGS_string & in_mColumnName,
                                                                                     const GGS_propertyKind & in_mSortPropertyKind,
                                                                                     const GGS_string & in_mObservablePropertyForSorting) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & operator = (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                                             const class GGS_propertyKind & inOperand1,
                                                                                                             const class GGS_string & inOperand2,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                                                 const class GGS_propertyKind & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutTableViewControllerGeneration (const class cPtr_autoLayoutTableViewControllerGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mOwnerName (void) const ;

  public: class GGS_lstring readProperty_mControllerName (void) const ;

  public: class GGS_string readProperty_mModelString (void) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration readProperty_mTableViewControllerBoundColumnListForGeneration (void) const ;

  public: class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration readProperty_mTableViewControllerSortedColumnListForGeneration (void) const ;

  public: class GGS_string readProperty_mModelTypeName (void) const ;

  public: class GGS_autoLayoutTableViewControllerModelKind readProperty_mTableViewControllerModelKind (void) const ;

  public: class GGS_string readProperty_mElementTypeName (void) const ;

  public: class GGS_bool readProperty_mElementTypeIsGraphic (void) const ;

  public: class GGS__32_stringlist readProperty_mAttributeListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerGeneration init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                           const class GGS_lstring & inOperand1,
                                                                                                           const class GGS_string & inOperand2,
                                                                                                           const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand3,
                                                                                                           const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand4,
                                                                                                           const class GGS_string & inOperand5,
                                                                                                           const class GGS_autoLayoutTableViewControllerModelKind & inOperand6,
                                                                                                           const class GGS_string & inOperand7,
                                                                                                           const class GGS_bool & inOperand8,
                                                                                                           const class GGS__32_stringlist & inOperand9,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerGeneration extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerGeneration class_func_new (const class GGS_string & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS_string & inOperand2,
                                                                                   const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand3,
                                                                                   const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand4,
                                                                                   const class GGS_string & inOperand5,
                                                                                   const class GGS_autoLayoutTableViewControllerModelKind & inOperand6,
                                                                                   const class GGS_string & inOperand7,
                                                                                   const class GGS_bool & inOperand8,
                                                                                   const class GGS__32_stringlist & inOperand9,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutTableViewControllerGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutTableViewControllerGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutTableViewControllerGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutTableViewControllerGeneration_init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                     const class GGS_string & inOperand2,
                                                                                                     const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand3,
                                                                                                     const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand4,
                                                                                                     const class GGS_string & inOperand5,
                                                                                                     const class GGS_autoLayoutTableViewControllerModelKind & inOperand6,
                                                                                                     const class GGS_string & inOperand7,
                                                                                                     const class GGS_bool & inOperand8,
                                                                                                     const class GGS__32_stringlist & inOperand9,
                                                                                                     Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mOwnerName ;
  public: GGS_lstring mProperty_mControllerName ;
  public: GGS_string mProperty_mModelString ;
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration mProperty_mTableViewControllerBoundColumnListForGeneration ;
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration mProperty_mTableViewControllerSortedColumnListForGeneration ;
  public: GGS_string mProperty_mModelTypeName ;
  public: GGS_autoLayoutTableViewControllerModelKind mProperty_mTableViewControllerModelKind ;
  public: GGS_string mProperty_mElementTypeName ;
  public: GGS_bool mProperty_mElementTypeIsGraphic ;
  public: GGS__32_stringlist mProperty_mAttributeListForGeneration ;


//--- Default constructor
  public: cPtr_autoLayoutTableViewControllerGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutTableViewControllerGeneration (const GGS_string & in_mOwnerName,
                                                        const GGS_lstring & in_mControllerName,
                                                        const GGS_string & in_mModelString,
                                                        const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                        const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                        const GGS_string & in_mModelTypeName,
                                                        const GGS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                        const GGS_string & in_mElementTypeName,
                                                        const GGS_bool & in_mElementTypeIsGraphic,
                                                        const GGS__32_stringlist & in_mAttributeListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutTableViewControllerGeneration_2E_weak (const class GGS_autoLayoutTableViewControllerGeneration & inSource) ;

  public: GGS_autoLayoutTableViewControllerGeneration_2E_weak & operator = (const class GGS_autoLayoutTableViewControllerGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutTableViewControllerGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutTableViewControllerGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutTableViewControllerGeneration bang_autoLayoutTableViewControllerGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_autoLayoutTableViewControllerGeneration unwrappedValue (void) const {
    GGS_autoLayoutTableViewControllerGeneration result ;
    if (isValid ()) {
      const cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_autoLayoutTableViewControllerGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_autoLayoutTableViewControllerGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutTableViewControllerGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerDeclarationAST_2E_weak weak reference class
//
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectionControllerDeclarationAST bang_selectionControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_selectionControllerDeclarationAST unwrappedValue (void) const {
    GGS_selectionControllerDeclarationAST result ;
    if (isValid ()) {
      const cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_selectionControllerDeclarationAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerPropertyGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_selectionControllerPropertyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                                 const class GGS_string & inOperand1,
                                                                                 const class GGS_string & inOperand2,
                                                                                 const class GGS_string & inOperand3,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectionControllerPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selectionControllerPropertyGeneration class
//
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

//--- Extension getter populateExplorerWindowCode
  public: virtual class GGS_string getter_populateExplorerWindowCode (Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerPropertyGeneration_2E_weak weak reference class
//
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectionControllerPropertyGeneration bang_selectionControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_selectionControllerPropertyGeneration unwrappedValue (void) const {
    GGS_selectionControllerPropertyGeneration result ;
    if (isValid ()) {
      const cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_selectionControllerPropertyGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectionControllerForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_selectionControllerForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_selectionControllerForGeneration (const class GGS_selectionControllerForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

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
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_selectionControllerForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_selectionControllerForGeneration (const class GGS_selectionControllerForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

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
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectionControllerForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_selectionControllerForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_selectionControllerForGeneration (void) ;

//--------------------------------- List constructor by graph
  public: GGS_selectionControllerForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: static class GGS_selectionControllerForGeneration class_func_emptyList (LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_selectionControllerForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_string & inOperand2,
                                                     const class GGS_string & inOperand3,
                                                     const class GGS_string & inOperand4,
                                                     const class GGS_string & inOperand5,
                                                     const class GGS_propertyMap & inOperand6,
                                                     const class GGS_propertyGenerationList & inOperand7
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_selectionControllerForGeneration add_operation (const GGS_selectionControllerForGeneration & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_string constinArgument3,
                                               class GGS_string constinArgument4,
                                               class GGS_string constinArgument5,
                                               class GGS_propertyMap constinArgument6,
                                               class GGS_propertyGenerationList constinArgument7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_string & outArgument4,
                                                 class GGS_string & outArgument5,
                                                 class GGS_propertyMap & outArgument6,
                                                 class GGS_propertyGenerationList & outArgument7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                class GGS_string & outArgument4,
                                                class GGS_string & outArgument5,
                                                class GGS_propertyMap & outArgument6,
                                                class GGS_propertyGenerationList & outArgument7,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMBaseTypeNameAtIndex (class GGS_string constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundControllerNameAtIndex (class GGS_string constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundControllerPropertyNameAtIndex (class GGS_string constinArgument0,
                                                                               class GGS_uint constinArgument1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOwnerNameAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationListAtIndex (class GGS_propertyGenerationList constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectionControllerNameAtIndex (class GGS_string constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectionObservablePropertyMapAtIndex (class GGS_propertyMap constinArgument0,
                                                                                  class GGS_uint constinArgument1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectionTypeNameAtIndex (class GGS_string constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              class GGS_string & outArgument4,
                                              class GGS_string & outArgument5,
                                              class GGS_propertyMap & outArgument6,
                                              class GGS_propertyGenerationList & outArgument7,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
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
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBaseTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBoundControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBoundControllerPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mOwnerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGenerationList getter_mPropertyGenerationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSelectionControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyMap getter_mSelectionObservablePropertyMapAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSelectionTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_selectionControllerForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_selectionControllerForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_selectionControllerForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_selectionControllerForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_selectionControllerForGeneration ;
  friend class DownEnumerator_selectionControllerForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_selectionControllerForGeneration_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                       const class GGS_string & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       const class GGS_string & inOperand3,
                                                                                       const class GGS_string & inOperand4,
                                                                                       const class GGS_string & inOperand5,
                                                                                       const class GGS_propertyMap & inOperand6,
                                                                                       const class GGS_propertyGenerationList & inOperand7,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDefaultValue_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractDefaultValue_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractDefaultValue_2E_weak (const class GGS_abstractDefaultValue & inSource) ;

  public: GGS_abstractDefaultValue_2E_weak & operator = (const class GGS_abstractDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractDefaultValue_2E_weak init_nil (void) {
    GGS_abstractDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractDefaultValue bang_abstractDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractDefaultValue unwrappedValue (void) const {
    GGS_abstractDefaultValue result ;
    if (isValid ()) {
      const cPtr_abstractDefaultValue * p = (cPtr_abstractDefaultValue *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractDefaultValue (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_abstractDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolAsDefaultValue_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_boolAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolAsDefaultValue_2E_weak (const class GGS_boolAsDefaultValue & inSource) ;

  public: GGS_boolAsDefaultValue_2E_weak & operator = (const class GGS_boolAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolAsDefaultValue_2E_weak init_nil (void) {
    GGS_boolAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolAsDefaultValue bang_boolAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_boolAsDefaultValue unwrappedValue (void) const {
    GGS_boolAsDefaultValue result ;
    if (isValid ()) {
      const cPtr_boolAsDefaultValue * p = (cPtr_boolAsDefaultValue *) ptr () ;
      if (nullptr != p) {
        result = GGS_boolAsDefaultValue (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_boolAsDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @doubleAsDefaultValue_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_doubleAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_doubleAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_doubleAsDefaultValue_2E_weak (const class GGS_doubleAsDefaultValue & inSource) ;

  public: GGS_doubleAsDefaultValue_2E_weak & operator = (const class GGS_doubleAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_doubleAsDefaultValue_2E_weak init_nil (void) {
    GGS_doubleAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_doubleAsDefaultValue bang_doubleAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_doubleAsDefaultValue unwrappedValue (void) const {
    GGS_doubleAsDefaultValue result ;
    if (isValid ()) {
      const cPtr_doubleAsDefaultValue * p = (cPtr_doubleAsDefaultValue *) ptr () ;
      if (nullptr != p) {
        result = GGS_doubleAsDefaultValue (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_doubleAsDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_doubleAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_doubleAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @integerAsDefaultValue_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_integerAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_integerAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_integerAsDefaultValue_2E_weak (const class GGS_integerAsDefaultValue & inSource) ;

  public: GGS_integerAsDefaultValue_2E_weak & operator = (const class GGS_integerAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_integerAsDefaultValue_2E_weak init_nil (void) {
    GGS_integerAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_integerAsDefaultValue bang_integerAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_integerAsDefaultValue unwrappedValue (void) const {
    GGS_integerAsDefaultValue result ;
    if (isValid ()) {
      const cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) ptr () ;
      if (nullptr != p) {
        result = GGS_integerAsDefaultValue (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_integerAsDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_integerAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @stringAsDefaultValue_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_stringAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_stringAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_stringAsDefaultValue_2E_weak (const class GGS_stringAsDefaultValue & inSource) ;

  public: GGS_stringAsDefaultValue_2E_weak & operator = (const class GGS_stringAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_stringAsDefaultValue_2E_weak init_nil (void) {
    GGS_stringAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_stringAsDefaultValue bang_stringAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_stringAsDefaultValue unwrappedValue (void) const {
    GGS_stringAsDefaultValue result ;
    if (isValid ()) {
      const cPtr_stringAsDefaultValue * p = (cPtr_stringAsDefaultValue *) ptr () ;
      if (nullptr != p) {
        result = GGS_stringAsDefaultValue (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_stringAsDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_stringAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @identifierAsDefaultValue_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_identifierAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_identifierAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_identifierAsDefaultValue_2E_weak (const class GGS_identifierAsDefaultValue & inSource) ;

  public: GGS_identifierAsDefaultValue_2E_weak & operator = (const class GGS_identifierAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_identifierAsDefaultValue_2E_weak init_nil (void) {
    GGS_identifierAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_identifierAsDefaultValue bang_identifierAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_identifierAsDefaultValue unwrappedValue (void) const {
    GGS_identifierAsDefaultValue result ;
    if (isValid ()) {
      const cPtr_identifierAsDefaultValue * p = (cPtr_identifierAsDefaultValue *) ptr () ;
      if (nullptr != p) {
        result = GGS_identifierAsDefaultValue (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_identifierAsDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_identifierAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_identifierAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefsAsDefaultValue_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_prefsAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_prefsAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefsAsDefaultValue_2E_weak (const class GGS_prefsAsDefaultValue & inSource) ;

  public: GGS_prefsAsDefaultValue_2E_weak & operator = (const class GGS_prefsAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_prefsAsDefaultValue_2E_weak init_nil (void) {
    GGS_prefsAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_prefsAsDefaultValue bang_prefsAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_prefsAsDefaultValue unwrappedValue (void) const {
    GGS_prefsAsDefaultValue result ;
    if (isValid ()) {
      const cPtr_prefsAsDefaultValue * p = (cPtr_prefsAsDefaultValue *) ptr () ;
      if (nullptr != p) {
        result = GGS_prefsAsDefaultValue (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_prefsAsDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefsAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDefaultValue enterDefaultValuePrecedence'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDefaultValuePrecedence (class cPtr_abstractDefaultValue * inObject,
                                                      const class GGS_lstring constin_inNode,
                                                      class GGS_declarationPrecedenceGraph & io_ioGraph,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

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
//
//Extension getter '@propertyKind typeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_typeName (const class GGS_propertyKind & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

