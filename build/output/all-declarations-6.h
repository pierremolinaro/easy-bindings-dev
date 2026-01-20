#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefDeclaration struct
//--------------------------------------------------------------------------------------------------

class GGS_prefDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public: inline GGS_outletDeclarationList readProperty_mOutletDeclarationList (void) const {
    return mProperty_mOutletDeclarationList ;
  }

  public: GGS_simpleStoredPropertyList mProperty_mSimpleStoredAttributeList ;
  public: inline GGS_simpleStoredPropertyList readProperty_mSimpleStoredAttributeList (void) const {
    return mProperty_mSimpleStoredAttributeList ;
  }

  public: GGS_lstringlist mProperty_mActionDeclarationList ;
  public: inline GGS_lstringlist readProperty_mActionDeclarationList (void) const {
    return mProperty_mActionDeclarationList ;
  }

  public: GGS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public: inline GGS_externSwiftFunctionList readProperty_mExternSwiftFunctionList (void) const {
    return mProperty_mExternSwiftFunctionList ;
  }

  public: GGS_stringset mProperty_mSignatureList ;
  public: inline GGS_stringset readProperty_mSignatureList (void) const {
    return mProperty_mSignatureList ;
  }

  public: GGS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;
  public: inline GGS_mainXibDescriptorList readProperty_mMainXibDescriptorList (void) const {
    return mProperty_mMainXibDescriptorList ;
  }

  public: GGS_astViewDeclarationList mProperty_mViewDeclarationList ;
  public: inline GGS_astViewDeclarationList readProperty_mViewDeclarationList (void) const {
    return mProperty_mViewDeclarationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_prefDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletDeclarationList (const GGS_outletDeclarationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletDeclarationList = inValue ;
  }

  public: inline void setter_setMSimpleStoredAttributeList (const GGS_simpleStoredPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSimpleStoredAttributeList = inValue ;
  }

  public: inline void setter_setMActionDeclarationList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionDeclarationList = inValue ;
  }

  public: inline void setter_setMExternSwiftFunctionList (const GGS_externSwiftFunctionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternSwiftFunctionList = inValue ;
  }

  public: inline void setter_setMSignatureList (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureList = inValue ;
  }

  public: inline void setter_setMMainXibDescriptorList (const GGS_mainXibDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainXibDescriptorList = inValue ;
  }

  public: inline void setter_setMViewDeclarationList (const GGS_astViewDeclarationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mViewDeclarationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_prefDeclaration (const GGS_outletDeclarationList & in_mOutletDeclarationList,
                               const GGS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                               const GGS_lstringlist & in_mActionDeclarationList,
                               const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                               const GGS_stringset & in_mSignatureList,
                               const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                               const GGS_astViewDeclarationList & in_mViewDeclarationList) ;

//--------------------------------- Copy constructor
  public: GGS_prefDeclaration (const GGS_prefDeclaration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_prefDeclaration & operator = (const GGS_prefDeclaration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefDeclaration init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefDeclaration extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefDeclaration class_func_new (Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefsDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefsDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_prefsDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_prefsDeclarationAST (const class cPtr_prefsDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_prefDeclaration readProperty_mDeclaration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefsDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_prefDeclaration & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefsDeclarationAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefsDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_prefDeclaration & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @prefsDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_prefsDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void prefsDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_prefDeclaration & inOperand1,
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
  public: GGS_prefDeclaration mProperty_mDeclaration ;


//--- Default constructor
  public: cPtr_prefsDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_prefsDeclarationAST (const GGS_lstring & in_mClassName,
                                    const GGS_prefDeclaration & in_mDeclaration,
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
// Phase 1: @prefsDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefsDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_prefsDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefsDeclarationAST_2E_weak (const class GGS_prefsDeclarationAST & inSource) ;

  public: GGS_prefsDeclarationAST_2E_weak & operator = (const class GGS_prefsDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_prefsDeclarationAST_2E_weak init_nil (void) {
    GGS_prefsDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_prefsDeclarationAST bang_prefsDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_prefsDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_prefsDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefsDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @preferencesForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_preferencesForGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_preferencesForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_preferencesForGeneration (const class cPtr_preferencesForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_propertyGenerationList readProperty_mPropertyListForGeneration (void) const ;

  public: class GGS_mainXibDescriptorList readProperty_mMainXibDescriptorList (void) const ;

  public: class GGS_regularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GGS_multipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GGS_actionBindingListForGeneration readProperty_mActionBindingListForGeneration (void) const ;

  public: class GGS_decoratedOutletMap readProperty_mOutletMap (void) const ;

  public: class GGS_externSwiftFunctionList readProperty_mExternSwiftFunctionList (void) const ;

  public: class GGS_tableViewBindingGenerationList readProperty_mTableViewBindingGenerationList (void) const ;

  public: class GGS_ebViewGraphicControllerBindingGenerationList readProperty_mEBViewBindingGenerationList (void) const ;

  public: class GGS_viewGenerationList readProperty_mViewGenerationList (void) const ;

  public: class GGS_implicitViewFunctionGenerationList readProperty_mImplicitViewFunctionGenerationList (void) const ;

  public: class GGS_autoLayoutConfiguratorMap readProperty_mConfiguratorMap (void) const ;

  public: class GGS_autoLayoutOutletMap readProperty_mAutoLayoutOutletMap (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_preferencesForGeneration init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_propertyGenerationList & inOperand0,
                                                                                                        const class GGS_mainXibDescriptorList & inOperand1,
                                                                                                        const class GGS_regularBindingsGenerationList & inOperand2,
                                                                                                        const class GGS_multipleBindingGenerationList & inOperand3,
                                                                                                        const class GGS_actionBindingListForGeneration & inOperand4,
                                                                                                        const class GGS_decoratedOutletMap & inOperand5,
                                                                                                        const class GGS_externSwiftFunctionList & inOperand6,
                                                                                                        const class GGS_tableViewBindingGenerationList & inOperand7,
                                                                                                        const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand8,
                                                                                                        const class GGS_viewGenerationList & inOperand9,
                                                                                                        const class GGS_implicitViewFunctionGenerationList & inOperand10,
                                                                                                        const class GGS_autoLayoutConfiguratorMap & inOperand11,
                                                                                                        const class GGS_autoLayoutOutletMap & inOperand12,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_preferencesForGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_preferencesForGeneration class_func_new (const class GGS_propertyGenerationList & inOperand0,
                                                                    const class GGS_mainXibDescriptorList & inOperand1,
                                                                    const class GGS_regularBindingsGenerationList & inOperand2,
                                                                    const class GGS_multipleBindingGenerationList & inOperand3,
                                                                    const class GGS_actionBindingListForGeneration & inOperand4,
                                                                    const class GGS_decoratedOutletMap & inOperand5,
                                                                    const class GGS_externSwiftFunctionList & inOperand6,
                                                                    const class GGS_tableViewBindingGenerationList & inOperand7,
                                                                    const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand8,
                                                                    const class GGS_viewGenerationList & inOperand9,
                                                                    const class GGS_implicitViewFunctionGenerationList & inOperand10,
                                                                    const class GGS_autoLayoutConfiguratorMap & inOperand11,
                                                                    const class GGS_autoLayoutOutletMap & inOperand12,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_preferencesForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_preferencesForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @preferencesForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_preferencesForGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void preferencesForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_propertyGenerationList & inOperand0,
                                                                                                  const class GGS_mainXibDescriptorList & inOperand1,
                                                                                                  const class GGS_regularBindingsGenerationList & inOperand2,
                                                                                                  const class GGS_multipleBindingGenerationList & inOperand3,
                                                                                                  const class GGS_actionBindingListForGeneration & inOperand4,
                                                                                                  const class GGS_decoratedOutletMap & inOperand5,
                                                                                                  const class GGS_externSwiftFunctionList & inOperand6,
                                                                                                  const class GGS_tableViewBindingGenerationList & inOperand7,
                                                                                                  const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand8,
                                                                                                  const class GGS_viewGenerationList & inOperand9,
                                                                                                  const class GGS_implicitViewFunctionGenerationList & inOperand10,
                                                                                                  const class GGS_autoLayoutConfiguratorMap & inOperand11,
                                                                                                  const class GGS_autoLayoutOutletMap & inOperand12,
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
  public: GGS_propertyGenerationList mProperty_mPropertyListForGeneration ;
  public: GGS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;
  public: GGS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GGS_multipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;
  public: GGS_actionBindingListForGeneration mProperty_mActionBindingListForGeneration ;
  public: GGS_decoratedOutletMap mProperty_mOutletMap ;
  public: GGS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public: GGS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GGS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;
  public: GGS_viewGenerationList mProperty_mViewGenerationList ;
  public: GGS_implicitViewFunctionGenerationList mProperty_mImplicitViewFunctionGenerationList ;
  public: GGS_autoLayoutConfiguratorMap mProperty_mConfiguratorMap ;
  public: GGS_autoLayoutOutletMap mProperty_mAutoLayoutOutletMap ;


//--- Default constructor
  public: cPtr_preferencesForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_preferencesForGeneration (const GGS_propertyGenerationList & in_mPropertyListForGeneration,
                                         const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                         const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                         const GGS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                         const GGS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                         const GGS_decoratedOutletMap & in_mOutletMap,
                                         const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                         const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                         const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                         const GGS_viewGenerationList & in_mViewGenerationList,
                                         const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                         const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                         const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
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
// Phase 1: @preferencesForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_preferencesForGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_preferencesForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_preferencesForGeneration_2E_weak (const class GGS_preferencesForGeneration & inSource) ;

  public: GGS_preferencesForGeneration_2E_weak & operator = (const class GGS_preferencesForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_preferencesForGeneration_2E_weak init_nil (void) {
    GGS_preferencesForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_preferencesForGeneration bang_preferencesForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_preferencesForGeneration unwrappedValue (void) const ;

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
  public: static GGS_preferencesForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_preferencesForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_preferencesForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_preferencesForGeneration_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_entityStrongReferenceGraph class_func_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GGS_lstring inArgument0,
                                                class GGS_string inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GGS_stringlist & outArgument0,
                                                      class GGS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GGS_stringlist & outArgument0,
                                                                  class GGS_lstringlist & outArgument1,
                                                                  class GGS_stringlist & outArgument2,
                                                                  class GGS_lstringlist & outArgument3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GGS_stringlist & outArgument0,
                                                               class GGS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GGS_stringlist & outArgument0,
                                                             class GGS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GGS_stringlist & outArgument0,
                                                        class GGS_lstringlist & outArgument1,
                                                        class GGS_stringlist & outArgument2,
                                                        class GGS_lstringlist & outArgument3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_accessibleNodesFrom (const class GGS_lstringlist & constinOperand0,
                                                                             const class GGS_stringset & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_entityStrongReferenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_entityStrongReferenceGraph getter_subgraphFromNodes (const class GGS_lstringlist & constinOperand0,
                                                                                          const class GGS_stringset & constinOperand1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityStrongReferenceGraph ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (class cPtr_abstractDeclarationAST * inObject,
                                                 class GGS_declarationPrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring callExtensionGetter_nodeKey (const class cPtr_abstractDeclarationAST * inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_firstAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                             class GGS_semanticContext & io_ioSemanticContext,
                                             class GGS_generationStruct & io_ioGeneration,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST secondAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_secondAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                              class GGS_semanticContext & io_ioSemanticContext,
                                              class GGS_generationStruct & io_ioGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST thirdAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_thirdAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                             class GGS_semanticContext & io_ioSemanticContext,
                                             class GGS_generationStruct & io_ioGeneration,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST fourthAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_fourthAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                              class GGS_semanticContext & io_ioSemanticContext,
                                              class GGS_generationStruct & io_ioGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XcodeProjectDescriptor struct
//--------------------------------------------------------------------------------------------------

class GGS_XcodeProjectDescriptor : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mSequenceNumber ;
  public: inline GGS_uint readProperty_mSequenceNumber (void) const {
    return mProperty_mSequenceNumber ;
  }

  public: GGS_string mProperty_mMainGroupReference ;
  public: inline GGS_string readProperty_mMainGroupReference (void) const {
    return mProperty_mMainGroupReference ;
  }

  public: GGS_stringlist mProperty_mMainGroupChildrenRefs ;
  public: inline GGS_stringlist readProperty_mMainGroupChildrenRefs (void) const {
    return mProperty_mMainGroupChildrenRefs ;
  }

  public: GGS_string mProperty_mProjectObjectReference ;
  public: inline GGS_string readProperty_mProjectObjectReference (void) const {
    return mProperty_mProjectObjectReference ;
  }

  public: GGS_XCodeGroupList mProperty_mGroupList ;
  public: inline GGS_XCodeGroupList readProperty_mGroupList (void) const {
    return mProperty_mGroupList ;
  }

  public: GGS_XCodeToolTargetList mProperty_mToolTargetList ;
  public: inline GGS_XCodeToolTargetList readProperty_mToolTargetList (void) const {
    return mProperty_mToolTargetList ;
  }

  public: GGS_XCodeAppTargetList mProperty_mAppTargetList ;
  public: inline GGS_XCodeAppTargetList readProperty_mAppTargetList (void) const {
    return mProperty_mAppTargetList ;
  }

  public: GGS__32_stringlist mProperty_mCppFileList ;
  public: inline GGS__32_stringlist readProperty_mCppFileList (void) const {
    return mProperty_mCppFileList ;
  }

  public: GGS__32_stringlist mProperty_m_5F_M_5F_FileList ;
  public: inline GGS__32_stringlist readProperty_m_5F_M_5F_FileList (void) const {
    return mProperty_m_5F_M_5F_FileList ;
  }

  public: GGS__32_stringlist mProperty_m_5F_MM_5F_FileList ;
  public: inline GGS__32_stringlist readProperty_m_5F_MM_5F_FileList (void) const {
    return mProperty_m_5F_MM_5F_FileList ;
  }

  public: GGS__32_stringlist mProperty_m_5F_SwiftFileList ;
  public: inline GGS__32_stringlist readProperty_m_5F_SwiftFileList (void) const {
    return mProperty_m_5F_SwiftFileList ;
  }

  public: GGS__32_stringlist mProperty_mFrameworkFileList ;
  public: inline GGS__32_stringlist readProperty_mFrameworkFileList (void) const {
    return mProperty_mFrameworkFileList ;
  }

  public: GGS__32_stringlist mProperty_mHeaderFileList ;
  public: inline GGS__32_stringlist readProperty_mHeaderFileList (void) const {
    return mProperty_mHeaderFileList ;
  }

  public: GGS_BuildFileList mProperty_mBuildFileList ;
  public: inline GGS_BuildFileList readProperty_mBuildFileList (void) const {
    return mProperty_mBuildFileList ;
  }

  public: GGS_string mProperty_mDefaultConfigurationRef ;
  public: inline GGS_string readProperty_mDefaultConfigurationRef (void) const {
    return mProperty_mDefaultConfigurationRef ;
  }

  public: GGS_stringlist mProperty_mDefaultConfigurationSettingList ;
  public: inline GGS_stringlist readProperty_mDefaultConfigurationSettingList (void) const {
    return mProperty_mDefaultConfigurationSettingList ;
  }

  public: GGS_string mProperty_mProjectBuildConfigurationRef ;
  public: inline GGS_string readProperty_mProjectBuildConfigurationRef (void) const {
    return mProperty_mProjectBuildConfigurationRef ;
  }

  public: GGS__32_stringlist mProperty_mInfoPlistFileList ;
  public: inline GGS__32_stringlist readProperty_mInfoPlistFileList (void) const {
    return mProperty_mInfoPlistFileList ;
  }

  public: GGS__32_stringlist mProperty_mXIB_5F_fileList ;
  public: inline GGS__32_stringlist readProperty_mXIB_5F_fileList (void) const {
    return mProperty_mXIB_5F_fileList ;
  }

  public: GGS__32_stringlist mProperty_mTIFF_5F_fileList ;
  public: inline GGS__32_stringlist readProperty_mTIFF_5F_fileList (void) const {
    return mProperty_mTIFF_5F_fileList ;
  }

  public: GGS__32_stringlist mProperty_mICNS_5F_fileList ;
  public: inline GGS__32_stringlist readProperty_mICNS_5F_fileList (void) const {
    return mProperty_mICNS_5F_fileList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XcodeProjectDescriptor (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSequenceNumber (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSequenceNumber = inValue ;
  }

  public: inline void setter_setMMainGroupReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainGroupReference = inValue ;
  }

  public: inline void setter_setMMainGroupChildrenRefs (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainGroupChildrenRefs = inValue ;
  }

  public: inline void setter_setMProjectObjectReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectObjectReference = inValue ;
  }

  public: inline void setter_setMGroupList (const GGS_XCodeGroupList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupList = inValue ;
  }

  public: inline void setter_setMToolTargetList (const GGS_XCodeToolTargetList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mToolTargetList = inValue ;
  }

  public: inline void setter_setMAppTargetList (const GGS_XCodeAppTargetList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAppTargetList = inValue ;
  }

  public: inline void setter_setMCppFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppFileList = inValue ;
  }

  public: inline void setter_setM_5F_M_5F_FileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_M_5F_FileList = inValue ;
  }

  public: inline void setter_setM_5F_MM_5F_FileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_MM_5F_FileList = inValue ;
  }

  public: inline void setter_setM_5F_SwiftFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_SwiftFileList = inValue ;
  }

  public: inline void setter_setMFrameworkFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkFileList = inValue ;
  }

  public: inline void setter_setMHeaderFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderFileList = inValue ;
  }

  public: inline void setter_setMBuildFileList (const GGS_BuildFileList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildFileList = inValue ;
  }

  public: inline void setter_setMDefaultConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultConfigurationRef = inValue ;
  }

  public: inline void setter_setMDefaultConfigurationSettingList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMProjectBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMInfoPlistFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInfoPlistFileList = inValue ;
  }

  public: inline void setter_setMXIB_5F_fileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mXIB_5F_fileList = inValue ;
  }

  public: inline void setter_setMTIFF_5F_fileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTIFF_5F_fileList = inValue ;
  }

  public: inline void setter_setMICNS_5F_fileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mICNS_5F_fileList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XcodeProjectDescriptor (const GGS_uint & in_mSequenceNumber,
                                      const GGS_string & in_mMainGroupReference,
                                      const GGS_stringlist & in_mMainGroupChildrenRefs,
                                      const GGS_string & in_mProjectObjectReference,
                                      const GGS_XCodeGroupList & in_mGroupList,
                                      const GGS_XCodeToolTargetList & in_mToolTargetList,
                                      const GGS_XCodeAppTargetList & in_mAppTargetList,
                                      const GGS__32_stringlist & in_mCppFileList,
                                      const GGS__32_stringlist & in_m_5F_M_5F_FileList,
                                      const GGS__32_stringlist & in_m_5F_MM_5F_FileList,
                                      const GGS__32_stringlist & in_m_5F_SwiftFileList,
                                      const GGS__32_stringlist & in_mFrameworkFileList,
                                      const GGS__32_stringlist & in_mHeaderFileList,
                                      const GGS_BuildFileList & in_mBuildFileList,
                                      const GGS_string & in_mDefaultConfigurationRef,
                                      const GGS_stringlist & in_mDefaultConfigurationSettingList,
                                      const GGS_string & in_mProjectBuildConfigurationRef,
                                      const GGS__32_stringlist & in_mInfoPlistFileList,
                                      const GGS__32_stringlist & in_mXIB_5F_fileList,
                                      const GGS__32_stringlist & in_mTIFF_5F_fileList,
                                      const GGS__32_stringlist & in_mICNS_5F_fileList) ;

//--------------------------------- Copy constructor
  public: GGS_XcodeProjectDescriptor (const GGS_XcodeProjectDescriptor & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XcodeProjectDescriptor & operator = (const GGS_XcodeProjectDescriptor & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XcodeProjectDescriptor init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XcodeProjectDescriptor extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XcodeProjectDescriptor class_func_new (Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addTIFF_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (class GGS_XcodeProjectDescriptor & ioObject,
                                      const class GGS_string constin_inFileName,
                                      class GGS_string & out_outFileRef,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor getReferenceKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (class GGS_XcodeProjectDescriptor & ioObject,
                                      class GGS_string & out_outRef,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addInfoPlistFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (class GGS_XcodeProjectDescriptor & ioObject,
                                       const class GGS_string constin_inFileName,
                                       class GGS_string & out_outFileRef,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addXIBFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (class GGS_XcodeProjectDescriptor & ioObject,
                                 const class GGS_string constin_inFileName,
                                 class GGS_string & out_outFileRef,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addFrameworkFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (class GGS_XcodeProjectDescriptor & ioObject,
                                       const class GGS_string constin_inFileName,
                                       class GGS_string & out_outFileRef,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (class GGS_XcodeProjectDescriptor & ioObject,
                               const class GGS_string constin_inFileName,
                               class GGS_string & out_outFileRef,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addSwiftFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (class GGS_XcodeProjectDescriptor & ioObject,
                                   const class GGS_string constin_inFileName,
                                   class GGS_string & out_outFileRef,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addMMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (class GGS_XcodeProjectDescriptor & ioObject,
                                const class GGS_string constin_inFileName,
                                class GGS_string & out_outFileRef,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addCppFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (class GGS_XcodeProjectDescriptor & ioObject,
                                 const class GGS_string constin_inFileName,
                                 class GGS_string & out_outFileRef,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (class GGS_XcodeProjectDescriptor & ioObject,
                                    const class GGS_string constin_inFileName,
                                    class GGS_string & out_outFileRef,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addBuildFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (class GGS_XcodeProjectDescriptor & ioObject,
                                   const class GGS_string constin_inFileReference,
                                   const class GGS_string constin_inFileName,
                                   class GGS_string & out_outBuildRef,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (class GGS_XcodeProjectDescriptor & ioObject,
                                    const class GGS_string constin_inTargetName,
                                    const class GGS_string constin_inProductFileName,
                                    const class GGS_stringlist constin_inSourceList,
                                    const class GGS_stringlist constin_inToolFrameworksFileRefList,
                                    const class GGS_stringlist constin_inBuildConfigurationSettingList,
                                    class GGS_string & out_outTargetRef,
                                    class GGS_string & out_outProductFileRef,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (class GGS_XcodeProjectDescriptor & ioObject,
                                   const class GGS_string constin_inTargetName,
                                   const class GGS_string constin_inProductFileName,
                                   const class GGS_stringlist constin_inSourceList,
                                   const class GGS_stringlist constin_inFrameworksFileRefList,
                                   const class GGS_stringlist constin_inResourceFileBuildRefs,
                                   const class GGS_stringlist constin_inBuildConfigurationSettingList,
                                   const class GGS_stringlist constin_inDependentTargetRefList,
                                   const class GGS__32_stringlist constin_inProductCopyList,
                                   const class GGS_string constin_inInfoPList,
                                   class GGS_string & out_outProductFileRef,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (class GGS_XcodeProjectDescriptor & ioObject,
                               const class GGS_string constin_inGroupName,
                               const class GGS_string constin_inGroupPath,
                               const class GGS_stringlist constin_inChildrenRefs,
                               class GGS_string & out_outGroupRef,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (class GGS_XcodeProjectDescriptor & ioObject,
                                        const class GGS_string constin_inGroupName,
                                        const class GGS_string constin_inGroupPath,
                                        const class GGS_stringset constin_inFileNames,
                                        class GGS_stringlist & io_ioCppFileBuildRefs,
                                        class GGS_stringlist & io_ioMFileBuildRefs,
                                        class GGS_stringlist & io_ioMMFileBuildRefs,
                                        class GGS_stringlist & io_ioSwiftFileBuildRefs,
                                        class GGS_stringlist & io_ioFrameWorkFileBuildRefs,
                                        class GGS_stringlist & io_ioResourceFileBuildRefs,
                                        class GGS_string & out_outGroupRef,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addICNS_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (class GGS_XcodeProjectDescriptor & ioObject,
                                      const class GGS_string constin_inFileName,
                                      class GGS_string & out_outFileRef,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (class GGS_XcodeProjectDescriptor & ioObject,
                                            const class GGS_string constin_inGroupRef,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (class GGS_XcodeProjectDescriptor & ioObject,
                                                        const class GGS_stringlist constin_inSettingList,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor generateAtPath'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const class GGS_XcodeProjectDescriptor inObject,
                                     const class GGS_string constin_inPath,
                                     const class GGS_string constin_inCacheFilePath,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (class Compiler * inCompiler,
                                                                            const class GGS_string & in_PROJECT_5F_REF,
                                                                            const class GGS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                            const class GGS_XCodeGroupList & in_GROUPS,
                                                                            const class GGS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                            const class GGS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                            const class GGS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                            const class GGS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                            const class GGS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                            const class GGS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const class GGS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                            const class GGS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
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
  protected: virtual void nt_action_5F_declaration_ (class GGS_lstringlist & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_action_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_action_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (class GGS_stringset & ioArgument0,
                                                                      class GGS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const class GGS_lstring constinArgument0,
                                                                                  class GGS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const class GGS_lstring constinArgument0,
                                                                         class GGS_autoLayoutClassParameterList & outArgument1,
                                                                         class GGS_lstring & outArgument2,
                                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_ (class GGS_bindingOptionList & outArgument0,
                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                    class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_ (class GGS_stringset & ioArgument0,
                                                               class GGS_astComputedViewInstruction & outArgument1,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                         const class GGS_lstring constinArgument1,
                                                         class GGS_arrayControllerBindingListAST & ioArgument2,
                                                         class GGS_astDeclarationStruct & ioArgument3,
                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_ (class GGS_abstractDefaultValue & outArgument0,
                                                 class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_ (class GGS_externSwiftDelegateList & ioArgument0,
                                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_ (class GGS_externSwiftFunctionList & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_ (class GGS_mainXibDescriptorList & ioArgument0,
                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_ (class GGS_mainXibLineDescriptorList & outArgument0,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_ (class GGS_observablePropertyAST & outArgument0,
                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_ (class GGS_tableValueBinding & outArgument0,
                                                 class GGS_runActionDescriptor & outArgument1,
                                                 class GGS_multipleBindingDescriptor & outArgument2,
                                                 class GGS_multipleBindingDescriptor & outArgument3,
                                                 class GGS_graphicController & outArgument4,
                                                 class GGS_regularBindingList & outArgument5,
                                                 class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_ (class GGS_outletClassBindingSpecificationList & ioArgument0,
                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                              class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_ (class GGS_outletDeclarationList & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                          class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                               class GGS_simpleStoredPropertyList & ioArgument1,
                                                               class GGS_stringset & ioArgument2,
                                                               class GGS_astDeclarationStruct & ioArgument3,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_ (class GGS_astViewDeclarationList & ioArgument0,
                                                            class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GGS_astDeclarationStruct & ioArgument0,
                                               class GGS_location & outArgument1,
                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_ (const class GGS_lstring constinArgument0,
                                                      class GGS_stringset & ioArgument1,
                                                      class GGS_astDeclarationStruct & ioArgument2,
                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_ (const class GGS_lstring constinArgument0,
                                                     class GGS_astDeclarationStruct & ioArgument1,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                        const class GGS_lstring constinArgument1,
                                                        class GGS_astDeclarationStruct & ioArgument2,
                                                        class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (class GGS_stringset & ioArgument0,
                                                                   class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_ (class GGS_stringset & ioArgument0,
                                                   class GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_ (const class GGS_bool constinArgument0,
                                                           class GGS_stringset & ioArgument1,
                                                           class GGS_astNewStackViewDeclarationList & ioArgument2,
                                                           class GGS_astViewInstructionList & ioArgument3,
                                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_ (class GGS_lstring & ioArgument0,
                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GGS_astDeclarationStruct & ioArgument0,
                                                                   GGS_location & outArgument1,
                                                                   Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i1_ (GGS_bindingOptionList & outArgument0,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i1_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i1_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i2_ (GGS_astDeclarationStruct & ioArgument0,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i2_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i2_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i3_ (GGS_astDeclarationStruct & ioArgument0,
                                                                         Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i3_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i3_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i4_ (GGS_astDeclarationStruct & ioArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i4_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i4_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i5_ (const GGS_lstring constinArgument0,
                                                                             const GGS_lstring constinArgument1,
                                                                             GGS_arrayControllerBindingListAST & ioArgument2,
                                                                             GGS_astDeclarationStruct & ioArgument3,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i5_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i5_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i6_ (const GGS_lstring constinArgument0,
                                                                            const GGS_lstring constinArgument1,
                                                                            GGS_astDeclarationStruct & ioArgument2,
                                                                            Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i6_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i6_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i7_ (const GGS_lstring constinArgument0,
                                                                            const GGS_lstring constinArgument1,
                                                                            GGS_astDeclarationStruct & ioArgument2,
                                                                            Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i7_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i7_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i8_ (const GGS_lstring constinArgument0,
                                                                            const GGS_lstring constinArgument1,
                                                                            GGS_astDeclarationStruct & ioArgument2,
                                                                            Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i8_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i8_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i9_ (const GGS_lstring constinArgument0,
                                                                          GGS_stringset & ioArgument1,
                                                                          GGS_astDeclarationStruct & ioArgument2,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i9_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i9_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i10_ (GGS_mainXibDescriptorList & ioArgument0,
                                                                Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i10_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i10_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i11_ (GGS_mainXibLineDescriptorList & outArgument0,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i11_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i11_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i12_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS_arrayControllerBindingListAST & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i12_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i12_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i13_ (const GGS_lstring constinArgument0,
                                                                                    GGS_simpleStoredPropertyList & ioArgument1,
                                                                                    GGS_stringset & ioArgument2,
                                                                                    GGS_astDeclarationStruct & ioArgument3,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i13_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i13_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_ (const GGS_lstring constinArgument0,
                                                                                    GGS_simpleStoredPropertyList & ioArgument1,
                                                                                    GGS_stringset & ioArgument2,
                                                                                    GGS_astDeclarationStruct & ioArgument3,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i15_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS_arrayControllerBindingListAST & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i15_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i15_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i16_ (GGS_abstractDefaultValue & outArgument0,
                                                                      Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i16_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i16_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i17_ (const GGS_lstring constinArgument0,
                                                                                                       GGS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i17_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i17_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                               Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i21_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i21_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i21_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i25_ (GGS_externSwiftFunctionList & ioArgument0,
                                                                            Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i25_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i25_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i26_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS_arrayControllerBindingListAST & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i26_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i26_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i27_ (GGS_outletClassBindingSpecificationList & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i27_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i27_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                   Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i29_ (GGS_externSwiftDelegateList & ioArgument0,
                                                                                Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i29_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i29_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i30_ (GGS_astDeclarationStruct & ioArgument0,
                                                                            Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i30_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i30_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i31_ (GGS_lstring & ioArgument0,
                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i31_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i31_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i32_ (GGS_lstringlist & ioArgument0,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i32_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i32_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i33_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i33_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i33_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i34_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i34_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i34_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i35_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i35_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i35_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i36_ (const GGS_lstring constinArgument0,
                                                                                              GGS_autoLayoutClassParameterList & outArgument1,
                                                                                              GGS_lstring & outArgument2,
                                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i36_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i36_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i37_ (GGS_outletDeclarationList & ioArgument0,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i37_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i37_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i38_ (GGS_tableValueBinding & outArgument0,
                                                                      GGS_runActionDescriptor & outArgument1,
                                                                      GGS_multipleBindingDescriptor & outArgument2,
                                                                      GGS_multipleBindingDescriptor & outArgument3,
                                                                      GGS_graphicController & outArgument4,
                                                                      GGS_regularBindingList & outArgument5,
                                                                      Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i38_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i38_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i39_ (GGS_astDeclarationStruct & ioArgument0,
                                                                         Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i39_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i39_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i40_ (GGS_observablePropertyAST & outArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i40_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i40_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i41_ (const GGS_lstring constinArgument0,
                                                                          GGS_astDeclarationStruct & ioArgument1,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i41_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i41_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i42_ (GGS_astViewDeclarationList & ioArgument0,
                                                                                 Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i42_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i42_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i43_ (GGS_astViewDeclarationList & ioArgument0,
                                                                                 Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i43_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i43_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i44_ (GGS_stringset & ioArgument0,
                                                                                           GGS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i44_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i44_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i45_ (const GGS_bool constinArgument0,
                                                                                GGS_stringset & ioArgument1,
                                                                                GGS_astNewStackViewDeclarationList & ioArgument2,
                                                                                GGS_astViewInstructionList & ioArgument3,
                                                                                Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i45_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i45_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i46_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i46_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i46_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i47_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i47_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i47_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i48_ (GGS_stringset & ioArgument0,
                                                                                    GGS_astComputedViewInstruction & outArgument1,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i48_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i48_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i49_ (GGS_stringset & ioArgument0,
                                                                                        GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i49_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i49_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i50_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i50_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i50_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i51_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i51_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i51_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i52_ (GGS_astDeclarationStruct & ioArgument0,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i52_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i52_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i53_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i53_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i53_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;



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
//  GRAMMAR easyBindings_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_easyBindings_5F_grammar : public cParser_easyBindings_5F_syntax {
//------------------------------------- 'action_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_action_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_action_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_action_5F_declaration_ (GGS_lstringlist & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_func_call_list' non terminal
//--- 'parse' label
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (GGS_stringset & ioArgument0,
                                                                   GGS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_view_binding_specification' non terminal
//--- 'parse' label
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const GGS_lstring inArgument0,
                                                                               GGS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_autolayout_5F_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_autolayout_5F_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_class_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_formal_parameter_list' non terminal
//--- 'parse' label
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const GGS_lstring inArgument0,
                                                                      GGS_autoLayoutClassParameterList & outArgument1,
                                                                      GGS_lstring & outArgument2,
                                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_option_list' non terminal
//--- 'parse' label
  public: virtual void nt_binding_5F_option_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_binding_5F_option_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_binding_5F_option_5F_list_ (GGS_bindingOptionList & outArgument0,
                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingComparison' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingComparison_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingComparison_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingComparison_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingExpression' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingExpression_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingExpression_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingExpression_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingOperand' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingOperand_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingOperand_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingOperand_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingTerm' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingTerm_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingTerm_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingTerm_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                       Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_class_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                 Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'computed_view_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_computed_5F_view_5F_instruction_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_computed_5F_view_5F_instruction_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_computed_5F_view_5F_instruction_ (GGS_stringset & ioArgument0,
                                                            GGS_astComputedViewInstruction & outArgument1,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'controller_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_controller_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_controller_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_controller_5F_declaration_ (const GGS_lstring inArgument0,
                                                      const GGS_lstring inArgument1,
                                                      GGS_arrayControllerBindingListAST & ioArgument2,
                                                      GGS_astDeclarationStruct & ioArgument3,
                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'document_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_document_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_document_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_document_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'entity_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_entity_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_entity_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_entity_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_enum_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_enum_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_function_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_enum_5F_function_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_enum_5F_function_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_function_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'explicit_value' non terminal
//--- 'parse' label
  public: virtual void nt_explicit_5F_value_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_explicit_5F_value_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_explicit_5F_value_ (GGS_abstractDefaultValue & outArgument0,
                                              Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_delegate' non terminal
//--- 'parse' label
  public: virtual void nt_extern_5F_swift_5F_delegate_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_extern_5F_swift_5F_delegate_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_delegate_ (GGS_externSwiftDelegateList & ioArgument0,
                                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_func' non terminal
//--- 'parse' label
  public: virtual void nt_extern_5F_swift_5F_func_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_extern_5F_swift_5F_func_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_func_ (GGS_externSwiftFunctionList & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'graphviz_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_graphviz_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_graphviz_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_graphviz_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib' non terminal
//--- 'parse' label
  public: virtual void nt_main_5F_xib_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_main_5F_xib_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_ (GGS_mainXibDescriptorList & ioArgument0,
                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib_line' non terminal
//--- 'parse' label
  public: virtual void nt_main_5F_xib_5F_line_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_main_5F_xib_5F_line_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_5F_line_ (GGS_mainXibLineDescriptorList & outArgument0,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'observable_property' non terminal
//--- 'parse' label
  public: virtual void nt_observable_5F_property_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_observable_5F_property_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_observable_5F_property_ (GGS_observablePropertyAST & outArgument0,
                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_binding_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_binding_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_ (GGS_tableValueBinding & outArgument0,
                                              GGS_runActionDescriptor & outArgument1,
                                              GGS_multipleBindingDescriptor & outArgument2,
                                              GGS_multipleBindingDescriptor & outArgument3,
                                              GGS_graphicController & outArgument4,
                                              GGS_regularBindingList & outArgument5,
                                              Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding_specification' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_binding_5F_specification_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_binding_5F_specification_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_5F_specification_ (GGS_outletClassBindingSpecificationList & ioArgument0,
                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_class_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                           Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_declaration_ (GGS_outletDeclarationList & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'preferences_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_preferences_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_preferences_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_preferences_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                       Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_stored_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_stored_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_stored_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_stored_5F_declaration_ (const GGS_lstring inArgument0,
                                                            GGS_simpleStoredPropertyList & ioArgument1,
                                                            GGS_stringset & ioArgument2,
                                                            GGS_astDeclarationStruct & ioArgument3,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'stack_view_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_stack_5F_view_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_stack_5F_view_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_stack_5F_view_5F_declaration_ (GGS_astViewDeclarationList & ioArgument0,
                                                         Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

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
  public: virtual void nt_toMany_5F_relationship_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_toMany_5F_relationship_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toMany_5F_relationship_ (const GGS_lstring inArgument0,
                                                   GGS_stringset & ioArgument1,
                                                   GGS_astDeclarationStruct & ioArgument2,
                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'toOne_relationship' non terminal
//--- 'parse' label
  public: virtual void nt_toOne_5F_relationship_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_toOne_5F_relationship_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toOne_5F_relationship_ (const GGS_lstring inArgument0,
                                                  GGS_astDeclarationStruct & ioArgument1,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'transient_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_transient_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_transient_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_transient_5F_declaration_ (const GGS_lstring inArgument0,
                                                     const GGS_lstring inArgument1,
                                                     GGS_astDeclarationStruct & ioArgument2,
                                                     Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_actual_parameter_list' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (GGS_stringset & ioArgument0,
                                                                GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_instruction_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_view_5F_instruction_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_ (GGS_stringset & ioArgument0,
                                                GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_instruction_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

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
  public: virtual void nt_xcode_5F_project_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

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
// Phase 1: @astDeclarationStruct struct
//--------------------------------------------------------------------------------------------------

class GGS_astDeclarationStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_declarationListAST mProperty_mUnifiedDeclarationList ;
  public: inline GGS_declarationListAST readProperty_mUnifiedDeclarationList (void) const {
    return mProperty_mUnifiedDeclarationList ;
  }

  public: GGS_outletClassBindingSpecificationList mProperty_mBindingSpecificationListMap ;
  public: inline GGS_outletClassBindingSpecificationList readProperty_mBindingSpecificationListMap (void) const {
    return mProperty_mBindingSpecificationListMap ;
  }

  public: GGS_autoLayoutViewClassBindingSpecificationList mProperty_mAutoLayoutBindingSpecificationList ;
  public: inline GGS_autoLayoutViewClassBindingSpecificationList readProperty_mAutoLayoutBindingSpecificationList (void) const {
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

  public: GGS_lstringlist mProperty_mGraphvizList ;
  public: inline GGS_lstringlist readProperty_mGraphvizList (void) const {
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
  public: inline void setter_setMUnifiedDeclarationList (const GGS_declarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnifiedDeclarationList = inValue ;
  }

  public: inline void setter_setMBindingSpecificationListMap (const GGS_outletClassBindingSpecificationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingSpecificationListMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutBindingSpecificationList (const GGS_autoLayoutViewClassBindingSpecificationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutBindingSpecificationList = inValue ;
  }

  public: inline void setter_setMPreferences (const GGS_prefDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreferences = inValue ;
  }

  public: inline void setter_setMXcodeProject (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mXcodeProject = inValue ;
  }

  public: inline void setter_setMGraphvizList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
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
  public: GGS_astDeclarationStruct (const GGS_declarationListAST & in_mUnifiedDeclarationList,
                                    const GGS_outletClassBindingSpecificationList & in_mBindingSpecificationListMap,
                                    const GGS_autoLayoutViewClassBindingSpecificationList & in_mAutoLayoutBindingSpecificationList,
                                    const GGS_prefDeclaration & in_mPreferences,
                                    const GGS_lstring & in_mXcodeProject,
                                    const GGS_lstringlist & in_mGraphvizList,
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astDeclarationStruct extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astDeclarationStruct class_func_new (Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDeclarationStruct ;

