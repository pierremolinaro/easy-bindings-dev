#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumFunAssociationSortedList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_enumFunAssociationSortedList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GGS_string mProperty_mAssociatedString ;
  public: inline GGS_string readProperty_mAssociatedString (void) const {
    return mProperty_mAssociatedString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumFunAssociationSortedList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMAssociatedString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedString = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumFunAssociationSortedList_2E_element (const GGS_uint & in_mIndex,
                                                       const GGS_string & in_mAssociatedString) ;

//--------------------------------- Copy constructor
  public: GGS_enumFunAssociationSortedList_2E_element (const GGS_enumFunAssociationSortedList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumFunAssociationSortedList_2E_element & operator = (const GGS_enumFunAssociationSortedList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumFunAssociationSortedList_2E_element init_21__21_ (const class GGS_uint & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumFunAssociationSortedList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumFunAssociationSortedList_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumFuncMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_enumFuncMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_enumFunAssociationSortedList mProperty_mAssociationSortedList ;
  public: inline GGS_enumFunAssociationSortedList readProperty_mAssociationSortedList (void) const {
    return mProperty_mAssociationSortedList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumFuncMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAssociationSortedList (const GGS_enumFunAssociationSortedList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociationSortedList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumFuncMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_enumFunAssociationSortedList & in_mAssociationSortedList) ;

//--------------------------------- Copy constructor
  public: GGS_enumFuncMap_2E_element (const GGS_enumFuncMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumFuncMap_2E_element & operator = (const GGS_enumFuncMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumFuncMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_enumFunAssociationSortedList & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumFuncMap_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumFuncMap_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumFuncMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: enumFuncMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_enumFuncMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_enumFuncMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_enumFuncMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_enumFuncMap_2E_element_3F_ (const GGS_enumFuncMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_enumFuncMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_enumFuncMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_enumFuncMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumFuncMap_2E_element_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumFuncMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumForGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_enumForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumForGeneration (const class cPtr_enumForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mEnumName (void) const ;

  public: class GGS_lstringlist readProperty_mEnumConstantList (void) const ;

  public: class GGS_enumFuncMap readProperty_mEnumFuncMap (void) const ;

  public: class GGS_bool readProperty_mCaseIterable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumForGeneration init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                             const class GGS_lstringlist & inOperand1,
                                                             const class GGS_enumFuncMap & inOperand2,
                                                             const class GGS_bool & inOperand3,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumForGeneration extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_enumForGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumForGeneration_init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                       const class GGS_lstringlist & inOperand1,
                                                       const class GGS_enumFuncMap & inOperand2,
                                                       const class GGS_bool & inOperand3,
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
  public: GGS_string mProperty_mEnumName ;
  public: GGS_lstringlist mProperty_mEnumConstantList ;
  public: GGS_enumFuncMap mProperty_mEnumFuncMap ;
  public: GGS_bool mProperty_mCaseIterable ;


//--- Default constructor
  public: cPtr_enumForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumForGeneration (const GGS_string & in_mEnumName,
                                  const GGS_lstringlist & in_mEnumConstantList,
                                  const GGS_enumFuncMap & in_mEnumFuncMap,
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
// Phase 1: @enumForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumForGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumForGeneration_2E_weak (const class GGS_enumForGeneration & inSource) ;

  public: GGS_enumForGeneration_2E_weak & operator = (const class GGS_enumForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumForGeneration_2E_weak init_nil (void) {
    GGS_enumForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumForGeneration bang_enumForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumForGeneration unwrappedValue (void) const ;

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
  public: static GGS_enumForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_entityDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_entityDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_entityDeclarationAST_2E_weak (const class GGS_entityDeclarationAST & inSource) ;

  public: GGS_entityDeclarationAST_2E_weak & operator = (const class GGS_entityDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_entityDeclarationAST_2E_weak init_nil (void) {
    GGS_entityDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_entityDeclarationAST bang_entityDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_entityDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_entityDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_entityDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_entityDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_entityForGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_entityForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_entityForGeneration (const class cPtr_entityForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mEntityName (void) const ;

  public: class GGS_string readProperty_mSuperEntityName (void) const ;

  public: class GGS_bool readProperty_mHandlingOpposite (void) const ;

  public: class GGS_propertyGenerationList readProperty_mPropertyGenerationList (void) const ;

  public: class GGS_stringset readProperty_mSignatureSet (void) const ;

  public: class GGS_bool readProperty_mIsGraphicEntity (void) const ;

  public: class GGS_bool readProperty_mIsAbstract (void) const ;

  public: class GGS_stringset readProperty_mOverridenTransients (void) const ;

  public: class GGS_externSwiftDelegateList readProperty_mExternSwiftDelegateList (void) const ;

  public: class GGS_bool readProperty_mHasSubEntity (void) const ;

  public: class GGS_bool readProperty_mCanCopyAndPaste_5F_option (void) const ;

  public: class GGS_bool readProperty_mCannotBeDeleted_5F_option (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityForGeneration init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                               const class GGS_string & inOperand1,
                                                                                               const class GGS_bool & inOperand2,
                                                                                               const class GGS_propertyGenerationList & inOperand3,
                                                                                               const class GGS_stringset & inOperand4,
                                                                                               const class GGS_bool & inOperand5,
                                                                                               const class GGS_bool & inOperand6,
                                                                                               const class GGS_stringset & inOperand7,
                                                                                               const class GGS_externSwiftDelegateList & inOperand8,
                                                                                               const class GGS_bool & inOperand9,
                                                                                               const class GGS_bool & inOperand10,
                                                                                               const class GGS_bool & inOperand11,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_entityForGeneration extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_entityForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @entityForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_entityForGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void entityForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                         const class GGS_string & inOperand1,
                                                                                         const class GGS_bool & inOperand2,
                                                                                         const class GGS_propertyGenerationList & inOperand3,
                                                                                         const class GGS_stringset & inOperand4,
                                                                                         const class GGS_bool & inOperand5,
                                                                                         const class GGS_bool & inOperand6,
                                                                                         const class GGS_stringset & inOperand7,
                                                                                         const class GGS_externSwiftDelegateList & inOperand8,
                                                                                         const class GGS_bool & inOperand9,
                                                                                         const class GGS_bool & inOperand10,
                                                                                         const class GGS_bool & inOperand11,
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
  public: GGS_string mProperty_mEntityName ;
  public: GGS_string mProperty_mSuperEntityName ;
  public: GGS_bool mProperty_mHandlingOpposite ;
  public: GGS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public: GGS_stringset mProperty_mSignatureSet ;
  public: GGS_bool mProperty_mIsGraphicEntity ;
  public: GGS_bool mProperty_mIsAbstract ;
  public: GGS_stringset mProperty_mOverridenTransients ;
  public: GGS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;
  public: GGS_bool mProperty_mHasSubEntity ;
  public: GGS_bool mProperty_mCanCopyAndPaste_5F_option ;
  public: GGS_bool mProperty_mCannotBeDeleted_5F_option ;


//--- Default constructor
  public: cPtr_entityForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_entityForGeneration (const GGS_string & in_mEntityName,
                                    const GGS_string & in_mSuperEntityName,
                                    const GGS_bool & in_mHandlingOpposite,
                                    const GGS_propertyGenerationList & in_mPropertyGenerationList,
                                    const GGS_stringset & in_mSignatureSet,
                                    const GGS_bool & in_mIsGraphicEntity,
                                    const GGS_bool & in_mIsAbstract,
                                    const GGS_stringset & in_mOverridenTransients,
                                    const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                    const GGS_bool & in_mHasSubEntity,
                                    const GGS_bool & in_mCanCopyAndPaste_5F_option,
                                    const GGS_bool & in_mCannotBeDeleted_5F_option,
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
// Phase 1: @entityForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_entityForGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_entityForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_entityForGeneration_2E_weak (const class GGS_entityForGeneration & inSource) ;

  public: GGS_entityForGeneration_2E_weak & operator = (const class GGS_entityForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_entityForGeneration_2E_weak init_nil (void) {
    GGS_entityForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_entityForGeneration bang_entityForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_entityForGeneration unwrappedValue (void) const ;

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
  public: static GGS_entityForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_entityForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_entityForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @proxyDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_proxyDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_proxyDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_proxyDeclarationAST_2E_weak (const class GGS_proxyDeclarationAST & inSource) ;

  public: GGS_proxyDeclarationAST_2E_weak & operator = (const class GGS_proxyDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_proxyDeclarationAST_2E_weak init_nil (void) {
    GGS_proxyDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_proxyDeclarationAST bang_proxyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_proxyDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_proxyDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_proxyDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_proxyDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_proxyDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyProxyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_toManyProxyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_toManyProxyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_toManyProxyGeneration (const class cPtr_toManyProxyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_proxyKind readProperty_mProxyKind (void) const ;
  public: void setProperty_mProxyKind (const GGS_proxyKind & inValue) ;

  public: class GGS_string readProperty_mToManyTypeName (void) const ;
  public: void setProperty_mToManyTypeName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mObservedRelationshipName (void) const ;
  public: void setProperty_mObservedRelationshipName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mObservedPropertyName (void) const ;
  public: void setProperty_mObservedPropertyName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyProxyGeneration init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                     const class GGS_proxyKind & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     const class GGS_string & inOperand3,
                                                                     const class GGS_string & inOperand4,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyProxyGeneration extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyProxyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyProxyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @toManyProxyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_toManyProxyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void toManyProxyGeneration_init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                               const class GGS_proxyKind & inOperand1,
                                                               const class GGS_string & inOperand2,
                                                               const class GGS_string & inOperand3,
                                                               const class GGS_string & inOperand4,
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
  public: GGS_proxyKind mProperty_mProxyKind ;
  public: GGS_string mProperty_mToManyTypeName ;
  public: GGS_string mProperty_mObservedRelationshipName ;
  public: GGS_string mProperty_mObservedPropertyName ;


//--- Default constructor
  public: cPtr_toManyProxyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_toManyProxyGeneration (const GGS_string & in_mPropertyName,
                                      const GGS_proxyKind & in_mProxyKind,
                                      const GGS_string & in_mToManyTypeName,
                                      const GGS_string & in_mObservedRelationshipName,
                                      const GGS_string & in_mObservedPropertyName,
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
// Phase 1: @toManyProxyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_toManyProxyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_toManyProxyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_toManyProxyGeneration_2E_weak (const class GGS_toManyProxyGeneration & inSource) ;

  public: GGS_toManyProxyGeneration_2E_weak & operator = (const class GGS_toManyProxyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_toManyProxyGeneration_2E_weak init_nil (void) {
    GGS_toManyProxyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_toManyProxyGeneration bang_toManyProxyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_toManyProxyGeneration unwrappedValue (void) const ;

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
  public: static GGS_toManyProxyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyProxyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyProxyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyProxyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyProxyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_toManyProxyGenerationList final {
  public: DownEnumerator_toManyProxyGenerationList (const class GGS_toManyProxyGenerationList & inList) ;

  public: ~ DownEnumerator_toManyProxyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_toManyProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toManyProxyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_toManyProxyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_toManyProxyGenerationList (const DownEnumerator_toManyProxyGenerationList &) = delete ;
  private: DownEnumerator_toManyProxyGenerationList & operator = (const DownEnumerator_toManyProxyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_toManyProxyGenerationList final {
  public: UpEnumerator_toManyProxyGenerationList (const class GGS_toManyProxyGenerationList & inList)  ;

  public: ~ UpEnumerator_toManyProxyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_toManyProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toManyProxyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_toManyProxyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_toManyProxyGenerationList (const UpEnumerator_toManyProxyGenerationList &) = delete ;
  private: UpEnumerator_toManyProxyGenerationList & operator = (const UpEnumerator_toManyProxyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @toManyProxyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_toManyProxyGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_toManyProxyGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_toManyProxyGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_toManyProxyGenerationList (void) = default ;

//--- Copy
  public: GGS_toManyProxyGenerationList (const GGS_toManyProxyGenerationList &) = default ;
  public: GGS_toManyProxyGenerationList & operator = (const GGS_toManyProxyGenerationList &) = default ;

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
  public : inline GenericArray <GGS_toManyProxyGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_toManyProxyGenerationList subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_toManyProxyGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_toManyProxyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyProxyGenerationList init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyProxyGenerationList extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyProxyGenerationList class_func_listWithValue (const class GGS_toManyProxyGeneration & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_toManyProxyGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_toManyProxyGeneration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_toManyProxyGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_toManyProxyGenerationList add_operation (const GGS_toManyProxyGenerationList & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_toManyProxyGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_toManyProxyGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_toManyProxyGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_toManyProxyGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_toManyProxyGeneration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyAtIndex (class GGS_toManyProxyGeneration constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_toManyProxyGeneration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_toManyProxyGeneration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_toManyProxyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_toManyProxyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_toManyProxyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_toManyProxyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_toManyProxyGenerationList ;
  friend class DownEnumerator_toManyProxyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyProxyGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_toManyProxyGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_toManyProxyGeneration mProperty_mProperty ;
  public: inline GGS_toManyProxyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toManyProxyGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GGS_toManyProxyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toManyProxyGenerationList_2E_element (const GGS_toManyProxyGeneration & in_mProperty) ;

//--------------------------------- Copy constructor
  public: GGS_toManyProxyGenerationList_2E_element (const GGS_toManyProxyGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toManyProxyGenerationList_2E_element & operator = (const GGS_toManyProxyGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyProxyGenerationList_2E_element init_21_ (const class GGS_toManyProxyGeneration & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyProxyGenerationList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicProxyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicProxyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_atomicProxyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_atomicProxyGeneration (const class cPtr_atomicProxyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_proxyKind readProperty_mProxyKind (void) const ;
  public: void setProperty_mProxyKind (const GGS_proxyKind & inValue) ;

  public: class GGS_typeKind readProperty_mType (void) const ;
  public: void setProperty_mType (const GGS_typeKind & inValue) ;

  public: class GGS_string readProperty_mObservedRelationshipName (void) const ;
  public: void setProperty_mObservedRelationshipName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mObservedPropertyName (void) const ;
  public: void setProperty_mObservedPropertyName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicProxyGeneration init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                     const class GGS_proxyKind & inOperand1,
                                                                     const class GGS_typeKind & inOperand2,
                                                                     const class GGS_string & inOperand3,
                                                                     const class GGS_string & inOperand4,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicProxyGeneration extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicProxyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicProxyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @atomicProxyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_atomicProxyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void atomicProxyGeneration_init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                               const class GGS_proxyKind & inOperand1,
                                                               const class GGS_typeKind & inOperand2,
                                                               const class GGS_string & inOperand3,
                                                               const class GGS_string & inOperand4,
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
  public: GGS_proxyKind mProperty_mProxyKind ;
  public: GGS_typeKind mProperty_mType ;
  public: GGS_string mProperty_mObservedRelationshipName ;
  public: GGS_string mProperty_mObservedPropertyName ;


//--- Default constructor
  public: cPtr_atomicProxyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_atomicProxyGeneration (const GGS_string & in_mPropertyName,
                                      const GGS_proxyKind & in_mProxyKind,
                                      const GGS_typeKind & in_mType,
                                      const GGS_string & in_mObservedRelationshipName,
                                      const GGS_string & in_mObservedPropertyName,
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
// Phase 1: @atomicProxyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicProxyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_atomicProxyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_atomicProxyGeneration_2E_weak (const class GGS_atomicProxyGeneration & inSource) ;

  public: GGS_atomicProxyGeneration_2E_weak & operator = (const class GGS_atomicProxyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_atomicProxyGeneration_2E_weak init_nil (void) {
    GGS_atomicProxyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_atomicProxyGeneration bang_atomicProxyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_atomicProxyGeneration unwrappedValue (void) const ;

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
  public: static GGS_atomicProxyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicProxyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicProxyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicProxyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicProxyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_atomicProxyGenerationList final {
  public: DownEnumerator_atomicProxyGenerationList (const class GGS_atomicProxyGenerationList & inList) ;

  public: ~ DownEnumerator_atomicProxyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_atomicProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_atomicProxyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_atomicProxyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_atomicProxyGenerationList (const DownEnumerator_atomicProxyGenerationList &) = delete ;
  private: DownEnumerator_atomicProxyGenerationList & operator = (const DownEnumerator_atomicProxyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_atomicProxyGenerationList final {
  public: UpEnumerator_atomicProxyGenerationList (const class GGS_atomicProxyGenerationList & inList)  ;

  public: ~ UpEnumerator_atomicProxyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_atomicProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_atomicProxyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_atomicProxyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_atomicProxyGenerationList (const UpEnumerator_atomicProxyGenerationList &) = delete ;
  private: UpEnumerator_atomicProxyGenerationList & operator = (const UpEnumerator_atomicProxyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @atomicProxyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_atomicProxyGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_atomicProxyGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_atomicProxyGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_atomicProxyGenerationList (void) = default ;

//--- Copy
  public: GGS_atomicProxyGenerationList (const GGS_atomicProxyGenerationList &) = default ;
  public: GGS_atomicProxyGenerationList & operator = (const GGS_atomicProxyGenerationList &) = default ;

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
  public : inline GenericArray <GGS_atomicProxyGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_atomicProxyGenerationList subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_atomicProxyGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_atomicProxyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicProxyGenerationList init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicProxyGenerationList extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicProxyGenerationList class_func_listWithValue (const class GGS_atomicProxyGeneration & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_atomicProxyGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_atomicProxyGeneration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_atomicProxyGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_atomicProxyGenerationList add_operation (const GGS_atomicProxyGenerationList & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_atomicProxyGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_atomicProxyGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_atomicProxyGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_atomicProxyGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_atomicProxyGeneration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyAtIndex (class GGS_atomicProxyGeneration constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_atomicProxyGeneration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_atomicProxyGeneration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_atomicProxyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_atomicProxyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_atomicProxyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_atomicProxyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_atomicProxyGenerationList ;
  friend class DownEnumerator_atomicProxyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicProxyGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_atomicProxyGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_atomicProxyGeneration mProperty_mProperty ;
  public: inline GGS_atomicProxyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_atomicProxyGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GGS_atomicProxyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_atomicProxyGenerationList_2E_element (const GGS_atomicProxyGeneration & in_mProperty) ;

//--------------------------------- Copy constructor
  public: GGS_atomicProxyGenerationList_2E_element (const GGS_atomicProxyGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_atomicProxyGenerationList_2E_element & operator = (const GGS_atomicProxyGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicProxyGenerationList_2E_element init_21_ (const class GGS_atomicProxyGeneration & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicProxyGenerationList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList_2E_element ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2E_weak ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_computedPropertyGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS_computedPropertyGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_computedPropertyGeneration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_computedPropertyGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_computedPropertyGenerationList add_operation (const GGS_computedPropertyGenerationList & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_computedPropertyGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_computedPropertyGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_computedPropertyGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_computedPropertyGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_computedPropertyGeneration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyAtIndex (class GGS_computedPropertyGeneration constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_computedPropertyGeneration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_computedPropertyGeneration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_computedPropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_computedPropertyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_computedPropertyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_computedPropertyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computeRoutineGeneration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classKind_2E_document struct
//--------------------------------------------------------------------------------------------------

class GGS_classKind_2E_document : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_rootEntityName ;
  public: inline GGS_lstring readProperty_rootEntityName (void) const {
    return mProperty_rootEntityName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classKind_2E_document (void) ;

//--------------------------------- Property setters
  public: inline void setter_setRootEntityName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_rootEntityName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classKind_2E_document (const GGS_lstring & in_rootEntityName) ;

//--------------------------------- Copy constructor
  public: GGS_classKind_2E_document (const GGS_classKind_2E_document & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_classKind_2E_document & operator = (const GGS_classKind_2E_document & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classKind_2E_document init_21_ (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classKind_2E_document extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_document ;

//--------------------------------------------------------------------------------------------------
// Phase 1: classKind.document? optional
//--------------------------------------------------------------------------------------------------

class GGS_classKind_2E_document_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classKind_2E_document mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classKind_2E_document_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classKind_2E_document_3F_ (const GGS_classKind_2E_document & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classKind_2E_document_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classKind_2E_document unwrappedValue (void) const {
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
  public: static GGS_classKind_2E_document_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_document_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classKind_2E_entity struct
//--------------------------------------------------------------------------------------------------

class GGS_classKind_2E_entity : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_superEntityName ;
  public: inline GGS_string readProperty_superEntityName (void) const {
    return mProperty_superEntityName ;
  }

  public: GGS_bool mProperty_isGraphic ;
  public: inline GGS_bool readProperty_isGraphic (void) const {
    return mProperty_isGraphic ;
  }

  public: GGS_bool mProperty_isAbstract ;
  public: inline GGS_bool readProperty_isAbstract (void) const {
    return mProperty_isAbstract ;
  }

  public: GGS_bool mProperty_handlingOpposite ;
  public: inline GGS_bool readProperty_handlingOpposite (void) const {
    return mProperty_handlingOpposite ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classKind_2E_entity (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSuperEntityName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_superEntityName = inValue ;
  }

  public: inline void setter_setIsGraphic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isGraphic = inValue ;
  }

  public: inline void setter_setIsAbstract (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isAbstract = inValue ;
  }

  public: inline void setter_setHandlingOpposite (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_handlingOpposite = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classKind_2E_entity (const GGS_string & in_superEntityName,
                                   const GGS_bool & in_isGraphic,
                                   const GGS_bool & in_isAbstract,
                                   const GGS_bool & in_handlingOpposite) ;

//--------------------------------- Copy constructor
  public: GGS_classKind_2E_entity (const GGS_classKind_2E_entity & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_classKind_2E_entity & operator = (const GGS_classKind_2E_entity & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classKind_2E_entity init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                               const class GGS_bool & inOperand1,
                                                               const class GGS_bool & inOperand2,
                                                               const class GGS_bool & inOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classKind_2E_entity extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_entity ;

//--------------------------------------------------------------------------------------------------
// Phase 1: classKind.entity? optional
//--------------------------------------------------------------------------------------------------

class GGS_classKind_2E_entity_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classKind_2E_entity mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classKind_2E_entity_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classKind_2E_entity_3F_ (const GGS_classKind_2E_entity & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classKind_2E_entity_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classKind_2E_entity unwrappedValue (void) const {
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
  public: static GGS_classKind_2E_entity_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_entity_3F_ ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: actionMap.element? optional
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyAccessibility_2E_transient struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyAccessibility_2E_transient : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isAbstract ;
  public: inline GGS_bool readProperty_isAbstract (void) const {
    return mProperty_isAbstract ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyAccessibility_2E_transient (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsAbstract (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isAbstract = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyAccessibility_2E_transient (const GGS_bool & in_isAbstract) ;

//--------------------------------- Copy constructor
  public: GGS_propertyAccessibility_2E_transient (const GGS_propertyAccessibility_2E_transient & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyAccessibility_2E_transient & operator = (const GGS_propertyAccessibility_2E_transient & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyAccessibility_2E_transient init_21_ (const class GGS_bool & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyAccessibility_2E_transient extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyAccessibility.transient? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyAccessibility_2E_transient_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyAccessibility_2E_transient mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyAccessibility_2E_transient_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyAccessibility_2E_transient_3F_ (const GGS_propertyAccessibility_2E_transient & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyAccessibility_2E_transient_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyAccessibility_2E_transient unwrappedValue (void) const {
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
  public: static GGS_propertyAccessibility_2E_transient_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient_3F_ ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionFileGeneration_2E_weak ;

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

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOnePropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_toOnePropertyGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_toOnePropertyGenerationList class_func_listWithValue (const class GGS_toOnePropertyGeneration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_toOnePropertyGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_toOnePropertyGeneration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_toOnePropertyGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_toOnePropertyGenerationList add_operation (const GGS_toOnePropertyGenerationList & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_toOnePropertyGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_toOnePropertyGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_toOnePropertyGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_toOnePropertyGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_toOnePropertyGeneration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyAtIndex (class GGS_toOnePropertyGeneration constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_toOnePropertyGeneration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_toOnePropertyGeneration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_toOnePropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_toOnePropertyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_toOnePropertyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_toOnePropertyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2E_element ;

