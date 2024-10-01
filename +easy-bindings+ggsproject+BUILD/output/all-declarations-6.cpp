#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration::GGS_prefDeclaration (void) :
mProperty_mOutletDeclarationList (),
mProperty_mSimpleStoredAttributeList (),
mProperty_mActionDeclarationList (),
mProperty_mExternSwiftFunctionList (),
mProperty_mSignatureList (),
mProperty_mMainXibDescriptorList (),
mProperty_mViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration::~ GGS_prefDeclaration (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_prefDeclaration GGS_prefDeclaration::init (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prefDeclaration result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefDeclaration::setInitializedProperties (Compiler * inCompiler) {
GGS_outletDeclarationList temp_0 = GGS_outletDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 6)) ;
  mProperty_mOutletDeclarationList = temp_0 ;
GGS_simpleStoredPropertyList temp_1 = GGS_simpleStoredPropertyList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 7)) ;
  mProperty_mSimpleStoredAttributeList = temp_1 ;
GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 8)) ;
  mProperty_mActionDeclarationList = temp_2 ;
GGS_externSwiftFunctionList temp_3 = GGS_externSwiftFunctionList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 9)) ;
  mProperty_mExternSwiftFunctionList = temp_3 ;
GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 10)) ;
  mProperty_mSignatureList = temp_4 ;
GGS_mainXibDescriptorList temp_5 = GGS_mainXibDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 11)) ;
  mProperty_mMainXibDescriptorList = temp_5 ;
GGS_astViewDeclarationList temp_6 = GGS_astViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 12)) ;
  mProperty_mViewDeclarationList = temp_6 ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration::GGS_prefDeclaration (const GGS_outletDeclarationList & inOperand0,
                                          const GGS_simpleStoredPropertyList & inOperand1,
                                          const GGS_lstringlist & inOperand2,
                                          const GGS_externSwiftFunctionList & inOperand3,
                                          const GGS_stringset & inOperand4,
                                          const GGS_mainXibDescriptorList & inOperand5,
                                          const GGS_astViewDeclarationList & inOperand6) :
