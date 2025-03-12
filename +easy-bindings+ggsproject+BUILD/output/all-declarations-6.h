#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

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
//
// Phase 1: @enumForGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_enumForGeneration class_func_new (const class GGS_string & inOperand0,
                                                             const class GGS_lstringlist & inOperand1,
                                                             const class GGS_enumFuncMap & inOperand2,
                                                             const class GGS_bool & inOperand3,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumForGeneration class
//
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


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
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
// Phase 1: @enumForGeneration_2E_weak weak reference class
//
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumForGeneration bang_enumForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_enumForGeneration unwrappedValue (void) const {
    GGS_enumForGeneration result ;
    if (isValid ()) {
      const cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_enumForGeneration (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration_2E_weak ;

