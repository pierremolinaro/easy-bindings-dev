#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

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

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewInstructionGenerationParameterList_2E_element class_func_new (const class GGS_string & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2E_element ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutComputedViewInstructionGeneration class_func_new (const class GGS_lstring & inOperand0,
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
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutComputedViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;

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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutComputedViewInstructionGeneration bang_autoLayoutComputedViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_autoLayoutComputedViewInstructionGeneration unwrappedValue (void) const {
    GGS_autoLayoutComputedViewInstructionGeneration result ;
    if (isValid ()) {
      const cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_autoLayoutComputedViewInstructionGeneration (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration_2E_weak ;

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
  public: inline GGS_outletClassDeclarationAST unwrappedValue (void) const {
    GGS_outletClassDeclarationAST result ;
    if (isValid ()) {
      const cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_outletClassDeclarationAST (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@outletBindingSpecificationMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_outletBindingSpecificationMap : public cMapElement {
//--- Map attributes
  public: GGS_outletBindingSpecificationModelList mProperty_mOutletBindingSpecificationModelList ;
  public: GGS_controllerBindingOptionDecoratedList mProperty_mControllerBindingOptionList ;

//--- Constructors
  public: cMapElement_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap_2E_element & inValue
                                                     COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_outletBindingSpecificationMap (const GGS_lstring & inKey,
                                                     const GGS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                     const GGS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_outletBindingSpecificationMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_outletBindingSpecificationModelList & inOperand1,
                                                                                    const class GGS_controllerBindingOptionDecoratedList & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2E_element_3F_ ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bindingOptionList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bindingOptionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingOptionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingModelList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletBindingModelList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_outletBindingModelList (const class GGS_outletBindingModelList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletBindingModelList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletBindingModelList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_outletBindingModelList (const class GGS_outletBindingModelList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletBindingModelList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingModelList list
//--------------------------------------------------------------------------------------------------

class GGS_outletBindingModelList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_outletBindingModelList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_outletBindingModelList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: static class GGS_outletBindingModelList class_func_emptyList (LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mErrorLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyKind getter_mKindAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletBindingModelList ;
  friend class DownEnumerator_outletBindingModelList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_outletBindingModelList_2E_element class_func_new (const class GGS_propertyKind & inOperand0,
                                                                             const class GGS_location & inOperand1,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList_2E_element ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyKind_2E_arrayController class_func_new (const class GGS_lstring & inOperand0,
                                                                           const class GGS_bool & inOperand1,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_arrayController ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_arrayController_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessibility ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyKind_2E_property class_func_new (const class GGS_typeKind & inOperand0,
                                                                    const class GGS_propertyAccessibility & inOperand1,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_property ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_property_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyKind_2E_selectionController class_func_new (const class GGS_string & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_selectionController ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_selectionController_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyKind_2E_toMany class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_propertyAccessibility & inOperand1,
                                                                  const class GGS_bool & inOperand2,
                                                                  const class GGS_toManyRelationshipOptionAST & inOperand3,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_toMany ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_toMany_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyKind_2E_toOne class_func_new (const class GGS_lstring & inOperand0,
                                                                 const class GGS_propertyAccessibility & inOperand1,
                                                                 const class GGS_bool & inOperand2,
                                                                 const class GGS_toOneOppositeRelationship & inOperand3,
                                                                 const class GGS_bool & inOperand4,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_toOne ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_toOne_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_prefsPropertyWithOption class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_prefsProperty class_func_new (const class GGS_lstring & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_rootPropertyNone class_func_new (const class GGS_lstring & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_rootPropertyRelationship class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_rootPropertyWithOption class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_rootProperty class_func_new (const class GGS_lstring & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_selfControllerAllProperties class_func_new (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_lstring & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_selfControllerOneProperty class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_selfControllerProperty class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_selfControllerSecondaryProperty class_func_new (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_lstring & inOperand1,
                                                                                                    const class GGS_lstring & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_selfPropertyArray class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_selfPropertyNone class_func_new (const class GGS_lstring & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_selfPropertyObject class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_selfPropertyWithOption class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_selfProperty class_func_new (const class GGS_lstring & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_selfWithoutProperty class_func_new (const class GGS_location & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_signatureProperty class_func_new (const class GGS_location & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_superPropertyWithDefaultValue class_func_new (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_abstractDefaultValue & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_superProperty class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_versionProperty class_func_new (const class GGS_location & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty_3F_ ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST_2E_versionShouldChangeProperty class_func_new (const class GGS_location & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_observablePropertyAST mProperty_mObservableProperty ;
  public: inline GGS_observablePropertyAST readProperty_mObservableProperty (void) const {
    return mProperty_mObservableProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMObservableProperty (const GGS_observablePropertyAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservableProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyList_2E_element (const GGS_observablePropertyAST & in_mObservableProperty) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyList_2E_element (const GGS_observablePropertyList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyList_2E_element & operator = (const GGS_observablePropertyList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyList_2E_element init_21_ (const class GGS_observablePropertyAST & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyList_2E_element class_func_new (const class GGS_observablePropertyAST & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList_2E_element ;

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
//Extension getter '@observablePropertyAST modelStringFunctionArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_modelStringFunctionArgument (const class GGS_observablePropertyAST & inObject,
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
                                                class GGS_string & out_outDefaultValue,
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
// Phase 1: @typeKindList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_typeKindList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_typeKindList (const class GGS_typeKindList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_typeKind current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeKindList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typeKindList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_typeKindList (const class GGS_typeKindList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_typeKind current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeKindList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKindList list
//--------------------------------------------------------------------------------------------------

class GGS_typeKindList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_typeKindList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_typeKindList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_typeKind & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindList init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindList extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKindList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_typeKindList class_func_listWithValue (const class GGS_typeKind & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_typeKindList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_typeKind & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_typeKindList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_typeKindList add_operation (const GGS_typeKindList & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_typeKind constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_typeKind constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_typeKind & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_typeKind & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_typeKind & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_typeKind constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_typeKind & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_typeKind & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_typeKind getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKindList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKindList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKindList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_typeKindList ;
  friend class DownEnumerator_typeKindList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDefaultValue analyzeDefaultValueType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeDefaultValueType (class cPtr_abstractDefaultValue * inObject,
                                                  const class GGS_typeKindList constin_inAttributeActualTypeList,
                                                  const class GGS_propertyMap constin_inPreferencesPropertyMap,
                                                  class GGS_string & out_outSwiftDefaultValueAsString,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList_2E_element ;

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
  public: inline GGS_computedPropertyDeclarationAST unwrappedValue (void) const {
    GGS_computedPropertyDeclarationAST result ;
    if (isValid ()) {
      const cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_computedPropertyDeclarationAST (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientDependencyListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_transientDependencyListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_transientDependencyListForGeneration (const class GGS_transientDependencyListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_observablePropertyAST current_mDependency (LOCATION_ARGS) const ;
  public: class GGS_string current_mFunctionArgumentName (LOCATION_ARGS) const ;
  public: class GGS_string current_mFunctionArgumentTypeString (LOCATION_ARGS) const ;
  public: class GGS_string current_mDefaultValueAsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_transientDependencyListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_transientDependencyListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_transientDependencyListForGeneration (const class GGS_transientDependencyListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_observablePropertyAST current_mDependency (LOCATION_ARGS) const ;
  public: class GGS_string current_mFunctionArgumentName (LOCATION_ARGS) const ;
  public: class GGS_string current_mFunctionArgumentTypeString (LOCATION_ARGS) const ;
  public: class GGS_string current_mDefaultValueAsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_transientDependencyListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientDependencyListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_transientDependencyListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_transientDependencyListForGeneration (void) ;

//--------------------------------- List constructor by graph
  public: GGS_transientDependencyListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_observablePropertyAST & in_mDependency,
                                                 const class GGS_string & in_mFunctionArgumentName,
                                                 const class GGS_string & in_mFunctionArgumentTypeString,
                                                 const class GGS_string & in_mDefaultValueAsString
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
  public: static class GGS_transientDependencyListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_transientDependencyListForGeneration class_func_listWithValue (const class GGS_observablePropertyAST & inOperand0,
                                                                                          const class GGS_string & inOperand1,
                                                                                          const class GGS_string & inOperand2,
                                                                                          const class GGS_string & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_transientDependencyListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_observablePropertyAST & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_string & inOperand3
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
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_observablePropertyAST constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_observablePropertyAST & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_observablePropertyAST & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_observablePropertyAST & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_uint constinArgument4,
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


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_observablePropertyAST & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_observablePropertyAST & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_string & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_transientDependencyListForGeneration ;
  friend class DownEnumerator_transientDependencyListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration ;

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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_transientDependencyListForGeneration_2E_element (const GGS_observablePropertyAST & in_mDependency,
                                                               const GGS_string & in_mFunctionArgumentName,
                                                               const GGS_string & in_mFunctionArgumentTypeString,
                                                               const GGS_string & in_mDefaultValueAsString) ;

//--------------------------------- Copy constructor
  public: GGS_transientDependencyListForGeneration_2E_element (const GGS_transientDependencyListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_transientDependencyListForGeneration_2E_element & operator = (const GGS_transientDependencyListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientDependencyListForGeneration_2E_element init_21__21__21__21_ (const class GGS_observablePropertyAST & inOperand0,
                                                                                           const class GGS_string & inOperand1,
                                                                                           const class GGS_string & inOperand2,
                                                                                           const class GGS_string & inOperand3,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientDependencyListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_transientDependencyListForGeneration_2E_element class_func_new (const class GGS_observablePropertyAST & inOperand0,
                                                                                           const class GGS_string & inOperand1,
                                                                                           const class GGS_string & inOperand2,
                                                                                           const class GGS_string & inOperand3,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_propertyGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_propertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_propertyGeneration_2E_weak (const class GGS_propertyGeneration & inSource) ;

  public: GGS_propertyGeneration_2E_weak & operator = (const class GGS_propertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_propertyGeneration_2E_weak init_nil (void) {
    GGS_propertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_propertyGeneration bang_propertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_propertyGeneration unwrappedValue (void) const {
    GGS_propertyGeneration result ;
    if (isValid ()) {
      const cPtr_propertyGeneration * p = (cPtr_propertyGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_propertyGeneration (p) ;
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
  public: static GGS_propertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_propertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedPropertyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_computedPropertyGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_computedPropertyGenerationList (const class GGS_computedPropertyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_computedPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_computedPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_computedPropertyGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_computedPropertyGenerationList (const class GGS_computedPropertyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_computedPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_computedPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedPropertyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_computedPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_computedPropertyGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_computedPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: static class GGS_computedPropertyGenerationList class_func_emptyList (LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG class GGS_computedPropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_computedPropertyGenerationList ;
  friend class DownEnumerator_computedPropertyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_computedPropertyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                      const class GGS_string & inOperand1,
                                                                      const class GGS_typeKind & inOperand2,
                                                                      const class GGS_transientDependencyListForGeneration & inOperand3,
                                                                      const class GGS_bool & inOperand4,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGeneration ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_computedPropertyGenerationList_2E_element class_func_new (const class GGS_computedPropertyGeneration & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList_2E_element ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_computeRoutineGeneration class_func_new (const class GGS_string & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_typeKind & inOperand2,
                                                                    const class GGS_transientDependencyListForGeneration & inOperand3,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computeRoutineGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeRoutineGeneration ;

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


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_computeRoutineGeneration unwrappedValue (void) const {
    GGS_computeRoutineGeneration result ;
    if (isValid ()) {
      const cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_computeRoutineGeneration (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeRoutineGeneration_2E_weak ;

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
  public: inline GGS_transientDeclarationAST unwrappedValue (void) const {
    GGS_transientDeclarationAST result ;
    if (isValid ()) {
      const cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_transientDeclarationAST (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDeclarationAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_transientPropertyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       const class GGS_typeKind & inOperand2,
                                                                       const class GGS_transientDependencyListForGeneration & inOperand3,
                                                                       const class GGS_bool & inOperand4,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGeneration ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_transientPropertyGeneration unwrappedValue (void) const {
    GGS_transientPropertyGeneration result ;
    if (isValid ()) {
      const cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_transientPropertyGeneration (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientPropertyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_transientPropertyGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_transientPropertyGenerationList (const class GGS_transientPropertyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_transientPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_transientPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_transientPropertyGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_transientPropertyGenerationList (const class GGS_transientPropertyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_transientPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_transientPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientPropertyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_transientPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_transientPropertyGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_transientPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: static class GGS_transientPropertyGenerationList class_func_emptyList (LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG class GGS_transientPropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_transientPropertyGenerationList ;
  friend class DownEnumerator_transientPropertyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_transientPropertyGenerationList_2E_element class_func_new (const class GGS_transientPropertyGeneration & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList_2E_element ;

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
  public: void setProperty_mOwnerName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mTransientName (void) const ;
  public: void setProperty_mTransientName (const GGS_string & inValue) ;

  public: class GGS_typeKind readProperty_mTransientType (void) const ;
  public: void setProperty_mTransientType (const GGS_typeKind & inValue) ;

  public: class GGS_string readProperty_mGeneratedFunctionNamePrefix (void) const ;
  public: void setProperty_mGeneratedFunctionNamePrefix (const GGS_string & inValue) ;

  public: class GGS_transientDependencyListForGeneration readProperty_mDependencyList (void) const ;
  public: void setProperty_mDependencyList (const GGS_transientDependencyListForGeneration & inValue) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_transientRoutineGeneration class_func_new (const class GGS_string & inOperand0,
                                                                      const class GGS_string & inOperand1,
                                                                      const class GGS_typeKind & inOperand2,
                                                                      const class GGS_string & inOperand3,
                                                                      const class GGS_transientDependencyListForGeneration & inOperand4,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientRoutineGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRoutineGeneration ;

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


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_transientRoutineGeneration unwrappedValue (void) const {
    GGS_transientRoutineGeneration result ;
    if (isValid ()) {
      const cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_transientRoutineGeneration (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRoutineGeneration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_proxyDeclarationAST bang_proxyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_proxyDeclarationAST unwrappedValue (void) const {
    GGS_proxyDeclarationAST result ;
    if (isValid ()) {
      const cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_proxyDeclarationAST (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyDeclarationAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyProxyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                 const class GGS_proxyKind & inOperand1,
                                                                 const class GGS_string & inOperand2,
                                                                 const class GGS_string & inOperand3,
                                                                 const class GGS_string & inOperand4,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyProxyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGeneration ;

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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_toManyProxyGeneration bang_toManyProxyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_toManyProxyGeneration unwrappedValue (void) const {
    GGS_toManyProxyGeneration result ;
    if (isValid ()) {
      const cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_toManyProxyGeneration (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyProxyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_toManyProxyGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_toManyProxyGenerationList (const class GGS_toManyProxyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_toManyProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toManyProxyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_toManyProxyGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_toManyProxyGenerationList (const class GGS_toManyProxyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_toManyProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toManyProxyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyProxyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_toManyProxyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_toManyProxyGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_toManyProxyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: static class GGS_toManyProxyGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_toManyProxyGenerationList class_func_listWithValue (const class GGS_toManyProxyGeneration & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_toManyProxyGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_toManyProxyGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_toManyProxyGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_toManyProxyGenerationList add_operation (const GGS_toManyProxyGenerationList & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_toManyProxyGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_toManyProxyGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_toManyProxyGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_toManyProxyGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_toManyProxyGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GGS_toManyProxyGeneration constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_toManyProxyGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_toManyProxyGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_toManyProxyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyProxyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyProxyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyProxyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_toManyProxyGenerationList ;
  friend class DownEnumerator_toManyProxyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyProxyGenerationList_2E_element class_func_new (const class GGS_toManyProxyGeneration & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList_2E_element ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicProxyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                 const class GGS_proxyKind & inOperand1,
                                                                 const class GGS_typeKind & inOperand2,
                                                                 const class GGS_string & inOperand3,
                                                                 const class GGS_string & inOperand4,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicProxyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGeneration ;

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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_atomicProxyGeneration bang_atomicProxyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_atomicProxyGeneration unwrappedValue (void) const {
    GGS_atomicProxyGeneration result ;
    if (isValid ()) {
      const cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_atomicProxyGeneration (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicProxyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_atomicProxyGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_atomicProxyGenerationList (const class GGS_atomicProxyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_atomicProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_atomicProxyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_atomicProxyGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_atomicProxyGenerationList (const class GGS_atomicProxyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_atomicProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_atomicProxyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicProxyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_atomicProxyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_atomicProxyGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_atomicProxyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: static class GGS_atomicProxyGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_atomicProxyGenerationList class_func_listWithValue (const class GGS_atomicProxyGeneration & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_atomicProxyGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_atomicProxyGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_atomicProxyGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_atomicProxyGenerationList add_operation (const GGS_atomicProxyGenerationList & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_atomicProxyGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_atomicProxyGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_atomicProxyGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_atomicProxyGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_atomicProxyGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GGS_atomicProxyGeneration constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_atomicProxyGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_atomicProxyGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_atomicProxyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicProxyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicProxyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicProxyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_atomicProxyGenerationList ;
  friend class DownEnumerator_atomicProxyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicProxyGenerationList_2E_element class_func_new (const class GGS_atomicProxyGeneration & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_atomicPropertyDeclarationAST_2E_weak (const class GGS_atomicPropertyDeclarationAST & inSource) ;

  public: GGS_atomicPropertyDeclarationAST_2E_weak & operator = (const class GGS_atomicPropertyDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_atomicPropertyDeclarationAST_2E_weak init_nil (void) {
    GGS_atomicPropertyDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_atomicPropertyDeclarationAST bang_atomicPropertyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_atomicPropertyDeclarationAST unwrappedValue (void) const {
    GGS_atomicPropertyDeclarationAST result ;
    if (isValid ()) {
      const cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_atomicPropertyDeclarationAST (p) ;
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
  public: static GGS_atomicPropertyDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicPropertyDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_atomicPropertyGeneration (const class cPtr_atomicPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_generateResetMethod (void) const ;

  public: class GGS_bool readProperty_generateDirectRead (void) const ;

  public: class GGS_bool readProperty_generateDirectAccess (void) const ;

  public: class GGS_bool readProperty_standalone (void) const ;

  public: class GGS_typeKind readProperty_mType (void) const ;

  public: class GGS_bool readProperty_mIsProxy (void) const ;

  public: class GGS_string readProperty_mDefaultValueInSwift (void) const ;

  public: class GGS_bool readProperty_mInPreferences (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicPropertyGeneration init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                                                           const class GGS_bool & inOperand1,
                                                                                                                                                           const class GGS_bool & inOperand2,
                                                                                                                                                           const class GGS_bool & inOperand3,
                                                                                                                                                           const class GGS_bool & inOperand4,
                                                                                                                                                           const class GGS_typeKind & inOperand5,
                                                                                                                                                           const class GGS_bool & inOperand6,
                                                                                                                                                           const class GGS_string & inOperand7,
                                                                                                                                                           const class GGS_bool & inOperand8,
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicPropertyGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                    const class GGS_bool & inOperand1,
                                                                    const class GGS_bool & inOperand2,
                                                                    const class GGS_bool & inOperand3,
                                                                    const class GGS_bool & inOperand4,
                                                                    const class GGS_typeKind & inOperand5,
                                                                    const class GGS_bool & inOperand6,
                                                                    const class GGS_string & inOperand7,
                                                                    const class GGS_bool & inOperand8,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @atomicPropertyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_atomicPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void atomicPropertyGeneration_init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                                                     const class GGS_bool & inOperand1,
                                                                                                                                                     const class GGS_bool & inOperand2,
                                                                                                                                                     const class GGS_bool & inOperand3,
                                                                                                                                                     const class GGS_bool & inOperand4,
                                                                                                                                                     const class GGS_typeKind & inOperand5,
                                                                                                                                                     const class GGS_bool & inOperand6,
                                                                                                                                                     const class GGS_string & inOperand7,
                                                                                                                                                     const class GGS_bool & inOperand8,
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

//--- Extension getter prefKeyDefinitionCode
  public: virtual class GGS_string getter_prefKeyDefinitionCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_bool mProperty_generateResetMethod ;
  public: GGS_bool mProperty_generateDirectRead ;
  public: GGS_bool mProperty_generateDirectAccess ;
  public: GGS_bool mProperty_standalone ;
  public: GGS_typeKind mProperty_mType ;
  public: GGS_bool mProperty_mIsProxy ;
  public: GGS_string mProperty_mDefaultValueInSwift ;
  public: GGS_bool mProperty_mInPreferences ;


//--- Default constructor
  public: cPtr_atomicPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_atomicPropertyGeneration (const GGS_string & in_mPropertyName,
                                         const GGS_bool & in_generateResetMethod,
                                         const GGS_bool & in_generateDirectRead,
                                         const GGS_bool & in_generateDirectAccess,
                                         const GGS_bool & in_standalone,
                                         const GGS_typeKind & in_mType,
                                         const GGS_bool & in_mIsProxy,
                                         const GGS_string & in_mDefaultValueInSwift,
                                         const GGS_bool & in_mInPreferences,
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
// Phase 1: @atomicPropertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_atomicPropertyGeneration_2E_weak (const class GGS_atomicPropertyGeneration & inSource) ;

  public: GGS_atomicPropertyGeneration_2E_weak & operator = (const class GGS_atomicPropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_atomicPropertyGeneration_2E_weak init_nil (void) {
    GGS_atomicPropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_atomicPropertyGeneration bang_atomicPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_atomicPropertyGeneration unwrappedValue (void) const {
    GGS_atomicPropertyGeneration result ;
    if (isValid ()) {
      const cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_atomicPropertyGeneration (p) ;
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
  public: static GGS_atomicPropertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicPropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_atomicPropertyGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_atomicPropertyGenerationList (const class GGS_atomicPropertyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_atomicPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_atomicPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_atomicPropertyGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_atomicPropertyGenerationList (const class GGS_atomicPropertyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_atomicPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_atomicPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_atomicPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_atomicPropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicPropertyGenerationList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicPropertyGenerationList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_atomicPropertyGenerationList class_func_listWithValue (const class GGS_atomicPropertyGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_atomicPropertyGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_atomicPropertyGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_atomicPropertyGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_atomicPropertyGenerationList add_operation (const GGS_atomicPropertyGenerationList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_atomicPropertyGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_atomicPropertyGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_atomicPropertyGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_atomicPropertyGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_atomicPropertyGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GGS_atomicPropertyGeneration constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_atomicPropertyGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_atomicPropertyGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_atomicPropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicPropertyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicPropertyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicPropertyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_atomicPropertyGenerationList ;
  friend class DownEnumerator_atomicPropertyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_atomicPropertyGeneration mProperty_mProperty ;
  public: inline GGS_atomicPropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_atomicPropertyGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GGS_atomicPropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_atomicPropertyGenerationList_2E_element (const GGS_atomicPropertyGeneration & in_mProperty) ;

//--------------------------------- Copy constructor
  public: GGS_atomicPropertyGenerationList_2E_element (const GGS_atomicPropertyGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_atomicPropertyGenerationList_2E_element & operator = (const GGS_atomicPropertyGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicPropertyGenerationList_2E_element init_21_ (const class GGS_atomicPropertyGeneration & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicPropertyGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyGenerationList_2E_element class_func_new (const class GGS_atomicPropertyGeneration & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToMany ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToOne ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ ;

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
  public: inline GGS_toOneRelationshipAST unwrappedValue (void) const {
    GGS_toOneRelationshipAST result ;
    if (isValid ()) {
      const cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_toOneRelationshipAST (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_propertyKind & inOperand1,
                                                                  const class GGS_actionMap & inOperand2,
                                                                  const class GGS_bool & inOperand3,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration ;

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

//--- Extension getter objectAccessibilityCodeForSaveOperation
  public: virtual class GGS_string getter_objectAccessibilityCodeForSaveOperation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter setupRelationshipFromDictionaryCode
  public: virtual class GGS_string getter_setupRelationshipFromDictionaryCode (Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_toOnePropertyGeneration unwrappedValue (void) const {
    GGS_toOnePropertyGeneration result ;
    if (isValid ()) {
      const cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_toOnePropertyGeneration (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toOnePropertyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_toOnePropertyGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_toOnePropertyGenerationList (const class GGS_toOnePropertyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_toOnePropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toOnePropertyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_toOnePropertyGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_toOnePropertyGenerationList (const class GGS_toOnePropertyGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_toOnePropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toOnePropertyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toOnePropertyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_toOnePropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_toOnePropertyGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_toOnePropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: VIRTUAL_IN_DEBUG class GGS_toOnePropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_toOnePropertyGenerationList ;
  friend class DownEnumerator_toOnePropertyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ ;