mProperty_mOutletDeclarationList (inOperand0),
mProperty_mSimpleStoredAttributeList (inOperand1),
mProperty_mActionDeclarationList (inOperand2),
mProperty_mExternSwiftFunctionList (inOperand3),
mProperty_mSignatureList (inOperand4),
mProperty_mMainXibDescriptorList (inOperand5),
mProperty_mViewDeclarationList (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration GGS_prefDeclaration::class_func_new (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prefDeclaration result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_prefDeclaration::isValid (void) const {
  return mProperty_mOutletDeclarationList.isValid () && mProperty_mSimpleStoredAttributeList.isValid () && mProperty_mActionDeclarationList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mSignatureList.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mViewDeclarationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefDeclaration::drop (void) {
  mProperty_mOutletDeclarationList.drop () ;
  mProperty_mSimpleStoredAttributeList.drop () ;
  mProperty_mActionDeclarationList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mSignatureList.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mViewDeclarationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefDeclaration::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @prefDeclaration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSignatureList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefDeclaration ("prefDeclaration",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_prefDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration GGS_prefDeclaration::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_prefDeclaration result ;
  const GGS_prefDeclaration * p = (const GGS_prefDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (void) :
mProperty_mClassMap (),
mProperty_mOutletClassMap (),
mProperty_mBindingSpecificationMap (),
mProperty_mAutolayoutViewClassMap (),
mProperty_mAutoLayoutBindingSpecificationMap (),
mProperty_mAutoLayoutVStackFunctionMap (),
mProperty_mAutoLayoutHStackFunctionMap (),
mProperty_mEnumerationFunctionListAST () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::~ GGS_semanticContext (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::init (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::setInitializedProperties (Compiler * inCompiler) {
GGS_classMap temp_0 = GGS_classMap::init (inCompiler COMMA_SOURCE_FILE ("program.ggs", 6)) ;
  mProperty_mClassMap = temp_0 ;
GGS_outletClassMap temp_1 = GGS_outletClassMap::init (inCompiler COMMA_SOURCE_FILE ("program.ggs", 7)) ;
  mProperty_mOutletClassMap = temp_1 ;
GGS_bindingSpecificationMap temp_2 = GGS_bindingSpecificationMap::init (inCompiler COMMA_SOURCE_FILE ("program.ggs", 8)) ;
  mProperty_mBindingSpecificationMap = temp_2 ;
GGS_autolayoutViewClassMap temp_3 = GGS_autolayoutViewClassMap::init (inCompiler COMMA_SOURCE_FILE ("program.ggs", 9)) ;
  mProperty_mAutolayoutViewClassMap = temp_3 ;
GGS_autoLayoutBindingSpecificationMap temp_4 = GGS_autoLayoutBindingSpecificationMap::init (inCompiler COMMA_SOURCE_FILE ("program.ggs", 10)) ;
  mProperty_mAutoLayoutBindingSpecificationMap = temp_4 ;
GGS_astAutoLayoutViewFunctionMap temp_5 = GGS_astAutoLayoutViewFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("program.ggs", 11)) ;
  mProperty_mAutoLayoutVStackFunctionMap = temp_5 ;
GGS_astAutoLayoutViewFunctionMap temp_6 = GGS_astAutoLayoutViewFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("program.ggs", 12)) ;
  mProperty_mAutoLayoutHStackFunctionMap = temp_6 ;
GGS_enumerationFunctionListAST temp_7 = GGS_enumerationFunctionListAST::init (inCompiler COMMA_SOURCE_FILE ("program.ggs", 13)) ;
  mProperty_mEnumerationFunctionListAST = temp_7 ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_classMap & inOperand0,
                                          const GGS_outletClassMap & inOperand1,
                                          const GGS_bindingSpecificationMap & inOperand2,
                                          const GGS_autolayoutViewClassMap & inOperand3,
                                          const GGS_autoLayoutBindingSpecificationMap & inOperand4,
                                          const GGS_astAutoLayoutViewFunctionMap & inOperand5,
                                          const GGS_astAutoLayoutViewFunctionMap & inOperand6,
                                          const GGS_enumerationFunctionListAST & inOperand7) :
mProperty_mClassMap (inOperand0),
mProperty_mOutletClassMap (inOperand1),
mProperty_mBindingSpecificationMap (inOperand2),
mProperty_mAutolayoutViewClassMap (inOperand3),
mProperty_mAutoLayoutBindingSpecificationMap (inOperand4),
mProperty_mAutoLayoutVStackFunctionMap (inOperand5),
mProperty_mAutoLayoutHStackFunctionMap (inOperand6),
mProperty_mEnumerationFunctionListAST (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::class_func_new (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticContext::isValid (void) const {
  return mProperty_mClassMap.isValid () && mProperty_mOutletClassMap.isValid () && mProperty_mBindingSpecificationMap.isValid () && mProperty_mAutolayoutViewClassMap.isValid () && mProperty_mAutoLayoutBindingSpecificationMap.isValid () && mProperty_mAutoLayoutVStackFunctionMap.isValid () && mProperty_mAutoLayoutHStackFunctionMap.isValid () && mProperty_mEnumerationFunctionListAST.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::drop (void) {
  mProperty_mClassMap.drop () ;
  mProperty_mOutletClassMap.drop () ;
  mProperty_mBindingSpecificationMap.drop () ;
  mProperty_mAutolayoutViewClassMap.drop () ;
  mProperty_mAutoLayoutBindingSpecificationMap.drop () ;
  mProperty_mAutoLayoutVStackFunctionMap.drop () ;
  mProperty_mAutoLayoutHStackFunctionMap.drop () ;
  mProperty_mEnumerationFunctionListAST.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mClassMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOutletClassMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingSpecificationMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutolayoutViewClassMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutBindingSpecificationMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutVStackFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutHStackFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumerationFunctionListAST.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticContext result ;
  const GGS_semanticContext * p = (const GGS_semanticContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDeclarationAST::objectCompare (const GGS_abstractDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST::GGS_abstractDeclarationAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST::GGS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_abstractDeclarationAST::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_abstractDeclarationAST::setProperty_mClassName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mClassName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (const GGS_lstring & in_mClassName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mClassName () {
  mProperty_mClassName = in_mClassName ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @abstractDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST GGS_abstractDeclarationAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractDeclarationAST result ;
  const GGS_abstractDeclarationAST * p = (const GGS_abstractDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (cPtr_abstractDeclarationAST * inObject,
                                                 GGS_declarationPrecedenceGraph & io_ioGraph,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_enterInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring callExtensionGetter_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_lstring result ;
  if (nullptr != inObject) {
    result = inObject->getter_nodeKey (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_firstAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                             GGS_semanticContext & io_ioSemanticContext,
                                             GGS_generationStruct & io_ioGeneration,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_firstAnalysisPhase (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST secondAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_secondAnalysisPhase (GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                              GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_secondAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                              GGS_semanticContext & io_ioSemanticContext,
                                              GGS_generationStruct & io_ioGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_secondAnalysisPhase  (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST thirdAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                             GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_thirdAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                             GGS_semanticContext & io_ioSemanticContext,
                                             GGS_generationStruct & io_ioGeneration,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_thirdAnalysisPhase  (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST fourthAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                              GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_fourthAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                              GGS_semanticContext & io_ioSemanticContext,
                                              GGS_generationStruct & io_ioGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_fourthAnalysisPhase  (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @transientClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientClassDeclarationAST::objectCompare (const GGS_transientClassDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST::GGS_transientClassDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_transientClassDeclarationAST GGS_transientClassDeclarationAST::
init_21__21_ (const GGS_lstring & in_mClassName,
              const GGS_bool & in_mIsClass,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_transientClassDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_transientClassDeclarationAST (inCompiler COMMA_THERE)) ;
  object->transientClassDeclarationAST_init_21__21_ (in_mClassName, in_mIsClass, inCompiler) ;
  const GGS_transientClassDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_transientClassDeclarationAST::
transientClassDeclarationAST_init_21__21_ (const GGS_lstring & in_mClassName,
                                           const GGS_bool & in_mIsClass,
                                           Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mIsClass = in_mIsClass ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST::GGS_transientClassDeclarationAST (const cPtr_transientClassDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST GGS_transientClassDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                                   const GGS_bool & in_mIsClass,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_transientClassDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_transientClassDeclarationAST (in_mClassName, in_mIsClass,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_transientClassDeclarationAST::readProperty_mIsClass (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_transientClassDeclarationAST * p = (cPtr_transientClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
    return p->mProperty_mIsClass ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientClassDeclarationAST::setProperty_mIsClass (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientClassDeclarationAST * p = (cPtr_transientClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
    p->mProperty_mIsClass = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @transientClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_transientClassDeclarationAST::cPtr_transientClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsClass () {
}

//--------------------------------------------------------------------------------------------------

cPtr_transientClassDeclarationAST::cPtr_transientClassDeclarationAST (const GGS_lstring & in_mClassName,
                                                                      const GGS_bool & in_mIsClass,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mIsClass () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mIsClass = in_mIsClass ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_transientClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

void cPtr_transientClassDeclarationAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@transientClassDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsClass.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientClassDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_transientClassDeclarationAST (mProperty_mClassName, mProperty_mIsClass, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_transientClassDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsClass.printNonNullClassInstanceProperties ("mIsClass") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @transientClassDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST ("transientClassDeclarationAST",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientClassDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST GGS_transientClassDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_transientClassDeclarationAST result ;
  const GGS_transientClassDeclarationAST * p = (const GGS_transientClassDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumerationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumerationDeclarationAST::objectCompare (const GGS_enumerationDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST::GGS_enumerationDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST::
init_21__21__21_ (const GGS_lstring & in_mClassName,
                  const GGS_lstringlist & in_mEnumConstantNameList,
                  const GGS_bool & in_mCaseIterable,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_enumerationDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_enumerationDeclarationAST (inCompiler COMMA_THERE)) ;
  object->enumerationDeclarationAST_init_21__21__21_ (in_mClassName, in_mEnumConstantNameList, in_mCaseIterable, inCompiler) ;
  const GGS_enumerationDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::
enumerationDeclarationAST_init_21__21__21_ (const GGS_lstring & in_mClassName,
                                            const GGS_lstringlist & in_mEnumConstantNameList,
                                            const GGS_bool & in_mCaseIterable,
                                            Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mEnumConstantNameList = in_mEnumConstantNameList ;
  mProperty_mCaseIterable = in_mCaseIterable ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST::GGS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                             const GGS_lstringlist & in_mEnumConstantNameList,
                                                                             const GGS_bool & in_mCaseIterable,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_enumerationDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_enumerationDeclarationAST (in_mClassName, in_mEnumConstantNameList, in_mCaseIterable,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_enumerationDeclarationAST::readProperty_mEnumConstantNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mEnumConstantNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_enumerationDeclarationAST::readProperty_mCaseIterable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mCaseIterable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumerationDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mEnumConstantNameList (),
mProperty_mCaseIterable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GGS_lstring & in_mClassName,
                                                                const GGS_lstringlist & in_mEnumConstantNameList,
                                                                const GGS_bool & in_mCaseIterable,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mEnumConstantNameList (),
mProperty_mCaseIterable () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mEnumConstantNameList = in_mEnumConstantNameList ;
  mProperty_mCaseIterable = in_mCaseIterable ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumerationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

void cPtr_enumerationDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@enumerationDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumConstantNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseIterable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mClassName, mProperty_mEnumConstantNameList, mProperty_mCaseIterable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumerationDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mEnumConstantNameList.printNonNullClassInstanceProperties ("mEnumConstantNameList") ;
    mProperty_mCaseIterable.printNonNullClassInstanceProperties ("mCaseIterable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @enumerationDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_enumerationDeclarationAST result ;
  const GGS_enumerationDeclarationAST * p = (const GGS_enumerationDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumForGeneration::objectCompare (const GGS_enumForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration::GGS_enumForGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumForGeneration GGS_enumForGeneration::
init_21__21__21__21_ (const GGS_string & in_mEnumName,
                      const GGS_lstringlist & in_mEnumConstantList,
                      const GGS_enumFuncMap & in_mEnumFuncMap,
                      const GGS_bool & in_mCaseIterable,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_enumForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_enumForGeneration (inCompiler COMMA_THERE)) ;
  object->enumForGeneration_init_21__21__21__21_ (in_mEnumName, in_mEnumConstantList, in_mEnumFuncMap, in_mCaseIterable, inCompiler) ;
  const GGS_enumForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumForGeneration::
enumForGeneration_init_21__21__21__21_ (const GGS_string & in_mEnumName,
                                        const GGS_lstringlist & in_mEnumConstantList,
                                        const GGS_enumFuncMap & in_mEnumFuncMap,
                                        const GGS_bool & in_mCaseIterable,
                                        Compiler * /* inCompiler */) {
  mProperty_mEnumName = in_mEnumName ;
  mProperty_mEnumConstantList = in_mEnumConstantList ;
  mProperty_mEnumFuncMap = in_mEnumFuncMap ;
  mProperty_mCaseIterable = in_mCaseIterable ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration::GGS_enumForGeneration (const cPtr_enumForGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration GGS_enumForGeneration::class_func_new (const GGS_string & in_mEnumName,
                                                             const GGS_lstringlist & in_mEnumConstantList,
                                                             const GGS_enumFuncMap & in_mEnumFuncMap,
                                                             const GGS_bool & in_mCaseIterable,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_enumForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_enumForGeneration (in_mEnumName, in_mEnumConstantList, in_mEnumFuncMap, in_mCaseIterable,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_enumForGeneration::readProperty_mEnumName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mEnumName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_enumForGeneration::readProperty_mEnumConstantList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mEnumConstantList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumForGeneration::readProperty_mEnumFuncMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_enumFuncMap () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mEnumFuncMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_enumForGeneration::readProperty_mCaseIterable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mCaseIterable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_enumForGeneration::cPtr_enumForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mEnumName (),
mProperty_mEnumConstantList (),
mProperty_mEnumFuncMap (),
mProperty_mCaseIterable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumForGeneration::cPtr_enumForGeneration (const GGS_string & in_mEnumName,
                                                const GGS_lstringlist & in_mEnumConstantList,
                                                const GGS_enumFuncMap & in_mEnumFuncMap,
                                                const GGS_bool & in_mCaseIterable,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mEnumName (),
mProperty_mEnumConstantList (),
mProperty_mEnumFuncMap (),
mProperty_mCaseIterable () {
  mProperty_mEnumName = in_mEnumName ;
  mProperty_mEnumConstantList = in_mEnumConstantList ;
  mProperty_mEnumFuncMap = in_mEnumFuncMap ;
  mProperty_mCaseIterable = in_mCaseIterable ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

void cPtr_enumForGeneration::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@enumForGeneration:") ;
  mProperty_mEnumName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumConstantList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumFuncMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseIterable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumForGeneration (mProperty_mEnumName, mProperty_mEnumConstantList, mProperty_mEnumFuncMap, mProperty_mCaseIterable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mEnumName.printNonNullClassInstanceProperties ("mEnumName") ;
    mProperty_mEnumConstantList.printNonNullClassInstanceProperties ("mEnumConstantList") ;
    mProperty_mEnumFuncMap.printNonNullClassInstanceProperties ("mEnumFuncMap") ;
    mProperty_mCaseIterable.printNonNullClassInstanceProperties ("mCaseIterable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @enumForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration ("enumForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration GGS_enumForGeneration::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_enumForGeneration result ;
  const GGS_enumForGeneration * p = (const GGS_enumForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumForGeneration_2E_weak::objectCompare (const GGS_enumForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration_2E_weak::GGS_enumForGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration_2E_weak & GGS_enumForGeneration_2E_weak::operator = (const GGS_enumForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration_2E_weak::GGS_enumForGeneration_2E_weak (const GGS_enumForGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration_2E_weak GGS_enumForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration GGS_enumForGeneration_2E_weak::bang_enumForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumForGeneration) ;
      result = GGS_enumForGeneration ((cPtr_enumForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration_2E_weak ("enumForGeneration.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration_2E_weak GGS_enumForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_enumForGeneration_2E_weak result ;
  const GGS_enumForGeneration_2E_weak * p = (const GGS_enumForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @atomicClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicClassDeclarationAST::objectCompare (const GGS_atomicClassDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST::GGS_atomicClassDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_atomicClassDeclarationAST GGS_atomicClassDeclarationAST::
init_21__21_ (const GGS_lstring & in_mClassName,
              const GGS_typeKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_atomicClassDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_atomicClassDeclarationAST (inCompiler COMMA_THERE)) ;
  object->atomicClassDeclarationAST_init_21__21_ (in_mClassName, in_mKind, inCompiler) ;
  const GGS_atomicClassDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::
atomicClassDeclarationAST_init_21__21_ (const GGS_lstring & in_mClassName,
                                        const GGS_typeKind & in_mKind,
                                        Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST::GGS_atomicClassDeclarationAST (const cPtr_atomicClassDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST GGS_atomicClassDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                             const GGS_typeKind & in_mKind,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_atomicClassDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_atomicClassDeclarationAST (in_mClassName, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_atomicClassDeclarationAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicClassDeclarationAST::setProperty_mKind (const GGS_typeKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @atomicClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_atomicClassDeclarationAST::cPtr_atomicClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_atomicClassDeclarationAST::cPtr_atomicClassDeclarationAST (const GGS_lstring & in_mClassName,
                                                                const GGS_typeKind & in_mKind,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mKind () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

void cPtr_atomicClassDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@atomicClassDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicClassDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_atomicClassDeclarationAST (mProperty_mClassName, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_atomicClassDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @atomicClassDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST ("atomicClassDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_atomicClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicClassDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST GGS_atomicClassDeclarationAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_atomicClassDeclarationAST result ;
  const GGS_atomicClassDeclarationAST * p = (const GGS_atomicClassDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @entityDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_entityDeclarationAST::objectCompare (const GGS_entityDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST::GGS_entityDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_entityDeclarationAST GGS_entityDeclarationAST::
init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                  const GGS_bool & in_mIsAbstract,
                                                  const GGS_lstring & in_mSuperEntityName,
                                                  const GGS_bool & in_mHandlingOpposite,
                                                  const GGS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                                  const GGS_stringset & in_mSignatureList,
                                                  const GGS_lstringlist & in_mActionDeclarationList,
                                                  const GGS_lstringlist & in_mObsoleteEntityNames,
                                                  const GGS_bool & in_mIsGraphicEntity,
                                                  const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                  const GGS_lstringlist & in_mGraphicOptionArray,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_entityDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_entityDeclarationAST (inCompiler COMMA_THERE)) ;
  object->entityDeclarationAST_init_21__21__21__21__21__21__21__21__21__21__21_ (in_mClassName, in_mIsAbstract, in_mSuperEntityName, in_mHandlingOpposite, in_mSimpleStoredPropertyList, in_mSignatureList, in_mActionDeclarationList, in_mObsoleteEntityNames, in_mIsGraphicEntity, in_mExternSwiftDelegateList, in_mGraphicOptionArray, inCompiler) ;
  const GGS_entityDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::
entityDeclarationAST_init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                                       const GGS_bool & in_mIsAbstract,
                                                                       const GGS_lstring & in_mSuperEntityName,
                                                                       const GGS_bool & in_mHandlingOpposite,
                                                                       const GGS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                                                       const GGS_stringset & in_mSignatureList,
                                                                       const GGS_lstringlist & in_mActionDeclarationList,
                                                                       const GGS_lstringlist & in_mObsoleteEntityNames,
                                                                       const GGS_bool & in_mIsGraphicEntity,
                                                                       const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                                       const GGS_lstringlist & in_mGraphicOptionArray,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mSuperEntityName = in_mSuperEntityName ;
  mProperty_mHandlingOpposite = in_mHandlingOpposite ;
  mProperty_mSimpleStoredPropertyList = in_mSimpleStoredPropertyList ;
  mProperty_mSignatureList = in_mSignatureList ;
  mProperty_mActionDeclarationList = in_mActionDeclarationList ;
  mProperty_mObsoleteEntityNames = in_mObsoleteEntityNames ;
  mProperty_mIsGraphicEntity = in_mIsGraphicEntity ;
  mProperty_mExternSwiftDelegateList = in_mExternSwiftDelegateList ;
  mProperty_mGraphicOptionArray = in_mGraphicOptionArray ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST::GGS_entityDeclarationAST (const cPtr_entityDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST GGS_entityDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                   const GGS_bool & in_mIsAbstract,
                                                                   const GGS_lstring & in_mSuperEntityName,
                                                                   const GGS_bool & in_mHandlingOpposite,
                                                                   const GGS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                                                   const GGS_stringset & in_mSignatureList,
                                                                   const GGS_lstringlist & in_mActionDeclarationList,
                                                                   const GGS_lstringlist & in_mObsoleteEntityNames,
                                                                   const GGS_bool & in_mIsGraphicEntity,
                                                                   const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                                   const GGS_lstringlist & in_mGraphicOptionArray,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_entityDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_entityDeclarationAST (in_mClassName, in_mIsAbstract, in_mSuperEntityName, in_mHandlingOpposite, in_mSimpleStoredPropertyList, in_mSignatureList, in_mActionDeclarationList, in_mObsoleteEntityNames, in_mIsGraphicEntity, in_mExternSwiftDelegateList, in_mGraphicOptionArray,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityDeclarationAST::readProperty_mIsAbstract (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mIsAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_entityDeclarationAST::readProperty_mSuperEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mSuperEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityDeclarationAST::readProperty_mHandlingOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mHandlingOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_entityDeclarationAST::readProperty_mSimpleStoredPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_simpleStoredPropertyList () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mSimpleStoredPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_entityDeclarationAST::readProperty_mSignatureList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringset () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mSignatureList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_entityDeclarationAST::readProperty_mActionDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mActionDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_entityDeclarationAST::readProperty_mObsoleteEntityNames (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mObsoleteEntityNames ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityDeclarationAST::readProperty_mIsGraphicEntity (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mIsGraphicEntity ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_entityDeclarationAST::readProperty_mExternSwiftDelegateList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externSwiftDelegateList () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mExternSwiftDelegateList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_entityDeclarationAST::readProperty_mGraphicOptionArray (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mGraphicOptionArray ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @entityDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_entityDeclarationAST::cPtr_entityDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mSuperEntityName (),
mProperty_mHandlingOpposite (),
mProperty_mSimpleStoredPropertyList (),
mProperty_mSignatureList (),
mProperty_mActionDeclarationList (),
mProperty_mObsoleteEntityNames (),
mProperty_mIsGraphicEntity (),
mProperty_mExternSwiftDelegateList (),
mProperty_mGraphicOptionArray () {
}

//--------------------------------------------------------------------------------------------------

cPtr_entityDeclarationAST::cPtr_entityDeclarationAST (const GGS_lstring & in_mClassName,
                                                      const GGS_bool & in_mIsAbstract,
                                                      const GGS_lstring & in_mSuperEntityName,
                                                      const GGS_bool & in_mHandlingOpposite,
                                                      const GGS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                                      const GGS_stringset & in_mSignatureList,
                                                      const GGS_lstringlist & in_mActionDeclarationList,
                                                      const GGS_lstringlist & in_mObsoleteEntityNames,
                                                      const GGS_bool & in_mIsGraphicEntity,
                                                      const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                      const GGS_lstringlist & in_mGraphicOptionArray,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mSuperEntityName (),
mProperty_mHandlingOpposite (),
mProperty_mSimpleStoredPropertyList (),
mProperty_mSignatureList (),
mProperty_mActionDeclarationList (),
mProperty_mObsoleteEntityNames (),
mProperty_mIsGraphicEntity (),
mProperty_mExternSwiftDelegateList (),
mProperty_mGraphicOptionArray () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mSuperEntityName = in_mSuperEntityName ;
  mProperty_mHandlingOpposite = in_mHandlingOpposite ;
  mProperty_mSimpleStoredPropertyList = in_mSimpleStoredPropertyList ;
  mProperty_mSignatureList = in_mSignatureList ;
  mProperty_mActionDeclarationList = in_mActionDeclarationList ;
  mProperty_mObsoleteEntityNames = in_mObsoleteEntityNames ;
  mProperty_mIsGraphicEntity = in_mIsGraphicEntity ;
  mProperty_mExternSwiftDelegateList = in_mExternSwiftDelegateList ;
  mProperty_mGraphicOptionArray = in_mGraphicOptionArray ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_entityDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

void cPtr_entityDeclarationAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@entityDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlingOpposite.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSimpleStoredPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGraphicOptionArray.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_entityDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_entityDeclarationAST (mProperty_mClassName, mProperty_mIsAbstract, mProperty_mSuperEntityName, mProperty_mHandlingOpposite, mProperty_mSimpleStoredPropertyList, mProperty_mSignatureList, mProperty_mActionDeclarationList, mProperty_mObsoleteEntityNames, mProperty_mIsGraphicEntity, mProperty_mExternSwiftDelegateList, mProperty_mGraphicOptionArray, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_entityDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsAbstract.printNonNullClassInstanceProperties ("mIsAbstract") ;
    mProperty_mSuperEntityName.printNonNullClassInstanceProperties ("mSuperEntityName") ;
    mProperty_mHandlingOpposite.printNonNullClassInstanceProperties ("mHandlingOpposite") ;
    mProperty_mSimpleStoredPropertyList.printNonNullClassInstanceProperties ("mSimpleStoredPropertyList") ;
    mProperty_mSignatureList.printNonNullClassInstanceProperties ("mSignatureList") ;
    mProperty_mActionDeclarationList.printNonNullClassInstanceProperties ("mActionDeclarationList") ;
    mProperty_mObsoleteEntityNames.printNonNullClassInstanceProperties ("mObsoleteEntityNames") ;
    mProperty_mIsGraphicEntity.printNonNullClassInstanceProperties ("mIsGraphicEntity") ;
    mProperty_mExternSwiftDelegateList.printNonNullClassInstanceProperties ("mExternSwiftDelegateList") ;
    mProperty_mGraphicOptionArray.printNonNullClassInstanceProperties ("mGraphicOptionArray") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @entityDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclarationAST ("entityDeclarationAST",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_entityDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST GGS_entityDeclarationAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_entityDeclarationAST result ;
  const GGS_entityDeclarationAST * p = (const GGS_entityDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @entityForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_entityForGeneration::objectCompare (const GGS_entityForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration::GGS_entityForGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_entityForGeneration GGS_entityForGeneration::
init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mEntityName,
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
                                                      COMMA_LOCATION_ARGS) {
  cPtr_entityForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_entityForGeneration (inCompiler COMMA_THERE)) ;
  object->entityForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21_ (in_mEntityName, in_mSuperEntityName, in_mHandlingOpposite, in_mPropertyGenerationList, in_mSignatureSet, in_mIsGraphicEntity, in_mIsAbstract, in_mOverridenTransients, in_mExternSwiftDelegateList, in_mHasSubEntity, in_mCanCopyAndPaste_5F_option, in_mCannotBeDeleted_5F_option, inCompiler) ;
  const GGS_entityForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::
entityForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mEntityName,
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
                                                                          Compiler * /* inCompiler */) {
  mProperty_mEntityName = in_mEntityName ;
  mProperty_mSuperEntityName = in_mSuperEntityName ;
  mProperty_mHandlingOpposite = in_mHandlingOpposite ;
  mProperty_mPropertyGenerationList = in_mPropertyGenerationList ;
  mProperty_mSignatureSet = in_mSignatureSet ;
  mProperty_mIsGraphicEntity = in_mIsGraphicEntity ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mOverridenTransients = in_mOverridenTransients ;
  mProperty_mExternSwiftDelegateList = in_mExternSwiftDelegateList ;
  mProperty_mHasSubEntity = in_mHasSubEntity ;
  mProperty_mCanCopyAndPaste_5F_option = in_mCanCopyAndPaste_5F_option ;
  mProperty_mCannotBeDeleted_5F_option = in_mCannotBeDeleted_5F_option ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration::GGS_entityForGeneration (const cPtr_entityForGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration GGS_entityForGeneration::class_func_new (const GGS_string & in_mEntityName,
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
                                                                 COMMA_LOCATION_ARGS) {
  GGS_entityForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_entityForGeneration (in_mEntityName, in_mSuperEntityName, in_mHandlingOpposite, in_mPropertyGenerationList, in_mSignatureSet, in_mIsGraphicEntity, in_mIsAbstract, in_mOverridenTransients, in_mExternSwiftDelegateList, in_mHasSubEntity, in_mCanCopyAndPaste_5F_option, in_mCannotBeDeleted_5F_option,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_entityForGeneration::readProperty_mEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_entityForGeneration::readProperty_mSuperEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mSuperEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityForGeneration::readProperty_mHandlingOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mHandlingOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_entityForGeneration::readProperty_mPropertyGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyGenerationList () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mPropertyGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_entityForGeneration::readProperty_mSignatureSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringset () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mSignatureSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityForGeneration::readProperty_mIsGraphicEntity (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mIsGraphicEntity ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityForGeneration::readProperty_mIsAbstract (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mIsAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_entityForGeneration::readProperty_mOverridenTransients (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringset () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mOverridenTransients ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_entityForGeneration::readProperty_mExternSwiftDelegateList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externSwiftDelegateList () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mExternSwiftDelegateList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityForGeneration::readProperty_mHasSubEntity (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mHasSubEntity ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityForGeneration::readProperty_mCanCopyAndPaste_5F_option (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mCanCopyAndPaste_5F_option ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityForGeneration::readProperty_mCannotBeDeleted_5F_option (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mCannotBeDeleted_5F_option ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @entityForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_entityForGeneration::cPtr_entityForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mEntityName (),
mProperty_mSuperEntityName (),
mProperty_mHandlingOpposite (),
mProperty_mPropertyGenerationList (),
mProperty_mSignatureSet (),
mProperty_mIsGraphicEntity (),
mProperty_mIsAbstract (),
mProperty_mOverridenTransients (),
mProperty_mExternSwiftDelegateList (),
mProperty_mHasSubEntity (),
mProperty_mCanCopyAndPaste_5F_option (),
mProperty_mCannotBeDeleted_5F_option () {
}

//--------------------------------------------------------------------------------------------------

cPtr_entityForGeneration::cPtr_entityForGeneration (const GGS_string & in_mEntityName,
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
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mEntityName (),
mProperty_mSuperEntityName (),
mProperty_mHandlingOpposite (),
mProperty_mPropertyGenerationList (),
mProperty_mSignatureSet (),
mProperty_mIsGraphicEntity (),
mProperty_mIsAbstract (),
mProperty_mOverridenTransients (),
mProperty_mExternSwiftDelegateList (),
mProperty_mHasSubEntity (),
mProperty_mCanCopyAndPaste_5F_option (),
mProperty_mCannotBeDeleted_5F_option () {
  mProperty_mEntityName = in_mEntityName ;
  mProperty_mSuperEntityName = in_mSuperEntityName ;
  mProperty_mHandlingOpposite = in_mHandlingOpposite ;
  mProperty_mPropertyGenerationList = in_mPropertyGenerationList ;
  mProperty_mSignatureSet = in_mSignatureSet ;
  mProperty_mIsGraphicEntity = in_mIsGraphicEntity ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mOverridenTransients = in_mOverridenTransients ;
  mProperty_mExternSwiftDelegateList = in_mExternSwiftDelegateList ;
  mProperty_mHasSubEntity = in_mHasSubEntity ;
  mProperty_mCanCopyAndPaste_5F_option = in_mCanCopyAndPaste_5F_option ;
  mProperty_mCannotBeDeleted_5F_option = in_mCannotBeDeleted_5F_option ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_entityForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

void cPtr_entityForGeneration::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@entityForGeneration:") ;
  mProperty_mEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlingOpposite.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSignatureSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridenTransients.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasSubEntity.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCanCopyAndPaste_5F_option.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCannotBeDeleted_5F_option.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_entityForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_entityForGeneration (mProperty_mEntityName, mProperty_mSuperEntityName, mProperty_mHandlingOpposite, mProperty_mPropertyGenerationList, mProperty_mSignatureSet, mProperty_mIsGraphicEntity, mProperty_mIsAbstract, mProperty_mOverridenTransients, mProperty_mExternSwiftDelegateList, mProperty_mHasSubEntity, mProperty_mCanCopyAndPaste_5F_option, mProperty_mCannotBeDeleted_5F_option, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_entityForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mEntityName.printNonNullClassInstanceProperties ("mEntityName") ;
    mProperty_mSuperEntityName.printNonNullClassInstanceProperties ("mSuperEntityName") ;
    mProperty_mHandlingOpposite.printNonNullClassInstanceProperties ("mHandlingOpposite") ;
    mProperty_mPropertyGenerationList.printNonNullClassInstanceProperties ("mPropertyGenerationList") ;
    mProperty_mSignatureSet.printNonNullClassInstanceProperties ("mSignatureSet") ;
    mProperty_mIsGraphicEntity.printNonNullClassInstanceProperties ("mIsGraphicEntity") ;
    mProperty_mIsAbstract.printNonNullClassInstanceProperties ("mIsAbstract") ;
    mProperty_mOverridenTransients.printNonNullClassInstanceProperties ("mOverridenTransients") ;
    mProperty_mExternSwiftDelegateList.printNonNullClassInstanceProperties ("mExternSwiftDelegateList") ;
    mProperty_mHasSubEntity.printNonNullClassInstanceProperties ("mHasSubEntity") ;
    mProperty_mCanCopyAndPaste_5F_option.printNonNullClassInstanceProperties ("mCanCopyAndPaste_option") ;
    mProperty_mCannotBeDeleted_5F_option.printNonNullClassInstanceProperties ("mCannotBeDeleted_option") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @entityForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityForGeneration ("entityForGeneration",
                                                                           & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_entityForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration GGS_entityForGeneration::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_entityForGeneration result ;
  const GGS_entityForGeneration * p = (const GGS_entityForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutDocumentDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutDocumentDeclarationAST::objectCompare (const GGS_autoLayoutDocumentDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST::GGS_autoLayoutDocumentDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST GGS_autoLayoutDocumentDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                          const GGS_lstring & in_mRootEntityName,
                                          const GGS_lstring & in_mMainViewName,
                                          const GGS_outletDeclarationList & in_mOutletDeclarationList,
                                          const GGS_lstringlist & in_mActionDeclarationList,
                                          const GGS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                          const GGS_astViewDeclarationList & in_mViewDeclarationList,
                                          const GGS_string & in_mCustomSuperClassName,
                                          const GGS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutDocumentDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutDocumentDeclarationAST (inCompiler COMMA_THERE)) ;
  object->autoLayoutDocumentDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mClassName, in_mRootEntityName, in_mMainViewName, in_mOutletDeclarationList, in_mActionDeclarationList, in_mArrayControllerBindingListAST, in_mViewDeclarationList, in_mCustomSuperClassName, in_mOutletLinkerList, inCompiler) ;
  const GGS_autoLayoutDocumentDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::
autoLayoutDocumentDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                                           const GGS_lstring & in_mRootEntityName,
                                                                           const GGS_lstring & in_mMainViewName,
                                                                           const GGS_outletDeclarationList & in_mOutletDeclarationList,
                                                                           const GGS_lstringlist & in_mActionDeclarationList,
                                                                           const GGS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                                           const GGS_astViewDeclarationList & in_mViewDeclarationList,
                                                                           const GGS_string & in_mCustomSuperClassName,
                                                                           const GGS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mMainViewName = in_mMainViewName ;
  mProperty_mOutletDeclarationList = in_mOutletDeclarationList ;
  mProperty_mActionDeclarationList = in_mActionDeclarationList ;
  mProperty_mArrayControllerBindingListAST = in_mArrayControllerBindingListAST ;
  mProperty_mViewDeclarationList = in_mViewDeclarationList ;
  mProperty_mCustomSuperClassName = in_mCustomSuperClassName ;
  mProperty_mOutletLinkerList = in_mOutletLinkerList ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST::GGS_autoLayoutDocumentDeclarationAST (const cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST GGS_autoLayoutDocumentDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                                           const GGS_lstring & in_mRootEntityName,
                                                                                           const GGS_lstring & in_mMainViewName,
                                                                                           const GGS_outletDeclarationList & in_mOutletDeclarationList,
                                                                                           const GGS_lstringlist & in_mActionDeclarationList,
                                                                                           const GGS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                                                           const GGS_astViewDeclarationList & in_mViewDeclarationList,
                                                                                           const GGS_string & in_mCustomSuperClassName,
                                                                                           const GGS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDocumentDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutDocumentDeclarationAST (in_mClassName, in_mRootEntityName, in_mMainViewName, in_mOutletDeclarationList, in_mActionDeclarationList, in_mArrayControllerBindingListAST, in_mViewDeclarationList, in_mCustomSuperClassName, in_mOutletLinkerList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutDocumentDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutDocumentDeclarationAST::readProperty_mMainViewName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mMainViewName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_autoLayoutDocumentDeclarationAST::readProperty_mOutletDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_outletDeclarationList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mOutletDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_autoLayoutDocumentDeclarationAST::readProperty_mActionDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mActionDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_autoLayoutDocumentDeclarationAST::readProperty_mArrayControllerBindingListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_arrayControllerBindingListAST () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mArrayControllerBindingListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_autoLayoutDocumentDeclarationAST::readProperty_mViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astViewDeclarationList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutDocumentDeclarationAST::readProperty_mCustomSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mCustomSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_autoLayoutDocumentDeclarationAST::readProperty_mOutletLinkerList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutOutletLinkerList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mOutletLinkerList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentDeclarationAST::cPtr_autoLayoutDocumentDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mMainViewName (),
mProperty_mOutletDeclarationList (),
mProperty_mActionDeclarationList (),
mProperty_mArrayControllerBindingListAST (),
mProperty_mViewDeclarationList (),
mProperty_mCustomSuperClassName (),
mProperty_mOutletLinkerList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentDeclarationAST::cPtr_autoLayoutDocumentDeclarationAST (const GGS_lstring & in_mClassName,
                                                                              const GGS_lstring & in_mRootEntityName,
                                                                              const GGS_lstring & in_mMainViewName,
                                                                              const GGS_outletDeclarationList & in_mOutletDeclarationList,
                                                                              const GGS_lstringlist & in_mActionDeclarationList,
                                                                              const GGS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                                              const GGS_astViewDeclarationList & in_mViewDeclarationList,
                                                                              const GGS_string & in_mCustomSuperClassName,
                                                                              const GGS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mMainViewName (),
mProperty_mOutletDeclarationList (),
mProperty_mActionDeclarationList (),
mProperty_mArrayControllerBindingListAST (),
mProperty_mViewDeclarationList (),
mProperty_mCustomSuperClassName (),
mProperty_mOutletLinkerList () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mMainViewName = in_mMainViewName ;
  mProperty_mOutletDeclarationList = in_mOutletDeclarationList ;
  mProperty_mActionDeclarationList = in_mActionDeclarationList ;
  mProperty_mArrayControllerBindingListAST = in_mArrayControllerBindingListAST ;
  mProperty_mViewDeclarationList = in_mViewDeclarationList ;
  mProperty_mCustomSuperClassName = in_mCustomSuperClassName ;
  mProperty_mOutletLinkerList = in_mOutletLinkerList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutDocumentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

void cPtr_autoLayoutDocumentDeclarationAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutDocumentDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMainViewName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArrayControllerBindingListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCustomSuperClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletLinkerList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutDocumentDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mOutletDeclarationList, mProperty_mActionDeclarationList, mProperty_mArrayControllerBindingListAST, mProperty_mViewDeclarationList, mProperty_mCustomSuperClassName, mProperty_mOutletLinkerList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutDocumentDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mMainViewName.printNonNullClassInstanceProperties ("mMainViewName") ;
    mProperty_mOutletDeclarationList.printNonNullClassInstanceProperties ("mOutletDeclarationList") ;
    mProperty_mActionDeclarationList.printNonNullClassInstanceProperties ("mActionDeclarationList") ;
    mProperty_mArrayControllerBindingListAST.printNonNullClassInstanceProperties ("mArrayControllerBindingListAST") ;
    mProperty_mViewDeclarationList.printNonNullClassInstanceProperties ("mViewDeclarationList") ;
    mProperty_mCustomSuperClassName.printNonNullClassInstanceProperties ("mCustomSuperClassName") ;
    mProperty_mOutletLinkerList.printNonNullClassInstanceProperties ("mOutletLinkerList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutDocumentDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ("autoLayoutDocumentDeclarationAST",
                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutDocumentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutDocumentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutDocumentDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST GGS_autoLayoutDocumentDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDocumentDeclarationAST result ;
  const GGS_autoLayoutDocumentDeclarationAST * p = (const GGS_autoLayoutDocumentDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutDocumentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutDocumentFileGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutDocumentFileGeneration::objectCompare (const GGS_autoLayoutDocumentFileGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration::GGS_autoLayoutDocumentFileGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration GGS_autoLayoutDocumentFileGeneration::
init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mDocumentName,
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
                                                                      COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutDocumentFileGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutDocumentFileGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutDocumentFileGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (in_mDocumentName, in_mRootEntityName, in_mMainViewName, in_mDocumentPropertyGenearionList, in_mOutletMap, in_mAutoLayoutOutletMap, in_mTargetActionList, in_mRegularBindingsGenerationList, in_multipleBindingGenerationList, in_mTableViewBindingGenerationList, in_mEBViewBindingGenerationList, in_mViewDeclarationList, in_mImplicitViewFunctionGenerationList, in_mConfiguratorMap, in_mCustomSuperClassName, in_mOutletLinkerGenerationList, inCompiler) ;
  const GGS_autoLayoutDocumentFileGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::
autoLayoutDocumentFileGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mDocumentName,
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
                                                                                                       Compiler * /* inCompiler */) {
  mProperty_mDocumentName = in_mDocumentName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mMainViewName = in_mMainViewName ;
  mProperty_mDocumentPropertyGenearionList = in_mDocumentPropertyGenearionList ;
  mProperty_mOutletMap = in_mOutletMap ;
  mProperty_mAutoLayoutOutletMap = in_mAutoLayoutOutletMap ;
  mProperty_mTargetActionList = in_mTargetActionList ;
  mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  mProperty_multipleBindingGenerationList = in_multipleBindingGenerationList ;
  mProperty_mTableViewBindingGenerationList = in_mTableViewBindingGenerationList ;
  mProperty_mEBViewBindingGenerationList = in_mEBViewBindingGenerationList ;
  mProperty_mViewDeclarationList = in_mViewDeclarationList ;
  mProperty_mImplicitViewFunctionGenerationList = in_mImplicitViewFunctionGenerationList ;
  mProperty_mConfiguratorMap = in_mConfiguratorMap ;
  mProperty_mCustomSuperClassName = in_mCustomSuperClassName ;
  mProperty_mOutletLinkerGenerationList = in_mOutletLinkerGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration::GGS_autoLayoutDocumentFileGeneration (const cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentFileGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration GGS_autoLayoutDocumentFileGeneration::class_func_new (const GGS_string & in_mDocumentName,
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
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDocumentFileGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutDocumentFileGeneration (in_mDocumentName, in_mRootEntityName, in_mMainViewName, in_mDocumentPropertyGenearionList, in_mOutletMap, in_mAutoLayoutOutletMap, in_mTargetActionList, in_mRegularBindingsGenerationList, in_multipleBindingGenerationList, in_mTableViewBindingGenerationList, in_mEBViewBindingGenerationList, in_mViewDeclarationList, in_mImplicitViewFunctionGenerationList, in_mConfiguratorMap, in_mCustomSuperClassName, in_mOutletLinkerGenerationList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutDocumentFileGeneration::readProperty_mDocumentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mDocumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutDocumentFileGeneration::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutDocumentFileGeneration::readProperty_mMainViewName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mMainViewName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mDocumentPropertyGenearionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mDocumentPropertyGenearionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap GGS_autoLayoutDocumentFileGeneration::readProperty_mOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_decoratedOutletMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap GGS_autoLayoutDocumentFileGeneration::readProperty_mAutoLayoutOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutOutletMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mAutoLayoutOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration GGS_autoLayoutDocumentFileGeneration::readProperty_mTargetActionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actionBindingListForGeneration () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mTargetActionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_regularBindingsGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_multipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_multipleBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_multipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mTableViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_tableViewBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mTableViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mEBViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ebViewGraphicControllerBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mEBViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_viewGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mImplicitViewFunctionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_implicitViewFunctionGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mImplicitViewFunctionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap GGS_autoLayoutDocumentFileGeneration::readProperty_mConfiguratorMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutConfiguratorMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mConfiguratorMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutDocumentFileGeneration::readProperty_mCustomSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mCustomSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mOutletLinkerGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutOutletLinkerGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mOutletLinkerGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentFileGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentFileGeneration::cPtr_autoLayoutDocumentFileGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mDocumentName (),
mProperty_mRootEntityName (),
mProperty_mMainViewName (),
mProperty_mDocumentPropertyGenearionList (),
mProperty_mOutletMap (),
mProperty_mAutoLayoutOutletMap (),
mProperty_mTargetActionList (),
mProperty_mRegularBindingsGenerationList (),
mProperty_multipleBindingGenerationList (),
mProperty_mTableViewBindingGenerationList (),
mProperty_mEBViewBindingGenerationList (),
mProperty_mViewDeclarationList (),
mProperty_mImplicitViewFunctionGenerationList (),
mProperty_mConfiguratorMap (),
mProperty_mCustomSuperClassName (),
mProperty_mOutletLinkerGenerationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentFileGeneration::cPtr_autoLayoutDocumentFileGeneration (const GGS_string & in_mDocumentName,
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
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mDocumentName (),
mProperty_mRootEntityName (),
mProperty_mMainViewName (),
mProperty_mDocumentPropertyGenearionList (),
mProperty_mOutletMap (),
mProperty_mAutoLayoutOutletMap (),
mProperty_mTargetActionList (),
mProperty_mRegularBindingsGenerationList (),
mProperty_multipleBindingGenerationList (),
mProperty_mTableViewBindingGenerationList (),
mProperty_mEBViewBindingGenerationList (),
mProperty_mViewDeclarationList (),
mProperty_mImplicitViewFunctionGenerationList (),
mProperty_mConfiguratorMap (),
mProperty_mCustomSuperClassName (),
mProperty_mOutletLinkerGenerationList () {
  mProperty_mDocumentName = in_mDocumentName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mMainViewName = in_mMainViewName ;
  mProperty_mDocumentPropertyGenearionList = in_mDocumentPropertyGenearionList ;
  mProperty_mOutletMap = in_mOutletMap ;
  mProperty_mAutoLayoutOutletMap = in_mAutoLayoutOutletMap ;
  mProperty_mTargetActionList = in_mTargetActionList ;
  mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  mProperty_multipleBindingGenerationList = in_multipleBindingGenerationList ;
  mProperty_mTableViewBindingGenerationList = in_mTableViewBindingGenerationList ;
  mProperty_mEBViewBindingGenerationList = in_mEBViewBindingGenerationList ;
  mProperty_mViewDeclarationList = in_mViewDeclarationList ;
  mProperty_mImplicitViewFunctionGenerationList = in_mImplicitViewFunctionGenerationList ;
  mProperty_mConfiguratorMap = in_mConfiguratorMap ;
  mProperty_mCustomSuperClassName = in_mCustomSuperClassName ;
  mProperty_mOutletLinkerGenerationList = in_mOutletLinkerGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutDocumentFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

void cPtr_autoLayoutDocumentFileGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutDocumentFileGeneration:") ;
  mProperty_mDocumentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMainViewName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDocumentPropertyGenearionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAutoLayoutOutletMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetActionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_multipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplicitViewFunctionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCustomSuperClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletLinkerGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutDocumentFileGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentFileGeneration (mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mDocumentPropertyGenearionList, mProperty_mOutletMap, mProperty_mAutoLayoutOutletMap, mProperty_mTargetActionList, mProperty_mRegularBindingsGenerationList, mProperty_multipleBindingGenerationList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList, mProperty_mViewDeclarationList, mProperty_mImplicitViewFunctionGenerationList, mProperty_mConfiguratorMap, mProperty_mCustomSuperClassName, mProperty_mOutletLinkerGenerationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutDocumentFileGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mDocumentName.printNonNullClassInstanceProperties ("mDocumentName") ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mMainViewName.printNonNullClassInstanceProperties ("mMainViewName") ;
    mProperty_mDocumentPropertyGenearionList.printNonNullClassInstanceProperties ("mDocumentPropertyGenearionList") ;
    mProperty_mOutletMap.printNonNullClassInstanceProperties ("mOutletMap") ;
    mProperty_mAutoLayoutOutletMap.printNonNullClassInstanceProperties ("mAutoLayoutOutletMap") ;
    mProperty_mTargetActionList.printNonNullClassInstanceProperties ("mTargetActionList") ;
    mProperty_mRegularBindingsGenerationList.printNonNullClassInstanceProperties ("mRegularBindingsGenerationList") ;
    mProperty_multipleBindingGenerationList.printNonNullClassInstanceProperties ("multipleBindingGenerationList") ;
    mProperty_mTableViewBindingGenerationList.printNonNullClassInstanceProperties ("mTableViewBindingGenerationList") ;
    mProperty_mEBViewBindingGenerationList.printNonNullClassInstanceProperties ("mEBViewBindingGenerationList") ;
    mProperty_mViewDeclarationList.printNonNullClassInstanceProperties ("mViewDeclarationList") ;
    mProperty_mImplicitViewFunctionGenerationList.printNonNullClassInstanceProperties ("mImplicitViewFunctionGenerationList") ;
    mProperty_mConfiguratorMap.printNonNullClassInstanceProperties ("mConfiguratorMap") ;
    mProperty_mCustomSuperClassName.printNonNullClassInstanceProperties ("mCustomSuperClassName") ;
    mProperty_mOutletLinkerGenerationList.printNonNullClassInstanceProperties ("mOutletLinkerGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutDocumentFileGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ("autoLayoutDocumentFileGeneration",
                                                                                        & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutDocumentFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutDocumentFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutDocumentFileGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration GGS_autoLayoutDocumentFileGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDocumentFileGeneration result ;
  const GGS_autoLayoutDocumentFileGeneration * p = (const GGS_autoLayoutDocumentFileGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutDocumentFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @prefsDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefsDeclarationAST::objectCompare (const GGS_prefsDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST::GGS_prefsDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_prefsDeclarationAST GGS_prefsDeclarationAST::
init_21__21_ (const GGS_lstring & in_mClassName,
              const GGS_prefDeclaration & in_mDeclaration,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_prefsDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_prefsDeclarationAST (inCompiler COMMA_THERE)) ;
  object->prefsDeclarationAST_init_21__21_ (in_mClassName, in_mDeclaration, inCompiler) ;
  const GGS_prefsDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::
prefsDeclarationAST_init_21__21_ (const GGS_lstring & in_mClassName,
                                  const GGS_prefDeclaration & in_mDeclaration,
                                  Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDeclaration = in_mDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST::GGS_prefsDeclarationAST (const cPtr_prefsDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST GGS_prefsDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                 const GGS_prefDeclaration & in_mDeclaration,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_prefsDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_prefsDeclarationAST (in_mClassName, in_mDeclaration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration GGS_prefsDeclarationAST::readProperty_mDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_prefDeclaration () ;
  }else{
    cPtr_prefsDeclarationAST * p = (cPtr_prefsDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
    return p->mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @prefsDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_prefsDeclarationAST::cPtr_prefsDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_prefsDeclarationAST::cPtr_prefsDeclarationAST (const GGS_lstring & in_mClassName,
                                                    const GGS_prefDeclaration & in_mDeclaration,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mDeclaration () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDeclaration = in_mDeclaration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefsDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

void cPtr_prefsDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@prefsDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefsDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_prefsDeclarationAST (mProperty_mClassName, mProperty_mDeclaration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefsDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDeclaration.printNonNullClassInstanceProperties ("mDeclaration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @prefsDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ("prefsDeclarationAST",
                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_prefsDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefsDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefsDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST GGS_prefsDeclarationAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_prefsDeclarationAST result ;
  const GGS_prefsDeclarationAST * p = (const GGS_prefsDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefsDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//'@entityStrongReferenceGraph' graph
//
//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph::GGS_entityStrongReferenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GGS_entityStrongReferenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_entityStrongReferenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::setter_addNode (GGS_lstring inKey,
                                                     GGS_string inArgument_0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GGS_stringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' entity is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_topologicalSort (GGS_stringlist & outSortedList,
                                                             GGS_lstringlist & outSortedKeyList,
                                                             GGS_stringlist & outUnsortedList,
                                                             GGS_lstringlist & outUnsortedKeyList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_stringlist (sortedList) ;
  outUnsortedList = GGS_stringlist (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_depthFirstTopologicalSort (GGS_stringlist & outSortedList,
                                                                       GGS_lstringlist & outSortedKeyList,
                                                                       GGS_stringlist & outUnsortedList,
                                                                       GGS_lstringlist & outUnsortedKeyList,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_stringlist (sortedList) ;
  outUnsortedList = GGS_stringlist (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_entityStrongReferenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_circularities (GGS_stringlist & outInfoList,
                                                           GGS_lstringlist & outKeyList
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_nodesWithNoSuccessor (GGS_stringlist & outInfoList,
                                                                  GGS_lstringlist & outKeyList
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_nodesWithNoPredecessor (GGS_stringlist & outInfoList,
                                                                    GGS_lstringlist & outKeyList
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                                         const GGS_stringset & inKeysToExclude,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_entityStrongReferenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_entityStrongReferenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_stringlist resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_entityStrongReferenceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                            const GGS_stringset & inNodesToExclude,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_entityStrongReferenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @entityStrongReferenceGraph generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityStrongReferenceGraph ("entityStrongReferenceGraph",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_entityStrongReferenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityStrongReferenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityStrongReferenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityStrongReferenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_entityStrongReferenceGraph result ;
  const GGS_entityStrongReferenceGraph * p = (const GGS_entityStrongReferenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityStrongReferenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityStrongReferenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutViewClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutViewClassDeclarationAST::objectCompare (const GGS_autoLayoutViewClassDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST::GGS_autoLayoutViewClassDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST GGS_autoLayoutViewClassDeclarationAST::
init_21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
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
                                              COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutViewClassDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutViewClassDeclarationAST (inCompiler COMMA_THERE)) ;
  object->autoLayoutViewClassDeclarationAST_init_21__21__21__21__21__21__21__21__21__21_ (in_mClassName, in_mUserDefined, in_mSuperClassName, in_mHasRunAction, in_mHasEnabled, in_mHandlesTableValueBinding, in_mHandlesGraphicControllerBinding, in_mHasHidden, in_mParameterList, in_mAutoLayoutViewFunctionMap, inCompiler) ;
  const GGS_autoLayoutViewClassDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::
autoLayoutViewClassDeclarationAST_init_21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                                                const GGS_bool & in_mUserDefined,
                                                                                const GGS_lstring & in_mSuperClassName,
                                                                                const GGS_bool & in_mHasRunAction,
                                                                                const GGS_bool & in_mHasEnabled,
                                                                                const GGS_bool & in_mHandlesTableValueBinding,
                                                                                const GGS_bool & in_mHandlesGraphicControllerBinding,
                                                                                const GGS_bool & in_mHasHidden,
                                                                                const GGS_autoLayoutClassParameterList & in_mParameterList,
                                                                                const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                                                                Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mUserDefined = in_mUserDefined ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mHasRunAction = in_mHasRunAction ;
  mProperty_mHasEnabled = in_mHasEnabled ;
  mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  mProperty_mHandlesGraphicControllerBinding = in_mHandlesGraphicControllerBinding ;
  mProperty_mHasHidden = in_mHasHidden ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mAutoLayoutViewFunctionMap = in_mAutoLayoutViewFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST::GGS_autoLayoutViewClassDeclarationAST (const cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutViewClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST GGS_autoLayoutViewClassDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
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
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewClassDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutViewClassDeclarationAST (in_mClassName, in_mUserDefined, in_mSuperClassName, in_mHasRunAction, in_mHasEnabled, in_mHandlesTableValueBinding, in_mHandlesGraphicControllerBinding, in_mHasHidden, in_mParameterList, in_mAutoLayoutViewFunctionMap,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mUserDefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mUserDefined ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mUserDefined (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mUserDefined = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutViewClassDeclarationAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mSuperClassName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHasRunAction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasRunAction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mHasRunAction (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasRunAction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHasEnabled (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasEnabled ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mHasEnabled (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasEnabled = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHandlesTableValueBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHandlesTableValueBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mHandlesTableValueBinding (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHandlesTableValueBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHandlesGraphicControllerBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHandlesGraphicControllerBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mHandlesGraphicControllerBinding (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHandlesGraphicControllerBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHasHidden (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasHidden ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mHasHidden (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasHidden = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutViewClassDeclarationAST::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutClassParameterList () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mParameterList (const GGS_autoLayoutClassParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_autoLayoutViewClassDeclarationAST::readProperty_mAutoLayoutViewFunctionMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionMap () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mAutoLayoutViewFunctionMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mAutoLayoutViewFunctionMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutViewClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutViewClassDeclarationAST::cPtr_autoLayoutViewClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mUserDefined (),
mProperty_mSuperClassName (),
mProperty_mHasRunAction (),
mProperty_mHasEnabled (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandlesGraphicControllerBinding (),
mProperty_mHasHidden (),
mProperty_mParameterList (),
mProperty_mAutoLayoutViewFunctionMap () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutViewClassDeclarationAST::cPtr_autoLayoutViewClassDeclarationAST (const GGS_lstring & in_mClassName,
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
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mUserDefined (),
mProperty_mSuperClassName (),
mProperty_mHasRunAction (),
mProperty_mHasEnabled (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandlesGraphicControllerBinding (),
mProperty_mHasHidden (),
mProperty_mParameterList (),
mProperty_mAutoLayoutViewFunctionMap () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mUserDefined = in_mUserDefined ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mHasRunAction = in_mHasRunAction ;
  mProperty_mHasEnabled = in_mHasEnabled ;
  mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  mProperty_mHandlesGraphicControllerBinding = in_mHandlesGraphicControllerBinding ;
  mProperty_mHasHidden = in_mHasHidden ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mAutoLayoutViewFunctionMap = in_mAutoLayoutViewFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutViewClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
}

void cPtr_autoLayoutViewClassDeclarationAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutViewClassDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasRunAction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasEnabled.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlesGraphicControllerBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasHidden.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAutoLayoutViewFunctionMap.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutViewClassDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutViewClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden, mProperty_mParameterList, mProperty_mAutoLayoutViewFunctionMap, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutViewClassDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mUserDefined.printNonNullClassInstanceProperties ("mUserDefined") ;
    mProperty_mSuperClassName.printNonNullClassInstanceProperties ("mSuperClassName") ;
    mProperty_mHasRunAction.printNonNullClassInstanceProperties ("mHasRunAction") ;
    mProperty_mHasEnabled.printNonNullClassInstanceProperties ("mHasEnabled") ;
    mProperty_mHandlesTableValueBinding.printNonNullClassInstanceProperties ("mHandlesTableValueBinding") ;
    mProperty_mHandlesGraphicControllerBinding.printNonNullClassInstanceProperties ("mHandlesGraphicControllerBinding") ;
    mProperty_mHasHidden.printNonNullClassInstanceProperties ("mHasHidden") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
    mProperty_mAutoLayoutViewFunctionMap.printNonNullClassInstanceProperties ("mAutoLayoutViewFunctionMap") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutViewClassDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ("autoLayoutViewClassDeclarationAST",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutViewClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewClassDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST GGS_autoLayoutViewClassDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewClassDeclarationAST result ;
  const GGS_autoLayoutViewClassDeclarationAST * p = (const GGS_autoLayoutViewClassDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astComputedHorizontalViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astComputedHorizontalViewDeclaration::objectCompare (const GGS_astComputedHorizontalViewDeclaration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration::GGS_astComputedHorizontalViewDeclaration (void) :
GGS_astAbstractViewDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration GGS_astComputedHorizontalViewDeclaration::
init_21__21__21_ (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                  const GGS_astViewInstructionList & in_mInstructionList,
                  const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_astComputedHorizontalViewDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astComputedHorizontalViewDeclaration (inCompiler COMMA_THERE)) ;
  object->astComputedHorizontalViewDeclaration_init_21__21__21_ (in_mFunctionCallList, in_mInstructionList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GGS_astComputedHorizontalViewDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astComputedHorizontalViewDeclaration::
astComputedHorizontalViewDeclaration_init_21__21__21_ (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                       const GGS_astViewInstructionList & in_mInstructionList,
                                                       const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                       Compiler * /* inCompiler */) {
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration::GGS_astComputedHorizontalViewDeclaration (const cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) :
GGS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedHorizontalViewDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration GGS_astComputedHorizontalViewDeclaration::class_func_new (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                                   const GGS_astViewInstructionList & in_mInstructionList,
                                                                                                   const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_astComputedHorizontalViewDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_astComputedHorizontalViewDeclaration (in_mFunctionCallList, in_mInstructionList, in_mNewStackViewDeclarationList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astComputedHorizontalViewDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astComputedHorizontalViewDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astViewInstructionList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astComputedHorizontalViewDeclaration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astComputedHorizontalViewDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedHorizontalViewDeclaration::cPtr_astComputedHorizontalViewDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (inCompiler COMMA_THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astComputedHorizontalViewDeclaration::cPtr_astComputedHorizontalViewDeclaration (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                      const GGS_astViewInstructionList & in_mInstructionList,
                                                                                      const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (inCompiler COMMA_THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astComputedHorizontalViewDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;
}

void cPtr_astComputedHorizontalViewDeclaration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@astComputedHorizontalViewDeclaration:") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedHorizontalViewDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astComputedHorizontalViewDeclaration (mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astComputedHorizontalViewDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @astComputedHorizontalViewDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ("astComputedHorizontalViewDeclaration",
                                                                                            & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astComputedHorizontalViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astComputedHorizontalViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astComputedHorizontalViewDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration GGS_astComputedHorizontalViewDeclaration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_astComputedHorizontalViewDeclaration result ;
  const GGS_astComputedHorizontalViewDeclaration * p = (const GGS_astComputedHorizontalViewDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astComputedHorizontalViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedHorizontalViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astComputedVerticalViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astComputedVerticalViewDeclaration::objectCompare (const GGS_astComputedVerticalViewDeclaration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration::GGS_astComputedVerticalViewDeclaration (void) :
GGS_astAbstractViewDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration GGS_astComputedVerticalViewDeclaration::
init_21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                          const GGS_lstring & in_mConfiguratorName,
                          const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                          const GGS_astViewInstructionList & in_mInstructionList,
                          const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_astComputedVerticalViewDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astComputedVerticalViewDeclaration (inCompiler COMMA_THERE)) ;
  object->astComputedVerticalViewDeclaration_init_21__21__21__21__21_ (in_mHasVerticalScroller, in_mConfiguratorName, in_mFunctionCallList, in_mInstructionList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GGS_astComputedVerticalViewDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astComputedVerticalViewDeclaration::
astComputedVerticalViewDeclaration_init_21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                                                             const GGS_lstring & in_mConfiguratorName,
                                                             const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                             const GGS_astViewInstructionList & in_mInstructionList,
                                                             const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                             Compiler * /* inCompiler */) {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration::GGS_astComputedVerticalViewDeclaration (const cPtr_astComputedVerticalViewDeclaration * inSourcePtr) :
GGS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedVerticalViewDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration GGS_astComputedVerticalViewDeclaration::class_func_new (const GGS_bool & in_mHasVerticalScroller,
                                                                                               const GGS_lstring & in_mConfiguratorName,
                                                                                               const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                               const GGS_astViewInstructionList & in_mInstructionList,
                                                                                               const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_astComputedVerticalViewDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_astComputedVerticalViewDeclaration (in_mHasVerticalScroller, in_mConfiguratorName, in_mFunctionCallList, in_mInstructionList, in_mNewStackViewDeclarationList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astComputedVerticalViewDeclaration::readProperty_mHasVerticalScroller (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mHasVerticalScroller ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astComputedVerticalViewDeclaration::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astComputedVerticalViewDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astComputedVerticalViewDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astViewInstructionList () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astComputedVerticalViewDeclaration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astComputedVerticalViewDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedVerticalViewDeclaration::cPtr_astComputedVerticalViewDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astComputedVerticalViewDeclaration::cPtr_astComputedVerticalViewDeclaration (const GGS_bool & in_mHasVerticalScroller,
                                                                                  const GGS_lstring & in_mConfiguratorName,
                                                                                  const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                  const GGS_astViewInstructionList & in_mInstructionList,
                                                                                  const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astComputedVerticalViewDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;
}

void cPtr_astComputedVerticalViewDeclaration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@astComputedVerticalViewDeclaration:") ;
  mProperty_mHasVerticalScroller.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedVerticalViewDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astComputedVerticalViewDeclaration (mProperty_mHasVerticalScroller, mProperty_mConfiguratorName, mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astComputedVerticalViewDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mHasVerticalScroller.printNonNullClassInstanceProperties ("mHasVerticalScroller") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @astComputedVerticalViewDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ("astComputedVerticalViewDeclaration",
                                                                                          & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astComputedVerticalViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astComputedVerticalViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astComputedVerticalViewDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration GGS_astComputedVerticalViewDeclaration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astComputedVerticalViewDeclaration result ;
  const GGS_astComputedVerticalViewDeclaration * p = (const GGS_astComputedVerticalViewDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astComputedVerticalViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedVerticalViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astVStackViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astVStackViewInstructionDeclaration::objectCompare (const GGS_astVStackViewInstructionDeclaration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration::GGS_astVStackViewInstructionDeclaration (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration GGS_astVStackViewInstructionDeclaration::
init_21__21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                              const GGS_lstring & in_mConfiguratorName,
                              const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                              const GGS_astViewInstructionList & in_mInstructionList,
                              const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                              const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_astVStackViewInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astVStackViewInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->astVStackViewInstructionDeclaration_init_21__21__21__21__21__21_ (in_mHasVerticalScroller, in_mConfiguratorName, in_mFunctionCallList, in_mInstructionList, in_mOptionalHiddenBinding, in_mAstNewStackViewDeclarationList, inCompiler) ;
  const GGS_astVStackViewInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astVStackViewInstructionDeclaration::
astVStackViewInstructionDeclaration_init_21__21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                                                                  const GGS_lstring & in_mConfiguratorName,
                                                                  const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                  const GGS_astViewInstructionList & in_mInstructionList,
                                                                  const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                                  const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mOptionalHiddenBinding = in_mOptionalHiddenBinding ;
  mProperty_mAstNewStackViewDeclarationList = in_mAstNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration::GGS_astVStackViewInstructionDeclaration (const cPtr_astVStackViewInstructionDeclaration * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astVStackViewInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration GGS_astVStackViewInstructionDeclaration::class_func_new (const GGS_bool & in_mHasVerticalScroller,
                                                                                                 const GGS_lstring & in_mConfiguratorName,
                                                                                                 const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                                 const GGS_astViewInstructionList & in_mInstructionList,
                                                                                                 const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                                                                 const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_astVStackViewInstructionDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_astVStackViewInstructionDeclaration (in_mHasVerticalScroller, in_mConfiguratorName, in_mFunctionCallList, in_mInstructionList, in_mOptionalHiddenBinding, in_mAstNewStackViewDeclarationList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astVStackViewInstructionDeclaration::readProperty_mHasVerticalScroller (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mHasVerticalScroller ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astVStackViewInstructionDeclaration::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astVStackViewInstructionDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astVStackViewInstructionDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astViewInstructionList () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding GGS_astVStackViewInstructionDeclaration::readProperty_mOptionalHiddenBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_optionalHiddenBinding () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mOptionalHiddenBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astVStackViewInstructionDeclaration::readProperty_mAstNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mAstNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astVStackViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astVStackViewInstructionDeclaration::cPtr_astVStackViewInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mOptionalHiddenBinding (),
mProperty_mAstNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astVStackViewInstructionDeclaration::cPtr_astVStackViewInstructionDeclaration (const GGS_bool & in_mHasVerticalScroller,
                                                                                    const GGS_lstring & in_mConfiguratorName,
                                                                                    const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                    const GGS_astViewInstructionList & in_mInstructionList,
                                                                                    const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                                                    const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mOptionalHiddenBinding (),
mProperty_mAstNewStackViewDeclarationList () {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mOptionalHiddenBinding = in_mOptionalHiddenBinding ;
  mProperty_mAstNewStackViewDeclarationList = in_mAstNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astVStackViewInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;
}

void cPtr_astVStackViewInstructionDeclaration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@astVStackViewInstructionDeclaration:") ;
  mProperty_mHasVerticalScroller.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalHiddenBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAstNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astVStackViewInstructionDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astVStackViewInstructionDeclaration (mProperty_mHasVerticalScroller, mProperty_mConfiguratorName, mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mOptionalHiddenBinding, mProperty_mAstNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astVStackViewInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mHasVerticalScroller.printNonNullClassInstanceProperties ("mHasVerticalScroller") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mOptionalHiddenBinding.printNonNullClassInstanceProperties ("mOptionalHiddenBinding") ;
    mProperty_mAstNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mAstNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @astVStackViewInstructionDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ("astVStackViewInstructionDeclaration",
                                                                                           & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astVStackViewInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astVStackViewInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astVStackViewInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration GGS_astVStackViewInstructionDeclaration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_astVStackViewInstructionDeclaration result ;
  const GGS_astVStackViewInstructionDeclaration * p = (const GGS_astVStackViewInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astVStackViewInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astVStackViewInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astLocalViewInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astLocalViewInstruction::objectCompare (const GGS_astLocalViewInstruction & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction::GGS_astLocalViewInstruction (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astLocalViewInstruction GGS_astLocalViewInstruction::
init_21_ (const GGS_lstring & in_mLocalView,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_astLocalViewInstruction * object = nullptr ;
  macroMyNew (object, cPtr_astLocalViewInstruction (inCompiler COMMA_THERE)) ;
  object->astLocalViewInstruction_init_21_ (in_mLocalView, inCompiler) ;
  const GGS_astLocalViewInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astLocalViewInstruction::
astLocalViewInstruction_init_21_ (const GGS_lstring & in_mLocalView,
                                  Compiler * /* inCompiler */) {
  mProperty_mLocalView = in_mLocalView ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction::GGS_astLocalViewInstruction (const cPtr_astLocalViewInstruction * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astLocalViewInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction GGS_astLocalViewInstruction::class_func_new (const GGS_lstring & in_mLocalView,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_astLocalViewInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_astLocalViewInstruction (in_mLocalView,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astLocalViewInstruction::readProperty_mLocalView (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_astLocalViewInstruction * p = (cPtr_astLocalViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astLocalViewInstruction) ;
    return p->mProperty_mLocalView ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astLocalViewInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_astLocalViewInstruction::cPtr_astLocalViewInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mLocalView () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astLocalViewInstruction::cPtr_astLocalViewInstruction (const GGS_lstring & in_mLocalView,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mLocalView () {
  mProperty_mLocalView = in_mLocalView ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astLocalViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction ;
}

void cPtr_astLocalViewInstruction::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@astLocalViewInstruction:") ;
  mProperty_mLocalView.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astLocalViewInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astLocalViewInstruction (mProperty_mLocalView, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astLocalViewInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mLocalView.printNonNullClassInstanceProperties ("mLocalView") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @astLocalViewInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astLocalViewInstruction ("astLocalViewInstruction",
                                                                               & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astLocalViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astLocalViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astLocalViewInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction GGS_astLocalViewInstruction::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_astLocalViewInstruction result ;
  const GGS_astLocalViewInstruction * p = (const GGS_astLocalViewInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astLocalViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astLocalViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astComputedViewInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astComputedViewInstruction::objectCompare (const GGS_astComputedViewInstruction & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction::GGS_astComputedViewInstruction (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astComputedViewInstruction GGS_astComputedViewInstruction::
init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mAutoLayoutViewClassName,
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
                                                      COMMA_LOCATION_ARGS) {
  cPtr_astComputedViewInstruction * object = nullptr ;
  macroMyNew (object, cPtr_astComputedViewInstruction (inCompiler COMMA_THERE)) ;
  object->astComputedViewInstruction_init_21__21__21__21__21__21__21__21__21__21__21__21_ (in_mAutoLayoutViewClassName, in_mParameterList, in_mFunctionCallList, in_mTableValueBinding, in_mRunActionDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mGraphicController, in_mRegularBindingList, in_mConfiguratorName, in_mOutletName, in_mOutletIsArray, inCompiler) ;
  const GGS_astComputedViewInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::
astComputedViewInstruction_init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mAutoLayoutViewClassName,
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
                                                                                 Compiler * /* inCompiler */) {
  mProperty_mAutoLayoutViewClassName = in_mAutoLayoutViewClassName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mTableValueBinding = in_mTableValueBinding ;
  mProperty_mRunActionDescriptor = in_mRunActionDescriptor ;
  mProperty_mEnabledBindingDescriptor = in_mEnabledBindingDescriptor ;
  mProperty_mHiddenBindingDescriptor = in_mHiddenBindingDescriptor ;
  mProperty_mGraphicController = in_mGraphicController ;
  mProperty_mRegularBindingList = in_mRegularBindingList ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mOutletName = in_mOutletName ;
  mProperty_mOutletIsArray = in_mOutletIsArray ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction::GGS_astComputedViewInstruction (const cPtr_astComputedViewInstruction * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedViewInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction GGS_astComputedViewInstruction::class_func_new (const GGS_lstring & in_mAutoLayoutViewClassName,
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
                                                                               COMMA_LOCATION_ARGS) {
  GGS_astComputedViewInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_astComputedViewInstruction (in_mAutoLayoutViewClassName, in_mParameterList, in_mFunctionCallList, in_mTableValueBinding, in_mRunActionDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mGraphicController, in_mRegularBindingList, in_mConfiguratorName, in_mOutletName, in_mOutletIsArray,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astComputedViewInstruction::readProperty_mAutoLayoutViewClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mAutoLayoutViewClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astComputedViewInstruction::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewInstructionParameterList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astComputedViewInstruction::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding GGS_astComputedViewInstruction::readProperty_mTableValueBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_tableValueBinding () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mTableValueBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor GGS_astComputedViewInstruction::readProperty_mRunActionDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_runActionDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mRunActionDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor GGS_astComputedViewInstruction::readProperty_mEnabledBindingDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_multipleBindingDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mEnabledBindingDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor GGS_astComputedViewInstruction::readProperty_mHiddenBindingDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_multipleBindingDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mHiddenBindingDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController GGS_astComputedViewInstruction::readProperty_mGraphicController (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_graphicController () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mGraphicController ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList GGS_astComputedViewInstruction::readProperty_mRegularBindingList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_regularBindingList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mRegularBindingList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astComputedViewInstruction::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astComputedViewInstruction::readProperty_mOutletName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mOutletName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astComputedViewInstruction::readProperty_mOutletIsArray (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mOutletIsArray ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astComputedViewInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedViewInstruction::cPtr_astComputedViewInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mAutoLayoutViewClassName (),
mProperty_mParameterList (),
mProperty_mFunctionCallList (),
mProperty_mTableValueBinding (),
mProperty_mRunActionDescriptor (),
mProperty_mEnabledBindingDescriptor (),
mProperty_mHiddenBindingDescriptor (),
mProperty_mGraphicController (),
mProperty_mRegularBindingList (),
mProperty_mConfiguratorName (),
mProperty_mOutletName (),
mProperty_mOutletIsArray () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astComputedViewInstruction::cPtr_astComputedViewInstruction (const GGS_lstring & in_mAutoLayoutViewClassName,
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
                                                                  COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mAutoLayoutViewClassName (),
mProperty_mParameterList (),
mProperty_mFunctionCallList (),
mProperty_mTableValueBinding (),
mProperty_mRunActionDescriptor (),
mProperty_mEnabledBindingDescriptor (),
mProperty_mHiddenBindingDescriptor (),
mProperty_mGraphicController (),
mProperty_mRegularBindingList (),
mProperty_mConfiguratorName (),
mProperty_mOutletName (),
mProperty_mOutletIsArray () {
  mProperty_mAutoLayoutViewClassName = in_mAutoLayoutViewClassName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mTableValueBinding = in_mTableValueBinding ;
  mProperty_mRunActionDescriptor = in_mRunActionDescriptor ;
  mProperty_mEnabledBindingDescriptor = in_mEnabledBindingDescriptor ;
  mProperty_mHiddenBindingDescriptor = in_mHiddenBindingDescriptor ;
  mProperty_mGraphicController = in_mGraphicController ;
  mProperty_mRegularBindingList = in_mRegularBindingList ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mOutletName = in_mOutletName ;
  mProperty_mOutletIsArray = in_mOutletIsArray ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astComputedViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction ;
}

void cPtr_astComputedViewInstruction::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@astComputedViewInstruction:") ;
  mProperty_mAutoLayoutViewClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableValueBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRunActionDescriptor.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGraphicController.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegularBindingList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletIsArray.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedViewInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astComputedViewInstruction (mProperty_mAutoLayoutViewClassName, mProperty_mParameterList, mProperty_mFunctionCallList, mProperty_mTableValueBinding, mProperty_mRunActionDescriptor, mProperty_mEnabledBindingDescriptor, mProperty_mHiddenBindingDescriptor, mProperty_mGraphicController, mProperty_mRegularBindingList, mProperty_mConfiguratorName, mProperty_mOutletName, mProperty_mOutletIsArray, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astComputedViewInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mAutoLayoutViewClassName.printNonNullClassInstanceProperties ("mAutoLayoutViewClassName") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mTableValueBinding.printNonNullClassInstanceProperties ("mTableValueBinding") ;
    mProperty_mRunActionDescriptor.printNonNullClassInstanceProperties ("mRunActionDescriptor") ;
    mProperty_mEnabledBindingDescriptor.printNonNullClassInstanceProperties ("mEnabledBindingDescriptor") ;
    mProperty_mHiddenBindingDescriptor.printNonNullClassInstanceProperties ("mHiddenBindingDescriptor") ;
    mProperty_mGraphicController.printNonNullClassInstanceProperties ("mGraphicController") ;
    mProperty_mRegularBindingList.printNonNullClassInstanceProperties ("mRegularBindingList") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mOutletName.printNonNullClassInstanceProperties ("mOutletName") ;
    mProperty_mOutletIsArray.printNonNullClassInstanceProperties ("mOutletIsArray") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @astComputedViewInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedViewInstruction ("astComputedViewInstruction",
                                                                                  & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astComputedViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astComputedViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astComputedViewInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction GGS_astComputedViewInstruction::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_astComputedViewInstruction result ;
  const GGS_astComputedViewInstruction * p = (const GGS_astComputedViewInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astComputedViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computedHorizontalViewGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedHorizontalViewGeneration::objectCompare (const GGS_computedHorizontalViewGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration::GGS_computedHorizontalViewGeneration (void) :
GGS_abstractViewGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_computedHorizontalViewGeneration GGS_computedHorizontalViewGeneration::
init_21__21__21_ (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                  const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                  const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_computedHorizontalViewGeneration * object = nullptr ;
  macroMyNew (object, cPtr_computedHorizontalViewGeneration (inCompiler COMMA_THERE)) ;
  object->computedHorizontalViewGeneration_init_21__21__21_ (in_mFuncCallList, in_mInstructionList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GGS_computedHorizontalViewGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computedHorizontalViewGeneration::
computedHorizontalViewGeneration_init_21__21__21_ (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                   const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                   const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration::GGS_computedHorizontalViewGeneration (const cPtr_computedHorizontalViewGeneration * inSourcePtr) :
GGS_abstractViewGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedHorizontalViewGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration GGS_computedHorizontalViewGeneration::class_func_new (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                                           const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                                           const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_computedHorizontalViewGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_computedHorizontalViewGeneration (in_mFuncCallList, in_mInstructionList, in_mNewStackViewDeclarationList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_computedHorizontalViewGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_computedHorizontalViewGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_computedHorizontalViewGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedHorizontalViewGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_computedHorizontalViewGeneration::cPtr_computedHorizontalViewGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (inCompiler COMMA_THERE),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_computedHorizontalViewGeneration::cPtr_computedHorizontalViewGeneration (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                              const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                              const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (inCompiler COMMA_THERE),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedHorizontalViewGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;
}

void cPtr_computedHorizontalViewGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@computedHorizontalViewGeneration:") ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedHorizontalViewGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedHorizontalViewGeneration (mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computedHorizontalViewGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFuncCallList.printNonNullClassInstanceProperties ("mFuncCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @computedHorizontalViewGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ("computedHorizontalViewGeneration",
                                                                                        & kTypeDescriptor_GALGAS_abstractViewGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computedHorizontalViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedHorizontalViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedHorizontalViewGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration GGS_computedHorizontalViewGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_computedHorizontalViewGeneration result ;
  const GGS_computedHorizontalViewGeneration * p = (const GGS_computedHorizontalViewGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedHorizontalViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedHorizontalViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computedVerticalViewGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedVerticalViewGeneration::objectCompare (const GGS_computedVerticalViewGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration::GGS_computedVerticalViewGeneration (void) :
GGS_abstractViewGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_computedVerticalViewGeneration GGS_computedVerticalViewGeneration::
init_21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                          const GGS_lstring & in_mConfiguratorName,
                          const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                          const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                          const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_computedVerticalViewGeneration * object = nullptr ;
  macroMyNew (object, cPtr_computedVerticalViewGeneration (inCompiler COMMA_THERE)) ;
  object->computedVerticalViewGeneration_init_21__21__21__21__21_ (in_mHasVerticalScroller, in_mConfiguratorName, in_mFuncCallList, in_mInstructionList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GGS_computedVerticalViewGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computedVerticalViewGeneration::
computedVerticalViewGeneration_init_21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                                                         const GGS_lstring & in_mConfiguratorName,
                                                         const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                         const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                         const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                         Compiler * /* inCompiler */) {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration::GGS_computedVerticalViewGeneration (const cPtr_computedVerticalViewGeneration * inSourcePtr) :
GGS_abstractViewGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedVerticalViewGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration GGS_computedVerticalViewGeneration::class_func_new (const GGS_bool & in_mHasVerticalScroller,
                                                                                       const GGS_lstring & in_mConfiguratorName,
                                                                                       const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                                       const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                                       const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_computedVerticalViewGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_computedVerticalViewGeneration (in_mHasVerticalScroller, in_mConfiguratorName, in_mFuncCallList, in_mInstructionList, in_mNewStackViewDeclarationList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_computedVerticalViewGeneration::readProperty_mHasVerticalScroller (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mHasVerticalScroller ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_computedVerticalViewGeneration::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_computedVerticalViewGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_computedVerticalViewGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_computedVerticalViewGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedVerticalViewGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_computedVerticalViewGeneration::cPtr_computedVerticalViewGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_computedVerticalViewGeneration::cPtr_computedVerticalViewGeneration (const GGS_bool & in_mHasVerticalScroller,
                                                                          const GGS_lstring & in_mConfiguratorName,
                                                                          const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                          const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                          const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedVerticalViewGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedVerticalViewGeneration ;
}

void cPtr_computedVerticalViewGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@computedVerticalViewGeneration:") ;
  mProperty_mHasVerticalScroller.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedVerticalViewGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedVerticalViewGeneration (mProperty_mHasVerticalScroller, mProperty_mConfiguratorName, mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computedVerticalViewGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mHasVerticalScroller.printNonNullClassInstanceProperties ("mHasVerticalScroller") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mFuncCallList.printNonNullClassInstanceProperties ("mFuncCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @computedVerticalViewGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration ("computedVerticalViewGeneration",
                                                                                      & kTypeDescriptor_GALGAS_abstractViewGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computedVerticalViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedVerticalViewGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedVerticalViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedVerticalViewGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration GGS_computedVerticalViewGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_computedVerticalViewGeneration result ;
  const GGS_computedVerticalViewGeneration * p = (const GGS_computedVerticalViewGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedVerticalViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedVerticalViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @hStackViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_hStackViewInstructionGeneration::objectCompare (const GGS_hStackViewInstructionGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration::GGS_hStackViewInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_hStackViewInstructionGeneration GGS_hStackViewInstructionGeneration::
init_21__21__21__21_ (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                      const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                      const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                      const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_hStackViewInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_hStackViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->hStackViewInstructionGeneration_init_21__21__21__21_ (in_mFuncCallList, in_mInstructionList, in_mMultipleBindingGenerationList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GGS_hStackViewInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_hStackViewInstructionGeneration::
hStackViewInstructionGeneration_init_21__21__21__21_ (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                      const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                      const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                      const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                      Compiler * /* inCompiler */) {
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration::GGS_hStackViewInstructionGeneration (const cPtr_hStackViewInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_hStackViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration GGS_hStackViewInstructionGeneration::class_func_new (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                                         const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                                         const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                         const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_hStackViewInstructionGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_hStackViewInstructionGeneration (in_mFuncCallList, in_mInstructionList, in_mMultipleBindingGenerationList, in_mNewStackViewDeclarationList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_hStackViewInstructionGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_hStackViewInstructionGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_hStackViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_hStackViewInstructionGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @hStackViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_hStackViewInstructionGeneration::cPtr_hStackViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_hStackViewInstructionGeneration::cPtr_hStackViewInstructionGeneration (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                            const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                            const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                            const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_hStackViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;
}

void cPtr_hStackViewInstructionGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@hStackViewInstructionGeneration:") ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_hStackViewInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_hStackViewInstructionGeneration (mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mMultipleBindingGenerationList, mProperty_mNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_hStackViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFuncCallList.printNonNullClassInstanceProperties ("mFuncCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mMultipleBindingGenerationList.printNonNullClassInstanceProperties ("mMultipleBindingGenerationList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @hStackViewInstructionGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ("hStackViewInstructionGeneration",
                                                                                       & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_hStackViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_hStackViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_hStackViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration GGS_hStackViewInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_hStackViewInstructionGeneration result ;
  const GGS_hStackViewInstructionGeneration * p = (const GGS_hStackViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_hStackViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("hStackViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @vStackViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_vStackViewInstructionGeneration::objectCompare (const GGS_vStackViewInstructionGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration::GGS_vStackViewInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_vStackViewInstructionGeneration GGS_vStackViewInstructionGeneration::
init_21__21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                              const GGS_lstring & in_mConfiguratorName,
                              const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                              const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                              const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                              const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_vStackViewInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_vStackViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->vStackViewInstructionGeneration_init_21__21__21__21__21__21_ (in_mHasVerticalScroller, in_mConfiguratorName, in_mFuncCallList, in_mInstructionList, in_mMultipleBindingGenerationList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GGS_vStackViewInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_vStackViewInstructionGeneration::
vStackViewInstructionGeneration_init_21__21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                                                              const GGS_lstring & in_mConfiguratorName,
                                                              const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                              const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                              const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                              const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                              Compiler * /* inCompiler */) {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration::GGS_vStackViewInstructionGeneration (const cPtr_vStackViewInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_vStackViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration GGS_vStackViewInstructionGeneration::class_func_new (const GGS_bool & in_mHasVerticalScroller,
                                                                                         const GGS_lstring & in_mConfiguratorName,
                                                                                         const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                                         const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                                         const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                         const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_vStackViewInstructionGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_vStackViewInstructionGeneration (in_mHasVerticalScroller, in_mConfiguratorName, in_mFuncCallList, in_mInstructionList, in_mMultipleBindingGenerationList, in_mNewStackViewDeclarationList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_vStackViewInstructionGeneration::readProperty_mHasVerticalScroller (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mHasVerticalScroller ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_vStackViewInstructionGeneration::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_vStackViewInstructionGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_vStackViewInstructionGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_vStackViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_vStackViewInstructionGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @vStackViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_vStackViewInstructionGeneration::cPtr_vStackViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_vStackViewInstructionGeneration::cPtr_vStackViewInstructionGeneration (const GGS_bool & in_mHasVerticalScroller,
                                                                            const GGS_lstring & in_mConfiguratorName,
                                                                            const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                            const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                            const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                            const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_vStackViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ;
}

void cPtr_vStackViewInstructionGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@vStackViewInstructionGeneration:") ;
  mProperty_mHasVerticalScroller.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_vStackViewInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_vStackViewInstructionGeneration (mProperty_mHasVerticalScroller, mProperty_mConfiguratorName, mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mMultipleBindingGenerationList, mProperty_mNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_vStackViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mHasVerticalScroller.printNonNullClassInstanceProperties ("mHasVerticalScroller") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mFuncCallList.printNonNullClassInstanceProperties ("mFuncCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mMultipleBindingGenerationList.printNonNullClassInstanceProperties ("mMultipleBindingGenerationList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @vStackViewInstructionGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ("vStackViewInstructionGeneration",
                                                                                       & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_vStackViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_vStackViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_vStackViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration GGS_vStackViewInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_vStackViewInstructionGeneration result ;
  const GGS_vStackViewInstructionGeneration * p = (const GGS_vStackViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_vStackViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("vStackViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutComputedViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutComputedViewInstructionGeneration::objectCompare (const GGS_autoLayoutComputedViewInstructionGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration::GGS_autoLayoutComputedViewInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration GGS_autoLayoutComputedViewInstructionGeneration::
init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mAutoLayoutViewClassName,
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
                                                  COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutComputedViewInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutComputedViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutComputedViewInstructionGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (in_mAutoLayoutViewClassName, in_mParameterList, in_mFunctionCallList, in_mRegularBindingsGenerationList, in_mMultipleBindingGenerationList, in_mRunBindingGeneration, in_mTableViewBindingGeneration, in_mEBViewGraphicControllerBindingGeneration, in_mConfiguratorName, in_mOutletName, in_mOutletIsArray, inCompiler) ;
  const GGS_autoLayoutComputedViewInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutComputedViewInstructionGeneration::
autoLayoutComputedViewInstructionGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mAutoLayoutViewClassName,
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
                                                                                              Compiler * /* inCompiler */) {
  mProperty_mAutoLayoutViewClassName = in_mAutoLayoutViewClassName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mRunBindingGeneration = in_mRunBindingGeneration ;
  mProperty_mTableViewBindingGeneration = in_mTableViewBindingGeneration ;
  mProperty_mEBViewGraphicControllerBindingGeneration = in_mEBViewGraphicControllerBindingGeneration ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mOutletName = in_mOutletName ;
  mProperty_mOutletIsArray = in_mOutletIsArray ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration::GGS_autoLayoutComputedViewInstructionGeneration (const cPtr_autoLayoutComputedViewInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutComputedViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration GGS_autoLayoutComputedViewInstructionGeneration::class_func_new (const GGS_lstring & in_mAutoLayoutViewClassName,
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
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_autoLayoutComputedViewInstructionGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutComputedViewInstructionGeneration (in_mAutoLayoutViewClassName, in_mParameterList, in_mFunctionCallList, in_mRegularBindingsGenerationList, in_mMultipleBindingGenerationList, in_mRunBindingGeneration, in_mTableViewBindingGeneration, in_mEBViewGraphicControllerBindingGeneration, in_mConfiguratorName, in_mOutletName, in_mOutletIsArray,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mAutoLayoutViewClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mAutoLayoutViewClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationParameterList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutRegularBindingsGenerationList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mRunBindingGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autolayoutRunBindingForGeneration () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mRunBindingGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mTableViewBindingGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mTableViewBindingGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mEBViewGraphicControllerBindingGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewGraphicControllerBindingGeneration () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mEBViewGraphicControllerBindingGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mOutletName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mOutletName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mOutletIsArray (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mOutletIsArray ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutComputedViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutComputedViewInstructionGeneration::cPtr_autoLayoutComputedViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mAutoLayoutViewClassName (),
mProperty_mParameterList (),
mProperty_mFunctionCallList (),
mProperty_mRegularBindingsGenerationList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mRunBindingGeneration (),
mProperty_mTableViewBindingGeneration (),
mProperty_mEBViewGraphicControllerBindingGeneration (),
mProperty_mConfiguratorName (),
mProperty_mOutletName (),
mProperty_mOutletIsArray () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutComputedViewInstructionGeneration::cPtr_autoLayoutComputedViewInstructionGeneration (const GGS_lstring & in_mAutoLayoutViewClassName,
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
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mAutoLayoutViewClassName (),
mProperty_mParameterList (),
mProperty_mFunctionCallList (),
mProperty_mRegularBindingsGenerationList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mRunBindingGeneration (),
mProperty_mTableViewBindingGeneration (),
mProperty_mEBViewGraphicControllerBindingGeneration (),
mProperty_mConfiguratorName (),
mProperty_mOutletName (),
mProperty_mOutletIsArray () {
  mProperty_mAutoLayoutViewClassName = in_mAutoLayoutViewClassName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mRunBindingGeneration = in_mRunBindingGeneration ;
  mProperty_mTableViewBindingGeneration = in_mTableViewBindingGeneration ;
  mProperty_mEBViewGraphicControllerBindingGeneration = in_mEBViewGraphicControllerBindingGeneration ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mOutletName = in_mOutletName ;
  mProperty_mOutletIsArray = in_mOutletIsArray ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutComputedViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;
}

void cPtr_autoLayoutComputedViewInstructionGeneration::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutComputedViewInstructionGeneration:") ;
  mProperty_mAutoLayoutViewClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRunBindingGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewBindingGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEBViewGraphicControllerBindingGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletIsArray.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutComputedViewInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutComputedViewInstructionGeneration (mProperty_mAutoLayoutViewClassName, mProperty_mParameterList, mProperty_mFunctionCallList, mProperty_mRegularBindingsGenerationList, mProperty_mMultipleBindingGenerationList, mProperty_mRunBindingGeneration, mProperty_mTableViewBindingGeneration, mProperty_mEBViewGraphicControllerBindingGeneration, mProperty_mConfiguratorName, mProperty_mOutletName, mProperty_mOutletIsArray, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutComputedViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mAutoLayoutViewClassName.printNonNullClassInstanceProperties ("mAutoLayoutViewClassName") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mRegularBindingsGenerationList.printNonNullClassInstanceProperties ("mRegularBindingsGenerationList") ;
    mProperty_mMultipleBindingGenerationList.printNonNullClassInstanceProperties ("mMultipleBindingGenerationList") ;
    mProperty_mRunBindingGeneration.printNonNullClassInstanceProperties ("mRunBindingGeneration") ;
    mProperty_mTableViewBindingGeneration.printNonNullClassInstanceProperties ("mTableViewBindingGeneration") ;
    mProperty_mEBViewGraphicControllerBindingGeneration.printNonNullClassInstanceProperties ("mEBViewGraphicControllerBindingGeneration") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mOutletName.printNonNullClassInstanceProperties ("mOutletName") ;
    mProperty_mOutletIsArray.printNonNullClassInstanceProperties ("mOutletIsArray") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutComputedViewInstructionGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ("autoLayoutComputedViewInstructionGeneration",
                                                                                                   & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutComputedViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutComputedViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutComputedViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration GGS_autoLayoutComputedViewInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutComputedViewInstructionGeneration result ;
  const GGS_autoLayoutComputedViewInstructionGeneration * p = (const GGS_autoLayoutComputedViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutComputedViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutComputedViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outletClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outletClassDeclarationAST::objectCompare (const GGS_outletClassDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST::GGS_outletClassDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outletClassDeclarationAST GGS_outletClassDeclarationAST::
init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                      const GGS_bool & in_mUserDefined,
                                      const GGS_lstring & in_mSuperClassName,
                                      const GGS_bool & in_mHasRunAction,
                                      const GGS_bool & in_mHasEnabled,
                                      const GGS_bool & in_mHandlesTableValueBinding,
                                      const GGS_bool & in_mHandlesGraphicControllerBinding,
                                      const GGS_bool & in_mHasHidden,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_outletClassDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_outletClassDeclarationAST (inCompiler COMMA_THERE)) ;
  object->outletClassDeclarationAST_init_21__21__21__21__21__21__21__21_ (in_mClassName, in_mUserDefined, in_mSuperClassName, in_mHasRunAction, in_mHasEnabled, in_mHandlesTableValueBinding, in_mHandlesGraphicControllerBinding, in_mHasHidden, inCompiler) ;
  const GGS_outletClassDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::
outletClassDeclarationAST_init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                                const GGS_bool & in_mUserDefined,
                                                                const GGS_lstring & in_mSuperClassName,
                                                                const GGS_bool & in_mHasRunAction,
                                                                const GGS_bool & in_mHasEnabled,
                                                                const GGS_bool & in_mHandlesTableValueBinding,
                                                                const GGS_bool & in_mHandlesGraphicControllerBinding,
                                                                const GGS_bool & in_mHasHidden,
                                                                Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mUserDefined = in_mUserDefined ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mHasRunAction = in_mHasRunAction ;
  mProperty_mHasEnabled = in_mHasEnabled ;
  mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  mProperty_mHandlesGraphicControllerBinding = in_mHandlesGraphicControllerBinding ;
  mProperty_mHasHidden = in_mHasHidden ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST::GGS_outletClassDeclarationAST (const cPtr_outletClassDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outletClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST GGS_outletClassDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                             const GGS_bool & in_mUserDefined,
                                                                             const GGS_lstring & in_mSuperClassName,
                                                                             const GGS_bool & in_mHasRunAction,
                                                                             const GGS_bool & in_mHasEnabled,
                                                                             const GGS_bool & in_mHandlesTableValueBinding,
                                                                             const GGS_bool & in_mHandlesGraphicControllerBinding,
                                                                             const GGS_bool & in_mHasHidden,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_outletClassDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_outletClassDeclarationAST (in_mClassName, in_mUserDefined, in_mSuperClassName, in_mHasRunAction, in_mHasEnabled, in_mHandlesTableValueBinding, in_mHandlesGraphicControllerBinding, in_mHasHidden,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassDeclarationAST::readProperty_mUserDefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mUserDefined ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassDeclarationAST::setProperty_mUserDefined (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mUserDefined = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outletClassDeclarationAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassDeclarationAST::setProperty_mSuperClassName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassDeclarationAST::readProperty_mHasRunAction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHasRunAction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassDeclarationAST::setProperty_mHasRunAction (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasRunAction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassDeclarationAST::readProperty_mHasEnabled (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHasEnabled ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassDeclarationAST::setProperty_mHasEnabled (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasEnabled = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassDeclarationAST::readProperty_mHandlesTableValueBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHandlesTableValueBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassDeclarationAST::setProperty_mHandlesTableValueBinding (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHandlesTableValueBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassDeclarationAST::readProperty_mHandlesGraphicControllerBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHandlesGraphicControllerBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassDeclarationAST::setProperty_mHandlesGraphicControllerBinding (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHandlesGraphicControllerBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassDeclarationAST::readProperty_mHasHidden (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHasHidden ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassDeclarationAST::setProperty_mHasHidden (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasHidden = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outletClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_outletClassDeclarationAST::cPtr_outletClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mUserDefined (),
mProperty_mSuperClassName (),
mProperty_mHasRunAction (),
mProperty_mHasEnabled (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandlesGraphicControllerBinding (),
mProperty_mHasHidden () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outletClassDeclarationAST::cPtr_outletClassDeclarationAST (const GGS_lstring & in_mClassName,
                                                                const GGS_bool & in_mUserDefined,
                                                                const GGS_lstring & in_mSuperClassName,
                                                                const GGS_bool & in_mHasRunAction,
                                                                const GGS_bool & in_mHasEnabled,
                                                                const GGS_bool & in_mHandlesTableValueBinding,
                                                                const GGS_bool & in_mHandlesGraphicControllerBinding,
                                                                const GGS_bool & in_mHasHidden,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mUserDefined (),
mProperty_mSuperClassName (),
mProperty_mHasRunAction (),
mProperty_mHasEnabled (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandlesGraphicControllerBinding (),
mProperty_mHasHidden () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mUserDefined = in_mUserDefined ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mHasRunAction = in_mHasRunAction ;
  mProperty_mHasEnabled = in_mHasEnabled ;
  mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  mProperty_mHandlesGraphicControllerBinding = in_mHandlesGraphicControllerBinding ;
  mProperty_mHasHidden = in_mHasHidden ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outletClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST ;
}

void cPtr_outletClassDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@outletClassDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasRunAction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasEnabled.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlesGraphicControllerBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasHidden.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outletClassDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outletClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outletClassDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mUserDefined.printNonNullClassInstanceProperties ("mUserDefined") ;
    mProperty_mSuperClassName.printNonNullClassInstanceProperties ("mSuperClassName") ;
    mProperty_mHasRunAction.printNonNullClassInstanceProperties ("mHasRunAction") ;
    mProperty_mHasEnabled.printNonNullClassInstanceProperties ("mHasEnabled") ;
    mProperty_mHandlesTableValueBinding.printNonNullClassInstanceProperties ("mHandlesTableValueBinding") ;
    mProperty_mHandlesGraphicControllerBinding.printNonNullClassInstanceProperties ("mHandlesGraphicControllerBinding") ;
    mProperty_mHasHidden.printNonNullClassInstanceProperties ("mHasHidden") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @outletClassDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST ("outletClassDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST GGS_outletClassDeclarationAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_outletClassDeclarationAST result ;
  const GGS_outletClassDeclarationAST * p = (const GGS_outletClassDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computedPropertyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedPropertyDeclarationAST::objectCompare (const GGS_computedPropertyDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST::GGS_computedPropertyDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_computedPropertyDeclarationAST GGS_computedPropertyDeclarationAST::
init_21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                          const GGS_lstring & in_mRootEntityName,
                          const GGS_lstring & in_mComputedPropertyTypeName,
                          const GGS_lstring & in_mComputedPropertyName,
                          const GGS_observablePropertyList & in_mDependencyList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_computedPropertyDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_computedPropertyDeclarationAST (inCompiler COMMA_THERE)) ;
  object->computedPropertyDeclarationAST_init_21__21__21__21__21_ (in_mClassName, in_mRootEntityName, in_mComputedPropertyTypeName, in_mComputedPropertyName, in_mDependencyList, inCompiler) ;
  const GGS_computedPropertyDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::
computedPropertyDeclarationAST_init_21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                         const GGS_lstring & in_mRootEntityName,
                                                         const GGS_lstring & in_mComputedPropertyTypeName,
                                                         const GGS_lstring & in_mComputedPropertyName,
                                                         const GGS_observablePropertyList & in_mDependencyList,
                                                         Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mComputedPropertyTypeName = in_mComputedPropertyTypeName ;
  mProperty_mComputedPropertyName = in_mComputedPropertyName ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST::GGS_computedPropertyDeclarationAST (const cPtr_computedPropertyDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedPropertyDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST GGS_computedPropertyDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                                       const GGS_lstring & in_mRootEntityName,
                                                                                       const GGS_lstring & in_mComputedPropertyTypeName,
                                                                                       const GGS_lstring & in_mComputedPropertyName,
                                                                                       const GGS_observablePropertyList & in_mDependencyList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_computedPropertyDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_computedPropertyDeclarationAST (in_mClassName, in_mRootEntityName, in_mComputedPropertyTypeName, in_mComputedPropertyName, in_mDependencyList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_computedPropertyDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyDeclarationAST::setProperty_mRootEntityName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_computedPropertyDeclarationAST::readProperty_mComputedPropertyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mComputedPropertyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyDeclarationAST::setProperty_mComputedPropertyTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mComputedPropertyTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_computedPropertyDeclarationAST::readProperty_mComputedPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mComputedPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyDeclarationAST::setProperty_mComputedPropertyName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mComputedPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_computedPropertyDeclarationAST::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_observablePropertyList () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyDeclarationAST::setProperty_mDependencyList (const GGS_observablePropertyList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedPropertyDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyDeclarationAST::cPtr_computedPropertyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mComputedPropertyTypeName (),
mProperty_mComputedPropertyName (),
mProperty_mDependencyList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyDeclarationAST::cPtr_computedPropertyDeclarationAST (const GGS_lstring & in_mClassName,
                                                                          const GGS_lstring & in_mRootEntityName,
                                                                          const GGS_lstring & in_mComputedPropertyTypeName,
                                                                          const GGS_lstring & in_mComputedPropertyName,
                                                                          const GGS_observablePropertyList & in_mDependencyList,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mComputedPropertyTypeName (),
mProperty_mComputedPropertyName (),
mProperty_mDependencyList () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mComputedPropertyTypeName = in_mComputedPropertyTypeName ;
  mProperty_mComputedPropertyName = in_mComputedPropertyName ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedPropertyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;
}

void cPtr_computedPropertyDeclarationAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@computedPropertyDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComputedPropertyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComputedPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedPropertyDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedPropertyDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mComputedPropertyTypeName, mProperty_mComputedPropertyName, mProperty_mDependencyList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computedPropertyDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mComputedPropertyTypeName.printNonNullClassInstanceProperties ("mComputedPropertyTypeName") ;
    mProperty_mComputedPropertyName.printNonNullClassInstanceProperties ("mComputedPropertyName") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @computedPropertyDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ("computedPropertyDeclarationAST",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computedPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST GGS_computedPropertyDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_computedPropertyDeclarationAST result ;
  const GGS_computedPropertyDeclarationAST * p = (const GGS_computedPropertyDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedPropertyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computedPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedPropertyGeneration::objectCompare (const GGS_computedPropertyGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration::GGS_computedPropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_computedPropertyGeneration GGS_computedPropertyGeneration::
init_21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                          const GGS_string & in_mClassName,
                          const GGS_typeKind & in_mType,
                          const GGS_transientDependencyListForGeneration & in_mDependencyList,
                          const GGS_bool & in_mGenerate,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_computedPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_computedPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->computedPropertyGeneration_init_21__21__21__21__21_ (in_mPropertyName, in_mClassName, in_mType, in_mDependencyList, in_mGenerate, inCompiler) ;
  const GGS_computedPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyGeneration::
computedPropertyGeneration_init_21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                                                     const GGS_string & in_mClassName,
                                                     const GGS_typeKind & in_mType,
                                                     const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                     const GGS_bool & in_mGenerate,
                                                     Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mType = in_mType ;
  mProperty_mDependencyList = in_mDependencyList ;
  mProperty_mGenerate = in_mGenerate ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration::GGS_computedPropertyGeneration (const cPtr_computedPropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration GGS_computedPropertyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                               const GGS_string & in_mClassName,
                                                                               const GGS_typeKind & in_mType,
                                                                               const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                               const GGS_bool & in_mGenerate,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_computedPropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_computedPropertyGeneration (in_mPropertyName, in_mClassName, in_mType, in_mDependencyList, in_mGenerate,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_computedPropertyGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGeneration::setProperty_mClassName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_computedPropertyGeneration::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGeneration::setProperty_mType (const GGS_typeKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_computedPropertyGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_transientDependencyListForGeneration () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGeneration::setProperty_mDependencyList (const GGS_transientDependencyListForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_computedPropertyGeneration::readProperty_mGenerate (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mGenerate ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGeneration::setProperty_mGenerate (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mGenerate = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyGeneration::cPtr_computedPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mType (),
mProperty_mDependencyList (),
mProperty_mGenerate () {
}

//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyGeneration::cPtr_computedPropertyGeneration (const GGS_string & in_mPropertyName,
                                                                  const GGS_string & in_mClassName,
                                                                  const GGS_typeKind & in_mType,
                                                                  const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                  const GGS_bool & in_mGenerate,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mType (),
mProperty_mDependencyList (),
mProperty_mGenerate () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mType = in_mType ;
  mProperty_mDependencyList = in_mDependencyList ;
  mProperty_mGenerate = in_mGenerate ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration ;
}

void cPtr_computedPropertyGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@computedPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerate.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mGenerate, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computedPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
    mProperty_mGenerate.printNonNullClassInstanceProperties ("mGenerate") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @computedPropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGeneration ("computedPropertyGeneration",
                                                                                  & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computedPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration GGS_computedPropertyGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_computedPropertyGeneration result ;
  const GGS_computedPropertyGeneration * p = (const GGS_computedPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedPropertyGeneration_2E_weak::objectCompare (const GGS_computedPropertyGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak::GGS_computedPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak & GGS_computedPropertyGeneration_2E_weak::operator = (const GGS_computedPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak::GGS_computedPropertyGeneration_2E_weak (const GGS_computedPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak GGS_computedPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_computedPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration GGS_computedPropertyGeneration_2E_weak::bang_computedPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedPropertyGeneration) ;
      result = GGS_computedPropertyGeneration ((cPtr_computedPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @computedPropertyGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGeneration_2E_weak ("computedPropertyGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computedPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak GGS_computedPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_computedPropertyGeneration_2E_weak result ;
  const GGS_computedPropertyGeneration_2E_weak * p = (const GGS_computedPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @transientDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientDeclarationAST::objectCompare (const GGS_transientDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST::GGS_transientDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_transientDeclarationAST GGS_transientDeclarationAST::
init_21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                              const GGS_lstring & in_mRootEntityName,
                              const GGS_lstring & in_mTransientTypeName,
                              const GGS_lstring & in_mTransientName,
                              const GGS_observablePropertyList & in_mDependencyList,
                              const GGS_bool & in_mIsOverriding,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_transientDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_transientDeclarationAST (inCompiler COMMA_THERE)) ;
  object->transientDeclarationAST_init_21__21__21__21__21__21_ (in_mClassName, in_mRootEntityName, in_mTransientTypeName, in_mTransientName, in_mDependencyList, in_mIsOverriding, inCompiler) ;
  const GGS_transientDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::
transientDeclarationAST_init_21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                      const GGS_lstring & in_mRootEntityName,
                                                      const GGS_lstring & in_mTransientTypeName,
                                                      const GGS_lstring & in_mTransientName,
                                                      const GGS_observablePropertyList & in_mDependencyList,
                                                      const GGS_bool & in_mIsOverriding,
                                                      Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mTransientTypeName = in_mTransientTypeName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mDependencyList = in_mDependencyList ;
  mProperty_mIsOverriding = in_mIsOverriding ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST::GGS_transientDeclarationAST (const cPtr_transientDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST GGS_transientDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                         const GGS_lstring & in_mRootEntityName,
                                                                         const GGS_lstring & in_mTransientTypeName,
                                                                         const GGS_lstring & in_mTransientName,
                                                                         const GGS_observablePropertyList & in_mDependencyList,
                                                                         const GGS_bool & in_mIsOverriding,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_transientDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_transientDeclarationAST (in_mClassName, in_mRootEntityName, in_mTransientTypeName, in_mTransientName, in_mDependencyList, in_mIsOverriding,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_transientDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDeclarationAST::setProperty_mRootEntityName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_transientDeclarationAST::readProperty_mTransientTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mTransientTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDeclarationAST::setProperty_mTransientTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mTransientTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_transientDeclarationAST::readProperty_mTransientName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mTransientName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDeclarationAST::setProperty_mTransientName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_transientDeclarationAST::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_observablePropertyList () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDeclarationAST::setProperty_mDependencyList (const GGS_observablePropertyList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_transientDeclarationAST::readProperty_mIsOverriding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mIsOverriding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDeclarationAST::setProperty_mIsOverriding (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mIsOverriding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @transientDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_transientDeclarationAST::cPtr_transientDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mTransientTypeName (),
mProperty_mTransientName (),
mProperty_mDependencyList (),
mProperty_mIsOverriding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_transientDeclarationAST::cPtr_transientDeclarationAST (const GGS_lstring & in_mClassName,
                                                            const GGS_lstring & in_mRootEntityName,
                                                            const GGS_lstring & in_mTransientTypeName,
                                                            const GGS_lstring & in_mTransientName,
                                                            const GGS_observablePropertyList & in_mDependencyList,
                                                            const GGS_bool & in_mIsOverriding,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mTransientTypeName (),
mProperty_mTransientName (),
mProperty_mDependencyList (),
mProperty_mIsOverriding () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mTransientTypeName = in_mTransientTypeName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mDependencyList = in_mDependencyList ;
  mProperty_mIsOverriding = in_mIsOverriding ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_transientDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST ;
}

void cPtr_transientDeclarationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@transientDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsOverriding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_transientDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mTransientTypeName, mProperty_mTransientName, mProperty_mDependencyList, mProperty_mIsOverriding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_transientDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mTransientTypeName.printNonNullClassInstanceProperties ("mTransientTypeName") ;
    mProperty_mTransientName.printNonNullClassInstanceProperties ("mTransientName") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
    mProperty_mIsOverriding.printNonNullClassInstanceProperties ("mIsOverriding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @transientDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDeclarationAST ("transientDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST GGS_transientDeclarationAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_transientDeclarationAST result ;
  const GGS_transientDeclarationAST * p = (const GGS_transientDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @proxyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_proxyDeclarationAST::objectCompare (const GGS_proxyDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST::GGS_proxyDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_proxyDeclarationAST GGS_proxyDeclarationAST::
init_21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                              const GGS_proxyKind & in_mProxyKind,
                              const GGS_lstring & in_mProxyTypeName,
                              const GGS_lstring & in_mProxyName,
                              const GGS_lstring & in_mToOneRelationshipName,
                              const GGS_lstring & in_mPropertyName,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_proxyDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_proxyDeclarationAST (inCompiler COMMA_THERE)) ;
  object->proxyDeclarationAST_init_21__21__21__21__21__21_ (in_mClassName, in_mProxyKind, in_mProxyTypeName, in_mProxyName, in_mToOneRelationshipName, in_mPropertyName, inCompiler) ;
  const GGS_proxyDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::
proxyDeclarationAST_init_21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                  const GGS_proxyKind & in_mProxyKind,
                                                  const GGS_lstring & in_mProxyTypeName,
                                                  const GGS_lstring & in_mProxyName,
                                                  const GGS_lstring & in_mToOneRelationshipName,
                                                  const GGS_lstring & in_mPropertyName,
                                                  Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mProxyKind = in_mProxyKind ;
  mProperty_mProxyTypeName = in_mProxyTypeName ;
  mProperty_mProxyName = in_mProxyName ;
  mProperty_mToOneRelationshipName = in_mToOneRelationshipName ;
  mProperty_mPropertyName = in_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST::GGS_proxyDeclarationAST (const cPtr_proxyDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_proxyDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST GGS_proxyDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                 const GGS_proxyKind & in_mProxyKind,
                                                                 const GGS_lstring & in_mProxyTypeName,
                                                                 const GGS_lstring & in_mProxyName,
                                                                 const GGS_lstring & in_mToOneRelationshipName,
                                                                 const GGS_lstring & in_mPropertyName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_proxyDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_proxyDeclarationAST (in_mClassName, in_mProxyKind, in_mProxyTypeName, in_mProxyName, in_mToOneRelationshipName, in_mPropertyName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyKind GGS_proxyDeclarationAST::readProperty_mProxyKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_proxyKind () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mProxyKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_proxyDeclarationAST::setProperty_mProxyKind (const GGS_proxyKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_proxyDeclarationAST::readProperty_mProxyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mProxyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_proxyDeclarationAST::setProperty_mProxyTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_proxyDeclarationAST::readProperty_mProxyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mProxyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_proxyDeclarationAST::setProperty_mProxyName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_proxyDeclarationAST::readProperty_mToOneRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mToOneRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_proxyDeclarationAST::setProperty_mToOneRelationshipName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mToOneRelationshipName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_proxyDeclarationAST::readProperty_mPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_proxyDeclarationAST::setProperty_mPropertyName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @proxyDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_proxyDeclarationAST::cPtr_proxyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mProxyKind (),
mProperty_mProxyTypeName (),
mProperty_mProxyName (),
mProperty_mToOneRelationshipName (),
mProperty_mPropertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_proxyDeclarationAST::cPtr_proxyDeclarationAST (const GGS_lstring & in_mClassName,
                                                    const GGS_proxyKind & in_mProxyKind,
                                                    const GGS_lstring & in_mProxyTypeName,
                                                    const GGS_lstring & in_mProxyName,
                                                    const GGS_lstring & in_mToOneRelationshipName,
                                                    const GGS_lstring & in_mPropertyName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mProxyKind (),
mProperty_mProxyTypeName (),
mProperty_mProxyName (),
mProperty_mToOneRelationshipName (),
mProperty_mPropertyName () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mProxyKind = in_mProxyKind ;
  mProperty_mProxyTypeName = in_mProxyTypeName ;
  mProperty_mProxyName = in_mProxyName ;
  mProperty_mToOneRelationshipName = in_mToOneRelationshipName ;
  mProperty_mPropertyName = in_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_proxyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

void cPtr_proxyDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@proxyDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mProxyKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mProxyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mProxyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mToOneRelationshipName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_proxyDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_proxyDeclarationAST (mProperty_mClassName, mProperty_mProxyKind, mProperty_mProxyTypeName, mProperty_mProxyName, mProperty_mToOneRelationshipName, mProperty_mPropertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_proxyDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mProxyKind.printNonNullClassInstanceProperties ("mProxyKind") ;
    mProperty_mProxyTypeName.printNonNullClassInstanceProperties ("mProxyTypeName") ;
    mProperty_mProxyName.printNonNullClassInstanceProperties ("mProxyName") ;
    mProperty_mToOneRelationshipName.printNonNullClassInstanceProperties ("mToOneRelationshipName") ;
    mProperty_mPropertyName.printNonNullClassInstanceProperties ("mPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @proxyDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyDeclarationAST ("proxyDeclarationAST",
                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_proxyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_proxyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_proxyDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST GGS_proxyDeclarationAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_proxyDeclarationAST result ;
  const GGS_proxyDeclarationAST * p = (const GGS_proxyDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_proxyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @atomicPropertyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicPropertyDeclarationAST::objectCompare (const GGS_atomicPropertyDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST::GGS_atomicPropertyDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST GGS_atomicPropertyDeclarationAST::
init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                  const GGS_lstring & in_mPropertyTypeName,
                                  const GGS_lstring & in_mPropertyName,
                                  const GGS_abstractDefaultValue & in_mDefaultValue,
                                  const GGS_bool & in_mGenerateResetMethod,
                                  const GGS_bool & in_mGenerateDirectRead,
                                  const GGS_bool & in_mGenerateDirectAccess,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_atomicPropertyDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_atomicPropertyDeclarationAST (inCompiler COMMA_THERE)) ;
  object->atomicPropertyDeclarationAST_init_21__21__21__21__21__21__21_ (in_mClassName, in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue, in_mGenerateResetMethod, in_mGenerateDirectRead, in_mGenerateDirectAccess, inCompiler) ;
  const GGS_atomicPropertyDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::
atomicPropertyDeclarationAST_init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                               const GGS_lstring & in_mPropertyTypeName,
                                                               const GGS_lstring & in_mPropertyName,
                                                               const GGS_abstractDefaultValue & in_mDefaultValue,
                                                               const GGS_bool & in_mGenerateResetMethod,
                                                               const GGS_bool & in_mGenerateDirectRead,
                                                               const GGS_bool & in_mGenerateDirectAccess,
                                                               Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mPropertyTypeName = in_mPropertyTypeName ;
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mDefaultValue = in_mDefaultValue ;
  mProperty_mGenerateResetMethod = in_mGenerateResetMethod ;
  mProperty_mGenerateDirectRead = in_mGenerateDirectRead ;
  mProperty_mGenerateDirectAccess = in_mGenerateDirectAccess ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST::GGS_atomicPropertyDeclarationAST (const cPtr_atomicPropertyDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST GGS_atomicPropertyDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                                   const GGS_lstring & in_mPropertyTypeName,
                                                                                   const GGS_lstring & in_mPropertyName,
                                                                                   const GGS_abstractDefaultValue & in_mDefaultValue,
                                                                                   const GGS_bool & in_mGenerateResetMethod,
                                                                                   const GGS_bool & in_mGenerateDirectRead,
                                                                                   const GGS_bool & in_mGenerateDirectAccess,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_atomicPropertyDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_atomicPropertyDeclarationAST (in_mClassName, in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue, in_mGenerateResetMethod, in_mGenerateDirectRead, in_mGenerateDirectAccess,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_atomicPropertyDeclarationAST::readProperty_mPropertyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mPropertyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyDeclarationAST::setProperty_mPropertyTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mPropertyTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_atomicPropertyDeclarationAST::readProperty_mPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyDeclarationAST::setProperty_mPropertyName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue GGS_atomicPropertyDeclarationAST::readProperty_mDefaultValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractDefaultValue () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mDefaultValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyDeclarationAST::setProperty_mDefaultValue (const GGS_abstractDefaultValue & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mDefaultValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyDeclarationAST::readProperty_mGenerateResetMethod (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mGenerateResetMethod ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyDeclarationAST::setProperty_mGenerateResetMethod (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mGenerateResetMethod = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyDeclarationAST::readProperty_mGenerateDirectRead (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mGenerateDirectRead ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyDeclarationAST::readProperty_mGenerateDirectAccess (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mGenerateDirectAccess ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @atomicPropertyDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_atomicPropertyDeclarationAST::cPtr_atomicPropertyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPropertyTypeName (),
mProperty_mPropertyName (),
mProperty_mDefaultValue (),
mProperty_mGenerateResetMethod (),
mProperty_mGenerateDirectRead (),
mProperty_mGenerateDirectAccess () {
}

//--------------------------------------------------------------------------------------------------

cPtr_atomicPropertyDeclarationAST::cPtr_atomicPropertyDeclarationAST (const GGS_lstring & in_mClassName,
                                                                      const GGS_lstring & in_mPropertyTypeName,
                                                                      const GGS_lstring & in_mPropertyName,
                                                                      const GGS_abstractDefaultValue & in_mDefaultValue,
                                                                      const GGS_bool & in_mGenerateResetMethod,
                                                                      const GGS_bool & in_mGenerateDirectRead,
                                                                      const GGS_bool & in_mGenerateDirectAccess,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mPropertyTypeName (),
mProperty_mPropertyName (),
mProperty_mDefaultValue (),
mProperty_mGenerateResetMethod (),
mProperty_mGenerateDirectRead (),
mProperty_mGenerateDirectAccess () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mPropertyTypeName = in_mPropertyTypeName ;
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mDefaultValue = in_mDefaultValue ;
  mProperty_mGenerateResetMethod = in_mGenerateResetMethod ;
  mProperty_mGenerateDirectRead = in_mGenerateDirectRead ;
  mProperty_mGenerateDirectAccess = in_mGenerateDirectAccess ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicPropertyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

void cPtr_atomicPropertyDeclarationAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@atomicPropertyDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateResetMethod.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateDirectRead.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateDirectAccess.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicPropertyDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_atomicPropertyDeclarationAST (mProperty_mClassName, mProperty_mPropertyTypeName, mProperty_mPropertyName, mProperty_mDefaultValue, mProperty_mGenerateResetMethod, mProperty_mGenerateDirectRead, mProperty_mGenerateDirectAccess, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_atomicPropertyDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPropertyTypeName.printNonNullClassInstanceProperties ("mPropertyTypeName") ;
    mProperty_mPropertyName.printNonNullClassInstanceProperties ("mPropertyName") ;
    mProperty_mDefaultValue.printNonNullClassInstanceProperties ("mDefaultValue") ;
    mProperty_mGenerateResetMethod.printNonNullClassInstanceProperties ("mGenerateResetMethod") ;
    mProperty_mGenerateDirectRead.printNonNullClassInstanceProperties ("mGenerateDirectRead") ;
    mProperty_mGenerateDirectAccess.printNonNullClassInstanceProperties ("mGenerateDirectAccess") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @atomicPropertyDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ("atomicPropertyDeclarationAST",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_atomicPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST GGS_atomicPropertyDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_atomicPropertyDeclarationAST result ;
  const GGS_atomicPropertyDeclarationAST * p = (const GGS_atomicPropertyDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicPropertyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @toOneRelationshipAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toOneRelationshipAST::objectCompare (const GGS_toOneRelationshipAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST::GGS_toOneRelationshipAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_toOneRelationshipAST GGS_toOneRelationshipAST::
init_21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                              const GGS_lstring & in_mDestinationEntityName,
                              const GGS_lstring & in_mToOneRelationshipName,
                              const GGS_toOneOppositeRelationship & in_mOpposite,
                              const GGS_bool & in_mUsedForSignature,
                              const GGS_bool & in_mWeak,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_toOneRelationshipAST * object = nullptr ;
  macroMyNew (object, cPtr_toOneRelationshipAST (inCompiler COMMA_THERE)) ;
  object->toOneRelationshipAST_init_21__21__21__21__21__21_ (in_mClassName, in_mDestinationEntityName, in_mToOneRelationshipName, in_mOpposite, in_mUsedForSignature, in_mWeak, inCompiler) ;
  const GGS_toOneRelationshipAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::
toOneRelationshipAST_init_21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                   const GGS_lstring & in_mDestinationEntityName,
                                                   const GGS_lstring & in_mToOneRelationshipName,
                                                   const GGS_toOneOppositeRelationship & in_mOpposite,
                                                   const GGS_bool & in_mUsedForSignature,
                                                   const GGS_bool & in_mWeak,
                                                   Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDestinationEntityName = in_mDestinationEntityName ;
  mProperty_mToOneRelationshipName = in_mToOneRelationshipName ;
  mProperty_mOpposite = in_mOpposite ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mWeak = in_mWeak ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST::GGS_toOneRelationshipAST (const cPtr_toOneRelationshipAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOneRelationshipAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST GGS_toOneRelationshipAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                   const GGS_lstring & in_mDestinationEntityName,
                                                                   const GGS_lstring & in_mToOneRelationshipName,
                                                                   const GGS_toOneOppositeRelationship & in_mOpposite,
                                                                   const GGS_bool & in_mUsedForSignature,
                                                                   const GGS_bool & in_mWeak,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_toOneRelationshipAST result ;
  macroMyNew (result.mObjectPtr, cPtr_toOneRelationshipAST (in_mClassName, in_mDestinationEntityName, in_mToOneRelationshipName, in_mOpposite, in_mUsedForSignature, in_mWeak,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_toOneRelationshipAST::readProperty_mDestinationEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mDestinationEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneRelationshipAST::setProperty_mDestinationEntityName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mDestinationEntityName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_toOneRelationshipAST::readProperty_mToOneRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mToOneRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneRelationshipAST::setProperty_mToOneRelationshipName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mToOneRelationshipName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship GGS_toOneRelationshipAST::readProperty_mOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_toOneOppositeRelationship () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneRelationshipAST::setProperty_mOpposite (const GGS_toOneOppositeRelationship & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mOpposite = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toOneRelationshipAST::readProperty_mUsedForSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneRelationshipAST::setProperty_mUsedForSignature (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mUsedForSignature = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toOneRelationshipAST::readProperty_mWeak (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mWeak ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneRelationshipAST::setProperty_mWeak (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mWeak = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toOneRelationshipAST class
//--------------------------------------------------------------------------------------------------

cPtr_toOneRelationshipAST::cPtr_toOneRelationshipAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDestinationEntityName (),
mProperty_mToOneRelationshipName (),
mProperty_mOpposite (),
mProperty_mUsedForSignature (),
mProperty_mWeak () {
}

//--------------------------------------------------------------------------------------------------

cPtr_toOneRelationshipAST::cPtr_toOneRelationshipAST (const GGS_lstring & in_mClassName,
                                                      const GGS_lstring & in_mDestinationEntityName,
                                                      const GGS_lstring & in_mToOneRelationshipName,
                                                      const GGS_toOneOppositeRelationship & in_mOpposite,
                                                      const GGS_bool & in_mUsedForSignature,
                                                      const GGS_bool & in_mWeak,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mDestinationEntityName (),
mProperty_mToOneRelationshipName (),
mProperty_mOpposite (),
mProperty_mUsedForSignature (),
mProperty_mWeak () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDestinationEntityName = in_mDestinationEntityName ;
  mProperty_mToOneRelationshipName = in_mToOneRelationshipName ;
  mProperty_mOpposite = in_mOpposite ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mWeak = in_mWeak ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toOneRelationshipAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

void cPtr_toOneRelationshipAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@toOneRelationshipAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDestinationEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mToOneRelationshipName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOpposite.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWeak.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toOneRelationshipAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toOneRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToOneRelationshipName, mProperty_mOpposite, mProperty_mUsedForSignature, mProperty_mWeak, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_toOneRelationshipAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDestinationEntityName.printNonNullClassInstanceProperties ("mDestinationEntityName") ;
    mProperty_mToOneRelationshipName.printNonNullClassInstanceProperties ("mToOneRelationshipName") ;
    mProperty_mOpposite.printNonNullClassInstanceProperties ("mOpposite") ;
    mProperty_mUsedForSignature.printNonNullClassInstanceProperties ("mUsedForSignature") ;
    mProperty_mWeak.printNonNullClassInstanceProperties ("mWeak") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @toOneRelationshipAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipAST ("toOneRelationshipAST",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toOneRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOneRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOneRelationshipAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST GGS_toOneRelationshipAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_toOneRelationshipAST result ;
  const GGS_toOneRelationshipAST * p = (const GGS_toOneRelationshipAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOneRelationshipAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @toOnePropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toOnePropertyGeneration::objectCompare (const GGS_toOnePropertyGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration::GGS_toOnePropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_toOnePropertyGeneration GGS_toOnePropertyGeneration::
init_21__21__21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                                  const GGS_string & in_mClassName,
                                  const GGS_propertyKind & in_mRelationshipType,
                                  const GGS_toOneOppositeRelationship & in_mOpposite,
                                  const GGS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                  const GGS_bool & in_mUsedForSignature,
                                  const GGS_bool & in_mStrongRef,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_toOnePropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_toOnePropertyGeneration (inCompiler COMMA_THERE)) ;
  object->toOnePropertyGeneration_init_21__21__21__21__21__21__21_ (in_mPropertyName, in_mClassName, in_mRelationshipType, in_mOpposite, in_mDestinationEntityObservablePropertyMap, in_mUsedForSignature, in_mStrongRef, inCompiler) ;
  const GGS_toOnePropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_toOnePropertyGeneration::
toOnePropertyGeneration_init_21__21__21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                                                          const GGS_string & in_mClassName,
                                                          const GGS_propertyKind & in_mRelationshipType,
                                                          const GGS_toOneOppositeRelationship & in_mOpposite,
                                                          const GGS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                                          const GGS_bool & in_mUsedForSignature,
                                                          const GGS_bool & in_mStrongRef,
                                                          Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mRelationshipType = in_mRelationshipType ;
  mProperty_mOpposite = in_mOpposite ;
  mProperty_mDestinationEntityObservablePropertyMap = in_mDestinationEntityObservablePropertyMap ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mStrongRef = in_mStrongRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration::GGS_toOnePropertyGeneration (const cPtr_toOnePropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOnePropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration GGS_toOnePropertyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                         const GGS_string & in_mClassName,
                                                                         const GGS_propertyKind & in_mRelationshipType,
                                                                         const GGS_toOneOppositeRelationship & in_mOpposite,
                                                                         const GGS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                         const GGS_bool & in_mUsedForSignature,
                                                                         const GGS_bool & in_mStrongRef,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_toOnePropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_toOnePropertyGeneration (in_mPropertyName, in_mClassName, in_mRelationshipType, in_mOpposite, in_mDestinationEntityObservablePropertyMap, in_mUsedForSignature, in_mStrongRef,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_toOnePropertyGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_toOnePropertyGeneration::readProperty_mRelationshipType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyKind () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mRelationshipType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship GGS_toOnePropertyGeneration::readProperty_mOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_toOneOppositeRelationship () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_toOnePropertyGeneration::readProperty_mDestinationEntityObservablePropertyMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyMap () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mDestinationEntityObservablePropertyMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toOnePropertyGeneration::readProperty_mUsedForSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toOnePropertyGeneration::readProperty_mStrongRef (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mStrongRef ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toOnePropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_toOnePropertyGeneration::cPtr_toOnePropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mRelationshipType (),
mProperty_mOpposite (),
mProperty_mDestinationEntityObservablePropertyMap (),
mProperty_mUsedForSignature (),
mProperty_mStrongRef () {
}

//--------------------------------------------------------------------------------------------------

cPtr_toOnePropertyGeneration::cPtr_toOnePropertyGeneration (const GGS_string & in_mPropertyName,
                                                            const GGS_string & in_mClassName,
                                                            const GGS_propertyKind & in_mRelationshipType,
                                                            const GGS_toOneOppositeRelationship & in_mOpposite,
                                                            const GGS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                                            const GGS_bool & in_mUsedForSignature,
                                                            const GGS_bool & in_mStrongRef,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mRelationshipType (),
mProperty_mOpposite (),
mProperty_mDestinationEntityObservablePropertyMap (),
mProperty_mUsedForSignature (),
mProperty_mStrongRef () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mRelationshipType = in_mRelationshipType ;
  mProperty_mOpposite = in_mOpposite ;
  mProperty_mDestinationEntityObservablePropertyMap = in_mDestinationEntityObservablePropertyMap ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mStrongRef = in_mStrongRef ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toOnePropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

void cPtr_toOnePropertyGeneration::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@toOnePropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRelationshipType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOpposite.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStrongRef.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toOnePropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toOnePropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mRelationshipType, mProperty_mOpposite, mProperty_mDestinationEntityObservablePropertyMap, mProperty_mUsedForSignature, mProperty_mStrongRef, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_toOnePropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mRelationshipType.printNonNullClassInstanceProperties ("mRelationshipType") ;
    mProperty_mOpposite.printNonNullClassInstanceProperties ("mOpposite") ;
    mProperty_mDestinationEntityObservablePropertyMap.printNonNullClassInstanceProperties ("mDestinationEntityObservablePropertyMap") ;
    mProperty_mUsedForSignature.printNonNullClassInstanceProperties ("mUsedForSignature") ;
    mProperty_mStrongRef.printNonNullClassInstanceProperties ("mStrongRef") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @toOnePropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration ("toOnePropertyGeneration",
                                                                               & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toOnePropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOnePropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOnePropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration GGS_toOnePropertyGeneration::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_toOnePropertyGeneration result ;
  const GGS_toOnePropertyGeneration * p = (const GGS_toOnePropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOnePropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @toManyRelationshipAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toManyRelationshipAST::objectCompare (const GGS_toManyRelationshipAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST::GGS_toManyRelationshipAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_toManyRelationshipAST GGS_toManyRelationshipAST::
init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                      const GGS_lstring & in_mDestinationEntityName,
                                      const GGS_lstring & in_mToManyRelationshipName,
                                      const GGS_toManyRelationshipOptionAST & in_mOption,
                                      const GGS_bool & in_mCustomStore,
                                      const GGS_bool & in_mUsedForSignature,
                                      const GGS_bool & in_mGenerateDirectAccess,
                                      const GGS_bool & in_mGenerateDirectRead,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_toManyRelationshipAST * object = nullptr ;
  macroMyNew (object, cPtr_toManyRelationshipAST (inCompiler COMMA_THERE)) ;
  object->toManyRelationshipAST_init_21__21__21__21__21__21__21__21_ (in_mClassName, in_mDestinationEntityName, in_mToManyRelationshipName, in_mOption, in_mCustomStore, in_mUsedForSignature, in_mGenerateDirectAccess, in_mGenerateDirectRead, inCompiler) ;
  const GGS_toManyRelationshipAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::
toManyRelationshipAST_init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                            const GGS_lstring & in_mDestinationEntityName,
                                                            const GGS_lstring & in_mToManyRelationshipName,
                                                            const GGS_toManyRelationshipOptionAST & in_mOption,
                                                            const GGS_bool & in_mCustomStore,
                                                            const GGS_bool & in_mUsedForSignature,
                                                            const GGS_bool & in_mGenerateDirectAccess,
                                                            const GGS_bool & in_mGenerateDirectRead,
                                                            Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDestinationEntityName = in_mDestinationEntityName ;
  mProperty_mToManyRelationshipName = in_mToManyRelationshipName ;
  mProperty_mOption = in_mOption ;
  mProperty_mCustomStore = in_mCustomStore ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mGenerateDirectAccess = in_mGenerateDirectAccess ;
  mProperty_mGenerateDirectRead = in_mGenerateDirectRead ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST::GGS_toManyRelationshipAST (const cPtr_toManyRelationshipAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyRelationshipAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST GGS_toManyRelationshipAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                     const GGS_lstring & in_mDestinationEntityName,
                                                                     const GGS_lstring & in_mToManyRelationshipName,
                                                                     const GGS_toManyRelationshipOptionAST & in_mOption,
                                                                     const GGS_bool & in_mCustomStore,
                                                                     const GGS_bool & in_mUsedForSignature,
                                                                     const GGS_bool & in_mGenerateDirectAccess,
                                                                     const GGS_bool & in_mGenerateDirectRead,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipAST result ;
  macroMyNew (result.mObjectPtr, cPtr_toManyRelationshipAST (in_mClassName, in_mDestinationEntityName, in_mToManyRelationshipName, in_mOption, in_mCustomStore, in_mUsedForSignature, in_mGenerateDirectAccess, in_mGenerateDirectRead,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_toManyRelationshipAST::readProperty_mDestinationEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mDestinationEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_toManyRelationshipAST::readProperty_mToManyRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mToManyRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST GGS_toManyRelationshipAST::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_toManyRelationshipOptionAST () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipAST::readProperty_mCustomStore (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mCustomStore ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipAST::readProperty_mUsedForSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipAST::readProperty_mGenerateDirectAccess (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mGenerateDirectAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipAST::readProperty_mGenerateDirectRead (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mGenerateDirectRead ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toManyRelationshipAST class
//--------------------------------------------------------------------------------------------------

cPtr_toManyRelationshipAST::cPtr_toManyRelationshipAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDestinationEntityName (),
mProperty_mToManyRelationshipName (),
mProperty_mOption (),
mProperty_mCustomStore (),
mProperty_mUsedForSignature (),
mProperty_mGenerateDirectAccess (),
mProperty_mGenerateDirectRead () {
}

//--------------------------------------------------------------------------------------------------

cPtr_toManyRelationshipAST::cPtr_toManyRelationshipAST (const GGS_lstring & in_mClassName,
                                                        const GGS_lstring & in_mDestinationEntityName,
                                                        const GGS_lstring & in_mToManyRelationshipName,
                                                        const GGS_toManyRelationshipOptionAST & in_mOption,
                                                        const GGS_bool & in_mCustomStore,
                                                        const GGS_bool & in_mUsedForSignature,
                                                        const GGS_bool & in_mGenerateDirectAccess,
                                                        const GGS_bool & in_mGenerateDirectRead,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mDestinationEntityName (),
mProperty_mToManyRelationshipName (),
mProperty_mOption (),
mProperty_mCustomStore (),
mProperty_mUsedForSignature (),
mProperty_mGenerateDirectAccess (),
mProperty_mGenerateDirectRead () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDestinationEntityName = in_mDestinationEntityName ;
  mProperty_mToManyRelationshipName = in_mToManyRelationshipName ;
  mProperty_mOption = in_mOption ;
  mProperty_mCustomStore = in_mCustomStore ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mGenerateDirectAccess = in_mGenerateDirectAccess ;
  mProperty_mGenerateDirectRead = in_mGenerateDirectRead ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toManyRelationshipAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

void cPtr_toManyRelationshipAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@toManyRelationshipAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDestinationEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mToManyRelationshipName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCustomStore.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateDirectAccess.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateDirectRead.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toManyRelationshipAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toManyRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToManyRelationshipName, mProperty_mOption, mProperty_mCustomStore, mProperty_mUsedForSignature, mProperty_mGenerateDirectAccess, mProperty_mGenerateDirectRead, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_toManyRelationshipAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDestinationEntityName.printNonNullClassInstanceProperties ("mDestinationEntityName") ;
    mProperty_mToManyRelationshipName.printNonNullClassInstanceProperties ("mToManyRelationshipName") ;
    mProperty_mOption.printNonNullClassInstanceProperties ("mOption") ;
    mProperty_mCustomStore.printNonNullClassInstanceProperties ("mCustomStore") ;
    mProperty_mUsedForSignature.printNonNullClassInstanceProperties ("mUsedForSignature") ;
    mProperty_mGenerateDirectAccess.printNonNullClassInstanceProperties ("mGenerateDirectAccess") ;
    mProperty_mGenerateDirectRead.printNonNullClassInstanceProperties ("mGenerateDirectRead") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @toManyRelationshipAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipAST ("toManyRelationshipAST",
                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST GGS_toManyRelationshipAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipAST result ;
  const GGS_toManyRelationshipAST * p = (const GGS_toManyRelationshipAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalIntMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalIntMultipleBindingExpressionAST::objectCompare (const GGS_literalIntMultipleBindingExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST::GGS_literalIntMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST GGS_literalIntMultipleBindingExpressionAST::
init_21_ (const GGS_luint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalIntMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalIntMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalIntMultipleBindingExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_literalIntMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::
literalIntMultipleBindingExpressionAST_init_21_ (const GGS_luint & in_mValue,
                                                 Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST::GGS_literalIntMultipleBindingExpressionAST (const cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST GGS_literalIntMultipleBindingExpressionAST::class_func_new (const GGS_luint & in_mValue,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_literalIntMultipleBindingExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalIntMultipleBindingExpressionAST (in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_literalIntMultipleBindingExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_literalIntMultipleBindingExpressionAST * p = (cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_literalIntMultipleBindingExpressionAST::setProperty_mValue (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalIntMultipleBindingExpressionAST * p = (cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalIntMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalIntMultipleBindingExpressionAST::cPtr_literalIntMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalIntMultipleBindingExpressionAST::cPtr_literalIntMultipleBindingExpressionAST (const GGS_luint & in_mValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalIntMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

void cPtr_literalIntMultipleBindingExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@literalIntMultipleBindingExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalIntMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalIntMultipleBindingExpressionAST (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalIntMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @literalIntMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ("literalIntMultipleBindingExpressionAST",
                                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_literalIntMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalIntMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalIntMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST GGS_literalIntMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_literalIntMultipleBindingExpressionAST result ;
  const GGS_literalIntMultipleBindingExpressionAST * p = (const GGS_literalIntMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalIntMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerDeclarationAST::objectCompare (const GGS_arrayControllerDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST::GGS_arrayControllerDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayControllerDeclarationAST GGS_arrayControllerDeclarationAST::
init_21__21__21__21_ (const GGS_lstring & in_mClassName,
                      const GGS_lstring & in_mControllerName,
                      const GGS_arrayControllerBoundModelAST & in_mModel,
                      const GGS_lstring & in_mToManyPropertyName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_arrayControllerDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_arrayControllerDeclarationAST (inCompiler COMMA_THERE)) ;
  object->arrayControllerDeclarationAST_init_21__21__21__21_ (in_mClassName, in_mControllerName, in_mModel, in_mToManyPropertyName, inCompiler) ;
  const GGS_arrayControllerDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::
arrayControllerDeclarationAST_init_21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                    const GGS_lstring & in_mControllerName,
                                                    const GGS_arrayControllerBoundModelAST & in_mModel,
                                                    const GGS_lstring & in_mToManyPropertyName,
                                                    Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModel = in_mModel ;
  mProperty_mToManyPropertyName = in_mToManyPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST::GGS_arrayControllerDeclarationAST (const cPtr_arrayControllerDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST GGS_arrayControllerDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                                     const GGS_lstring & in_mControllerName,
                                                                                     const GGS_arrayControllerBoundModelAST & in_mModel,
                                                                                     const GGS_lstring & in_mToManyPropertyName,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_arrayControllerDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_arrayControllerDeclarationAST (in_mClassName, in_mControllerName, in_mModel, in_mToManyPropertyName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayControllerDeclarationAST::readProperty_mControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    return p->mProperty_mControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerDeclarationAST::setProperty_mControllerName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST GGS_arrayControllerDeclarationAST::readProperty_mModel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_arrayControllerBoundModelAST () ;
  }else{
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    return p->mProperty_mModel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerDeclarationAST::setProperty_mModel (const GGS_arrayControllerBoundModelAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mModel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayControllerDeclarationAST::readProperty_mToManyPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    return p->mProperty_mToManyPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerDeclarationAST::setProperty_mToManyPropertyName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mToManyPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerDeclarationAST::cPtr_arrayControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mControllerName (),
mProperty_mModel (),
mProperty_mToManyPropertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerDeclarationAST::cPtr_arrayControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                                        const GGS_lstring & in_mControllerName,
                                                                        const GGS_arrayControllerBoundModelAST & in_mModel,
                                                                        const GGS_lstring & in_mToManyPropertyName,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mControllerName (),
mProperty_mModel (),
mProperty_mToManyPropertyName () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModel = in_mModel ;
  mProperty_mToManyPropertyName = in_mToManyPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;
}

void cPtr_arrayControllerDeclarationAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayControllerDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mToManyPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayControllerDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mModel, mProperty_mToManyPropertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayControllerDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mControllerName.printNonNullClassInstanceProperties ("mControllerName") ;
    mProperty_mModel.printNonNullClassInstanceProperties ("mModel") ;
    mProperty_mToManyPropertyName.printNonNullClassInstanceProperties ("mToManyPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ("arrayControllerDeclarationAST",
                                                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST GGS_arrayControllerDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_arrayControllerDeclarationAST result ;
  const GGS_arrayControllerDeclarationAST * p = (const GGS_arrayControllerDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayControllerGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerGeneration::objectCompare (const GGS_arrayControllerGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration::GGS_arrayControllerGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayControllerGeneration GGS_arrayControllerGeneration::
init_21__21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                              const GGS_lstring & in_mControllerName,
                              const GGS_string & in_mModelTypeName,
                              const GGS_arrayControllerModelKind & in_mArrayControllerModelKind,
                              const GGS_string & in_mElementTypeName,
                              const GGS_bool & in_mElementTypeIsGraphic,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_arrayControllerGeneration * object = nullptr ;
  macroMyNew (object, cPtr_arrayControllerGeneration (inCompiler COMMA_THERE)) ;
  object->arrayControllerGeneration_init_21__21__21__21__21__21_ (in_mOwnerName, in_mControllerName, in_mModelTypeName, in_mArrayControllerModelKind, in_mElementTypeName, in_mElementTypeIsGraphic, inCompiler) ;
  const GGS_arrayControllerGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::
arrayControllerGeneration_init_21__21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                                                        const GGS_lstring & in_mControllerName,
                                                        const GGS_string & in_mModelTypeName,
                                                        const GGS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                        const GGS_string & in_mElementTypeName,
                                                        const GGS_bool & in_mElementTypeIsGraphic,
                                                        Compiler * /* inCompiler */) {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModelTypeName = in_mModelTypeName ;
  mProperty_mArrayControllerModelKind = in_mArrayControllerModelKind ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mElementTypeIsGraphic = in_mElementTypeIsGraphic ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration::GGS_arrayControllerGeneration (const cPtr_arrayControllerGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration GGS_arrayControllerGeneration::class_func_new (const GGS_string & in_mOwnerName,
                                                                             const GGS_lstring & in_mControllerName,
                                                                             const GGS_string & in_mModelTypeName,
                                                                             const GGS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                                             const GGS_string & in_mElementTypeName,
                                                                             const GGS_bool & in_mElementTypeIsGraphic,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_arrayControllerGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_arrayControllerGeneration (in_mOwnerName, in_mControllerName, in_mModelTypeName, in_mArrayControllerModelKind, in_mElementTypeName, in_mElementTypeIsGraphic,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_arrayControllerGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerGeneration::setProperty_mOwnerName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayControllerGeneration::readProperty_mControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerGeneration::setProperty_mControllerName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_arrayControllerGeneration::readProperty_mModelTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mModelTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerGeneration::setProperty_mModelTypeName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mModelTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerModelKind GGS_arrayControllerGeneration::readProperty_mArrayControllerModelKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_arrayControllerModelKind () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mArrayControllerModelKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerGeneration::setProperty_mArrayControllerModelKind (const GGS_arrayControllerModelKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mArrayControllerModelKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_arrayControllerGeneration::readProperty_mElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerGeneration::setProperty_mElementTypeName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerGeneration::readProperty_mElementTypeIsGraphic (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mElementTypeIsGraphic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerGeneration::setProperty_mElementTypeIsGraphic (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mElementTypeIsGraphic = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerGeneration::cPtr_arrayControllerGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mControllerName (),
mProperty_mModelTypeName (),
mProperty_mArrayControllerModelKind (),
mProperty_mElementTypeName (),
mProperty_mElementTypeIsGraphic () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerGeneration::cPtr_arrayControllerGeneration (const GGS_string & in_mOwnerName,
                                                                const GGS_lstring & in_mControllerName,
                                                                const GGS_string & in_mModelTypeName,
                                                                const GGS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                                const GGS_string & in_mElementTypeName,
                                                                const GGS_bool & in_mElementTypeIsGraphic,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mControllerName (),
mProperty_mModelTypeName (),
mProperty_mArrayControllerModelKind (),
mProperty_mElementTypeName (),
mProperty_mElementTypeIsGraphic () {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModelTypeName = in_mModelTypeName ;
  mProperty_mArrayControllerModelKind = in_mArrayControllerModelKind ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mElementTypeIsGraphic = in_mElementTypeIsGraphic ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayControllerGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration ;
}

void cPtr_arrayControllerGeneration::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayControllerGeneration:") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArrayControllerModelKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeIsGraphic.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayControllerGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mModelTypeName, mProperty_mArrayControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayControllerGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
    mProperty_mControllerName.printNonNullClassInstanceProperties ("mControllerName") ;
    mProperty_mModelTypeName.printNonNullClassInstanceProperties ("mModelTypeName") ;
    mProperty_mArrayControllerModelKind.printNonNullClassInstanceProperties ("mArrayControllerModelKind") ;
    mProperty_mElementTypeName.printNonNullClassInstanceProperties ("mElementTypeName") ;
    mProperty_mElementTypeIsGraphic.printNonNullClassInstanceProperties ("mElementTypeIsGraphic") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerGeneration ("arrayControllerGeneration",
                                                                                 & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration GGS_arrayControllerGeneration::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_arrayControllerGeneration result ;
  const GGS_arrayControllerGeneration * p = (const GGS_arrayControllerGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutTableViewControllerDeclarationAST::objectCompare (const GGS_autoLayoutTableViewControllerDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST::GGS_autoLayoutTableViewControllerDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST GGS_autoLayoutTableViewControllerDeclarationAST::
init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                  const GGS_lstring & in_mControllerName,
                                  const GGS_bool & in_mIsRoot,
                                  const GGS_lstring & in_mRootEntityName,
                                  const GGS_lstring & in_mToManyPropertyName,
                                  const GGS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                  const GGS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutTableViewControllerDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutTableViewControllerDeclarationAST (inCompiler COMMA_THERE)) ;
  object->autoLayoutTableViewControllerDeclarationAST_init_21__21__21__21__21__21__21_ (in_mClassName, in_mControllerName, in_mIsRoot, in_mRootEntityName, in_mToManyPropertyName, in_mTableViewControllerBoundColumnListAST, in_mTableViewControllerAttributListAST, inCompiler) ;
  const GGS_autoLayoutTableViewControllerDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::
autoLayoutTableViewControllerDeclarationAST_init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                                              const GGS_lstring & in_mControllerName,
                                                                              const GGS_bool & in_mIsRoot,
                                                                              const GGS_lstring & in_mRootEntityName,
                                                                              const GGS_lstring & in_mToManyPropertyName,
                                                                              const GGS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                              const GGS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mIsRoot = in_mIsRoot ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mToManyPropertyName = in_mToManyPropertyName ;
  mProperty_mTableViewControllerBoundColumnListAST = in_mTableViewControllerBoundColumnListAST ;
  mProperty_mTableViewControllerAttributListAST = in_mTableViewControllerAttributListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST::GGS_autoLayoutTableViewControllerDeclarationAST (const cPtr_autoLayoutTableViewControllerDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST GGS_autoLayoutTableViewControllerDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                                                                 const GGS_lstring & in_mControllerName,
                                                                                                                 const GGS_bool & in_mIsRoot,
                                                                                                                 const GGS_lstring & in_mRootEntityName,
                                                                                                                 const GGS_lstring & in_mToManyPropertyName,
                                                                                                                 const GGS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                                                                 const GGS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerDeclarationAST (in_mClassName, in_mControllerName, in_mIsRoot, in_mRootEntityName, in_mToManyPropertyName, in_mTableViewControllerBoundColumnListAST, in_mTableViewControllerAttributListAST,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutTableViewControllerDeclarationAST::readProperty_mControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutTableViewControllerDeclarationAST::readProperty_mIsRoot (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mIsRoot ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutTableViewControllerDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutTableViewControllerDeclarationAST::readProperty_mToManyPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mToManyPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerDeclarationAST::readProperty_mTableViewControllerBoundColumnListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutTableViewControllerBoundColumnListAST () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mTableViewControllerBoundColumnListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerDeclarationAST::readProperty_mTableViewControllerAttributListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutTableViewControllerAttributListAST () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mTableViewControllerAttributListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerDeclarationAST::cPtr_autoLayoutTableViewControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mControllerName (),
mProperty_mIsRoot (),
mProperty_mRootEntityName (),
mProperty_mToManyPropertyName (),
mProperty_mTableViewControllerBoundColumnListAST (),
mProperty_mTableViewControllerAttributListAST () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerDeclarationAST::cPtr_autoLayoutTableViewControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                                                                    const GGS_lstring & in_mControllerName,
                                                                                                    const GGS_bool & in_mIsRoot,
                                                                                                    const GGS_lstring & in_mRootEntityName,
                                                                                                    const GGS_lstring & in_mToManyPropertyName,
                                                                                                    const GGS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                                                    const GGS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mControllerName (),
mProperty_mIsRoot (),
mProperty_mRootEntityName (),
mProperty_mToManyPropertyName (),
mProperty_mTableViewControllerBoundColumnListAST (),
mProperty_mTableViewControllerAttributListAST () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mIsRoot = in_mIsRoot ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mToManyPropertyName = in_mToManyPropertyName ;
  mProperty_mTableViewControllerBoundColumnListAST = in_mTableViewControllerBoundColumnListAST ;
  mProperty_mTableViewControllerAttributListAST = in_mTableViewControllerAttributListAST ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutTableViewControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ;
}

void cPtr_autoLayoutTableViewControllerDeclarationAST::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutTableViewControllerDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsRoot.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mToManyPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewControllerBoundColumnListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewControllerAttributListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutTableViewControllerDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mIsRoot, mProperty_mRootEntityName, mProperty_mToManyPropertyName, mProperty_mTableViewControllerBoundColumnListAST, mProperty_mTableViewControllerAttributListAST, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutTableViewControllerDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mControllerName.printNonNullClassInstanceProperties ("mControllerName") ;
    mProperty_mIsRoot.printNonNullClassInstanceProperties ("mIsRoot") ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mToManyPropertyName.printNonNullClassInstanceProperties ("mToManyPropertyName") ;
    mProperty_mTableViewControllerBoundColumnListAST.printNonNullClassInstanceProperties ("mTableViewControllerBoundColumnListAST") ;
    mProperty_mTableViewControllerAttributListAST.printNonNullClassInstanceProperties ("mTableViewControllerAttributListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ("autoLayoutTableViewControllerDeclarationAST",
                                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST GGS_autoLayoutTableViewControllerDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerDeclarationAST result ;
  const GGS_autoLayoutTableViewControllerDeclarationAST * p = (const GGS_autoLayoutTableViewControllerDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutTableViewControllerGeneration::objectCompare (const GGS_autoLayoutTableViewControllerGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration::GGS_autoLayoutTableViewControllerGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration GGS_autoLayoutTableViewControllerGeneration::
init_21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mOwnerName,
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
                                              COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutTableViewControllerGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutTableViewControllerGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutTableViewControllerGeneration_init_21__21__21__21__21__21__21__21__21__21_ (in_mOwnerName, in_mControllerName, in_mModelString, in_mTableViewControllerBoundColumnListForGeneration, in_mTableViewControllerSortedColumnListForGeneration, in_mModelTypeName, in_mTableViewControllerModelKind, in_mElementTypeName, in_mElementTypeIsGraphic, in_mAttributeListForGeneration, inCompiler) ;
  const GGS_autoLayoutTableViewControllerGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::
autoLayoutTableViewControllerGeneration_init_21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                                                                                      const GGS_lstring & in_mControllerName,
                                                                                      const GGS_string & in_mModelString,
                                                                                      const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                                                      const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                                                      const GGS_string & in_mModelTypeName,
                                                                                      const GGS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                                                      const GGS_string & in_mElementTypeName,
                                                                                      const GGS_bool & in_mElementTypeIsGraphic,
                                                                                      const GGS__32_stringlist & in_mAttributeListForGeneration,
                                                                                      Compiler * /* inCompiler */) {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mTableViewControllerBoundColumnListForGeneration = in_mTableViewControllerBoundColumnListForGeneration ;
  mProperty_mTableViewControllerSortedColumnListForGeneration = in_mTableViewControllerSortedColumnListForGeneration ;
  mProperty_mModelTypeName = in_mModelTypeName ;
  mProperty_mTableViewControllerModelKind = in_mTableViewControllerModelKind ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mElementTypeIsGraphic = in_mElementTypeIsGraphic ;
  mProperty_mAttributeListForGeneration = in_mAttributeListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration::GGS_autoLayoutTableViewControllerGeneration (const cPtr_autoLayoutTableViewControllerGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration GGS_autoLayoutTableViewControllerGeneration::class_func_new (const GGS_string & in_mOwnerName,
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
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerGeneration (in_mOwnerName, in_mControllerName, in_mModelString, in_mTableViewControllerBoundColumnListForGeneration, in_mTableViewControllerSortedColumnListForGeneration, in_mModelTypeName, in_mTableViewControllerModelKind, in_mElementTypeName, in_mElementTypeIsGraphic, in_mAttributeListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutTableViewControllerGeneration::readProperty_mControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerGeneration::readProperty_mModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerGeneration::readProperty_mTableViewControllerBoundColumnListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutTableViewControllerBoundColumnListForGeneration () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerBoundColumnListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerGeneration::readProperty_mTableViewControllerSortedColumnListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutTableViewControllerSortedColumnListForGeneration () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerSortedColumnListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerGeneration::readProperty_mModelTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mModelTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerModelKind GGS_autoLayoutTableViewControllerGeneration::readProperty_mTableViewControllerModelKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutTableViewControllerModelKind () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerModelKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerGeneration::readProperty_mElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutTableViewControllerGeneration::readProperty_mElementTypeIsGraphic (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mElementTypeIsGraphic ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_autoLayoutTableViewControllerGeneration::readProperty_mAttributeListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__32_stringlist () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mAttributeListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerGeneration::cPtr_autoLayoutTableViewControllerGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mControllerName (),
mProperty_mModelString (),
mProperty_mTableViewControllerBoundColumnListForGeneration (),
mProperty_mTableViewControllerSortedColumnListForGeneration (),
mProperty_mModelTypeName (),
mProperty_mTableViewControllerModelKind (),
mProperty_mElementTypeName (),
mProperty_mElementTypeIsGraphic (),
mProperty_mAttributeListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerGeneration::cPtr_autoLayoutTableViewControllerGeneration (const GGS_string & in_mOwnerName,
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
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mControllerName (),
mProperty_mModelString (),
mProperty_mTableViewControllerBoundColumnListForGeneration (),
mProperty_mTableViewControllerSortedColumnListForGeneration (),
mProperty_mModelTypeName (),
mProperty_mTableViewControllerModelKind (),
mProperty_mElementTypeName (),
mProperty_mElementTypeIsGraphic (),
mProperty_mAttributeListForGeneration () {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mTableViewControllerBoundColumnListForGeneration = in_mTableViewControllerBoundColumnListForGeneration ;
  mProperty_mTableViewControllerSortedColumnListForGeneration = in_mTableViewControllerSortedColumnListForGeneration ;
  mProperty_mModelTypeName = in_mModelTypeName ;
  mProperty_mTableViewControllerModelKind = in_mTableViewControllerModelKind ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mElementTypeIsGraphic = in_mElementTypeIsGraphic ;
  mProperty_mAttributeListForGeneration = in_mAttributeListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutTableViewControllerGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ;
}

void cPtr_autoLayoutTableViewControllerGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutTableViewControllerGeneration:") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewControllerBoundColumnListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewControllerSortedColumnListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewControllerModelKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeIsGraphic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutTableViewControllerGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mModelString, mProperty_mTableViewControllerBoundColumnListForGeneration, mProperty_mTableViewControllerSortedColumnListForGeneration, mProperty_mModelTypeName, mProperty_mTableViewControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic, mProperty_mAttributeListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutTableViewControllerGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
    mProperty_mControllerName.printNonNullClassInstanceProperties ("mControllerName") ;
    mProperty_mModelString.printNonNullClassInstanceProperties ("mModelString") ;
    mProperty_mTableViewControllerBoundColumnListForGeneration.printNonNullClassInstanceProperties ("mTableViewControllerBoundColumnListForGeneration") ;
    mProperty_mTableViewControllerSortedColumnListForGeneration.printNonNullClassInstanceProperties ("mTableViewControllerSortedColumnListForGeneration") ;
    mProperty_mModelTypeName.printNonNullClassInstanceProperties ("mModelTypeName") ;
    mProperty_mTableViewControllerModelKind.printNonNullClassInstanceProperties ("mTableViewControllerModelKind") ;
    mProperty_mElementTypeName.printNonNullClassInstanceProperties ("mElementTypeName") ;
    mProperty_mElementTypeIsGraphic.printNonNullClassInstanceProperties ("mElementTypeIsGraphic") ;
    mProperty_mAttributeListForGeneration.printNonNullClassInstanceProperties ("mAttributeListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ("autoLayoutTableViewControllerGeneration",
                                                                                               & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration GGS_autoLayoutTableViewControllerGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerGeneration result ;
  const GGS_autoLayoutTableViewControllerGeneration * p = (const GGS_autoLayoutTableViewControllerGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectionControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectionControllerDeclarationAST::objectCompare (const GGS_selectionControllerDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST::GGS_selectionControllerDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectionControllerDeclarationAST GGS_selectionControllerDeclarationAST::
init_21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                          const GGS_lstring & in_mSelectionControllerName,
                          const GGS_lstring & in_mModelControllerName,
                          const GGS_lstring & in_mModelControllerPropertyName,
                          const GGS_lstring & in_mSelectionEntityName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_selectionControllerDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_selectionControllerDeclarationAST (inCompiler COMMA_THERE)) ;
  object->selectionControllerDeclarationAST_init_21__21__21__21__21_ (in_mClassName, in_mSelectionControllerName, in_mModelControllerName, in_mModelControllerPropertyName, in_mSelectionEntityName, inCompiler) ;
  const GGS_selectionControllerDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::
selectionControllerDeclarationAST_init_21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                            const GGS_lstring & in_mSelectionControllerName,
                                                            const GGS_lstring & in_mModelControllerName,
                                                            const GGS_lstring & in_mModelControllerPropertyName,
                                                            const GGS_lstring & in_mSelectionEntityName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mSelectionControllerName = in_mSelectionControllerName ;
  mProperty_mModelControllerName = in_mModelControllerName ;
  mProperty_mModelControllerPropertyName = in_mModelControllerPropertyName ;
  mProperty_mSelectionEntityName = in_mSelectionEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST::GGS_selectionControllerDeclarationAST (const cPtr_selectionControllerDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST GGS_selectionControllerDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                                             const GGS_lstring & in_mSelectionControllerName,
                                                                                             const GGS_lstring & in_mModelControllerName,
                                                                                             const GGS_lstring & in_mModelControllerPropertyName,
                                                                                             const GGS_lstring & in_mSelectionEntityName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_selectionControllerDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selectionControllerDeclarationAST (in_mClassName, in_mSelectionControllerName, in_mModelControllerName, in_mModelControllerPropertyName, in_mSelectionEntityName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selectionControllerDeclarationAST::readProperty_mSelectionControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mSelectionControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selectionControllerDeclarationAST::readProperty_mModelControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mModelControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selectionControllerDeclarationAST::readProperty_mModelControllerPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mModelControllerPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selectionControllerDeclarationAST::readProperty_mSelectionEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mSelectionEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectionControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_selectionControllerDeclarationAST::cPtr_selectionControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSelectionControllerName (),
mProperty_mModelControllerName (),
mProperty_mModelControllerPropertyName (),
mProperty_mSelectionEntityName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectionControllerDeclarationAST::cPtr_selectionControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                                                const GGS_lstring & in_mSelectionControllerName,
                                                                                const GGS_lstring & in_mModelControllerName,
                                                                                const GGS_lstring & in_mModelControllerPropertyName,
                                                                                const GGS_lstring & in_mSelectionEntityName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mSelectionControllerName (),
mProperty_mModelControllerName (),
mProperty_mModelControllerPropertyName (),
mProperty_mSelectionEntityName () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mSelectionControllerName = in_mSelectionControllerName ;
  mProperty_mModelControllerName = in_mModelControllerName ;
  mProperty_mModelControllerPropertyName = in_mModelControllerPropertyName ;
  mProperty_mSelectionEntityName = in_mSelectionEntityName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectionControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;
}

void cPtr_selectionControllerDeclarationAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@selectionControllerDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectionControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelControllerPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectionEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectionControllerDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectionControllerDeclarationAST (mProperty_mClassName, mProperty_mSelectionControllerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName, mProperty_mSelectionEntityName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectionControllerDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSelectionControllerName.printNonNullClassInstanceProperties ("mSelectionControllerName") ;
    mProperty_mModelControllerName.printNonNullClassInstanceProperties ("mModelControllerName") ;
    mProperty_mModelControllerPropertyName.printNonNullClassInstanceProperties ("mModelControllerPropertyName") ;
    mProperty_mSelectionEntityName.printNonNullClassInstanceProperties ("mSelectionEntityName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @selectionControllerDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ("selectionControllerDeclarationAST",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectionControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectionControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectionControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST GGS_selectionControllerDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_selectionControllerDeclarationAST result ;
  const GGS_selectionControllerDeclarationAST * p = (const GGS_selectionControllerDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectionControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolAsDefaultValue::objectCompare (const GGS_boolAsDefaultValue & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue::GGS_boolAsDefaultValue (void) :
GGS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolAsDefaultValue GGS_boolAsDefaultValue::
init_21_ (const GGS_lbool & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_boolAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_boolAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->boolAsDefaultValue_init_21_ (in_mValue, inCompiler) ;
  const GGS_boolAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolAsDefaultValue::
boolAsDefaultValue_init_21_ (const GGS_lbool & in_mValue,
                             Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue::GGS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) :
GGS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue GGS_boolAsDefaultValue::class_func_new (const GGS_lbool & in_mValue,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_boolAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_boolAsDefaultValue (in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbool GGS_boolAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbool () ;
  }else{
    cPtr_boolAsDefaultValue * p = (cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boolAsDefaultValue::setProperty_mValue (const GGS_lbool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_boolAsDefaultValue * p = (cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_boolAsDefaultValue::cPtr_boolAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_boolAsDefaultValue::cPtr_boolAsDefaultValue (const GGS_lbool & in_mValue,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

void cPtr_boolAsDefaultValue::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@boolAsDefaultValue:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolAsDefaultValue (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @boolAsDefaultValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolAsDefaultValue ("boolAsDefaultValue",
                                                                          & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_boolAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue GGS_boolAsDefaultValue::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_boolAsDefaultValue result ;
  const GGS_boolAsDefaultValue * p = (const GGS_boolAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @stringAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringAsDefaultValue::objectCompare (const GGS_stringAsDefaultValue & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue::GGS_stringAsDefaultValue (void) :
GGS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_stringAsDefaultValue GGS_stringAsDefaultValue::
init_21_ (const GGS_lstring & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_stringAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_stringAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->stringAsDefaultValue_init_21_ (in_mValue, inCompiler) ;
  const GGS_stringAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_stringAsDefaultValue::
stringAsDefaultValue_init_21_ (const GGS_lstring & in_mValue,
                               Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue::GGS_stringAsDefaultValue (const cPtr_stringAsDefaultValue * inSourcePtr) :
GGS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue GGS_stringAsDefaultValue::class_func_new (const GGS_lstring & in_mValue,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_stringAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_stringAsDefaultValue (in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_stringAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_stringAsDefaultValue * p = (cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringAsDefaultValue::setProperty_mValue (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_stringAsDefaultValue * p = (cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @stringAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_stringAsDefaultValue::cPtr_stringAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_stringAsDefaultValue::cPtr_stringAsDefaultValue (const GGS_lstring & in_mValue,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_stringAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

void cPtr_stringAsDefaultValue::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@stringAsDefaultValue:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_stringAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_stringAsDefaultValue (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_stringAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @stringAsDefaultValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringAsDefaultValue ("stringAsDefaultValue",
                                                                            & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_stringAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_stringAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_stringAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue GGS_stringAsDefaultValue::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_stringAsDefaultValue result ;
  const GGS_stringAsDefaultValue * p = (const GGS_stringAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_stringAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @identifierAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_identifierAsDefaultValue::objectCompare (const GGS_identifierAsDefaultValue & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue::GGS_identifierAsDefaultValue (void) :
GGS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_identifierAsDefaultValue GGS_identifierAsDefaultValue::
init_21_ (const GGS_lstring & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_identifierAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_identifierAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->identifierAsDefaultValue_init_21_ (in_mValue, inCompiler) ;
  const GGS_identifierAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_identifierAsDefaultValue::
identifierAsDefaultValue_init_21_ (const GGS_lstring & in_mValue,
                                   Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue::GGS_identifierAsDefaultValue (const cPtr_identifierAsDefaultValue * inSourcePtr) :
GGS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_identifierAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue GGS_identifierAsDefaultValue::class_func_new (const GGS_lstring & in_mValue,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_identifierAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_identifierAsDefaultValue (in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_identifierAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_identifierAsDefaultValue * p = (cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_identifierAsDefaultValue::setProperty_mValue (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_identifierAsDefaultValue * p = (cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @identifierAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_identifierAsDefaultValue::cPtr_identifierAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_identifierAsDefaultValue::cPtr_identifierAsDefaultValue (const GGS_lstring & in_mValue,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_identifierAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

void cPtr_identifierAsDefaultValue::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@identifierAsDefaultValue:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_identifierAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_identifierAsDefaultValue (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_identifierAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @identifierAsDefaultValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue ("identifierAsDefaultValue",
                                                                                & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_identifierAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_identifierAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_identifierAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue GGS_identifierAsDefaultValue::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_identifierAsDefaultValue result ;
  const GGS_identifierAsDefaultValue * p = (const GGS_identifierAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_identifierAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("identifierAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @prefsAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefsAsDefaultValue::objectCompare (const GGS_prefsAsDefaultValue & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue::GGS_prefsAsDefaultValue (void) :
GGS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_prefsAsDefaultValue GGS_prefsAsDefaultValue::
init_21_ (const GGS_lstring & in_mPrefPropertyName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_prefsAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_prefsAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->prefsAsDefaultValue_init_21_ (in_mPrefPropertyName, inCompiler) ;
  const GGS_prefsAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::
prefsAsDefaultValue_init_21_ (const GGS_lstring & in_mPrefPropertyName,
                              Compiler * /* inCompiler */) {
  mProperty_mPrefPropertyName = in_mPrefPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue::GGS_prefsAsDefaultValue (const cPtr_prefsAsDefaultValue * inSourcePtr) :
GGS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue GGS_prefsAsDefaultValue::class_func_new (const GGS_lstring & in_mPrefPropertyName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_prefsAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_prefsAsDefaultValue (in_mPrefPropertyName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_prefsAsDefaultValue::readProperty_mPrefPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_prefsAsDefaultValue * p = (cPtr_prefsAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
    return p->mProperty_mPrefPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefsAsDefaultValue::setProperty_mPrefPropertyName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefsAsDefaultValue * p = (cPtr_prefsAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
    p->mProperty_mPrefPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @prefsAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_prefsAsDefaultValue::cPtr_prefsAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mPrefPropertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_prefsAsDefaultValue::cPtr_prefsAsDefaultValue (const GGS_lstring & in_mPrefPropertyName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mPrefPropertyName () {
  mProperty_mPrefPropertyName = in_mPrefPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefsAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue ;
}

void cPtr_prefsAsDefaultValue::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@prefsAsDefaultValue:") ;
  mProperty_mPrefPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefsAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_prefsAsDefaultValue (mProperty_mPrefPropertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefsAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mPrefPropertyName.printNonNullClassInstanceProperties ("mPrefPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @prefsAsDefaultValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue ("prefsAsDefaultValue",
                                                                           & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_prefsAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefsAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefsAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue GGS_prefsAsDefaultValue::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_prefsAsDefaultValue result ;
  const GGS_prefsAsDefaultValue * p = (const GGS_prefsAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefsAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element::GGS_propertyMap_2E_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mActionMap (),
mProperty_mIsOverriding () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element::~ GGS_propertyMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyMap_2E_element GGS_propertyMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_propertyKind & in_mKind,
                                                                             const GGS_actionMap & in_mActionMap,
                                                                             const GGS_bool & in_mIsOverriding,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mActionMap = in_mActionMap ;
  result.mProperty_mIsOverriding = in_mIsOverriding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element::GGS_propertyMap_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_propertyKind & inOperand1,
                                                        const GGS_actionMap & inOperand2,
                                                        const GGS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mActionMap (inOperand2),
mProperty_mIsOverriding (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element GGS_propertyMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                       const GGS_propertyKind & in_mKind,
                                                                       const GGS_actionMap & in_mActionMap,
                                                                       const GGS_bool & in_mIsOverriding,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mActionMap = in_mActionMap ;
  result.mProperty_mIsOverriding = in_mIsOverriding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mActionMap.isValid () && mProperty_mIsOverriding.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mActionMap.drop () ;
  mProperty_mIsOverriding.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mActionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsOverriding.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2E_element ("propertyMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element GGS_propertyMap_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyMap_2E_element result ;
  const GGS_propertyMap_2E_element * p = (const GGS_propertyMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (void) :
mProperty_mSequenceNumber (),
mProperty_mMainGroupReference (),
mProperty_mMainGroupChildrenRefs (),
mProperty_mProjectObjectReference (),
mProperty_mGroupList (),
mProperty_mToolTargetList (),
mProperty_mAppTargetList (),
mProperty_mCppFileList (),
mProperty_m_5F_M_5F_FileList (),
mProperty_m_5F_MM_5F_FileList (),
mProperty_m_5F_SwiftFileList (),
mProperty_mFrameworkFileList (),
mProperty_mHeaderFileList (),
mProperty_mBuildFileList (),
mProperty_mDefaultConfigurationRef (),
mProperty_mDefaultConfigurationSettingList (),
mProperty_mProjectBuildConfigurationRef (),
mProperty_mInfoPlistFileList (),
mProperty_mXIB_5F_fileList (),
mProperty_mTIFF_5F_fileList (),
mProperty_mICNS_5F_fileList () {
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::~ GGS_XcodeProjectDescriptor (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XcodeProjectDescriptor GGS_XcodeProjectDescriptor::init (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XcodeProjectDescriptor::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mSequenceNumber = GGS_uint (uint32_t (0U)) ;
  mProperty_mMainGroupReference = GGS_string::makeEmptyString () ;
GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 364)) ;
  mProperty_mMainGroupChildrenRefs = temp_0 ;
  mProperty_mProjectObjectReference = GGS_string::makeEmptyString () ;
GGS_XCodeGroupList temp_1 = GGS_XCodeGroupList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 366)) ;
  mProperty_mGroupList = temp_1 ;
GGS_XCodeToolTargetList temp_2 = GGS_XCodeToolTargetList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 367)) ;
  mProperty_mToolTargetList = temp_2 ;
GGS_XCodeAppTargetList temp_3 = GGS_XCodeAppTargetList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 368)) ;
  mProperty_mAppTargetList = temp_3 ;
GGS__32_stringlist temp_4 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 369)) ;
  mProperty_mCppFileList = temp_4 ;
GGS__32_stringlist temp_5 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 370)) ;
  mProperty_m_5F_M_5F_FileList = temp_5 ;
GGS__32_stringlist temp_6 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 371)) ;
  mProperty_m_5F_MM_5F_FileList = temp_6 ;
GGS__32_stringlist temp_7 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 372)) ;
  mProperty_m_5F_SwiftFileList = temp_7 ;
GGS__32_stringlist temp_8 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 373)) ;
  mProperty_mFrameworkFileList = temp_8 ;
GGS__32_stringlist temp_9 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 374)) ;
  mProperty_mHeaderFileList = temp_9 ;
GGS_BuildFileList temp_10 = GGS_BuildFileList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 375)) ;
  mProperty_mBuildFileList = temp_10 ;
  mProperty_mDefaultConfigurationRef = GGS_string::makeEmptyString () ;
GGS_stringlist temp_11 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 378)) ;
  mProperty_mDefaultConfigurationSettingList = temp_11 ;
  mProperty_mProjectBuildConfigurationRef = GGS_string::makeEmptyString () ;
GGS__32_stringlist temp_12 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 381)) ;
  mProperty_mInfoPlistFileList = temp_12 ;
GGS__32_stringlist temp_13 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 382)) ;
  mProperty_mXIB_5F_fileList = temp_13 ;
GGS__32_stringlist temp_14 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 383)) ;
  mProperty_mTIFF_5F_fileList = temp_14 ;
GGS__32_stringlist temp_15 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 384)) ;
  mProperty_mICNS_5F_fileList = temp_15 ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (const GGS_uint & inOperand0,
                                                        const GGS_string & inOperand1,
                                                        const GGS_stringlist & inOperand2,
                                                        const GGS_string & inOperand3,
                                                        const GGS_XCodeGroupList & inOperand4,
                                                        const GGS_XCodeToolTargetList & inOperand5,
                                                        const GGS_XCodeAppTargetList & inOperand6,
                                                        const GGS__32_stringlist & inOperand7,
                                                        const GGS__32_stringlist & inOperand8,
                                                        const GGS__32_stringlist & inOperand9,
                                                        const GGS__32_stringlist & inOperand10,
                                                        const GGS__32_stringlist & inOperand11,
                                                        const GGS__32_stringlist & inOperand12,
                                                        const GGS_BuildFileList & inOperand13,
                                                        const GGS_string & inOperand14,
                                                        const GGS_stringlist & inOperand15,
                                                        const GGS_string & inOperand16,
                                                        const GGS__32_stringlist & inOperand17,
                                                        const GGS__32_stringlist & inOperand18,
                                                        const GGS__32_stringlist & inOperand19,
                                                        const GGS__32_stringlist & inOperand20) :
mProperty_mSequenceNumber (inOperand0),
mProperty_mMainGroupReference (inOperand1),
mProperty_mMainGroupChildrenRefs (inOperand2),
mProperty_mProjectObjectReference (inOperand3),
mProperty_mGroupList (inOperand4),
mProperty_mToolTargetList (inOperand5),
mProperty_mAppTargetList (inOperand6),
mProperty_mCppFileList (inOperand7),
mProperty_m_5F_M_5F_FileList (inOperand8),
mProperty_m_5F_MM_5F_FileList (inOperand9),
mProperty_m_5F_SwiftFileList (inOperand10),
mProperty_mFrameworkFileList (inOperand11),
mProperty_mHeaderFileList (inOperand12),
mProperty_mBuildFileList (inOperand13),
mProperty_mDefaultConfigurationRef (inOperand14),
mProperty_mDefaultConfigurationSettingList (inOperand15),
mProperty_mProjectBuildConfigurationRef (inOperand16),
mProperty_mInfoPlistFileList (inOperand17),
mProperty_mXIB_5F_fileList (inOperand18),
mProperty_mTIFF_5F_fileList (inOperand19),
mProperty_mICNS_5F_fileList (inOperand20) {
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor GGS_XcodeProjectDescriptor::class_func_new (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_XcodeProjectDescriptor::isValid (void) const {
  return mProperty_mSequenceNumber.isValid () && mProperty_mMainGroupReference.isValid () && mProperty_mMainGroupChildrenRefs.isValid () && mProperty_mProjectObjectReference.isValid () && mProperty_mGroupList.isValid () && mProperty_mToolTargetList.isValid () && mProperty_mAppTargetList.isValid () && mProperty_mCppFileList.isValid () && mProperty_m_5F_M_5F_FileList.isValid () && mProperty_m_5F_MM_5F_FileList.isValid () && mProperty_m_5F_SwiftFileList.isValid () && mProperty_mFrameworkFileList.isValid () && mProperty_mHeaderFileList.isValid () && mProperty_mBuildFileList.isValid () && mProperty_mDefaultConfigurationRef.isValid () && mProperty_mDefaultConfigurationSettingList.isValid () && mProperty_mProjectBuildConfigurationRef.isValid () && mProperty_mInfoPlistFileList.isValid () && mProperty_mXIB_5F_fileList.isValid () && mProperty_mTIFF_5F_fileList.isValid () && mProperty_mICNS_5F_fileList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XcodeProjectDescriptor::drop (void) {
  mProperty_mSequenceNumber.drop () ;
  mProperty_mMainGroupReference.drop () ;
  mProperty_mMainGroupChildrenRefs.drop () ;
  mProperty_mProjectObjectReference.drop () ;
  mProperty_mGroupList.drop () ;
  mProperty_mToolTargetList.drop () ;
  mProperty_mAppTargetList.drop () ;
  mProperty_mCppFileList.drop () ;
  mProperty_m_5F_M_5F_FileList.drop () ;
  mProperty_m_5F_MM_5F_FileList.drop () ;
  mProperty_m_5F_SwiftFileList.drop () ;
  mProperty_mFrameworkFileList.drop () ;
  mProperty_mHeaderFileList.drop () ;
  mProperty_mBuildFileList.drop () ;
  mProperty_mDefaultConfigurationRef.drop () ;
  mProperty_mDefaultConfigurationSettingList.drop () ;
  mProperty_mProjectBuildConfigurationRef.drop () ;
  mProperty_mInfoPlistFileList.drop () ;
  mProperty_mXIB_5F_fileList.drop () ;
  mProperty_mTIFF_5F_fileList.drop () ;
  mProperty_mICNS_5F_fileList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XcodeProjectDescriptor::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XcodeProjectDescriptor:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSequenceNumber.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainGroupReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainGroupChildrenRefs.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectObjectReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToolTargetList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAppTargetList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_M_5F_FileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_MM_5F_FileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_SwiftFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworkFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHeaderFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInfoPlistFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mXIB_5F_fileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTIFF_5F_fileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mICNS_5F_fileList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @XcodeProjectDescriptor generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ("XcodeProjectDescriptor",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_XcodeProjectDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XcodeProjectDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XcodeProjectDescriptor (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor GGS_XcodeProjectDescriptor::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor result ;
  const GGS_XcodeProjectDescriptor * p = (const GGS_XcodeProjectDescriptor *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XcodeProjectDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XcodeProjectDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addTIFF_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (GGS_XcodeProjectDescriptor & ioObject,
                                      const GGS_string constinArgument_inFileName,
                                      GGS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 15)) ;
  }
  {
  ioObject.mProperty_mTIFF_5F_fileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 16)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addInfoPlistFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (GGS_XcodeProjectDescriptor & ioObject,
                                       const GGS_string constinArgument_inFileName,
                                       GGS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 24)) ;
  }
  {
  ioObject.mProperty_mInfoPlistFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 25)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addXIBFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (GGS_XcodeProjectDescriptor & ioObject,
                                 const GGS_string constinArgument_inFileName,
                                 GGS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 33)) ;
  }
  {
  ioObject.mProperty_mXIB_5F_fileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addFrameworkFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (GGS_XcodeProjectDescriptor & ioObject,
                                       const GGS_string constinArgument_inFileName,
                                       GGS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 42)) ;
  }
  {
  ioObject.mProperty_mFrameworkFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 43)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inFileName,
                               GGS_string & outArgument_outFileRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 51)) ;
  }
  {
  ioObject.mProperty_m_5F_M_5F_FileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 52)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addSwiftFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inFileName,
                                   GGS_string & outArgument_outFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 60)) ;
  }
  {
  ioObject.mProperty_m_5F_SwiftFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 61)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addMMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (GGS_XcodeProjectDescriptor & ioObject,
                                const GGS_string constinArgument_inFileName,
                                GGS_string & outArgument_outFileRef,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 69)) ;
  }
  {
  ioObject.mProperty_m_5F_MM_5F_FileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 70)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addCppFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (GGS_XcodeProjectDescriptor & ioObject,
                                 const GGS_string constinArgument_inFileName,
                                 GGS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 78)) ;
  }
  {
  ioObject.mProperty_mCppFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 79)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inFileName,
                                    GGS_string & outArgument_outFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 87)) ;
  }
  {
  ioObject.mProperty_mHeaderFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 88)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addBuildFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inFileReference,
                                   const GGS_string constinArgument_inFileName,
                                   GGS_string & outArgument_outBuildRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBuildRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 97)) ;
  }
  {
  ioObject.mProperty_mBuildFileList.setter_append (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 98)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inTargetName,
                                    const GGS_string constinArgument_inProductFileName,
                                    const GGS_stringlist constinArgument_inSourceList,
                                    const GGS_stringlist constinArgument_inToolFrameworksFileRefList,
                                    const GGS_stringlist constinArgument_inBuildConfigurationSettingList,
                                    GGS_string & outArgument_outTargetRef,
                                    GGS_string & outArgument_outProductFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 111)) ;
  }
  GGS_string var_buildPhaseRef_4477 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_4477, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 112)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 113)) ;
  }
  GGS_string var_buildConfigurationListRef_4574 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_4574, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 114)) ;
  }
  GGS_string var_buildConfigurationRef_4637 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_4637, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 115)) ;
  }
  GGS_string var_frameworkBuildRef_4696 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_4696, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 116)) ;
  }
  {
  ioObject.mProperty_mToolTargetList.setter_append (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_4477, var_buildConfigurationListRef_4574, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_4637, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_4696, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 117)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inTargetName,
                                   const GGS_string constinArgument_inProductFileName,
                                   const GGS_stringlist constinArgument_inSourceList,
                                   const GGS_stringlist constinArgument_inFrameworksFileRefList,
                                   const GGS_stringlist constinArgument_inResourceFileBuildRefs,
                                   const GGS_stringlist constinArgument_inBuildConfigurationSettingList,
                                   const GGS_stringlist constinArgument_inDependentTargetRefList,
                                   const GGS__32_stringlist constinArgument_inProductCopyList,
                                   const GGS_string constinArgument_inInfoPList,
                                   GGS_string & outArgument_outProductFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 146)) ;
  }
  GGS_string var_buildPhaseRef_5838 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5838, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 147)) ;
  }
  GGS_string var_targetRef_5889 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_5889, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 148)) ;
  }
  GGS_string var_buildConfigurationListRef_5936 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_5936, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 149)) ;
  }
  GGS_string var_buildConfigurationRef_5999 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_5999, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 150)) ;
  }
  GGS_string var_frameworkBuildRef_6058 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_6058, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 151)) ;
  }
  GGS_string var_resourceBuildRef_6113 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_6113, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 152)) ;
  }
  GGS__32_stringlist temp_0 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 153)) ;
  GGS__32_stringlist var_dependentTargets_6150 = temp_0 ;
  cEnumerator_stringlist enumerator_6179 (constinArgument_inDependentTargetRefList, EnumerationOrder::up) ;
  while (enumerator_6179.hasCurrentObject ()) {
    GGS_string var_dependencyBuildRef_6253 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_6253, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 155)) ;
    }
    {
    var_dependentTargets_6150.setter_append (var_dependencyBuildRef_6253, enumerator_6179.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 156)) ;
    }
    enumerator_6179.gotoNextObject () ;
  }
  GGS_stringlist var_resourceFileBuildRefs_6353 = constinArgument_inResourceFileBuildRefs ;
  cEnumerator__32_stringlist enumerator_6413 (constinArgument_inProductCopyList, EnumerationOrder::up) ;
  while (enumerator_6413.hasCurrentObject ()) {
    GGS_string var_buildRef_6520 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_6413.current_mValue_30_ (HERE), enumerator_6413.current_mValue_31_ (HERE), var_buildRef_6520, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 160)) ;
    }
    {
    var_resourceFileBuildRefs_6353.setter_append (var_buildRef_6520, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 161)) ;
    }
    enumerator_6413.gotoNextObject () ;
  }
  {
  ioObject.mProperty_mAppTargetList.setter_append (var_targetRef_5889, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5838, var_buildConfigurationListRef_5936, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_5999, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_6058, var_dependentTargets_6150, var_resourceBuildRef_6113, var_resourceFileBuildRefs_6353, constinArgument_inInfoPList, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 163)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inGroupName,
                               const GGS_string constinArgument_inGroupPath,
                               const GGS_stringlist constinArgument_inChildrenRefs,
                               GGS_string & outArgument_outGroupRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 190)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 193)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 196)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 198)) ;
  }
  {
  ioObject.mProperty_mGroupList.setter_append (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 199)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (GGS_XcodeProjectDescriptor & ioObject,
                                        const GGS_string constinArgument_inGroupName,
                                        const GGS_string constinArgument_inGroupPath,
                                        const GGS_stringset constinArgument_inFileNames,
                                        GGS_stringlist & ioArgument_ioCppFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioMFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioMMFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioSwiftFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioFrameWorkFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioResourceFileBuildRefs,
                                        GGS_string & outArgument_outGroupRef,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 216)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 219)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 222)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 224)) ;
  }
  GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 226)) ;
  GGS_stringlist var_childrenRefs_8856 = temp_6 ;
  cEnumerator_stringset enumerator_8881 (constinArgument_inFileNames, EnumerationOrder::up) ;
  while (enumerator_8881.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 228)).objectCompare (GGS_string ("cpp"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GGS_string var_cppFileRef_8998 ;
        {
        extensionSetter_addCppFile (ioObject, enumerator_8881.current_key (HERE), var_cppFileRef_8998, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 229)) ;
        }
        {
        var_childrenRefs_8856.setter_append (var_cppFileRef_8998, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 230)) ;
        }
        GGS_string var_buildRef_9134 ;
        {
        extensionSetter_addBuildFile (ioObject, var_cppFileRef_8998, enumerator_8881.current_key (HERE), var_buildRef_9134, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 231)) ;
        }
        {
        ioArgument_ioCppFileBuildRefs.setter_append (var_buildRef_9134, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 232)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 233)).objectCompare (GGS_string ("h"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          GGS_string var_headerFileRef_9289 ;
          {
          extensionSetter_addHeaderFile (ioObject, enumerator_8881.current_key (HERE), var_headerFileRef_9289, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 234)) ;
          }
          {
          var_childrenRefs_8856.setter_append (var_headerFileRef_9289, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 235)) ;
          }
        }
      }
      if (kBoolFalse == test_8) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 236)).objectCompare (GGS_string ("m"))).boolEnum () ;
          if (kBoolTrue == test_9) {
            GGS_string var_m_5F_FileRef_9443 ;
            {
            extensionSetter_addMFile (ioObject, enumerator_8881.current_key (HERE), var_m_5F_FileRef_9443, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 237)) ;
            }
            GGS_string var_buildRef_9536 ;
            {
            extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_9443, enumerator_8881.current_key (HERE), var_buildRef_9536, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 238)) ;
            }
            {
            var_childrenRefs_8856.setter_append (var_m_5F_FileRef_9443, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 239)) ;
            }
            {
            ioArgument_ioMFileBuildRefs.setter_append (var_buildRef_9536, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 240)) ;
            }
          }
        }
        if (kBoolFalse == test_9) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 241)).objectCompare (GGS_string ("swift"))).boolEnum () ;
            if (kBoolTrue == test_10) {
              GGS_string var_swift_5F_FileRef_9732 ;
              {
              extensionSetter_addSwiftFile (ioObject, enumerator_8881.current_key (HERE), var_swift_5F_FileRef_9732, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 242)) ;
              }
              GGS_string var_buildRef_9833 ;
              {
              extensionSetter_addBuildFile (ioObject, var_swift_5F_FileRef_9732, enumerator_8881.current_key (HERE), var_buildRef_9833, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 243)) ;
              }
              {
              var_childrenRefs_8856.setter_append (var_swift_5F_FileRef_9732, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 244)) ;
              }
              {
              ioArgument_ioSwiftFileBuildRefs.setter_append (var_buildRef_9833, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 245)) ;
              }
            }
          }
          if (kBoolFalse == test_10) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 246)).objectCompare (GGS_string ("mm"))).boolEnum () ;
              if (kBoolTrue == test_11) {
                GGS_string var_m_5F_FileRef_10031 ;
                {
                extensionSetter_addMMFile (ioObject, enumerator_8881.current_key (HERE), var_m_5F_FileRef_10031, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 247)) ;
                }
                GGS_string var_buildRef_10124 ;
                {
                extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_10031, enumerator_8881.current_key (HERE), var_buildRef_10124, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 248)) ;
                }
                {
                var_childrenRefs_8856.setter_append (var_m_5F_FileRef_10031, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 249)) ;
                }
                {
                ioArgument_ioMMFileBuildRefs.setter_append (var_buildRef_10124, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 250)) ;
                }
              }
            }
            if (kBoolFalse == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 251)).objectCompare (GGS_string ("framework"))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  GGS_string var_framework_5F_FileRef_10329 ;
                  {
                  extensionSetter_addFrameworkFile (ioObject, enumerator_8881.current_key (HERE), var_framework_5F_FileRef_10329, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 252)) ;
                  }
                  GGS_string var_buildRef_10438 ;
                  {
                  extensionSetter_addBuildFile (ioObject, var_framework_5F_FileRef_10329, enumerator_8881.current_key (HERE), var_buildRef_10438, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 253)) ;
                  }
                  {
                  var_childrenRefs_8856.setter_append (var_framework_5F_FileRef_10329, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 254)) ;
                  }
                  {
                  ioArgument_ioFrameWorkFileBuildRefs.setter_append (var_buildRef_10438, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 255)) ;
                  }
                }
              }
              if (kBoolFalse == test_12) {
                enumGalgasBool test_13 = kBoolTrue ;
                if (kBoolTrue == test_13) {
                  test_13 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 256)).objectCompare (GGS_string ("plist"))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    GGS_string var_resource_5F_FileRef_10654 ;
                    {
                    extensionSetter_addInfoPlistFile (ioObject, enumerator_8881.current_key (HERE), var_resource_5F_FileRef_10654, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 257)) ;
                    }
                    {
                    var_childrenRefs_8856.setter_append (var_resource_5F_FileRef_10654, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 258)) ;
                    }
                  }
                }
                if (kBoolFalse == test_13) {
                  enumGalgasBool test_14 = kBoolTrue ;
                  if (kBoolTrue == test_14) {
                    test_14 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 259)).objectCompare (GGS_string ("xib"))).boolEnum () ;
                    if (kBoolTrue == test_14) {
                      GGS_string var_resource_5F_FileRef_10818 ;
                      {
                      extensionSetter_addXIBFile (ioObject, enumerator_8881.current_key (HERE), var_resource_5F_FileRef_10818, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 260)) ;
                      }
                      {
                      var_childrenRefs_8856.setter_append (var_resource_5F_FileRef_10818, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 261)) ;
                      }
                      GGS_string var_buildRef_10972 ;
                      {
                      extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_10818, enumerator_8881.current_key (HERE), var_buildRef_10972, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 262)) ;
                      }
                      {
                      ioArgument_ioResourceFileBuildRefs.setter_append (var_buildRef_10972, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 263)) ;
                      }
                    }
                  }
                  if (kBoolFalse == test_14) {
                    enumGalgasBool test_15 = kBoolTrue ;
                    if (kBoolTrue == test_15) {
                      test_15 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 264)).objectCompare (GGS_string ("tiff"))).boolEnum () ;
                      if (kBoolTrue == test_15) {
                        GGS_string var_resource_5F_FileRef_11134 ;
                        {
                        extensionSetter_addTIFF_5F_file (ioObject, enumerator_8881.current_key (HERE), var_resource_5F_FileRef_11134, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 265)) ;
                        }
                        {
                        var_childrenRefs_8856.setter_append (var_resource_5F_FileRef_11134, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 266)) ;
                        }
                        GGS_string var_buildRef_11288 ;
                        {
                        extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11134, enumerator_8881.current_key (HERE), var_buildRef_11288, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 267)) ;
                        }
                        {
                        ioArgument_ioResourceFileBuildRefs.setter_append (var_buildRef_11288, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 268)) ;
                        }
                      }
                    }
                    if (kBoolFalse == test_15) {
                      enumGalgasBool test_16 = kBoolTrue ;
                      if (kBoolTrue == test_16) {
                        test_16 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 269)).objectCompare (GGS_string ("icns"))).boolEnum () ;
                        if (kBoolTrue == test_16) {
                          GGS_string var_resource_5F_FileRef_11450 ;
                          {
                          extensionSetter_addICNS_5F_file (ioObject, enumerator_8881.current_key (HERE), var_resource_5F_FileRef_11450, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 270)) ;
                          }
                          {
                          var_childrenRefs_8856.setter_append (var_resource_5F_FileRef_11450, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 271)) ;
                          }
                          GGS_string var_buildRef_11604 ;
                          {
                          extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11450, enumerator_8881.current_key (HERE), var_buildRef_11604, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 272)) ;
                          }
                          {
                          ioArgument_ioResourceFileBuildRefs.setter_append (var_buildRef_11604, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 273)) ;
                          }
                        }
                      }
                      if (kBoolFalse == test_16) {
                        TC_Array <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 275)), GGS_string ("unhandled extension for file '").add_operation (enumerator_8881.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 275)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 275)), fixItArray17  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 275)) ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_8881.gotoNextObject () ;
  }
  {
  ioObject.mProperty_mGroupList.setter_append (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs_8856, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 278)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (GGS_XcodeProjectDescriptor & ioObject,
                                            const GGS_string constinArgument_inGroupRef,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mMainGroupChildrenRefs.setter_append (constinArgument_inGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 285)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (GGS_XcodeProjectDescriptor & ioObject,
                                                        const GGS_stringlist constinArgument_inSettingList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mDefaultConfigurationSettingList.plusAssign_operation(constinArgument_inSettingList, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 292)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor getReferenceKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (GGS_XcodeProjectDescriptor & ioObject,
                                      GGS_string & outArgument_outRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mProjectObjectReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_XcodeProjectDescriptor temp_2 = ioObject ;
      ioObject.mProperty_mProjectObjectReference = temp_2.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 352)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 352)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 352)) ;
      ioObject.mProperty_mSequenceNumber.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 353)) ;
    }
  }
  const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
  outArgument_outRef = temp_3.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 355)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 355)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 355)) ;
  ioObject.mProperty_mSequenceNumber.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 356)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor generateAtPath'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const GGS_XcodeProjectDescriptor inObject,
                                     const GGS_string constinArgument_inPath,
                                     const GGS_string constinArgument_inCacheFilePath,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_XcodeProjectDescriptor temp_0 = inObject ;
  const GGS_XcodeProjectDescriptor temp_1 = inObject ;
  const GGS_XcodeProjectDescriptor temp_2 = inObject ;
  const GGS_XcodeProjectDescriptor temp_3 = inObject ;
  const GGS_XcodeProjectDescriptor temp_4 = inObject ;
  const GGS_XcodeProjectDescriptor temp_5 = inObject ;
  const GGS_XcodeProjectDescriptor temp_6 = inObject ;
  const GGS_XcodeProjectDescriptor temp_7 = inObject ;
  const GGS_XcodeProjectDescriptor temp_8 = inObject ;
  const GGS_XcodeProjectDescriptor temp_9 = inObject ;
  const GGS_XcodeProjectDescriptor temp_10 = inObject ;
  const GGS_XcodeProjectDescriptor temp_11 = inObject ;
  const GGS_XcodeProjectDescriptor temp_12 = inObject ;
  const GGS_XcodeProjectDescriptor temp_13 = inObject ;
  const GGS_XcodeProjectDescriptor temp_14 = inObject ;
  const GGS_XcodeProjectDescriptor temp_15 = inObject ;
  const GGS_XcodeProjectDescriptor temp_16 = inObject ;
  const GGS_XcodeProjectDescriptor temp_17 = inObject ;
  const GGS_XcodeProjectDescriptor temp_18 = inObject ;
  const GGS_XcodeProjectDescriptor temp_19 = inObject ;
  GGS_string var_contents_17330 = GGS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, temp_0.readProperty_mProjectObjectReference (), temp_1.readProperty_mMainGroupReference (), temp_2.readProperty_mGroupList (), temp_3.readProperty_mMainGroupChildrenRefs (), temp_4.readProperty_mToolTargetList (), temp_5.readProperty_mAppTargetList (), temp_6.readProperty_mCppFileList (), temp_7.readProperty_m_5F_M_5F_FileList (), temp_8.readProperty_m_5F_MM_5F_FileList (), temp_9.readProperty_m_5F_SwiftFileList (), temp_10.readProperty_mFrameworkFileList (), temp_11.readProperty_mHeaderFileList (), temp_12.readProperty_mInfoPlistFileList (), temp_13.readProperty_mTIFF_5F_fileList (), temp_14.readProperty_mICNS_5F_fileList (), temp_15.readProperty_mXIB_5F_fileList (), temp_16.readProperty_mBuildFileList (), temp_17.readProperty_mDefaultConfigurationRef (), temp_18.readProperty_mDefaultConfigurationSettingList (), temp_19.readProperty_mProjectBuildConfigurationRef () COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 421))) ;
  GGS_string var_projectCoreFile_17974 = constinArgument_inPath.add_operation (GGS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 443)) ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    GGS_bool test_21 = var_projectCoreFile_17974.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 444)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 444)) ;
    if (kBoolTrue != test_21.boolEnum ()) {
      test_21 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 444)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 444)) ;
    }
    GGS_bool test_22 = test_21 ;
    if (kBoolTrue != test_22.boolEnum ()) {
      test_22 = GGS_bool (ComparisonKind::notEqual, GGS_string::class_func_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 444)).objectCompare (var_contents_17330)) ;
    }
    test_20 = test_22.boolEnum () ;
    if (kBoolTrue == test_20) {
      GGS_bool joker_18234 ; // Joker input parameter
      var_contents_17330.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_18234, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 445)) ;
      var_contents_17330.method_makeDirectoryAndWriteToFile (var_projectCoreFile_17974, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 446)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::~ GGS__32_lstringlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::init_21__21_ (const GGS_lstring & in_mValue_30_,
                                                                             const GGS_lstring & in_mValue_31_,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::class_func_new (const GGS_lstring & in_mValue0,
                                                                               const GGS_lstring & in_mValue1,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue0 ;
  result.mProperty_mValue_31_ = in_mValue1 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_lstringlist_2E_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @2lstringlist.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  const GGS__32_lstringlist_2E_element * p = (const GGS__32_lstringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element::GGS_declarationListAST_2E_element (void) :
mProperty_mPropertyDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element::~ GGS_declarationListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_declarationListAST_2E_element GGS_declarationListAST_2E_element::init_21_ (const GGS_abstractDeclarationAST & in_mPropertyDeclaration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyDeclaration = in_mPropertyDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element::GGS_declarationListAST_2E_element (const GGS_abstractDeclarationAST & inOperand0) :
mProperty_mPropertyDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element GGS_declarationListAST_2E_element::class_func_new (const GGS_abstractDeclarationAST & in_mPropertyDeclaration,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyDeclaration = in_mPropertyDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declarationListAST_2E_element::isValid (void) const {
  return mProperty_mPropertyDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST_2E_element::drop (void) {
  mProperty_mPropertyDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mPropertyDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declarationListAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST_2E_element ("declarationListAST.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_declarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element GGS_declarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_declarationListAST_2E_element result ;
  const GGS_declarationListAST_2E_element * p = (const GGS_declarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element::GGS_externSwiftDelegateList_2E_element (void) :
mProperty_mExternSwiftDelegateName () {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element::~ GGS_externSwiftDelegateList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element GGS_externSwiftDelegateList_2E_element::init_21_ (const GGS_lstring & in_mExternSwiftDelegateName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externSwiftDelegateList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternSwiftDelegateName = in_mExternSwiftDelegateName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element::GGS_externSwiftDelegateList_2E_element (const GGS_lstring & inOperand0) :
mProperty_mExternSwiftDelegateName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element GGS_externSwiftDelegateList_2E_element::class_func_new (const GGS_lstring & in_mExternSwiftDelegateName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externSwiftDelegateList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternSwiftDelegateName = in_mExternSwiftDelegateName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externSwiftDelegateList_2E_element::isValid (void) const {
  return mProperty_mExternSwiftDelegateName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList_2E_element::drop (void) {
  mProperty_mExternSwiftDelegateName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externSwiftDelegateList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExternSwiftDelegateName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externSwiftDelegateList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftDelegateList_2E_element ("externSwiftDelegateList.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externSwiftDelegateList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftDelegateList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externSwiftDelegateList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externSwiftDelegateList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element GGS_externSwiftDelegateList_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_externSwiftDelegateList_2E_element result ;
  const GGS_externSwiftDelegateList_2E_element * p = (const GGS_externSwiftDelegateList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externSwiftDelegateList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftDelegateList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element::GGS_externSwiftFunctionList_2E_element (void) :
mProperty_mExternSwiftFunctionName (),
mProperty_mCallerName () {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element::~ GGS_externSwiftFunctionList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element GGS_externSwiftFunctionList_2E_element::init_21__21_ (const GGS_lstring & in_mExternSwiftFunctionName,
                                                                                             const GGS_lstring & in_mCallerName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externSwiftFunctionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternSwiftFunctionName = in_mExternSwiftFunctionName ;
  result.mProperty_mCallerName = in_mCallerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element::GGS_externSwiftFunctionList_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_lstring & inOperand1) :
mProperty_mExternSwiftFunctionName (inOperand0),
mProperty_mCallerName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element GGS_externSwiftFunctionList_2E_element::class_func_new (const GGS_lstring & in_mExternSwiftFunctionName,
                                                                                               const GGS_lstring & in_mCallerName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externSwiftFunctionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternSwiftFunctionName = in_mExternSwiftFunctionName ;
  result.mProperty_mCallerName = in_mCallerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externSwiftFunctionList_2E_element::isValid (void) const {
  return mProperty_mExternSwiftFunctionName.isValid () && mProperty_mCallerName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList_2E_element::drop (void) {
  mProperty_mExternSwiftFunctionName.drop () ;
  mProperty_mCallerName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externSwiftFunctionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExternSwiftFunctionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCallerName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externSwiftFunctionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftFunctionList_2E_element ("externSwiftFunctionList.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externSwiftFunctionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftFunctionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externSwiftFunctionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externSwiftFunctionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element GGS_externSwiftFunctionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_externSwiftFunctionList_2E_element result ;
  const GGS_externSwiftFunctionList_2E_element * p = (const GGS_externSwiftFunctionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externSwiftFunctionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftFunctionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element::GGS_externFunctionMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element::~ GGS_externFunctionMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externFunctionMap_2E_element GGS_externFunctionMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externFunctionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element::GGS_externFunctionMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element GGS_externFunctionMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externFunctionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externFunctionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externFunctionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externFunctionMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap_2E_element ("externFunctionMap.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externFunctionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element GGS_externFunctionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap_2E_element result ;
  const GGS_externFunctionMap_2E_element * p = (const GGS_externFunctionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @externFunctionMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element_3F_::GGS_externFunctionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element_3F_::GGS_externFunctionMap_2E_element_3F_ (const GGS_externFunctionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element_3F_ GGS_externFunctionMap_2E_element_3F_::init_nil (void) {
  GGS_externFunctionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externFunctionMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externFunctionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_externFunctionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap_2E_element_3F_::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externFunctionMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap_2E_element_3F_ ("externFunctionMap.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externFunctionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element_3F_ GGS_externFunctionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap_2E_element_3F_ result ;
  const GGS_externFunctionMap_2E_element_3F_ * p = (const GGS_externFunctionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element::GGS_enumerationFunctionListAST_2E_element (void) :
mProperty_mEnumName (),
mProperty_mFunctionName (),
mProperty_mAssociationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element::~ GGS_enumerationFunctionListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element GGS_enumerationFunctionListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mEnumName,
                                                                                                       const GGS_lstring & in_mFunctionName,
                                                                                                       const GGS__32_lstringlist & in_mAssociationList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumerationFunctionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumName = in_mEnumName ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mAssociationList = in_mAssociationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element::GGS_enumerationFunctionListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_lstring & inOperand1,
                                                                                      const GGS__32_lstringlist & inOperand2) :
mProperty_mEnumName (inOperand0),
mProperty_mFunctionName (inOperand1),
mProperty_mAssociationList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element GGS_enumerationFunctionListAST_2E_element::class_func_new (const GGS_lstring & in_mEnumName,
                                                                                                     const GGS_lstring & in_mFunctionName,
                                                                                                     const GGS__32_lstringlist & in_mAssociationList,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumerationFunctionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumName = in_mEnumName ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mAssociationList = in_mAssociationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumerationFunctionListAST_2E_element::isValid (void) const {
  return mProperty_mEnumName.isValid () && mProperty_mFunctionName.isValid () && mProperty_mAssociationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST_2E_element::drop (void) {
  mProperty_mEnumName.drop () ;
  mProperty_mFunctionName.drop () ;
  mProperty_mAssociationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumerationFunctionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEnumName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFunctionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumerationFunctionListAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST_2E_element ("enumerationFunctionListAST.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumerationFunctionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationFunctionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationFunctionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationFunctionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element GGS_enumerationFunctionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_enumerationFunctionListAST_2E_element result ;
  const GGS_enumerationFunctionListAST_2E_element * p = (const GGS_enumerationFunctionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationFunctionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationFunctionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element::GGS_enumConstantMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element::~ GGS_enumConstantMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumConstantMap_2E_element GGS_enumConstantMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_uint & in_mIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element::GGS_enumConstantMap_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element GGS_enumConstantMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                               const GGS_uint & in_mIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumConstantMap_2E_element::objectCompare (const GGS_enumConstantMap_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumConstantMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumConstantMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumConstantMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap_2E_element ("enumConstantMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumConstantMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumConstantMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumConstantMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element GGS_enumConstantMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap_2E_element result ;
  const GGS_enumConstantMap_2E_element * p = (const GGS_enumConstantMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumConstantMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @enumConstantMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element_3F_::GGS_enumConstantMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element_3F_::GGS_enumConstantMap_2E_element_3F_ (const GGS_enumConstantMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element_3F_ GGS_enumConstantMap_2E_element_3F_::init_nil (void) {
  GGS_enumConstantMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumConstantMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumConstantMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_enumConstantMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumConstantMap_2E_element_3F_::objectCompare (const GGS_enumConstantMap_2E_element_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap_2E_element_3F_::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumConstantMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap_2E_element_3F_ ("enumConstantMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumConstantMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumConstantMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumConstantMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element_3F_ GGS_enumConstantMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap_2E_element_3F_ result ;
  const GGS_enumConstantMap_2E_element_3F_ * p = (const GGS_enumConstantMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumConstantMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element::GGS_enumFuncMap_2E_element (void) :
mProperty_lkey (),
mProperty_mAssociationSortedList () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element::~ GGS_enumFuncMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumFuncMap_2E_element GGS_enumFuncMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                     const GGS_enumFunAssociationSortedList & in_mAssociationSortedList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumFuncMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAssociationSortedList = in_mAssociationSortedList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element::GGS_enumFuncMap_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_enumFunAssociationSortedList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mAssociationSortedList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element GGS_enumFuncMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                       const GGS_enumFunAssociationSortedList & in_mAssociationSortedList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumFuncMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAssociationSortedList = in_mAssociationSortedList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumFuncMap_2E_element::objectCompare (const GGS_enumFuncMap_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAssociationSortedList.objectCompare (inOperand.mProperty_mAssociationSortedList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumFuncMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAssociationSortedList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAssociationSortedList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumFuncMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociationSortedList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumFuncMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFuncMap_2E_element ("enumFuncMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumFuncMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFuncMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumFuncMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumFuncMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element GGS_enumFuncMap_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_enumFuncMap_2E_element result ;
  const GGS_enumFuncMap_2E_element * p = (const GGS_enumFuncMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumFuncMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFuncMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @enumFuncMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element_3F_::GGS_enumFuncMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element_3F_::GGS_enumFuncMap_2E_element_3F_ (const GGS_enumFuncMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element_3F_ GGS_enumFuncMap_2E_element_3F_::init_nil (void) {
  GGS_enumFuncMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumFuncMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumFuncMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_enumFuncMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumFuncMap_2E_element_3F_::objectCompare (const GGS_enumFuncMap_2E_element_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap_2E_element_3F_::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumFuncMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFuncMap_2E_element_3F_ ("enumFuncMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumFuncMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFuncMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumFuncMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumFuncMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element_3F_ GGS_enumFuncMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_enumFuncMap_2E_element_3F_ result ;
  const GGS_enumFuncMap_2E_element_3F_ * p = (const GGS_enumFuncMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumFuncMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFuncMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element::GGS_astAutoLayoutOutletLinkerList_2E_element (void) :
mProperty_mLinkerName (),
mProperty_mOutletNameList () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element::~ GGS_astAutoLayoutOutletLinkerList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element GGS_astAutoLayoutOutletLinkerList_2E_element::init_21__21_ (const GGS_lstring & in_mLinkerName,
                                                                                                         const GGS_lstringlist & in_mOutletNameList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutOutletLinkerList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLinkerName = in_mLinkerName ;
  result.mProperty_mOutletNameList = in_mOutletNameList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element::GGS_astAutoLayoutOutletLinkerList_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_lstringlist & inOperand1) :
mProperty_mLinkerName (inOperand0),
mProperty_mOutletNameList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element GGS_astAutoLayoutOutletLinkerList_2E_element::class_func_new (const GGS_lstring & in_mLinkerName,
                                                                                                           const GGS_lstringlist & in_mOutletNameList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutOutletLinkerList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLinkerName = in_mLinkerName ;
  result.mProperty_mOutletNameList = in_mOutletNameList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutOutletLinkerList_2E_element::isValid (void) const {
  return mProperty_mLinkerName.isValid () && mProperty_mOutletNameList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList_2E_element::drop (void) {
  mProperty_mLinkerName.drop () ;
  mProperty_mOutletNameList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutOutletLinkerList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLinkerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOutletNameList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astAutoLayoutOutletLinkerList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList_2E_element ("astAutoLayoutOutletLinkerList.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astAutoLayoutOutletLinkerList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutOutletLinkerList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutOutletLinkerList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element GGS_astAutoLayoutOutletLinkerList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutOutletLinkerList_2E_element result ;
  const GGS_astAutoLayoutOutletLinkerList_2E_element * p = (const GGS_astAutoLayoutOutletLinkerList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutOutletLinkerList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutOutletLinkerList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum::GGS_autoLayoutClassParameterType_2E_typeEnum (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum::~ GGS_autoLayoutClassParameterType_2E_typeEnum (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum GGS_autoLayoutClassParameterType_2E_typeEnum::init_21_ (const GGS_lstring & in_name,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType_2E_typeEnum result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType_2E_typeEnum::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum::GGS_autoLayoutClassParameterType_2E_typeEnum (const GGS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum GGS_autoLayoutClassParameterType_2E_typeEnum::class_func_new (const GGS_lstring & in_name,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType_2E_typeEnum result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutClassParameterType_2E_typeEnum::objectCompare (const GGS_autoLayoutClassParameterType_2E_typeEnum & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutClassParameterType_2E_typeEnum::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType_2E_typeEnum::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType_2E_typeEnum::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutClassParameterType.typeEnum:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutClassParameterType.typeEnum generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum ("autoLayoutClassParameterType.typeEnum",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutClassParameterType_2E_typeEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutClassParameterType_2E_typeEnum::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutClassParameterType_2E_typeEnum (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum GGS_autoLayoutClassParameterType_2E_typeEnum::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType_2E_typeEnum result ;
  const GGS_autoLayoutClassParameterType_2E_typeEnum * p = (const GGS_autoLayoutClassParameterType_2E_typeEnum *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutClassParameterType_2E_typeEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterType.typeEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @autoLayoutClassParameterType_2E_typeEnum_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ (const GGS_autoLayoutClassParameterType_2E_typeEnum & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::init_nil (void) {
  GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autoLayoutClassParameterType_2E_typeEnum () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::objectCompare (const GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutClassParameterType.typeEnum? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum_3F_ ("autoLayoutClassParameterType.typeEnum?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ result ;
  const GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ * p = (const GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterType.typeEnum?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element::GGS_autoLayoutClassParameterList_2E_element (void) :
mProperty_mParameterName (),
mProperty_mParameterType () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element::~ GGS_autoLayoutClassParameterList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element GGS_autoLayoutClassParameterList_2E_element::init_21__21_ (const GGS_lstring & in_mParameterName,
                                                                                                       const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterType = in_mParameterType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element::GGS_autoLayoutClassParameterList_2E_element (const GGS_lstring & inOperand0,
                                                                                          const GGS_autoLayoutClassParameterType & inOperand1) :
mProperty_mParameterName (inOperand0),
mProperty_mParameterType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element GGS_autoLayoutClassParameterList_2E_element::class_func_new (const GGS_lstring & in_mParameterName,
                                                                                                         const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterType = in_mParameterType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutClassParameterList_2E_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mParameterType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList_2E_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mParameterType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutClassParameterList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mParameterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutClassParameterList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList_2E_element ("autoLayoutClassParameterList.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutClassParameterList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutClassParameterList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutClassParameterList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element GGS_autoLayoutClassParameterList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList_2E_element result ;
  const GGS_autoLayoutClassParameterList_2E_element * p = (const GGS_autoLayoutClassParameterList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutClassParameterList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

