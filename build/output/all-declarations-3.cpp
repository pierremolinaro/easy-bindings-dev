#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak & GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::operator = (const GGS_abstractBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (const GGS_abstractBooleanMultipleBindingExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractBooleanMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_abstractBooleanMultipleBindingExpressionAST * p = (cPtr_abstractBooleanMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractBooleanMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::bang_abstractBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
      result = GGS_abstractBooleanMultipleBindingExpressionAST ((cPtr_abstractBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractBooleanMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak ("abstractBooleanMultipleBindingExpressionAST.weak",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak result ;
  const GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak * p = (const GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalIntMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_literalIntMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_literalIntMultipleBindingExpressionAST_2E_weak::GGS_literalIntMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST_2E_weak & GGS_literalIntMultipleBindingExpressionAST_2E_weak::operator = (const GGS_literalIntMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST_2E_weak::GGS_literalIntMultipleBindingExpressionAST_2E_weak (const GGS_literalIntMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST_2E_weak GGS_literalIntMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalIntMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST GGS_literalIntMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalIntMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalIntMultipleBindingExpressionAST * p = (cPtr_literalIntMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalIntMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST GGS_literalIntMultipleBindingExpressionAST_2E_weak::bang_literalIntMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalIntMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalIntMultipleBindingExpressionAST) ;
      result = GGS_literalIntMultipleBindingExpressionAST ((cPtr_literalIntMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalIntMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2E_weak ("literalIntMultipleBindingExpressionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalIntMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalIntMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalIntMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST_2E_weak GGS_literalIntMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_literalIntMultipleBindingExpressionAST_2E_weak result ;
  const GGS_literalIntMultipleBindingExpressionAST_2E_weak * p = (const GGS_literalIntMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalIntMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @negateBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_negateBooleanMultipleBindingExpressionAST::objectCompare (const GGS_negateBooleanMultipleBindingExpressionAST & inOperand) const {
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

GGS_negateBooleanMultipleBindingExpressionAST::GGS_negateBooleanMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST GGS_negateBooleanMultipleBindingExpressionAST::
init_21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mBinding,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_negateBooleanMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_negateBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->negateBooleanMultipleBindingExpressionAST_init_21_ (in_mBinding, inCompiler) ;
  const GGS_negateBooleanMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionAST::
negateBooleanMultipleBindingExpressionAST_init_21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mBinding,
                                                    Compiler * /* inCompiler */) {
  mProperty_mBinding = in_mBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST::GGS_negateBooleanMultipleBindingExpressionAST (const cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_negateBooleanMultipleBindingExpressionAST::readProperty_mBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_negateBooleanMultipleBindingExpressionAST * p = (cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_negateBooleanMultipleBindingExpressionAST::setProperty_mBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_negateBooleanMultipleBindingExpressionAST * p = (cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @negateBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionAST::cPtr_negateBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionAST::cPtr_negateBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mBinding,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mBinding () {
  mProperty_mBinding = in_mBinding ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_negateBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

void cPtr_negateBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@negateBooleanMultipleBindingExpressionAST:") ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionAST (mProperty_mBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_negateBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mBinding.printNonNullClassInstanceProperties ("mBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @negateBooleanMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ("negateBooleanMultipleBindingExpressionAST",
                                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_negateBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_negateBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_negateBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST GGS_negateBooleanMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionAST result ;
  const GGS_negateBooleanMultipleBindingExpressionAST * p = (const GGS_negateBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_negateBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_negateBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::GGS_negateBooleanMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST_2E_weak & GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::operator = (const GGS_negateBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::GGS_negateBooleanMultipleBindingExpressionAST_2E_weak (const GGS_negateBooleanMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST_2E_weak GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_negateBooleanMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_negateBooleanMultipleBindingExpressionAST * p = (cPtr_negateBooleanMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_negateBooleanMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::bang_negateBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_negateBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_negateBooleanMultipleBindingExpressionAST) ;
      result = GGS_negateBooleanMultipleBindingExpressionAST ((cPtr_negateBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @negateBooleanMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2E_weak ("negateBooleanMultipleBindingExpressionAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_negateBooleanMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST_2E_weak GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionAST_2E_weak result ;
  const GGS_negateBooleanMultipleBindingExpressionAST_2E_weak * p = (const GGS_negateBooleanMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_negateBooleanMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonMultipleBindingExpressionAST::objectCompare (const GGS_comparisonMultipleBindingExpressionAST & inOperand) const {
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

GGS_comparisonMultipleBindingExpressionAST::GGS_comparisonMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST::
init_21__21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                  const GGS_multipleBindingComparisonAST & in_mOperator,
                  const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_comparisonMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_comparisonMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->comparisonMultipleBindingExpressionAST_init_21__21__21_ (in_mLeftBinding, in_mOperator, in_mRightBinding, inCompiler) ;
  const GGS_comparisonMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionAST::
comparisonMultipleBindingExpressionAST_init_21__21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                         const GGS_multipleBindingComparisonAST & in_mOperator,
                                                         const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                         Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST::GGS_comparisonMultipleBindingExpressionAST (const cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonMultipleBindingExpressionAST::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingComparisonAST GGS_comparisonMultipleBindingExpressionAST::readProperty_mOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_multipleBindingComparisonAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    return p->mProperty_mOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonMultipleBindingExpressionAST::setProperty_mOperator (const GGS_multipleBindingComparisonAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonMultipleBindingExpressionAST::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionAST::cPtr_comparisonMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mOperator (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionAST::cPtr_comparisonMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GGS_multipleBindingComparisonAST & in_mOperator,
                                                                                          const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mOperator (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_comparisonMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

void cPtr_comparisonMultipleBindingExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@comparisonMultipleBindingExpressionAST:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_comparisonMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mOperator.printNonNullClassInstanceProperties ("mOperator") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @comparisonMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ("comparisonMultipleBindingExpressionAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionAST result ;
  const GGS_comparisonMultipleBindingExpressionAST * p = (const GGS_comparisonMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_comparisonMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_comparisonMultipleBindingExpressionAST_2E_weak::GGS_comparisonMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST_2E_weak & GGS_comparisonMultipleBindingExpressionAST_2E_weak::operator = (const GGS_comparisonMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST_2E_weak::GGS_comparisonMultipleBindingExpressionAST_2E_weak (const GGS_comparisonMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST_2E_weak GGS_comparisonMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_comparisonMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_comparisonMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST_2E_weak::bang_comparisonMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_comparisonMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonMultipleBindingExpressionAST) ;
      result = GGS_comparisonMultipleBindingExpressionAST ((cPtr_comparisonMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @comparisonMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2E_weak ("comparisonMultipleBindingExpressionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST_2E_weak GGS_comparisonMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionAST_2E_weak result ;
  const GGS_comparisonMultipleBindingExpressionAST_2E_weak * p = (const GGS_comparisonMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andBooleanMultipleBindingExpressionAST::objectCompare (const GGS_andBooleanMultipleBindingExpressionAST & inOperand) const {
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

GGS_andBooleanMultipleBindingExpressionAST::GGS_andBooleanMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST::
init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
              const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_andBooleanMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_andBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->andBooleanMultipleBindingExpressionAST_init_21__21_ (in_mLeftBinding, in_mRightBinding, inCompiler) ;
  const GGS_andBooleanMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionAST::
andBooleanMultipleBindingExpressionAST_init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                     const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                     Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST::GGS_andBooleanMultipleBindingExpressionAST (const cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_andBooleanMultipleBindingExpressionAST::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_andBooleanMultipleBindingExpressionAST::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionAST::cPtr_andBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionAST::cPtr_andBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_andBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

void cPtr_andBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@andBooleanMultipleBindingExpressionAST:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andBooleanMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @andBooleanMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ("andBooleanMultipleBindingExpressionAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionAST result ;
  const GGS_andBooleanMultipleBindingExpressionAST * p = (const GGS_andBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andBooleanMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_andBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_andBooleanMultipleBindingExpressionAST_2E_weak::GGS_andBooleanMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST_2E_weak & GGS_andBooleanMultipleBindingExpressionAST_2E_weak::operator = (const GGS_andBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST_2E_weak::GGS_andBooleanMultipleBindingExpressionAST_2E_weak (const GGS_andBooleanMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST_2E_weak GGS_andBooleanMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_andBooleanMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_andBooleanMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST_2E_weak::bang_andBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andBooleanMultipleBindingExpressionAST) ;
      result = GGS_andBooleanMultipleBindingExpressionAST ((cPtr_andBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @andBooleanMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2E_weak ("andBooleanMultipleBindingExpressionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andBooleanMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andBooleanMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST_2E_weak GGS_andBooleanMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionAST_2E_weak result ;
  const GGS_andBooleanMultipleBindingExpressionAST_2E_weak * p = (const GGS_andBooleanMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andBooleanMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @orBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orBooleanMultipleBindingExpressionAST::objectCompare (const GGS_orBooleanMultipleBindingExpressionAST & inOperand) const {
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

GGS_orBooleanMultipleBindingExpressionAST::GGS_orBooleanMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST::
init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
              const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_orBooleanMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_orBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->orBooleanMultipleBindingExpressionAST_init_21__21_ (in_mLeftBinding, in_mRightBinding, inCompiler) ;
  const GGS_orBooleanMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionAST::
orBooleanMultipleBindingExpressionAST_init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                    const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                    Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST::GGS_orBooleanMultipleBindingExpressionAST (const cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_orBooleanMultipleBindingExpressionAST::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_orBooleanMultipleBindingExpressionAST::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionAST::cPtr_orBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionAST::cPtr_orBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                        const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_orBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

void cPtr_orBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@orBooleanMultipleBindingExpressionAST:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orBooleanMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @orBooleanMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ("orBooleanMultipleBindingExpressionAST",
                                                                                          & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionAST result ;
  const GGS_orBooleanMultipleBindingExpressionAST * p = (const GGS_orBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orBooleanMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_orBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_orBooleanMultipleBindingExpressionAST_2E_weak::GGS_orBooleanMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST_2E_weak & GGS_orBooleanMultipleBindingExpressionAST_2E_weak::operator = (const GGS_orBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST_2E_weak::GGS_orBooleanMultipleBindingExpressionAST_2E_weak (const GGS_orBooleanMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST_2E_weak GGS_orBooleanMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_orBooleanMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_orBooleanMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST_2E_weak::bang_orBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_orBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orBooleanMultipleBindingExpressionAST) ;
      result = GGS_orBooleanMultipleBindingExpressionAST ((cPtr_orBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @orBooleanMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2E_weak ("orBooleanMultipleBindingExpressionAST.weak",
                                                                                                  & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orBooleanMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orBooleanMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST_2E_weak GGS_orBooleanMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionAST_2E_weak result ;
  const GGS_orBooleanMultipleBindingExpressionAST_2E_weak * p = (const GGS_orBooleanMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orBooleanMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @xorBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xorBooleanMultipleBindingExpressionAST::objectCompare (const GGS_xorBooleanMultipleBindingExpressionAST & inOperand) const {
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

GGS_xorBooleanMultipleBindingExpressionAST::GGS_xorBooleanMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST::
init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
              const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_xorBooleanMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_xorBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->xorBooleanMultipleBindingExpressionAST_init_21__21_ (in_mLeftBinding, in_mRightBinding, inCompiler) ;
  const GGS_xorBooleanMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionAST::
xorBooleanMultipleBindingExpressionAST_init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                     const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                     Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST::GGS_xorBooleanMultipleBindingExpressionAST (const cPtr_xorBooleanMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_xorBooleanMultipleBindingExpressionAST::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_xorBooleanMultipleBindingExpressionAST::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @xorBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionAST::cPtr_xorBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionAST::cPtr_xorBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_xorBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

void cPtr_xorBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@xorBooleanMultipleBindingExpressionAST:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_xorBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @xorBooleanMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ("xorBooleanMultipleBindingExpressionAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xorBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xorBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xorBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionAST result ;
  const GGS_xorBooleanMultipleBindingExpressionAST * p = (const GGS_xorBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xorBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_xorBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::GGS_xorBooleanMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST_2E_weak & GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::operator = (const GGS_xorBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::GGS_xorBooleanMultipleBindingExpressionAST_2E_weak (const GGS_xorBooleanMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST_2E_weak GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_xorBooleanMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_xorBooleanMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::bang_xorBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_xorBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorBooleanMultipleBindingExpressionAST) ;
      result = GGS_xorBooleanMultipleBindingExpressionAST ((cPtr_xorBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @xorBooleanMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2E_weak ("xorBooleanMultipleBindingExpressionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xorBooleanMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST_2E_weak GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionAST_2E_weak result ;
  const GGS_xorBooleanMultipleBindingExpressionAST_2E_weak * p = (const GGS_xorBooleanMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xorBooleanMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @observablePropertyInMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_observablePropertyInMultipleBindingExpressionAST::objectCompare (const GGS_observablePropertyInMultipleBindingExpressionAST & inOperand) const {
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

GGS_observablePropertyInMultipleBindingExpressionAST::GGS_observablePropertyInMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST GGS_observablePropertyInMultipleBindingExpressionAST::
init_21_ (const GGS_observablePropertyAST & in_mProperty,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_observablePropertyInMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_observablePropertyInMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->observablePropertyInMultipleBindingExpressionAST_init_21_ (in_mProperty, inCompiler) ;
  const GGS_observablePropertyInMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_observablePropertyInMultipleBindingExpressionAST::
observablePropertyInMultipleBindingExpressionAST_init_21_ (const GGS_observablePropertyAST & in_mProperty,
                                                           Compiler * /* inCompiler */) {
  mProperty_mProperty = in_mProperty ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST::GGS_observablePropertyInMultipleBindingExpressionAST (const cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyInMultipleBindingExpressionAST::readProperty_mProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_observablePropertyAST () ;
  }else{
    cPtr_observablePropertyInMultipleBindingExpressionAST * p = (cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    return p->mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyInMultipleBindingExpressionAST::setProperty_mProperty (const GGS_observablePropertyAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_observablePropertyInMultipleBindingExpressionAST * p = (cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    p->mProperty_mProperty = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @observablePropertyInMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_observablePropertyInMultipleBindingExpressionAST::cPtr_observablePropertyInMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

cPtr_observablePropertyInMultipleBindingExpressionAST::cPtr_observablePropertyInMultipleBindingExpressionAST (const GGS_observablePropertyAST & in_mProperty,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mProperty () {
  mProperty_mProperty = in_mProperty ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_observablePropertyInMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

void cPtr_observablePropertyInMultipleBindingExpressionAST::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@observablePropertyInMultipleBindingExpressionAST:") ;
  mProperty_mProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_observablePropertyInMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_observablePropertyInMultipleBindingExpressionAST (mProperty_mProperty, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_observablePropertyInMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mProperty.printNonNullClassInstanceProperties ("mProperty") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @observablePropertyInMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ("observablePropertyInMultipleBindingExpressionAST",
                                                                                                     & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyInMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyInMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyInMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST GGS_observablePropertyInMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_observablePropertyInMultipleBindingExpressionAST result ;
  const GGS_observablePropertyInMultipleBindingExpressionAST * p = (const GGS_observablePropertyInMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyInMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyInMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak & GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::operator = (const GGS_observablePropertyInMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak (const GGS_observablePropertyInMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_observablePropertyInMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (cPtr_observablePropertyInMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_observablePropertyInMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::bang_observablePropertyInMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyInMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
      result = GGS_observablePropertyInMultipleBindingExpressionAST ((cPtr_observablePropertyInMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyInMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST_2E_weak ("observablePropertyInMultipleBindingExpressionAST.weak",
                                                                                                             & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak result ;
  const GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak * p = (const GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyInMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractBooleanMultipleBindingExpressionForGeneration::objectCompare (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_abstractBooleanMultipleBindingExpressionForGeneration::GGS_abstractBooleanMultipleBindingExpressionForGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractBooleanMultipleBindingExpressionForGeneration::
abstractBooleanMultipleBindingExpressionForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration::GGS_abstractBooleanMultipleBindingExpressionForGeneration (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractBooleanMultipleBindingExpressionForGeneration::cPtr_abstractBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractBooleanMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ("abstractBooleanMultipleBindingExpressionForGeneration",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_abstractBooleanMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  const GGS_abstractBooleanMultipleBindingExpressionForGeneration * p = (const GGS_abstractBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak & GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * p = (cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractBooleanMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
      result = GGS_abstractBooleanMultipleBindingExpressionForGeneration ((cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak ("abstractBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @observablePropertyAsBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::objectCompare (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::
init_21_ (const GGS_string & in_mObservedModelString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->observablePropertyAsBooleanMultipleBindingExpressionForGeneration_init_21_ (in_mObservedModelString, inCompiler) ;
  const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::
observablePropertyAsBooleanMultipleBindingExpressionForGeneration_init_21_ (const GGS_string & in_mObservedModelString,
                                                                            Compiler * /* inCompiler */) {
  mProperty_mObservedModelString = in_mObservedModelString ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::readProperty_mObservedModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mObservedModelString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::setProperty_mObservedModelString (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mObservedModelString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mObservedModelString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GGS_string & in_mObservedModelString,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mObservedModelString () {
  mProperty_mObservedModelString = in_mObservedModelString ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@observablePropertyAsBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mObservedModelString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (mProperty_mObservedModelString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mObservedModelString.printNonNullClassInstanceProperties ("mObservedModelString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAsBooleanMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration",
                                                                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak & GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
      result = GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ((cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAsBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @booleanMultipleBindingLiteralIntForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_booleanMultipleBindingLiteralIntForGeneration::objectCompare (const GGS_booleanMultipleBindingLiteralIntForGeneration & inOperand) const {
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

GGS_booleanMultipleBindingLiteralIntForGeneration::GGS_booleanMultipleBindingLiteralIntForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration GGS_booleanMultipleBindingLiteralIntForGeneration::
init_21_ (const GGS_uint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_booleanMultipleBindingLiteralIntForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_booleanMultipleBindingLiteralIntForGeneration (inCompiler COMMA_THERE)) ;
  object->booleanMultipleBindingLiteralIntForGeneration_init_21_ (in_mValue, inCompiler) ;
  const GGS_booleanMultipleBindingLiteralIntForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_booleanMultipleBindingLiteralIntForGeneration::
booleanMultipleBindingLiteralIntForGeneration_init_21_ (const GGS_uint & in_mValue,
                                                        Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration::GGS_booleanMultipleBindingLiteralIntForGeneration (const cPtr_booleanMultipleBindingLiteralIntForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_booleanMultipleBindingLiteralIntForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_booleanMultipleBindingLiteralIntForGeneration::setProperty_mValue (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @booleanMultipleBindingLiteralIntForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_booleanMultipleBindingLiteralIntForGeneration::cPtr_booleanMultipleBindingLiteralIntForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_booleanMultipleBindingLiteralIntForGeneration::cPtr_booleanMultipleBindingLiteralIntForGeneration (const GGS_uint & in_mValue,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_booleanMultipleBindingLiteralIntForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

void cPtr_booleanMultipleBindingLiteralIntForGeneration::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@booleanMultipleBindingLiteralIntForGeneration:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_booleanMultipleBindingLiteralIntForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_booleanMultipleBindingLiteralIntForGeneration (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_booleanMultipleBindingLiteralIntForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @booleanMultipleBindingLiteralIntForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ("booleanMultipleBindingLiteralIntForGeneration",
                                                                                                  & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_booleanMultipleBindingLiteralIntForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_booleanMultipleBindingLiteralIntForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_booleanMultipleBindingLiteralIntForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration GGS_booleanMultipleBindingLiteralIntForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_booleanMultipleBindingLiteralIntForGeneration result ;
  const GGS_booleanMultipleBindingLiteralIntForGeneration * p = (const GGS_booleanMultipleBindingLiteralIntForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_booleanMultipleBindingLiteralIntForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanMultipleBindingLiteralIntForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::objectCompare (const GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak & inOperand) const {
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

GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak & GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::operator = (const GGS_booleanMultipleBindingLiteralIntForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak (const GGS_booleanMultipleBindingLiteralIntForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (isValid ()) {
    const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (cPtr_booleanMultipleBindingLiteralIntForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_booleanMultipleBindingLiteralIntForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::bang_booleanMultipleBindingLiteralIntForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
      result = GGS_booleanMultipleBindingLiteralIntForGeneration ((cPtr_booleanMultipleBindingLiteralIntForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @booleanMultipleBindingLiteralIntForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration_2E_weak ("booleanMultipleBindingLiteralIntForGeneration.weak",
                                                                                                          & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak result ;
  const GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak * p = (const GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanMultipleBindingLiteralIntForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @negateBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_negateBooleanMultipleBindingExpressionForGeneration::objectCompare (const GGS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_negateBooleanMultipleBindingExpressionForGeneration::GGS_negateBooleanMultipleBindingExpressionForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration GGS_negateBooleanMultipleBindingExpressionForGeneration::
init_21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->negateBooleanMultipleBindingExpressionForGeneration_init_21_ (in_mBinding, inCompiler) ;
  const GGS_negateBooleanMultipleBindingExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionForGeneration::
negateBooleanMultipleBindingExpressionForGeneration_init_21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding,
                                                              Compiler * /* inCompiler */) {
  mProperty_mBinding = in_mBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration::GGS_negateBooleanMultipleBindingExpressionForGeneration (const cPtr_negateBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_negateBooleanMultipleBindingExpressionForGeneration::readProperty_mBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_negateBooleanMultipleBindingExpressionForGeneration::setProperty_mBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @negateBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionForGeneration::cPtr_negateBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionForGeneration::cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mBinding () {
  mProperty_mBinding = in_mBinding ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_negateBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_negateBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@negateBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (mProperty_mBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_negateBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mBinding.printNonNullClassInstanceProperties ("mBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @negateBooleanMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ("negateBooleanMultipleBindingExpressionForGeneration",
                                                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_negateBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_negateBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_negateBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration GGS_negateBooleanMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionForGeneration result ;
  const GGS_negateBooleanMultipleBindingExpressionForGeneration * p = (const GGS_negateBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_negateBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak & GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_negateBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak (const GGS_negateBooleanMultipleBindingExpressionForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (cPtr_negateBooleanMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_negateBooleanMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_negateBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
      result = GGS_negateBooleanMultipleBindingExpressionForGeneration ((cPtr_negateBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @negateBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak ("negateBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                                & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @orBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orBooleanMultipleBindingExpressionForGeneration::objectCompare (const GGS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_orBooleanMultipleBindingExpressionForGeneration::GGS_orBooleanMultipleBindingExpressionForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration::
init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_orBooleanMultipleBindingExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_orBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->orBooleanMultipleBindingExpressionForGeneration_init_21__21_ (in_mLeftBinding, in_mRightBinding, inCompiler) ;
  const GGS_orBooleanMultipleBindingExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionForGeneration::
orBooleanMultipleBindingExpressionForGeneration_init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                              Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration::GGS_orBooleanMultipleBindingExpressionForGeneration (const cPtr_orBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_orBooleanMultipleBindingExpressionForGeneration::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_orBooleanMultipleBindingExpressionForGeneration::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionForGeneration::cPtr_orBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionForGeneration::cPtr_orBooleanMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                            const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_orBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_orBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@orBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @orBooleanMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ("orBooleanMultipleBindingExpressionForGeneration",
                                                                                                    & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionForGeneration result ;
  const GGS_orBooleanMultipleBindingExpressionForGeneration * p = (const GGS_orBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak & GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_orBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak (const GGS_orBooleanMultipleBindingExpressionForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_orBooleanMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_orBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
      result = GGS_orBooleanMultipleBindingExpressionForGeneration ((cPtr_orBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @orBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration_2E_weak ("orBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                            & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @xorBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xorBooleanMultipleBindingExpressionForGeneration::objectCompare (const GGS_xorBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_xorBooleanMultipleBindingExpressionForGeneration::GGS_xorBooleanMultipleBindingExpressionForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration::
init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_xorBooleanMultipleBindingExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_xorBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->xorBooleanMultipleBindingExpressionForGeneration_init_21__21_ (in_mLeftBinding, in_mRightBinding, inCompiler) ;
  const GGS_xorBooleanMultipleBindingExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionForGeneration::
xorBooleanMultipleBindingExpressionForGeneration_init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                               const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                               Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration::GGS_xorBooleanMultipleBindingExpressionForGeneration (const cPtr_xorBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_xorBooleanMultipleBindingExpressionForGeneration::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_xorBooleanMultipleBindingExpressionForGeneration::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @xorBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionForGeneration::cPtr_xorBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionForGeneration::cPtr_xorBooleanMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_xorBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_xorBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@xorBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_xorBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @xorBooleanMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ("xorBooleanMultipleBindingExpressionForGeneration",
                                                                                                     & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xorBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xorBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xorBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionForGeneration result ;
  const GGS_xorBooleanMultipleBindingExpressionForGeneration * p = (const GGS_xorBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xorBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak & GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_xorBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak (const GGS_xorBooleanMultipleBindingExpressionForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_xorBooleanMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_xorBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
      result = GGS_xorBooleanMultipleBindingExpressionForGeneration ((cPtr_xorBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @xorBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak ("xorBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                             & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andBooleanMultipleBindingExpressionForGeneration::objectCompare (const GGS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_andBooleanMultipleBindingExpressionForGeneration::GGS_andBooleanMultipleBindingExpressionForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration::
init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_andBooleanMultipleBindingExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_andBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->andBooleanMultipleBindingExpressionForGeneration_init_21__21_ (in_mLeftBinding, in_mRightBinding, inCompiler) ;
  const GGS_andBooleanMultipleBindingExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionForGeneration::
andBooleanMultipleBindingExpressionForGeneration_init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                               const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                               Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration::GGS_andBooleanMultipleBindingExpressionForGeneration (const cPtr_andBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_andBooleanMultipleBindingExpressionForGeneration::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_andBooleanMultipleBindingExpressionForGeneration::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionForGeneration::cPtr_andBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionForGeneration::cPtr_andBooleanMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_andBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_andBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@andBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @andBooleanMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ("andBooleanMultipleBindingExpressionForGeneration",
                                                                                                     & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionForGeneration result ;
  const GGS_andBooleanMultipleBindingExpressionForGeneration * p = (const GGS_andBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak & GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_andBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak (const GGS_andBooleanMultipleBindingExpressionForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_andBooleanMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_andBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
      result = GGS_andBooleanMultipleBindingExpressionForGeneration ((cPtr_andBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @andBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration_2E_weak ("andBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                             & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonMultipleBindingExpressionForGeneration::objectCompare (const GGS_comparisonMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_comparisonMultipleBindingExpressionForGeneration::GGS_comparisonMultipleBindingExpressionForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration::
init_21__21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                  const GGS_multipleBindingComparisonAST & in_mOperator,
                  const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_comparisonMultipleBindingExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_comparisonMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->comparisonMultipleBindingExpressionForGeneration_init_21__21__21_ (in_mLeftBinding, in_mOperator, in_mRightBinding, inCompiler) ;
  const GGS_comparisonMultipleBindingExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionForGeneration::
comparisonMultipleBindingExpressionForGeneration_init_21__21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                   const GGS_multipleBindingComparisonAST & in_mOperator,
                                                                   const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration::GGS_comparisonMultipleBindingExpressionForGeneration (const cPtr_comparisonMultipleBindingExpressionForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonMultipleBindingExpressionForGeneration::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingComparisonAST GGS_comparisonMultipleBindingExpressionForGeneration::readProperty_mOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_multipleBindingComparisonAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonMultipleBindingExpressionForGeneration::setProperty_mOperator (const GGS_multipleBindingComparisonAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonMultipleBindingExpressionForGeneration::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionForGeneration::cPtr_comparisonMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mOperator (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionForGeneration::cPtr_comparisonMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GGS_multipleBindingComparisonAST & in_mOperator,
                                                                                                              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mOperator (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_comparisonMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

void cPtr_comparisonMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@comparisonMultipleBindingExpressionForGeneration:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_comparisonMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mOperator.printNonNullClassInstanceProperties ("mOperator") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @comparisonMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ("comparisonMultipleBindingExpressionForGeneration",
                                                                                                     & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionForGeneration result ;
  const GGS_comparisonMultipleBindingExpressionForGeneration * p = (const GGS_comparisonMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak & GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_comparisonMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak (const GGS_comparisonMultipleBindingExpressionForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_comparisonMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_comparisonMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::bang_comparisonMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_comparisonMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
      result = GGS_comparisonMultipleBindingExpressionForGeneration ((cPtr_comparisonMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @comparisonMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration_2E_weak ("comparisonMultipleBindingExpressionForGeneration.weak",
                                                                                                             & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpressionForMultipleBinding (cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                              const GGS_bool constin_inPreferences,
                                                              const GGS_propertyMap constin_inRootObservablePropertyMap,
                                                              const GGS_semanticContext constin_inSemanticContext,
                                                              const GGS_propertyMap constin_inCurrentObservablePropertyMap,
                                                              const GGS_propertyMap constin_inPreferencesObservablePropertyMap,
                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & out_outEnableExpression,
                                                              GGS_typeKind & out_outType,
                                                              GGS_location & out_outErrorLocation,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outEnableExpression.drop () ;
  out_outType.drop () ;
  out_outErrorLocation.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
    inObject->method_analyzeExpressionForMultipleBinding (constin_inPreferences, constin_inRootObservablePropertyMap, constin_inSemanticContext, constin_inCurrentObservablePropertyMap, constin_inPreferencesObservablePropertyMap, out_outEnableExpression, out_outType, out_outErrorLocation, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_expressionString (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@outletClassBindingSpecificationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_outletClassBindingSpecificationList : public cCollectionElement {
  public: GGS_outletClassBindingSpecificationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_outletClassBindingSpecificationList (const GGS_lstring & in_mOutletClassName,
                                                                  const GGS_lstring & in_mBindingName,
                                                                  const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                  const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletClassBindingSpecificationList::cCollectionElement_outletClassBindingSpecificationList (const GGS_lstring & in_mOutletClassName,
                                                                                                                const GGS_lstring & in_mBindingName,
                                                                                                                const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletClassName, in_mBindingName, in_mOutletClassBindingSpecificationModelList, in_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletClassBindingSpecificationList::cCollectionElement_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletClassName, inElement.mProperty_mBindingName, inElement.mProperty_mOutletClassBindingSpecificationModelList, inElement.mProperty_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_outletClassBindingSpecificationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletClassBindingSpecificationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_outletClassBindingSpecificationList (mObject.mProperty_mOutletClassName, mObject.mProperty_mBindingName, mObject.mProperty_mOutletClassBindingSpecificationModelList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @outletClassBindingSpecificationList
//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList::GGS_outletClassBindingSpecificationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList::GGS_outletClassBindingSpecificationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    const GGS_outletClassBindingSpecificationList_2E_element element (p->mObject.mProperty_mOutletClassName, p->mObject.mProperty_mBindingName, p->mObject.mProperty_mOutletClassBindingSpecificationModelList, p->mObject.mProperty_mBindingOptionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GGS_lstring & in_mOutletClassName,
                                                                         const GGS_lstring & in_mBindingName,
                                                                         const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                         const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (in_mOutletClassName, in_mBindingName, in_mOutletClassBindingSpecificationModelList, in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletClassBindingSpecificationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_outletClassBindingSpecificationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOutletClassName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletClassName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBindingName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOutletClassBindingSpecificationModelList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBindingOptionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingOptionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::plusPlusAssignOperation (const GGS_outletClassBindingSpecificationList_2E_element & inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                           const GGS_lstring & inOperand1,
                                                                                                           const GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                           const GGS_controllerBindingOptionList & inOperand3
                                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_outletClassBindingSpecificationList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_outletClassBindingSpecificationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::addAssignOperation (const GGS_lstring & inOperand0,
                                                                  const GGS_lstring & inOperand1,
                                                                  const GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                  const GGS_controllerBindingOptionList & inOperand3
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_outletClassBindingSpecificationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_append (const GGS_lstring inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_outletClassBindingSpecificationModelList inOperand2,
                                                             const GGS_controllerBindingOptionList inOperand3,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  const GGS_outletClassBindingSpecificationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                    const GGS_lstring inOperand1,
                                                                    const GGS_outletClassBindingSpecificationModelList inOperand2,
                                                                    const GGS_controllerBindingOptionList inOperand3,
                                                                    const GGS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_outletClassBindingSpecificationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                    GGS_lstring & outOperand1,
                                                                    GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                    GGS_controllerBindingOptionList & outOperand3,
                                                                    const GGS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOutletClassName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBindingName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mBindingOptionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_popFirst (GGS_lstring & outOperand0,
                                                               GGS_lstring & outOperand1,
                                                               GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                               GGS_controllerBindingOptionList & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletClassName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mBindingOptionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_popLast (GGS_lstring & outOperand0,
                                                              GGS_lstring & outOperand1,
                                                              GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                              GGS_controllerBindingOptionList & outOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletClassName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mBindingOptionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::method_first (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                            GGS_controllerBindingOptionList & outOperand3,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletClassName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mBindingOptionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::method_last (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                           GGS_controllerBindingOptionList & outOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletClassName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mBindingOptionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::add_operation (const GGS_outletClassBindingSpecificationList & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::subList (const int32_t inStart,
                                                                                          const int32_t inLength,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::plusAssignOperation (const GGS_outletClassBindingSpecificationList inList,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_setMOutletClassNameAtIndex (GGS_lstring inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletClassName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_outletClassBindingSpecificationList::getter_mOutletClassNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletClassName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_setMBindingNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_outletClassBindingSpecificationList::getter_mBindingNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_setMOutletClassBindingSpecificationModelListAtIndex (GGS_outletClassBindingSpecificationModelList inOperand,
                                                                                                          GGS_uint inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletClassBindingSpecificationModelList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_outletClassBindingSpecificationModelList GGS_outletClassBindingSpecificationList::getter_mOutletClassBindingSpecificationModelListAtIndex (const GGS_uint & inIndex,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationModelList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletClassBindingSpecificationModelList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_setMBindingOptionListAtIndex (GGS_controllerBindingOptionList inOperand,
                                                                                   GGS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingOptionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_controllerBindingOptionList GGS_outletClassBindingSpecificationList::getter_mBindingOptionListAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingOptionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @outletClassBindingSpecificationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletClassBindingSpecificationList::DownEnumerator_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList_2E_element DownEnumerator_outletClassBindingSpecificationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletClassBindingSpecificationList::current_mOutletClassName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletClassBindingSpecificationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList DownEnumerator_outletClassBindingSpecificationList::current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletClassBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList DownEnumerator_outletClassBindingSpecificationList::current_mBindingOptionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @outletClassBindingSpecificationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletClassBindingSpecificationList::UpEnumerator_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList_2E_element UpEnumerator_outletClassBindingSpecificationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletClassBindingSpecificationList::current_mOutletClassName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletClassBindingSpecificationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList UpEnumerator_outletClassBindingSpecificationList::current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletClassBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList UpEnumerator_outletClassBindingSpecificationList::current_mBindingOptionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionList ;
}




//--------------------------------------------------------------------------------------------------
//     @outletClassBindingSpecificationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ("outletClassBindingSpecificationList",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletClassBindingSpecificationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassBindingSpecificationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassBindingSpecificationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationList result ;
  const GGS_outletClassBindingSpecificationList * p = (const GGS_outletClassBindingSpecificationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassBindingSpecificationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@validationStubRoutineListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_validationStubRoutineListForGeneration : public cCollectionElement {
  public: GGS_validationStubRoutineListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_validationStubRoutineListForGeneration (const GGS_string & in_mObjectTypeName,
                                                                     const GGS_string & in_mModelName,
                                                                     const GGS_string & in_mModelTypeName
                                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_validationStubRoutineListForGeneration (const GGS_validationStubRoutineListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_validationStubRoutineListForGeneration::cCollectionElement_validationStubRoutineListForGeneration (const GGS_string & in_mObjectTypeName,
                                                                                                                      const GGS_string & in_mModelName,
                                                                                                                      const GGS_string & in_mModelTypeName
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mObjectTypeName, in_mModelName, in_mModelTypeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_validationStubRoutineListForGeneration::cCollectionElement_validationStubRoutineListForGeneration (const GGS_validationStubRoutineListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mObjectTypeName, inElement.mProperty_mModelName, inElement.mProperty_mModelTypeName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_validationStubRoutineListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_validationStubRoutineListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_validationStubRoutineListForGeneration (mObject.mProperty_mObjectTypeName, mObject.mProperty_mModelName, mObject.mProperty_mModelTypeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @validationStubRoutineListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration::GGS_validationStubRoutineListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration::GGS_validationStubRoutineListForGeneration (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    const GGS_validationStubRoutineListForGeneration_2E_element element (p->mObject.mProperty_mObjectTypeName, p->mObject.mProperty_mModelName, p->mObject.mProperty_mModelTypeName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GGS_string & in_mObjectTypeName,
                                                                            const GGS_string & in_mModelName,
                                                                            const GGS_string & in_mModelTypeName
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (in_mObjectTypeName, in_mModelName, in_mModelTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_validationStubRoutineListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_validationStubRoutineListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mObjectTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mObjectTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mModelName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mModelName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mModelTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mModelTypeName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_validationStubRoutineListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::plusPlusAssignOperation (const GGS_validationStubRoutineListForGeneration_2E_element & inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                 const GGS_string & inOperand1,
                                                                                                                 const GGS_string & inOperand2
                                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_validationStubRoutineListForGeneration_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_validationStubRoutineListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::addAssignOperation (const GGS_string & inOperand0,
                                                                     const GGS_string & inOperand1,
                                                                     const GGS_string & inOperand2
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_validationStubRoutineListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::setter_append (const GGS_string inOperand0,
                                                                const GGS_string inOperand1,
                                                                const GGS_string inOperand2,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_validationStubRoutineListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                       const GGS_string inOperand1,
                                                                       const GGS_string inOperand2,
                                                                       const GGS_uint inInsertionIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_validationStubRoutineListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                       GGS_string & outOperand1,
                                                                       GGS_string & outOperand2,
                                                                       const GGS_uint inRemoveIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mObjectTypeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mModelName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mModelTypeName ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                                  GGS_string & outOperand1,
                                                                  GGS_string & outOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mObjectTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mModelName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mModelTypeName ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                                 GGS_string & outOperand1,
                                                                 GGS_string & outOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mObjectTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mModelName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mModelTypeName ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::method_first (GGS_string & outOperand0,
                                                               GGS_string & outOperand1,
                                                               GGS_string & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mObjectTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mModelName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mModelTypeName ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::method_last (GGS_string & outOperand0,
                                                              GGS_string & outOperand1,
                                                              GGS_string & outOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mObjectTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mModelName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mModelTypeName ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::add_operation (const GGS_validationStubRoutineListForGeneration & inOperand,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_validationStubRoutineListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::subList (const int32_t inStart,
                                                                                                const int32_t inLength,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_validationStubRoutineListForGeneration result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_validationStubRoutineListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_validationStubRoutineListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_validationStubRoutineListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::plusAssignOperation (const GGS_validationStubRoutineListForGeneration inList,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::setter_setMObjectTypeNameAtIndex (GGS_string inOperand,
                                                                                   GGS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mObjectTypeName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_validationStubRoutineListForGeneration::getter_mObjectTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mObjectTypeName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::setter_setMModelNameAtIndex (GGS_string inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mModelName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_validationStubRoutineListForGeneration::getter_mModelNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mModelName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::setter_setMModelTypeNameAtIndex (GGS_string inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mModelTypeName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_validationStubRoutineListForGeneration::getter_mModelTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mModelTypeName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @validationStubRoutineListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_validationStubRoutineListForGeneration::DownEnumerator_validationStubRoutineListForGeneration (const GGS_validationStubRoutineListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration_2E_element DownEnumerator_validationStubRoutineListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_validationStubRoutineListForGeneration::current_mObjectTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObjectTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_validationStubRoutineListForGeneration::current_mModelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_validationStubRoutineListForGeneration::current_mModelTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelTypeName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @validationStubRoutineListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_validationStubRoutineListForGeneration::UpEnumerator_validationStubRoutineListForGeneration (const GGS_validationStubRoutineListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration_2E_element UpEnumerator_validationStubRoutineListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_validationStubRoutineListForGeneration::current_mObjectTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObjectTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_validationStubRoutineListForGeneration::current_mModelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_validationStubRoutineListForGeneration::current_mModelTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelTypeName ;
}




//--------------------------------------------------------------------------------------------------
//     @validationStubRoutineListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ("validationStubRoutineListForGeneration",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_validationStubRoutineListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_validationStubRoutineListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_validationStubRoutineListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_validationStubRoutineListForGeneration result ;
  const GGS_validationStubRoutineListForGeneration * p = (const GGS_validationStubRoutineListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_validationStubRoutineListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("validationStubRoutineListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @externFunctionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap::GGS_externFunctionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap::~ GGS_externFunctionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap::GGS_externFunctionMap (const GGS_externFunctionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap & GGS_externFunctionMap::operator = (const GGS_externFunctionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externFunctionMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externFunctionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_externFunctionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_externFunctionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_externFunctionMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_externFunctionMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externFunctionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_externFunctionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::performInsert (const GGS_externFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_externFunctionMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>
GGS_externFunctionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_externFunctionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>>
GGS_externFunctionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_externFunctionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element_3F_ GGS_externFunctionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externFunctionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_externFunctionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_externFunctionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::class_func_mapWithMapToOverride (const GGS_externFunctionMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_externFunctionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_externFunctionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::setter_insertKey (GGS_lstring inLKey,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_externFunctionMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' extern function is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_externFunctionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>> array = sortedInfoArray () ;
    GGS_externFunctionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_externFunctionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_externFunctionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @externFunctionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_externFunctionMap::DownEnumerator_externFunctionMap (const GGS_externFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element DownEnumerator_externFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_externFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @externFunctionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_externFunctionMap::UpEnumerator_externFunctionMap (const GGS_externFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element UpEnumerator_externFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_externFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @externFunctionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionMap ("externFunctionMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap result ;
  const GGS_externFunctionMap * p = (const GGS_externFunctionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum arrayControllerBoundModelAST
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST::GGS_arrayControllerBoundModelAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST GGS_arrayControllerBoundModelAST::class_func_rootToManyRelationship (const GGS_lstring & inAssociatedValue0
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBoundModelAST result ;
  result.mEnum = Enumeration::enum_rootToManyRelationship ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST GGS_arrayControllerBoundModelAST::class_func_selfToManyRelationship (UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBoundModelAST result ;
  result.mEnum = Enumeration::enum_selfToManyRelationship ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST::method_extractRootToManyRelationship (GGS_lstring & outAssociatedValue_rootEntityName,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootToManyRelationship) {
    outAssociatedValue_rootEntityName.drop () ;
    String s ;
    s.appendCString ("method @arrayControllerBoundModelAST.rootToManyRelationship invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_rootEntityName = ptr->mProperty_rootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ GGS_arrayControllerBoundModelAST::getter_getRootToManyRelationship (UNUSED_LOCATION_ARGS) const {
  GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ result ;
  if (mEnum == Enumeration::enum_rootToManyRelationship) {
    const auto ptr = (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST::getAssociatedValuesFor_rootToManyRelationship (GGS_lstring & out_rootEntityName) const {
  const auto ptr = (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship *) mAssociatedValues.associatedValuesPointer () ;
  out_rootEntityName = ptr->mProperty_rootEntityName ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_arrayControllerBoundModelAST [3] = {
  "(not built)",
  "rootToManyRelationship",
  "selfToManyRelationship"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerBoundModelAST::getter_isRootToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootToManyRelationship == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerBoundModelAST::getter_isSelfToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfToManyRelationship == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @arrayControllerBoundModelAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_arrayControllerBoundModelAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @arrayControllerBoundModelAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ("arrayControllerBoundModelAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerBoundModelAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerBoundModelAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerBoundModelAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST GGS_arrayControllerBoundModelAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_arrayControllerBoundModelAST result ;
  const GGS_arrayControllerBoundModelAST * p = (const GGS_arrayControllerBoundModelAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerBoundModelAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundModelAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerDeclarationAST_2E_weak::objectCompare (const GGS_arrayControllerDeclarationAST_2E_weak & inOperand) const {
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

GGS_arrayControllerDeclarationAST_2E_weak::GGS_arrayControllerDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST_2E_weak & GGS_arrayControllerDeclarationAST_2E_weak::operator = (const GGS_arrayControllerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST_2E_weak::GGS_arrayControllerDeclarationAST_2E_weak (const GGS_arrayControllerDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST_2E_weak GGS_arrayControllerDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_arrayControllerDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST GGS_arrayControllerDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_arrayControllerDeclarationAST result ;
  if (isValid ()) {
    const cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_arrayControllerDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST GGS_arrayControllerDeclarationAST_2E_weak::bang_arrayControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerDeclarationAST) ;
      result = GGS_arrayControllerDeclarationAST ((cPtr_arrayControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @arrayControllerDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2E_weak ("arrayControllerDeclarationAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST_2E_weak GGS_arrayControllerDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_arrayControllerDeclarationAST_2E_weak result ;
  const GGS_arrayControllerDeclarationAST_2E_weak * p = (const GGS_arrayControllerDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@arrayControllerBindingListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_arrayControllerBindingListAST : public cCollectionElement {
  public: GGS_arrayControllerBindingListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_arrayControllerBindingListAST (const GGS_lstring & in_mControllerName,
                                                            const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_arrayControllerBindingListAST::cCollectionElement_arrayControllerBindingListAST (const GGS_lstring & in_mControllerName,
                                                                                                    const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mControllerName, in_mHiddenSelectionViewBindingDescriptor) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_arrayControllerBindingListAST::cCollectionElement_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mControllerName, inElement.mProperty_mHiddenSelectionViewBindingDescriptor) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_arrayControllerBindingListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_arrayControllerBindingListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_arrayControllerBindingListAST (mObject.mProperty_mControllerName, mObject.mProperty_mHiddenSelectionViewBindingDescriptor COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @arrayControllerBindingListAST
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST::GGS_arrayControllerBindingListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST::GGS_arrayControllerBindingListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    const GGS_arrayControllerBindingListAST_2E_element element (p->mObject.mProperty_mControllerName, p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mControllerName,
                                                                   const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBindingListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (in_mControllerName, in_mHiddenSelectionViewBindingDescriptor COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_arrayControllerBindingListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_arrayControllerBindingListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mControllerName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mControllerName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mHiddenSelectionViewBindingDescriptor:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mHiddenSelectionViewBindingDescriptor.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBindingListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::plusPlusAssignOperation (const GGS_arrayControllerBindingListAST_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                               const GGS_multipleBindingDescriptor & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_arrayControllerBindingListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_arrayControllerBindingListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                            const GGS_multipleBindingDescriptor & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  const GGS_arrayControllerBindingListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_append (const GGS_lstring inOperand0,
                                                       const GGS_multipleBindingDescriptor inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_arrayControllerBindingListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                              const GGS_multipleBindingDescriptor inOperand1,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_arrayControllerBindingListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                              GGS_multipleBindingDescriptor & outOperand1,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mControllerName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                         GGS_multipleBindingDescriptor & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mControllerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_popLast (GGS_lstring & outOperand0,
                                                        GGS_multipleBindingDescriptor & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mControllerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::method_first (GGS_lstring & outOperand0,
                                                      GGS_multipleBindingDescriptor & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mControllerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::method_last (GGS_lstring & outOperand0,
                                                     GGS_multipleBindingDescriptor & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mControllerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::add_operation (const GGS_arrayControllerBindingListAST & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::plusAssignOperation (const GGS_arrayControllerBindingListAST inList,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_setMControllerNameAtIndex (GGS_lstring inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mControllerName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_arrayControllerBindingListAST::getter_mControllerNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mControllerName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_setMHiddenSelectionViewBindingDescriptorAtIndex (GGS_multipleBindingDescriptor inOperand,
                                                                                                GGS_uint inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mHiddenSelectionViewBindingDescriptor = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_multipleBindingDescriptor GGS_arrayControllerBindingListAST::getter_mHiddenSelectionViewBindingDescriptorAtIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_multipleBindingDescriptor result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @arrayControllerBindingListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_arrayControllerBindingListAST::DownEnumerator_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST_2E_element DownEnumerator_arrayControllerBindingListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_arrayControllerBindingListAST::current_mControllerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mControllerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor DownEnumerator_arrayControllerBindingListAST::current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @arrayControllerBindingListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_arrayControllerBindingListAST::UpEnumerator_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST_2E_element UpEnumerator_arrayControllerBindingListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_arrayControllerBindingListAST::current_mControllerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mControllerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor UpEnumerator_arrayControllerBindingListAST::current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
}




//--------------------------------------------------------------------------------------------------
//     @arrayControllerBindingListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST ("arrayControllerBindingListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerBindingListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBindingListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerBindingListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerBindingListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_arrayControllerBindingListAST result ;
  const GGS_arrayControllerBindingListAST * p = (const GGS_arrayControllerBindingListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerBindingListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBindingListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayControllerPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerPropertyGeneration::objectCompare (const GGS_arrayControllerPropertyGeneration & inOperand) const {
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

GGS_arrayControllerPropertyGeneration::GGS_arrayControllerPropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration::
init_21__21__21_ (const GGS_string & in_mPropertyName,
                  const GGS_string & in_mModelString,
                  const GGS_string & in_mOwnerName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_arrayControllerPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_arrayControllerPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->arrayControllerPropertyGeneration_init_21__21__21_ (in_mPropertyName, in_mModelString, in_mOwnerName, inCompiler) ;
  const GGS_arrayControllerPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerPropertyGeneration::
arrayControllerPropertyGeneration_init_21__21__21_ (const GGS_string & in_mPropertyName,
                                                    const GGS_string & in_mModelString,
                                                    const GGS_string & in_mOwnerName,
                                                    Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mOwnerName = in_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration::GGS_arrayControllerPropertyGeneration (const cPtr_arrayControllerPropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_arrayControllerPropertyGeneration::readProperty_mModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerPropertyGeneration::setProperty_mModelString (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_arrayControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerPropertyGeneration::setProperty_mOwnerName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerPropertyGeneration::cPtr_arrayControllerPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mModelString (),
mProperty_mOwnerName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerPropertyGeneration::cPtr_arrayControllerPropertyGeneration (const GGS_string & in_mPropertyName,
                                                                                const GGS_string & in_mModelString,
                                                                                const GGS_string & in_mOwnerName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mModelString (),
mProperty_mOwnerName () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mOwnerName = in_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_arrayControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

void cPtr_arrayControllerPropertyGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayControllerPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayControllerPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayControllerPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mModelString.printNonNullClassInstanceProperties ("mModelString") ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @arrayControllerPropertyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ("arrayControllerPropertyGeneration",
                                                                                      & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_arrayControllerPropertyGeneration result ;
  const GGS_arrayControllerPropertyGeneration * p = (const GGS_arrayControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerPropertyGeneration_2E_weak::objectCompare (const GGS_arrayControllerPropertyGeneration_2E_weak & inOperand) const {
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

GGS_arrayControllerPropertyGeneration_2E_weak::GGS_arrayControllerPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration_2E_weak & GGS_arrayControllerPropertyGeneration_2E_weak::operator = (const GGS_arrayControllerPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration_2E_weak::GGS_arrayControllerPropertyGeneration_2E_weak (const GGS_arrayControllerPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration_2E_weak GGS_arrayControllerPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_arrayControllerPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_arrayControllerPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_arrayControllerPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration_2E_weak::bang_arrayControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerPropertyGeneration) ;
      result = GGS_arrayControllerPropertyGeneration ((cPtr_arrayControllerPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @arrayControllerPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2E_weak ("arrayControllerPropertyGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration_2E_weak GGS_arrayControllerPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_arrayControllerPropertyGeneration_2E_weak result ;
  const GGS_arrayControllerPropertyGeneration_2E_weak * p = (const GGS_arrayControllerPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum arrayControllerModelKind
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerModelKind::GGS_arrayControllerModelKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerModelKind GGS_arrayControllerModelKind::class_func_entityArray (UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerModelKind result ;
  result.mEnum = Enumeration::enum_entityArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerModelKind GGS_arrayControllerModelKind::class_func_transientArray (UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerModelKind result ;
  result.mEnum = Enumeration::enum_transientArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_arrayControllerModelKind [3] = {
  "(not built)",
  "entityArray",
  "transientArray"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entityArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_transientArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerModelKind::description (String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @arrayControllerModelKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_arrayControllerModelKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @arrayControllerModelKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerModelKind ("arrayControllerModelKind",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerModelKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerModelKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerModelKind GGS_arrayControllerModelKind::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_arrayControllerModelKind result ;
  const GGS_arrayControllerModelKind * p = (const GGS_arrayControllerModelKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerModelKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerModelKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerGeneration_2E_weak::objectCompare (const GGS_arrayControllerGeneration_2E_weak & inOperand) const {
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

GGS_arrayControllerGeneration_2E_weak::GGS_arrayControllerGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration_2E_weak & GGS_arrayControllerGeneration_2E_weak::operator = (const GGS_arrayControllerGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration_2E_weak::GGS_arrayControllerGeneration_2E_weak (const GGS_arrayControllerGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration_2E_weak GGS_arrayControllerGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_arrayControllerGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration GGS_arrayControllerGeneration_2E_weak::unwrappedValue (void) const {
  GGS_arrayControllerGeneration result ;
  if (isValid ()) {
    const cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_arrayControllerGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration GGS_arrayControllerGeneration_2E_weak::bang_arrayControllerGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerGeneration) ;
      result = GGS_arrayControllerGeneration ((cPtr_arrayControllerGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @arrayControllerGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerGeneration_2E_weak ("arrayControllerGeneration.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration_2E_weak GGS_arrayControllerGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_arrayControllerGeneration_2E_weak result ;
  const GGS_arrayControllerGeneration_2E_weak * p = (const GGS_arrayControllerGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @outletBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap::GGS_outletBindingSpecificationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap::~ GGS_outletBindingSpecificationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap::GGS_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap & GGS_outletBindingSpecificationMap::operator = (const GGS_outletBindingSpecificationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletBindingSpecificationMap::getter_hasKey (const GGS_string & inKey
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletBindingSpecificationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                  const GGS_uint & inLevel
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletBindingSpecificationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletBindingSpecificationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_outletBindingSpecificationMap::getter_locationForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_outletBindingSpecificationMap::getter_keyList (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletBindingSpecificationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_outletBindingSpecificationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::performInsert (const GGS_outletBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_outletBindingSpecificationMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>
GGS_outletBindingSpecificationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_outletBindingSpecificationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>>
GGS_outletBindingSpecificationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_outletBindingSpecificationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element_3F_ GGS_outletBindingSpecificationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_outletBindingSpecificationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_outletBindingSpecificationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOutletBindingSpecificationModelList = info->mProperty_mOutletBindingSpecificationModelList ;
      element.mProperty_mControllerBindingOptionList = info->mProperty_mControllerBindingOptionList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::class_func_mapWithMapToOverride (const GGS_outletBindingSpecificationMap & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_outletBindingSpecificationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::setter_insertKey (GGS_lstring inLKey,
                                                          GGS_outletBindingSpecificationModelList inArgument0,
                                                          GGS_controllerBindingOptionDecoratedList inArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_outletBindingSpecificationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::method_searchKey (GGS_lstring inLKey,
                                                          GGS_outletBindingSpecificationModelList & outArgument0,
                                                          GGS_controllerBindingOptionDecoratedList & outArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' binding" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mOutletBindingSpecificationModelList ;
    outArgument1 = info->mProperty_mControllerBindingOptionList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList GGS_outletBindingSpecificationMap::getter_mOutletBindingSpecificationModelListForKey (const GGS_string & inKey,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationModelList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOutletBindingSpecificationModelList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList GGS_outletBindingSpecificationMap::getter_mControllerBindingOptionListForKey (const GGS_string & inKey,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionDecoratedList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mControllerBindingOptionList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::setter_setMOutletBindingSpecificationModelListForKey (GGS_outletBindingSpecificationModelList inValue,
                                                                                              GGS_string inKey,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOutletBindingSpecificationModelList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::setter_setMControllerBindingOptionListForKey (GGS_controllerBindingOptionDecoratedList inValue,
                                                                                      GGS_string inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mControllerBindingOptionList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_outletBindingSpecificationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mOutletBindingSpecificationModelList:") ;
    inArray (i COMMA_HERE)->mProperty_mOutletBindingSpecificationModelList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mControllerBindingOptionList:") ;
    inArray (i COMMA_HERE)->mProperty_mControllerBindingOptionList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> array = sortedInfoArray () ;
    GGS_outletBindingSpecificationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_outletBindingSpecificationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_outletBindingSpecificationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @outletBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletBindingSpecificationMap::DownEnumerator_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element DownEnumerator_outletBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList DownEnumerator_outletBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList DownEnumerator_outletBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControllerBindingOptionList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @outletBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletBindingSpecificationMap::UpEnumerator_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element UpEnumerator_outletBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList UpEnumerator_outletBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList UpEnumerator_outletBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControllerBindingOptionList ;
}


//--------------------------------------------------------------------------------------------------
//     @outletBindingSpecificationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap ("outletBindingSpecificationMap",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletBindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletBindingSpecificationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap result ;
  const GGS_outletBindingSpecificationMap * p = (const GGS_outletBindingSpecificationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletBindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outletClassDeclarationAST_2E_weak::objectCompare (const GGS_outletClassDeclarationAST_2E_weak & inOperand) const {
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

GGS_outletClassDeclarationAST_2E_weak::GGS_outletClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST_2E_weak & GGS_outletClassDeclarationAST_2E_weak::operator = (const GGS_outletClassDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST_2E_weak::GGS_outletClassDeclarationAST_2E_weak (const GGS_outletClassDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST_2E_weak GGS_outletClassDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outletClassDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST GGS_outletClassDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_outletClassDeclarationAST result ;
  if (isValid ()) {
    const cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_outletClassDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST GGS_outletClassDeclarationAST_2E_weak::bang_outletClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outletClassDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outletClassDeclarationAST) ;
      result = GGS_outletClassDeclarationAST ((cPtr_outletClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @outletClassDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST_2E_weak ("outletClassDeclarationAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletClassDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST_2E_weak GGS_outletClassDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_outletClassDeclarationAST_2E_weak result ;
  const GGS_outletClassDeclarationAST_2E_weak * p = (const GGS_outletClassDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@astAutoLayoutOutletLinkerList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_astAutoLayoutOutletLinkerList : public cCollectionElement {
  public: GGS_astAutoLayoutOutletLinkerList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_astAutoLayoutOutletLinkerList (const GGS_lstring & in_mLinkerName,
                                                            const GGS_lstringlist & in_mOutletNameList
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutOutletLinkerList::cCollectionElement_astAutoLayoutOutletLinkerList (const GGS_lstring & in_mLinkerName,
                                                                                                    const GGS_lstringlist & in_mOutletNameList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLinkerName, in_mOutletNameList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutOutletLinkerList::cCollectionElement_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLinkerName, inElement.mProperty_mOutletNameList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutOutletLinkerList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutOutletLinkerList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astAutoLayoutOutletLinkerList (mObject.mProperty_mLinkerName, mObject.mProperty_mOutletNameList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astAutoLayoutOutletLinkerList
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList::GGS_astAutoLayoutOutletLinkerList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList::GGS_astAutoLayoutOutletLinkerList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    const GGS_astAutoLayoutOutletLinkerList_2E_element element (p->mObject.mProperty_mLinkerName, p->mObject.mProperty_mOutletNameList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mLinkerName,
                                                                   const GGS_lstringlist & in_mOutletNameList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutOutletLinkerList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astAutoLayoutOutletLinkerList (in_mLinkerName, in_mOutletNameList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_astAutoLayoutOutletLinkerList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_astAutoLayoutOutletLinkerList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLinkerName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLinkerName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOutletNameList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletNameList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutOutletLinkerList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::plusPlusAssignOperation (const GGS_astAutoLayoutOutletLinkerList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                               const GGS_lstringlist & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutOutletLinkerList_2E_element element (inOperand0, inOperand1) ;
  GGS_astAutoLayoutOutletLinkerList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::addAssignOperation (const GGS_lstring & inOperand0,
                                                            const GGS_lstringlist & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutOutletLinkerList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_append (const GGS_lstring inOperand0,
                                                       const GGS_lstringlist inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutOutletLinkerList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                              const GGS_lstringlist inOperand1,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutOutletLinkerList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                              GGS_lstringlist & outOperand1,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLinkerName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mOutletNameList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_popFirst (GGS_lstring & outOperand0,
                                                         GGS_lstringlist & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLinkerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOutletNameList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_popLast (GGS_lstring & outOperand0,
                                                        GGS_lstringlist & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLinkerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOutletNameList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::method_first (GGS_lstring & outOperand0,
                                                      GGS_lstringlist & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLinkerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOutletNameList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::method_last (GGS_lstring & outOperand0,
                                                     GGS_lstringlist & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLinkerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOutletNameList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::add_operation (const GGS_astAutoLayoutOutletLinkerList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::plusAssignOperation (const GGS_astAutoLayoutOutletLinkerList inList,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_setMLinkerNameAtIndex (GGS_lstring inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLinkerName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_astAutoLayoutOutletLinkerList::getter_mLinkerNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLinkerName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_setMOutletNameListAtIndex (GGS_lstringlist inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletNameList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstringlist GGS_astAutoLayoutOutletLinkerList::getter_mOutletNameListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletNameList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @astAutoLayoutOutletLinkerList
//--------------------------------------------------------------------------------------------------

DownEnumerator_astAutoLayoutOutletLinkerList::DownEnumerator_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element DownEnumerator_astAutoLayoutOutletLinkerList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_astAutoLayoutOutletLinkerList::current_mLinkerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLinkerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_astAutoLayoutOutletLinkerList::current_mOutletNameList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletNameList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @astAutoLayoutOutletLinkerList
//--------------------------------------------------------------------------------------------------

UpEnumerator_astAutoLayoutOutletLinkerList::UpEnumerator_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element UpEnumerator_astAutoLayoutOutletLinkerList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_astAutoLayoutOutletLinkerList::current_mLinkerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLinkerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_astAutoLayoutOutletLinkerList::current_mOutletNameList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletNameList ;
}




//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutOutletLinkerList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList ("astAutoLayoutOutletLinkerList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutOutletLinkerList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutOutletLinkerList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutOutletLinkerList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutOutletLinkerList result ;
  const GGS_astAutoLayoutOutletLinkerList * p = (const GGS_astAutoLayoutOutletLinkerList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutOutletLinkerList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutOutletLinkerList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutDocumentDeclarationAST_2E_weak::objectCompare (const GGS_autoLayoutDocumentDeclarationAST_2E_weak & inOperand) const {
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

GGS_autoLayoutDocumentDeclarationAST_2E_weak::GGS_autoLayoutDocumentDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak & GGS_autoLayoutDocumentDeclarationAST_2E_weak::operator = (const GGS_autoLayoutDocumentDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak::GGS_autoLayoutDocumentDeclarationAST_2E_weak (const GGS_autoLayoutDocumentDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak GGS_autoLayoutDocumentDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutDocumentDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST GGS_autoLayoutDocumentDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutDocumentDeclarationAST result ;
  if (isValid ()) {
    const cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutDocumentDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST GGS_autoLayoutDocumentDeclarationAST_2E_weak::bang_autoLayoutDocumentDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutDocumentDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutDocumentDeclarationAST) ;
      result = GGS_autoLayoutDocumentDeclarationAST ((cPtr_autoLayoutDocumentDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutDocumentDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2E_weak ("autoLayoutDocumentDeclarationAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutDocumentDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutDocumentDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutDocumentDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak GGS_autoLayoutDocumentDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDocumentDeclarationAST_2E_weak result ;
  const GGS_autoLayoutDocumentDeclarationAST_2E_weak * p = (const GGS_autoLayoutDocumentDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutDocumentDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutOutletLinkerGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutOutletLinkerGenerationList : public cCollectionElement {
  public: GGS_autoLayoutOutletLinkerGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutOutletLinkerGenerationList (const GGS_string & in_mLinkerName,
                                                                   const GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutOutletLinkerGenerationList::cCollectionElement_autoLayoutOutletLinkerGenerationList (const GGS_string & in_mLinkerName,
                                                                                                                  const GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLinkerName, in_mOutletNameAndTypeNameList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutOutletLinkerGenerationList::cCollectionElement_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLinkerName, inElement.mProperty_mOutletNameAndTypeNameList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutOutletLinkerGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutOutletLinkerGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutOutletLinkerGenerationList (mObject.mProperty_mLinkerName, mObject.mProperty_mOutletNameAndTypeNameList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutOutletLinkerGenerationList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList::GGS_autoLayoutOutletLinkerGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList::GGS_autoLayoutOutletLinkerGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (cCollectionElement_autoLayoutOutletLinkerGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
    const GGS_autoLayoutOutletLinkerGenerationList_2E_element element (p->mObject.mProperty_mLinkerName, p->mObject.mProperty_mOutletNameAndTypeNameList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_string & in_mLinkerName,
                                                                          const GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutOutletLinkerGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutOutletLinkerGenerationList (in_mLinkerName, in_mOutletNameAndTypeNameList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutOutletLinkerGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutOutletLinkerGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLinkerName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLinkerName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOutletNameAndTypeNameList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletNameAndTypeNameList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::plusPlusAssignOperation (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                             const GGS__32_stringlist & inOperand1
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutOutletLinkerGenerationList_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutOutletLinkerGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::addAssignOperation (const GGS_string & inOperand0,
                                                                   const GGS__32_stringlist & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutOutletLinkerGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_append (const GGS_string inOperand0,
                                                              const GGS__32_stringlist inOperand1,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutOutletLinkerGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                     const GGS__32_stringlist inOperand1,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutOutletLinkerGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                     GGS__32_stringlist & outOperand1,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLinkerName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mOutletNameAndTypeNameList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_popFirst (GGS_string & outOperand0,
                                                                GGS__32_stringlist & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLinkerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOutletNameAndTypeNameList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_popLast (GGS_string & outOperand0,
                                                               GGS__32_stringlist & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLinkerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOutletNameAndTypeNameList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::method_first (GGS_string & outOperand0,
                                                             GGS__32_stringlist & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLinkerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOutletNameAndTypeNameList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::method_last (GGS_string & outOperand0,
                                                            GGS__32_stringlist & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLinkerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOutletNameAndTypeNameList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::add_operation (const GGS_autoLayoutOutletLinkerGenerationList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::plusAssignOperation (const GGS_autoLayoutOutletLinkerGenerationList inList,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_setMLinkerNameAtIndex (GGS_string inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLinkerName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_autoLayoutOutletLinkerGenerationList::getter_mLinkerNameAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLinkerName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_setMOutletNameAndTypeNameListAtIndex (GGS__32_stringlist inOperand,
                                                                                            GGS_uint inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletNameAndTypeNameList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS__32_stringlist GGS_autoLayoutOutletLinkerGenerationList::getter_mOutletNameAndTypeNameListAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS__32_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletNameAndTypeNameList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @autoLayoutOutletLinkerGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutOutletLinkerGenerationList::DownEnumerator_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList_2E_element DownEnumerator_autoLayoutOutletLinkerGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutOutletLinkerGenerationList::current_mLinkerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLinkerName ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist DownEnumerator_autoLayoutOutletLinkerGenerationList::current_mOutletNameAndTypeNameList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletNameAndTypeNameList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutOutletLinkerGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutOutletLinkerGenerationList::UpEnumerator_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList_2E_element UpEnumerator_autoLayoutOutletLinkerGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutOutletLinkerGenerationList::current_mLinkerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLinkerName ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist UpEnumerator_autoLayoutOutletLinkerGenerationList::current_mOutletNameAndTypeNameList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletNameAndTypeNameList ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutOutletLinkerGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList ("autoLayoutOutletLinkerGenerationList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutOutletLinkerGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutOutletLinkerGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutOutletLinkerGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  const GGS_autoLayoutOutletLinkerGenerationList * p = (const GGS_autoLayoutOutletLinkerGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutOutletLinkerGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutOutletLinkerGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor * cPtr_autoLayoutDocumentFileGeneration::classDescriptor (void) const {
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
//     @autoLayoutDocumentFileGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ("autoLayoutDocumentFileGeneration",
                                                                                     & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutDocumentFileGeneration::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_autoLayoutDocumentFileGeneration_2E_weak::objectCompare (const GGS_autoLayoutDocumentFileGeneration_2E_weak & inOperand) const {
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

GGS_autoLayoutDocumentFileGeneration_2E_weak::GGS_autoLayoutDocumentFileGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration_2E_weak & GGS_autoLayoutDocumentFileGeneration_2E_weak::operator = (const GGS_autoLayoutDocumentFileGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration_2E_weak::GGS_autoLayoutDocumentFileGeneration_2E_weak (const GGS_autoLayoutDocumentFileGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration_2E_weak GGS_autoLayoutDocumentFileGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutDocumentFileGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration GGS_autoLayoutDocumentFileGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutDocumentFileGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutDocumentFileGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration GGS_autoLayoutDocumentFileGeneration_2E_weak::bang_autoLayoutDocumentFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutDocumentFileGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutDocumentFileGeneration) ;
      result = GGS_autoLayoutDocumentFileGeneration ((cPtr_autoLayoutDocumentFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutDocumentFileGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2E_weak ("autoLayoutDocumentFileGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutDocumentFileGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutDocumentFileGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutDocumentFileGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration_2E_weak GGS_autoLayoutDocumentFileGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDocumentFileGeneration_2E_weak result ;
  const GGS_autoLayoutDocumentFileGeneration_2E_weak * p = (const GGS_autoLayoutDocumentFileGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutDocumentFileGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentFileGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@transientExternTypeList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_transientExternTypeList : public cCollectionElement {
  public: GGS_transientExternTypeList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_transientExternTypeList (const GGS_string & in_mTypeName,
                                                      const GGS_bool & in_mIsClass
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_transientExternTypeList (const GGS_transientExternTypeList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GGS_string & in_mTypeName,
                                                                                        const GGS_bool & in_mIsClass
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mIsClass) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GGS_transientExternTypeList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mIsClass) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_transientExternTypeList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_transientExternTypeList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_transientExternTypeList (mObject.mProperty_mTypeName, mObject.mProperty_mIsClass COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @transientExternTypeList
//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList::GGS_transientExternTypeList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList::GGS_transientExternTypeList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    const GGS_transientExternTypeList_2E_element element (p->mObject.mProperty_mTypeName, p->mObject.mProperty_mIsClass) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_string & in_mTypeName,
                                                             const GGS_bool & in_mIsClass
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientExternTypeList (in_mTypeName, in_mIsClass COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_transientExternTypeList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_transientExternTypeList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIsClass:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIsClass.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientExternTypeList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::plusPlusAssignOperation (const GGS_transientExternTypeList_2E_element & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                   const GGS_bool & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_transientExternTypeList_2E_element element (inOperand0, inOperand1) ;
  GGS_transientExternTypeList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::addAssignOperation (const GGS_string & inOperand0,
                                                      const GGS_bool & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  const GGS_transientExternTypeList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_append (const GGS_string inOperand0,
                                                 const GGS_bool inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  const GGS_transientExternTypeList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_insertAtIndex (const GGS_string inOperand0,
                                                        const GGS_bool inOperand1,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_transientExternTypeList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_removeAtIndex (GGS_string & outOperand0,
                                                        GGS_bool & outOperand1,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTypeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mIsClass ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_popFirst (GGS_string & outOperand0,
                                                   GGS_bool & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIsClass ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_popLast (GGS_string & outOperand0,
                                                  GGS_bool & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIsClass ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::method_first (GGS_string & outOperand0,
                                                GGS_bool & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIsClass ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::method_last (GGS_string & outOperand0,
                                               GGS_bool & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIsClass ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::add_operation (const GGS_transientExternTypeList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_transientExternTypeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::subList (const int32_t inStart,
                                                                  const int32_t inLength,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientExternTypeList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientExternTypeList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientExternTypeList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_transientExternTypeList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::plusAssignOperation (const GGS_transientExternTypeList inList,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_setMTypeNameAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTypeName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_transientExternTypeList::getter_mTypeNameAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTypeName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_setMIsClassAtIndex (GGS_bool inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIsClass = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_transientExternTypeList::getter_mIsClassAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIsClass ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @transientExternTypeList
//--------------------------------------------------------------------------------------------------

DownEnumerator_transientExternTypeList::DownEnumerator_transientExternTypeList (const GGS_transientExternTypeList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element DownEnumerator_transientExternTypeList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientExternTypeList::current_mTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_transientExternTypeList::current_mIsClass (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsClass ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @transientExternTypeList
//--------------------------------------------------------------------------------------------------

UpEnumerator_transientExternTypeList::UpEnumerator_transientExternTypeList (const GGS_transientExternTypeList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element UpEnumerator_transientExternTypeList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientExternTypeList::current_mTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_transientExternTypeList::current_mIsClass (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsClass ;
}




//--------------------------------------------------------------------------------------------------
//     @transientExternTypeList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientExternTypeList ("transientExternTypeList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientExternTypeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientExternTypeList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientExternTypeList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_transientExternTypeList result ;
  const GGS_transientExternTypeList * p = (const GGS_transientExternTypeList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientExternTypeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientExternTypeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFileGeneration generateCodePhase1'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCodePhase_31_ (cPtr_abstractFileGeneration * inObject,
                                                const GGS_string constin_inOutputDirectory,
                                                const GGS_generationStruct constin_inGenerationStruct,
                                                GGS_stringset & io_ioUsedProtocolSet,
                                                GGS_stringset & io_ioGeneratedFileSet,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractFileGeneration) ;
    inObject->method_generateCodePhase_31_ (constin_inOutputDirectory, constin_inGenerationStruct, io_ioUsedProtocolSet, io_ioGeneratedFileSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFileGeneration generateCodePhase2'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCodePhase_32_ (cPtr_abstractFileGeneration * inObject,
                                                const GGS_string constin_inOutputDirectory,
                                                const GGS_generationStruct constin_inGenerationStruct,
                                                const GGS_stringset constin_inUsedProtocolSet,
                                                GGS_stringset & io_ioGeneratedFileSet,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractFileGeneration) ;
    inObject->method_generateCodePhase_32_ (constin_inOutputDirectory, constin_inGenerationStruct, constin_inUsedProtocolSet, io_ioGeneratedFileSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Class for element of '@fileGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_fileGenerationList : public cCollectionElement {
  public: GGS_fileGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_fileGenerationList (const GGS_abstractFileGeneration & in_mFileGeneration
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_fileGenerationList (const GGS_fileGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GGS_abstractFileGeneration & in_mFileGeneration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GGS_fileGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_fileGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_fileGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_fileGenerationList (mObject.mProperty_mFileGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @fileGenerationList
//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList::GGS_fileGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList::GGS_fileGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    const GGS_fileGenerationList_2E_element element (p->mObject.mProperty_mFileGeneration) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_abstractFileGeneration & in_mFileGeneration
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_fileGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_fileGenerationList (in_mFileGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_fileGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_fileGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFileGeneration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFileGeneration.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fileGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::plusPlusAssignOperation (const GGS_fileGenerationList_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::class_func_listWithValue (const GGS_abstractFileGeneration & inOperand0
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_fileGenerationList_2E_element element (inOperand0) ;
  GGS_fileGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::addAssignOperation (const GGS_abstractFileGeneration & inOperand0
                                                 COMMA_LOCATION_ARGS) {
  const GGS_fileGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_append (const GGS_abstractFileGeneration inOperand0,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_fileGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_insertAtIndex (const GGS_abstractFileGeneration inOperand0,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_fileGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_removeAtIndex (GGS_abstractFileGeneration & outOperand0,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFileGeneration ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_popFirst (GGS_abstractFileGeneration & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFileGeneration ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_popLast (GGS_abstractFileGeneration & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFileGeneration ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::method_first (GGS_abstractFileGeneration & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFileGeneration ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::method_last (GGS_abstractFileGeneration & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFileGeneration ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::add_operation (const GGS_fileGenerationList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_fileGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_fileGenerationList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_fileGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_fileGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_fileGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::plusAssignOperation (const GGS_fileGenerationList inList,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_setMFileGenerationAtIndex (GGS_abstractFileGeneration inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFileGeneration = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_abstractFileGeneration GGS_fileGenerationList::getter_mFileGenerationAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_abstractFileGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFileGeneration ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @fileGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_fileGenerationList::DownEnumerator_fileGenerationList (const GGS_fileGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element DownEnumerator_fileGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration DownEnumerator_fileGenerationList::current_mFileGeneration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFileGeneration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @fileGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_fileGenerationList::UpEnumerator_fileGenerationList (const GGS_fileGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element UpEnumerator_fileGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration UpEnumerator_fileGenerationList::current_mFileGeneration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFileGeneration ;
}




//--------------------------------------------------------------------------------------------------
//     @fileGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fileGenerationList ("fileGenerationList",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fileGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fileGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fileGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_fileGenerationList result ;
  const GGS_fileGenerationList * p = (const GGS_fileGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fileGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct::GGS_generationStruct (void) :
mProperty_mValidationStubRoutineListForGeneration (),
mProperty_mFileGenerationList (),
mProperty_mEntityListForGeneration (),
mProperty_mGenerateEBManagedXibDocumentSwift (),
mProperty_mGenerateEBManagedAutoLayoutDocumentSwift (),
mProperty_mNeededOutletClasses (),
mProperty_mMainXibDescriptorList (),
mProperty_mToOneClassImplementations (),
mProperty_mToManyClassImplementations (),
mProperty_mSelectionControllerListForGeneration (),
mProperty_mPropertyClassList (),
mProperty_mTransientPropertyTypeList (),
mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ (),
mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (),
mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (),
mProperty_mGenerateClass_5F_TransientArrayOf_5F_ (),
mProperty_mGenerateClass_5F_StoredArrayOf_5F_ () {
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct::GGS_generationStruct (const GGS_generationStruct & inSource) :
mProperty_mValidationStubRoutineListForGeneration (inSource.mProperty_mValidationStubRoutineListForGeneration),
mProperty_mFileGenerationList (inSource.mProperty_mFileGenerationList),
mProperty_mEntityListForGeneration (inSource.mProperty_mEntityListForGeneration),
mProperty_mGenerateEBManagedXibDocumentSwift (inSource.mProperty_mGenerateEBManagedXibDocumentSwift),
mProperty_mGenerateEBManagedAutoLayoutDocumentSwift (inSource.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift),
mProperty_mNeededOutletClasses (inSource.mProperty_mNeededOutletClasses),
mProperty_mMainXibDescriptorList (inSource.mProperty_mMainXibDescriptorList),
mProperty_mToOneClassImplementations (inSource.mProperty_mToOneClassImplementations),
mProperty_mToManyClassImplementations (inSource.mProperty_mToManyClassImplementations),
mProperty_mSelectionControllerListForGeneration (inSource.mProperty_mSelectionControllerListForGeneration),
mProperty_mPropertyClassList (inSource.mProperty_mPropertyClassList),
mProperty_mTransientPropertyTypeList (inSource.mProperty_mTransientPropertyTypeList),
mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ (inSource.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_),
mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (inSource.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_),
mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (inSource.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_),
mProperty_mGenerateClass_5F_TransientArrayOf_5F_ (inSource.mProperty_mGenerateClass_5F_TransientArrayOf_5F_),
mProperty_mGenerateClass_5F_StoredArrayOf_5F_ (inSource.mProperty_mGenerateClass_5F_StoredArrayOf_5F_) {
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct & GGS_generationStruct::operator = (const GGS_generationStruct & inSource) {
  mProperty_mValidationStubRoutineListForGeneration = inSource.mProperty_mValidationStubRoutineListForGeneration ;
  mProperty_mFileGenerationList = inSource.mProperty_mFileGenerationList ;
  mProperty_mEntityListForGeneration = inSource.mProperty_mEntityListForGeneration ;
  mProperty_mGenerateEBManagedXibDocumentSwift = inSource.mProperty_mGenerateEBManagedXibDocumentSwift ;
  mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = inSource.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift ;
  mProperty_mNeededOutletClasses = inSource.mProperty_mNeededOutletClasses ;
  mProperty_mMainXibDescriptorList = inSource.mProperty_mMainXibDescriptorList ;
  mProperty_mToOneClassImplementations = inSource.mProperty_mToOneClassImplementations ;
  mProperty_mToManyClassImplementations = inSource.mProperty_mToManyClassImplementations ;
  mProperty_mSelectionControllerListForGeneration = inSource.mProperty_mSelectionControllerListForGeneration ;
  mProperty_mPropertyClassList = inSource.mProperty_mPropertyClassList ;
  mProperty_mTransientPropertyTypeList = inSource.mProperty_mTransientPropertyTypeList ;
  mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ = inSource.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ;
  mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ = inSource.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ;
  mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ = inSource.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ;
  mProperty_mGenerateClass_5F_TransientArrayOf_5F_ = inSource.mProperty_mGenerateClass_5F_TransientArrayOf_5F_ ;
  mProperty_mGenerateClass_5F_StoredArrayOf_5F_ = inSource.mProperty_mGenerateClass_5F_StoredArrayOf_5F_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_generationStruct GGS_generationStruct::init (Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generationStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationStruct::setInitializedProperties (Compiler * inCompiler) {
GGS_validationStubRoutineListForGeneration temp_0 = GGS_validationStubRoutineListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 38)) ;
  mProperty_mValidationStubRoutineListForGeneration = temp_0 ;
GGS_fileGenerationList temp_1 = GGS_fileGenerationList::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 39)) ;
  mProperty_mFileGenerationList = temp_1 ;
GGS_entityListForGeneratingEBManagedObjectContext temp_2 = GGS_entityListForGeneratingEBManagedObjectContext::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 40)) ;
  mProperty_mEntityListForGeneration = temp_2 ;
  mProperty_mGenerateEBManagedXibDocumentSwift = GGS_bool (false) ;
  mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = GGS_bool (false) ;
GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 43)) ;
  mProperty_mNeededOutletClasses = temp_3 ;
GGS_mainXibDescriptorList temp_4 = GGS_mainXibDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 44)) ;
  mProperty_mMainXibDescriptorList = temp_4 ;
GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 46)) ;
  mProperty_mToOneClassImplementations = temp_5 ;
GGS_stringset temp_6 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 47)) ;
  mProperty_mToManyClassImplementations = temp_6 ;
GGS_selectionControllerForGeneration temp_7 = GGS_selectionControllerForGeneration::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 49)) ;
  mProperty_mSelectionControllerListForGeneration = temp_7 ;
GGS_stringlist temp_8 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 50)) ;
  mProperty_mPropertyClassList = temp_8 ;
GGS_transientExternTypeList temp_9 = GGS_transientExternTypeList::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 51)) ;
  mProperty_mTransientPropertyTypeList = temp_9 ;
GGS_stringset temp_10 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 53)) ;
  mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ = temp_10 ;
GGS_stringset temp_11 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 54)) ;
  mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ = temp_11 ;
GGS_stringset temp_12 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 55)) ;
  mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ = temp_12 ;
GGS_stringset temp_13 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 56)) ;
  mProperty_mGenerateClass_5F_TransientArrayOf_5F_ = temp_13 ;
GGS_stringset temp_14 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 57)) ;
  mProperty_mGenerateClass_5F_StoredArrayOf_5F_ = temp_14 ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct::GGS_generationStruct (const GGS_validationStubRoutineListForGeneration & inOperand0,
                                            const GGS_fileGenerationList & inOperand1,
                                            const GGS_entityListForGeneratingEBManagedObjectContext & inOperand2,
                                            const GGS_bool & inOperand3,
                                            const GGS_bool & inOperand4,
                                            const GGS_stringset & inOperand5,
                                            const GGS_mainXibDescriptorList & inOperand6,
                                            const GGS_stringset & inOperand7,
                                            const GGS_stringset & inOperand8,
                                            const GGS_selectionControllerForGeneration & inOperand9,
                                            const GGS_stringlist & inOperand10,
                                            const GGS_transientExternTypeList & inOperand11,
                                            const GGS_stringset & inOperand12,
                                            const GGS_stringset & inOperand13,
                                            const GGS_stringset & inOperand14,
                                            const GGS_stringset & inOperand15,
                                            const GGS_stringset & inOperand16) :
mProperty_mValidationStubRoutineListForGeneration (inOperand0),
mProperty_mFileGenerationList (inOperand1),
mProperty_mEntityListForGeneration (inOperand2),
mProperty_mGenerateEBManagedXibDocumentSwift (inOperand3),
mProperty_mGenerateEBManagedAutoLayoutDocumentSwift (inOperand4),
mProperty_mNeededOutletClasses (inOperand5),
mProperty_mMainXibDescriptorList (inOperand6),
mProperty_mToOneClassImplementations (inOperand7),
mProperty_mToManyClassImplementations (inOperand8),
mProperty_mSelectionControllerListForGeneration (inOperand9),
mProperty_mPropertyClassList (inOperand10),
mProperty_mTransientPropertyTypeList (inOperand11),
mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ (inOperand12),
mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (inOperand13),
mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (inOperand14),
mProperty_mGenerateClass_5F_TransientArrayOf_5F_ (inOperand15),
mProperty_mGenerateClass_5F_StoredArrayOf_5F_ (inOperand16) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_generationStruct::isValid (void) const {
  return mProperty_mValidationStubRoutineListForGeneration.isValid () && mProperty_mFileGenerationList.isValid () && mProperty_mEntityListForGeneration.isValid () && mProperty_mGenerateEBManagedXibDocumentSwift.isValid () && mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.isValid () && mProperty_mNeededOutletClasses.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mToOneClassImplementations.isValid () && mProperty_mToManyClassImplementations.isValid () && mProperty_mSelectionControllerListForGeneration.isValid () && mProperty_mPropertyClassList.isValid () && mProperty_mTransientPropertyTypeList.isValid () && mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.isValid () && mProperty_mGenerateClass_5F_TransientArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_StoredArrayOf_5F_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationStruct::drop (void) {
  mProperty_mValidationStubRoutineListForGeneration.drop () ;
  mProperty_mFileGenerationList.drop () ;
  mProperty_mEntityListForGeneration.drop () ;
  mProperty_mGenerateEBManagedXibDocumentSwift.drop () ;
  mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.drop () ;
  mProperty_mNeededOutletClasses.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mToOneClassImplementations.drop () ;
  mProperty_mToManyClassImplementations.drop () ;
  mProperty_mSelectionControllerListForGeneration.drop () ;
  mProperty_mPropertyClassList.drop () ;
  mProperty_mTransientPropertyTypeList.drop () ;
  mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_TransientArrayOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_StoredArrayOf_5F_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationStruct::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @generationStruct:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValidationStubRoutineListForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFileGenerationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEntityListForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateEBManagedXibDocumentSwift.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNeededOutletClasses.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToOneClassImplementations.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToManyClassImplementations.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyClassList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTransientPropertyTypeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_TransientArrayOf_5F_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_StoredArrayOf_5F_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @generationStruct generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generationStruct ("generationStruct",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_generationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationStruct ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_generationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_generationStruct (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct GGS_generationStruct::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_generationStruct result ;
  const GGS_generationStruct * p = (const GGS_generationStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_generationStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum runActionDescriptor
//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor::GGS_runActionDescriptor (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor GGS_runActionDescriptor::class_func_noAction (UNUSED_LOCATION_ARGS) {
  GGS_runActionDescriptor result ;
  result.mEnum = Enumeration::enum_noAction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor GGS_runActionDescriptor::class_func_action (const GGS_lstring & inAssociatedValue0,
                                                                    const GGS_lstring & inAssociatedValue1
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_runActionDescriptor result ;
  result.mEnum = Enumeration::enum_action ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_runActionDescriptor_2E_action (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_runActionDescriptor::method_extractAction (GGS_lstring & outAssociatedValue_target,
                                                    GGS_lstring & outAssociatedValue_action,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_action) {
    outAssociatedValue_target.drop () ;
    outAssociatedValue_action.drop () ;
    String s ;
    s.appendCString ("method @runActionDescriptor.action invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_runActionDescriptor_2E_action *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_target = ptr->mProperty_target ;
    outAssociatedValue_action = ptr->mProperty_action ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor_2E_action_3F_ GGS_runActionDescriptor::getter_getAction (UNUSED_LOCATION_ARGS) const {
  GGS_runActionDescriptor_2E_action_3F_ result ;
  if (mEnum == Enumeration::enum_action) {
    const auto ptr = (const GGS_runActionDescriptor_2E_action *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_runActionDescriptor_2E_action (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_runActionDescriptor::getAssociatedValuesFor_action (GGS_lstring & out_target,
                                                             GGS_lstring & out_action) const {
  const auto ptr = (const GGS_runActionDescriptor_2E_action *) mAssociatedValues.associatedValuesPointer () ;
  out_target = ptr->mProperty_target ;
  out_action = ptr->mProperty_action ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_runActionDescriptor [3] = {
  "(not built)",
  "noAction",
  "action"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_runActionDescriptor::getter_isNoAction (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noAction == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_runActionDescriptor::getter_isAction (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_action == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_runActionDescriptor::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @runActionDescriptor: ") ;
  ioString.appendCString (gEnumNameArrayFor_runActionDescriptor [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_runActionDescriptor::objectCompare (const GGS_runActionDescriptor & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_action: {
        const auto left = (GGS_runActionDescriptor_2E_action *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_runActionDescriptor_2E_action *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @runActionDescriptor generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_runActionDescriptor ("runActionDescriptor",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_runActionDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_runActionDescriptor ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_runActionDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_runActionDescriptor (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor GGS_runActionDescriptor::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_runActionDescriptor result ;
  const GGS_runActionDescriptor * p = (const GGS_runActionDescriptor *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_runActionDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("runActionDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @actionFileGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actionFileGeneration::objectCompare (const GGS_actionFileGeneration & inOperand) const {
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

GGS_actionFileGeneration::GGS_actionFileGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_actionFileGeneration GGS_actionFileGeneration::
init_21__21_ (const GGS_string & in_mClassName,
              const GGS_string & in_mActionName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_actionFileGeneration * object = nullptr ;
  macroMyNew (object, cPtr_actionFileGeneration (inCompiler COMMA_THERE)) ;
  object->actionFileGeneration_init_21__21_ (in_mClassName, in_mActionName, inCompiler) ;
  const GGS_actionFileGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::
actionFileGeneration_init_21__21_ (const GGS_string & in_mClassName,
                                   const GGS_string & in_mActionName,
                                   Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mActionName = in_mActionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration::GGS_actionFileGeneration (const cPtr_actionFileGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actionFileGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_actionFileGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actionFileGeneration::setProperty_mClassName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_actionFileGeneration::readProperty_mActionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    return p->mProperty_mActionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actionFileGeneration::setProperty_mActionName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    p->mProperty_mActionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @actionFileGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_actionFileGeneration::cPtr_actionFileGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mActionName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_actionFileGeneration::cPtr_actionFileGeneration (const GGS_string & in_mClassName,
                                                      const GGS_string & in_mActionName,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mActionName () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mActionName = in_mActionName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_actionFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

void cPtr_actionFileGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@actionFileGeneration:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActionName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_actionFileGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_actionFileGeneration (mProperty_mClassName, mProperty_mActionName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_actionFileGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mActionName.printNonNullClassInstanceProperties ("mActionName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @actionFileGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionFileGeneration ("actionFileGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actionFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actionFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actionFileGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration GGS_actionFileGeneration::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_actionFileGeneration result ;
  const GGS_actionFileGeneration * p = (const GGS_actionFileGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actionFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actionFileGeneration_2E_weak::objectCompare (const GGS_actionFileGeneration_2E_weak & inOperand) const {
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

GGS_actionFileGeneration_2E_weak::GGS_actionFileGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration_2E_weak & GGS_actionFileGeneration_2E_weak::operator = (const GGS_actionFileGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration_2E_weak::GGS_actionFileGeneration_2E_weak (const GGS_actionFileGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration_2E_weak GGS_actionFileGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_actionFileGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration GGS_actionFileGeneration_2E_weak::unwrappedValue (void) const {
  GGS_actionFileGeneration result ;
  if (isValid ()) {
    const cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_actionFileGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration GGS_actionFileGeneration_2E_weak::bang_actionFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_actionFileGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actionFileGeneration) ;
      result = GGS_actionFileGeneration ((cPtr_actionFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @actionFileGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionFileGeneration_2E_weak ("actionFileGeneration.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actionFileGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actionFileGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actionFileGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration_2E_weak GGS_actionFileGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_actionFileGeneration_2E_weak result ;
  const GGS_actionFileGeneration_2E_weak * p = (const GGS_actionFileGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actionFileGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionFileGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutClassParameterList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutClassParameterList : public cCollectionElement {
  public: GGS_autoLayoutClassParameterList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutClassParameterList (const GGS_lstring & in_mParameterName,
                                                           const GGS_autoLayoutClassParameterType & in_mParameterType
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutClassParameterList (const GGS_autoLayoutClassParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutClassParameterList::cCollectionElement_autoLayoutClassParameterList (const GGS_lstring & in_mParameterName,
                                                                                                  const GGS_autoLayoutClassParameterType & in_mParameterType
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutClassParameterList::cCollectionElement_autoLayoutClassParameterList (const GGS_autoLayoutClassParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutClassParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutClassParameterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutClassParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutClassParameterList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList::GGS_autoLayoutClassParameterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList::GGS_autoLayoutClassParameterList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    const GGS_autoLayoutClassParameterList_2E_element element (p->mObject.mProperty_mParameterName, p->mObject.mProperty_mParameterType) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_lstring & in_mParameterName,
                                                                  const GGS_autoLayoutClassParameterType & in_mParameterType
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutClassParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutClassParameterList (in_mParameterName, in_mParameterType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutClassParameterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutClassParameterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameterName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameterType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterType.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::plusPlusAssignOperation (const GGS_autoLayoutClassParameterList_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                             const GGS_autoLayoutClassParameterType & inOperand1
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutClassParameterList_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutClassParameterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::addAssignOperation (const GGS_lstring & inOperand0,
                                                           const GGS_autoLayoutClassParameterType & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutClassParameterList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::setter_append (const GGS_lstring inOperand0,
                                                      const GGS_autoLayoutClassParameterType inOperand1,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutClassParameterList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                             const GGS_autoLayoutClassParameterType inOperand1,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutClassParameterList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                             GGS_autoLayoutClassParameterType & outOperand1,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mParameterName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mParameterType ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::setter_popFirst (GGS_lstring & outOperand0,
                                                        GGS_autoLayoutClassParameterType & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterType ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::setter_popLast (GGS_lstring & outOperand0,
                                                       GGS_autoLayoutClassParameterType & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterType ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::method_first (GGS_lstring & outOperand0,
                                                     GGS_autoLayoutClassParameterType & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterType ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::method_last (GGS_lstring & outOperand0,
                                                    GGS_autoLayoutClassParameterType & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterType ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::add_operation (const GGS_autoLayoutClassParameterList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::plusAssignOperation (const GGS_autoLayoutClassParameterList inList,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::setter_setMParameterNameAtIndex (GGS_lstring inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_autoLayoutClassParameterList::getter_mParameterNameAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::setter_setMParameterTypeAtIndex (GGS_autoLayoutClassParameterType inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterList::getter_mParameterTypeAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @autoLayoutClassParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutClassParameterList::DownEnumerator_autoLayoutClassParameterList (const GGS_autoLayoutClassParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element DownEnumerator_autoLayoutClassParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutClassParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType DownEnumerator_autoLayoutClassParameterList::current_mParameterType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutClassParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutClassParameterList::UpEnumerator_autoLayoutClassParameterList (const GGS_autoLayoutClassParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element UpEnumerator_autoLayoutClassParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutClassParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType UpEnumerator_autoLayoutClassParameterList::current_mParameterType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterType ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutClassParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList ("autoLayoutClassParameterList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutClassParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutClassParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutClassParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList result ;
  const GGS_autoLayoutClassParameterList * p = (const GGS_autoLayoutClassParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutClassParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutViewClassDeclarationAST_2E_weak::objectCompare (const GGS_autoLayoutViewClassDeclarationAST_2E_weak & inOperand) const {
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

GGS_autoLayoutViewClassDeclarationAST_2E_weak::GGS_autoLayoutViewClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST_2E_weak & GGS_autoLayoutViewClassDeclarationAST_2E_weak::operator = (const GGS_autoLayoutViewClassDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST_2E_weak::GGS_autoLayoutViewClassDeclarationAST_2E_weak (const GGS_autoLayoutViewClassDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST_2E_weak GGS_autoLayoutViewClassDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutViewClassDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST GGS_autoLayoutViewClassDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutViewClassDeclarationAST result ;
  if (isValid ()) {
    const cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutViewClassDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST GGS_autoLayoutViewClassDeclarationAST_2E_weak::bang_autoLayoutViewClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutViewClassDeclarationAST) ;
      result = GGS_autoLayoutViewClassDeclarationAST ((cPtr_autoLayoutViewClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewClassDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST_2E_weak ("autoLayoutViewClassDeclarationAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewClassDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewClassDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewClassDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST_2E_weak GGS_autoLayoutViewClassDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewClassDeclarationAST_2E_weak result ;
  const GGS_autoLayoutViewClassDeclarationAST_2E_weak * p = (const GGS_autoLayoutViewClassDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewClassDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum autoLayoutClassParameterType
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType::GGS_autoLayoutClassParameterType (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_typeString (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_typeString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_typeStringArray (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_typeStringArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_typeInt (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_typeInt ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_typeBool (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_typeBool ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_typeView (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_typeView ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_menuItem (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_menuItem ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_entity (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_entity ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_typeEnum (const GGS_lstring & inAssociatedValue0
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_typeEnum ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_autoLayoutClassParameterType_2E_typeEnum (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType::method_extractTypeEnum (GGS_lstring & outAssociatedValue_name,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_typeEnum) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @autoLayoutClassParameterType.typeEnum invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_autoLayoutClassParameterType_2E_typeEnum *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ GGS_autoLayoutClassParameterType::getter_getTypeEnum (UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ result ;
  if (mEnum == Enumeration::enum_typeEnum) {
    const auto ptr = (const GGS_autoLayoutClassParameterType_2E_typeEnum *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_autoLayoutClassParameterType_2E_typeEnum (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType::getAssociatedValuesFor_typeEnum (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_autoLayoutClassParameterType_2E_typeEnum *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autoLayoutClassParameterType [9] = {
  "(not built)",
  "typeString",
  "typeStringArray",
  "typeInt",
  "typeBool",
  "typeView",
  "menuItem",
  "entity",
  "typeEnum"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isTypeString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_typeString == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isTypeStringArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_typeStringArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isTypeInt (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_typeInt == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isTypeBool (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_typeBool == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isTypeView (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_typeView == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isMenuItem (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_menuItem == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isEntity (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entity == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isTypeEnum (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_typeEnum == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @autoLayoutClassParameterType: ") ;
  ioString.appendCString (gEnumNameArrayFor_autoLayoutClassParameterType [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutClassParameterType::objectCompare (const GGS_autoLayoutClassParameterType & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_typeEnum: {
        const auto left = (GGS_autoLayoutClassParameterType_2E_typeEnum *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_autoLayoutClassParameterType_2E_typeEnum *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutClassParameterType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType ("autoLayoutClassParameterType",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutClassParameterType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutClassParameterType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutClassParameterType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  const GGS_autoLayoutClassParameterType * p = (const GGS_autoLayoutClassParameterType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutClassParameterType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@autoLayoutClassParameterType string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_autoLayoutClassParameterType & inObject,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutClassParameterType temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_autoLayoutClassParameterType::Enumeration::invalid:
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_typeString:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_typeStringArray:
    {
      result_result = GGS_string ("String array") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_typeInt:
    {
      result_result = GGS_string ("Int") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_typeBool:
    {
      result_result = GGS_string ("Bool") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_typeView:
    {
      result_result = GGS_string ("a view") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_menuItem:
    {
      result_result = GGS_string ("a menu item") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_entity:
    {
      result_result = GGS_string ("an entity name") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_typeEnum:
    {
      GGS_lstring extractedValue_1433_name_0 ;
      temp_0.getAssociatedValuesFor_typeEnum (extractedValue_1433_name_0) ;
      result_result = GGS_string ("the ").add_operation (extractedValue_1433_name_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 41)).add_operation (GGS_string (" enum type"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 41)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum tableValueBinding
//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding::GGS_tableValueBinding (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding GGS_tableValueBinding::class_func_noTableValueBinding (UNUSED_LOCATION_ARGS) {
  GGS_tableValueBinding result ;
  result.mEnum = Enumeration::enum_noTableValueBinding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding GGS_tableValueBinding::class_func_tableValueBinding (const GGS_lstring & inAssociatedValue0
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tableValueBinding result ;
  result.mEnum = Enumeration::enum_tableValueBinding ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_tableValueBinding_2E_tableValueBinding (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableValueBinding::method_extractTableValueBinding (GGS_lstring & outAssociatedValue_controllerName,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_tableValueBinding) {
    outAssociatedValue_controllerName.drop () ;
    String s ;
    s.appendCString ("method @tableValueBinding.tableValueBinding invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_tableValueBinding_2E_tableValueBinding *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding_2E_tableValueBinding_3F_ GGS_tableValueBinding::getter_getTableValueBinding (UNUSED_LOCATION_ARGS) const {
  GGS_tableValueBinding_2E_tableValueBinding_3F_ result ;
  if (mEnum == Enumeration::enum_tableValueBinding) {
    const auto ptr = (const GGS_tableValueBinding_2E_tableValueBinding *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_tableValueBinding_2E_tableValueBinding (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableValueBinding::getAssociatedValuesFor_tableValueBinding (GGS_lstring & out_controllerName) const {
  const auto ptr = (const GGS_tableValueBinding_2E_tableValueBinding *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_tableValueBinding [3] = {
  "(not built)",
  "noTableValueBinding",
  "tableValueBinding"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_tableValueBinding::getter_isNoTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noTableValueBinding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_tableValueBinding::getter_isTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_tableValueBinding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableValueBinding::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<enum @tableValueBinding: ") ;
  ioString.appendCString (gEnumNameArrayFor_tableValueBinding [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_tableValueBinding::objectCompare (const GGS_tableValueBinding & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_tableValueBinding: {
        const auto left = (GGS_tableValueBinding_2E_tableValueBinding *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_tableValueBinding_2E_tableValueBinding *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @tableValueBinding generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableValueBinding ("tableValueBinding",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tableValueBinding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tableValueBinding::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tableValueBinding (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding GGS_tableValueBinding::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_tableValueBinding result ;
  const GGS_tableValueBinding * p = (const GGS_tableValueBinding *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tableValueBinding *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableValueBinding", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum graphicController
//--------------------------------------------------------------------------------------------------

GGS_graphicController::GGS_graphicController (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_graphicController GGS_graphicController::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_graphicController result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController GGS_graphicController::class_func_defined (const GGS_lstring & inAssociatedValue0,
                                                                 const GGS_lstring & inAssociatedValue1
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_graphicController result ;
  result.mEnum = Enumeration::enum_defined ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_graphicController_2E_defined (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphicController::method_extractDefined (GGS_lstring & outAssociatedValue_controller,
                                                   GGS_lstring & outAssociatedValue_propertyName,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_defined) {
    outAssociatedValue_controller.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @graphicController.defined invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_graphicController_2E_defined *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controller = ptr->mProperty_controller ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_graphicController_2E_defined_3F_ GGS_graphicController::getter_getDefined (UNUSED_LOCATION_ARGS) const {
  GGS_graphicController_2E_defined_3F_ result ;
  if (mEnum == Enumeration::enum_defined) {
    const auto ptr = (const GGS_graphicController_2E_defined *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_graphicController_2E_defined (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphicController::getAssociatedValuesFor_defined (GGS_lstring & out_controller,
                                                            GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_graphicController_2E_defined *) mAssociatedValues.associatedValuesPointer () ;
  out_controller = ptr->mProperty_controller ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_graphicController [3] = {
  "(not built)",
  "none",
  "defined"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_graphicController::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_graphicController::getter_isDefined (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_defined == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphicController::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<enum @graphicController: ") ;
  ioString.appendCString (gEnumNameArrayFor_graphicController [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @graphicController generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphicController ("graphicController",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphicController::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphicController ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_graphicController::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_graphicController (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController GGS_graphicController::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_graphicController result ;
  const GGS_graphicController * p = (const GGS_graphicController *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_graphicController *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphicController", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@outletBindingModelList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_outletBindingModelList : public cCollectionElement {
  public: GGS_outletBindingModelList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_outletBindingModelList (const GGS_propertyKind & in_mKind,
                                                     const GGS_location & in_mErrorLocation
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_outletBindingModelList (const GGS_outletBindingModelList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletBindingModelList::cCollectionElement_outletBindingModelList (const GGS_propertyKind & in_mKind,
                                                                                      const GGS_location & in_mErrorLocation
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKind, in_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletBindingModelList::cCollectionElement_outletBindingModelList (const GGS_outletBindingModelList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mKind, inElement.mProperty_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_outletBindingModelList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletBindingModelList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_outletBindingModelList (mObject.mProperty_mKind, mObject.mProperty_mErrorLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @outletBindingModelList
//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList::GGS_outletBindingModelList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList::GGS_outletBindingModelList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    const GGS_outletBindingModelList_2E_element element (p->mObject.mProperty_mKind, p->mObject.mProperty_mErrorLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_propertyKind & in_mKind,
                                                            const GGS_location & in_mErrorLocation
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingModelList * p = nullptr ;
  macroMyNew (p, cCollectionElement_outletBindingModelList (in_mKind, in_mErrorLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletBindingModelList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_outletBindingModelList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mKind.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mErrorLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mErrorLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletBindingModelList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::plusPlusAssignOperation (const GGS_outletBindingModelList_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::class_func_listWithValue (const GGS_propertyKind & inOperand0,
                                                                                 const GGS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_outletBindingModelList_2E_element element (inOperand0, inOperand1) ;
  GGS_outletBindingModelList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::addAssignOperation (const GGS_propertyKind & inOperand0,
                                                     const GGS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  const GGS_outletBindingModelList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_append (const GGS_propertyKind inOperand0,
                                                const GGS_location inOperand1,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_outletBindingModelList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_insertAtIndex (const GGS_propertyKind inOperand0,
                                                       const GGS_location inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_outletBindingModelList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_removeAtIndex (GGS_propertyKind & outOperand0,
                                                       GGS_location & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mKind ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mErrorLocation ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_popFirst (GGS_propertyKind & outOperand0,
                                                  GGS_location & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mErrorLocation ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_popLast (GGS_propertyKind & outOperand0,
                                                 GGS_location & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mErrorLocation ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::method_first (GGS_propertyKind & outOperand0,
                                               GGS_location & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mErrorLocation ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::method_last (GGS_propertyKind & outOperand0,
                                              GGS_location & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mErrorLocation ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::add_operation (const GGS_outletBindingModelList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletBindingModelList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_outletBindingModelList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_outletBindingModelList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_outletBindingModelList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_outletBindingModelList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::plusAssignOperation (const GGS_outletBindingModelList inList,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_setMKindAtIndex (GGS_propertyKind inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mKind = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_propertyKind GGS_outletBindingModelList::getter_mKindAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_propertyKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mKind ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_setMErrorLocationAtIndex (GGS_location inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mErrorLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_outletBindingModelList::getter_mErrorLocationAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mErrorLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @outletBindingModelList
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletBindingModelList::DownEnumerator_outletBindingModelList (const GGS_outletBindingModelList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element DownEnumerator_outletBindingModelList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind DownEnumerator_outletBindingModelList::current_mKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_outletBindingModelList::current_mErrorLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mErrorLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @outletBindingModelList
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletBindingModelList::UpEnumerator_outletBindingModelList (const GGS_outletBindingModelList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element UpEnumerator_outletBindingModelList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind UpEnumerator_outletBindingModelList::current_mKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_outletBindingModelList::current_mErrorLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mErrorLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @outletBindingModelList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingModelList ("outletBindingModelList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletBindingModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletBindingModelList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletBindingModelList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_outletBindingModelList result ;
  const GGS_outletBindingModelList * p = (const GGS_outletBindingModelList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletBindingModelList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingModelList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@boundObjectList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_boundObjectList : public cCollectionElement {
  public: GGS_boundObjectList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_boundObjectList (const GGS_string & in_mBoundObjectString,
                                              const GGS_propertyKind & in_mKind
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_boundObjectList (const GGS_boundObjectList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_boundObjectList::cCollectionElement_boundObjectList (const GGS_string & in_mBoundObjectString,
                                                                        const GGS_propertyKind & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBoundObjectString, in_mKind) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_boundObjectList::cCollectionElement_boundObjectList (const GGS_boundObjectList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBoundObjectString, inElement.mProperty_mKind) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_boundObjectList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_boundObjectList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_boundObjectList (mObject.mProperty_mBoundObjectString, mObject.mProperty_mKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @boundObjectList
//--------------------------------------------------------------------------------------------------

GGS_boundObjectList::GGS_boundObjectList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList::GGS_boundObjectList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_boundObjectList * p = (cCollectionElement_boundObjectList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
    const GGS_boundObjectList_2E_element element (p->mObject.mProperty_mBoundObjectString, p->mObject.mProperty_mKind) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_string & in_mBoundObjectString,
                                                     const GGS_propertyKind & in_mKind
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_boundObjectList * p = nullptr ;
  macroMyNew (p, cCollectionElement_boundObjectList (in_mBoundObjectString, in_mKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_boundObjectList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_boundObjectList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBoundObjectString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBoundObjectString.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mKind.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList GGS_boundObjectList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_boundObjectList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::plusPlusAssignOperation (const GGS_boundObjectList_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList GGS_boundObjectList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                   const GGS_propertyKind & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_boundObjectList_2E_element element (inOperand0, inOperand1) ;
  GGS_boundObjectList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::addAssignOperation (const GGS_string & inOperand0,
                                              const GGS_propertyKind & inOperand1
                                              COMMA_LOCATION_ARGS) {
  const GGS_boundObjectList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::setter_append (const GGS_string inOperand0,
                                         const GGS_propertyKind inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS_boundObjectList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::setter_insertAtIndex (const GGS_string inOperand0,
                                                const GGS_propertyKind inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_boundObjectList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::setter_removeAtIndex (GGS_string & outOperand0,
                                                GGS_propertyKind & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mBoundObjectString ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mKind ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::setter_popFirst (GGS_string & outOperand0,
                                           GGS_propertyKind & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBoundObjectString ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mKind ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::setter_popLast (GGS_string & outOperand0,
                                          GGS_propertyKind & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBoundObjectString ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mKind ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::method_first (GGS_string & outOperand0,
                                        GGS_propertyKind & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBoundObjectString ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mKind ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::method_last (GGS_string & outOperand0,
                                       GGS_propertyKind & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBoundObjectString ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mKind ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList GGS_boundObjectList::add_operation (const GGS_boundObjectList & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_boundObjectList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList GGS_boundObjectList::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_boundObjectList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList GGS_boundObjectList::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_boundObjectList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList GGS_boundObjectList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_boundObjectList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList GGS_boundObjectList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_boundObjectList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::plusAssignOperation (const GGS_boundObjectList inList,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::setter_setMBoundObjectStringAtIndex (GGS_string inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundObjectString = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_boundObjectList::getter_mBoundObjectStringAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundObjectString ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::setter_setMKindAtIndex (GGS_propertyKind inOperand,
                                                  GGS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mKind = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_propertyKind GGS_boundObjectList::getter_mKindAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_propertyKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mKind ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @boundObjectList
//--------------------------------------------------------------------------------------------------

DownEnumerator_boundObjectList::DownEnumerator_boundObjectList (const GGS_boundObjectList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList_2E_element DownEnumerator_boundObjectList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_boundObjectList::current_mBoundObjectString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectString ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind DownEnumerator_boundObjectList::current_mKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKind ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @boundObjectList
//--------------------------------------------------------------------------------------------------

UpEnumerator_boundObjectList::UpEnumerator_boundObjectList (const GGS_boundObjectList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList_2E_element UpEnumerator_boundObjectList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_boundObjectList::current_mBoundObjectString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectString ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind UpEnumerator_boundObjectList::current_mKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKind ;
}




//--------------------------------------------------------------------------------------------------
//     @boundObjectList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boundObjectList ("boundObjectList",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boundObjectList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boundObjectList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boundObjectList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boundObjectList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList GGS_boundObjectList::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_boundObjectList result ;
  const GGS_boundObjectList * p = (const GGS_boundObjectList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boundObjectList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boundObjectList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typeKind typeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_typeName (const GGS_typeKind & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_boolType:
    {
      result_result = GGS_string ("Bool") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_integerType:
    {
      result_result = GGS_string ("Int") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_doubleType:
    {
      result_result = GGS_string ("Double") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_stringType:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dateType:
    {
      result_result = GGS_string ("Date") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dataType:
    {
      result_result = GGS_string ("Data") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_fontType:
    {
      result_result = GGS_string ("NSFont") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_colorType:
    {
      result_result = GGS_string ("NSColor") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_bezierPathType:
    {
      result_result = GGS_string ("NSBezierPath") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
    {
      result_result = GGS_string ("BezierPathArray") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumType:
    {
      GGS_string extractedValue_755_typeName_0 ;
      GGS_enumConstantMap extractedValue_766__1 ;
      GGS_enumFuncMap extractedValue_766__2 ;
      temp_0.getAssociatedValuesFor_enumType (extractedValue_755_typeName_0, extractedValue_766__1, extractedValue_766__2) ;
      result_result = extractedValue_755_typeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_entityType:
    {
      GGS_string extractedValue_812_typeName_0 ;
      GGS_bool extractedValue_822__1 ;
      temp_0.getAssociatedValuesFor_entityType (extractedValue_812_typeName_0, extractedValue_822__1) ;
      result_result = extractedValue_812_typeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_classType:
    {
      GGS_string extractedValue_867_typeName_0 ;
      temp_0.getAssociatedValuesFor_classType (extractedValue_867_typeName_0) ;
      result_result = extractedValue_867_typeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
    {
      GGS_string extractedValue_937_typeName_0 ;
      temp_0.getAssociatedValuesFor_transientPropertyExternType (extractedValue_937_typeName_0) ;
      result_result = extractedValue_937_typeName_0 ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typeKind isComparable'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isComparable (const GGS_typeKind & inObject,
                                       Compiler *
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outResult ; // Returned variable
  const GGS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_boolType:
  case GGS_typeKind::Enumeration::enum_integerType:
  case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
  case GGS_typeKind::Enumeration::enum_doubleType:
  case GGS_typeKind::Enumeration::enum_stringType:
  case GGS_typeKind::Enumeration::enum_dateType:
  case GGS_typeKind::Enumeration::enum_dataType:
    {
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_fontType:
  case GGS_typeKind::Enumeration::enum_colorType:
  case GGS_typeKind::Enumeration::enum_bezierPathType:
  case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
    {
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumType:
    {
      GGS_string extractedValue_1359__0 ;
      GGS_enumConstantMap extractedValue_1359__1 ;
      GGS_enumFuncMap extractedValue_1359__2 ;
      temp_0.getAssociatedValuesFor_enumType (extractedValue_1359__0, extractedValue_1359__1, extractedValue_1359__2) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_entityType:
    {
      GGS_string extractedValue_1406__0 ;
      GGS_bool extractedValue_1406__1 ;
      temp_0.getAssociatedValuesFor_entityType (extractedValue_1406__0, extractedValue_1406__1) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_classType:
    {
      GGS_string extractedValue_1451__0 ;
      temp_0.getAssociatedValuesFor_classType (extractedValue_1451__0) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
    {
      GGS_string extractedValue_1514__0 ;
      temp_0.getAssociatedValuesFor_transientPropertyExternType (extractedValue_1514__0) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typeKind isGraphic'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isGraphic (const GGS_typeKind & inObject,
                                    Compiler *
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outResult ; // Returned variable
  const GGS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_boolType:
  case GGS_typeKind::Enumeration::enum_integerType:
  case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
  case GGS_typeKind::Enumeration::enum_doubleType:
  case GGS_typeKind::Enumeration::enum_stringType:
  case GGS_typeKind::Enumeration::enum_dateType:
  case GGS_typeKind::Enumeration::enum_dataType:
  case GGS_typeKind::Enumeration::enum_bezierPathType:
  case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
    {
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_fontType:
  case GGS_typeKind::Enumeration::enum_colorType:
    {
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumType:
    {
      GGS_string extractedValue_1934__0 ;
      GGS_enumConstantMap extractedValue_1934__1 ;
      GGS_enumFuncMap extractedValue_1934__2 ;
      temp_0.getAssociatedValuesFor_enumType (extractedValue_1934__0, extractedValue_1934__1, extractedValue_1934__2) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_entityType:
    {
      GGS_string extractedValue_1980__0 ;
      GGS_bool extractedValue_1983_isGraphic_1 ;
      temp_0.getAssociatedValuesFor_entityType (extractedValue_1980__0, extractedValue_1983_isGraphic_1) ;
      result_outResult = extractedValue_1983_isGraphic_1 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_classType:
    {
      GGS_string extractedValue_2040__0 ;
      temp_0.getAssociatedValuesFor_classType (extractedValue_2040__0) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
    {
      GGS_string extractedValue_2103__0 ;
      temp_0.getAssociatedValuesFor_transientPropertyExternType (extractedValue_2103__0) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//Class for element of '@typeKindList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_typeKindList : public cCollectionElement {
  public: GGS_typeKindList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_typeKindList (const GGS_typeKind & in_mType
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_typeKindList (const GGS_typeKindList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_typeKindList::cCollectionElement_typeKindList (const GGS_typeKind & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_typeKindList::cCollectionElement_typeKindList (const GGS_typeKindList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_typeKindList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_typeKindList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_typeKindList (mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @typeKindList
//--------------------------------------------------------------------------------------------------

GGS_typeKindList::GGS_typeKindList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList::GGS_typeKindList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    const GGS_typeKindList_2E_element element (p->mObject.mProperty_mType) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_typeKind & in_mType
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_typeKindList * p = nullptr ;
  macroMyNew (p, cCollectionElement_typeKindList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typeKindList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_typeKindList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::plusPlusAssignOperation (const GGS_typeKindList_2E_element & inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::class_func_listWithValue (const GGS_typeKind & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  const GGS_typeKindList_2E_element element (inOperand0) ;
  GGS_typeKindList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::addAssignOperation (const GGS_typeKind & inOperand0
                                           COMMA_LOCATION_ARGS) {
  const GGS_typeKindList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_append (const GGS_typeKind inOperand0,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  const GGS_typeKindList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_insertAtIndex (const GGS_typeKind inOperand0,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_typeKindList_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_removeAtIndex (GGS_typeKind & outOperand0,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mType ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_popFirst (GGS_typeKind & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_popLast (GGS_typeKind & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::method_first (GGS_typeKind & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::method_last (GGS_typeKind & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::add_operation (const GGS_typeKindList & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeKindList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_typeKindList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_typeKindList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_typeKindList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_typeKindList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::plusAssignOperation (const GGS_typeKindList inList,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_setMTypeAtIndex (GGS_typeKind inOperand,
                                               GGS_uint inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_typeKind GGS_typeKindList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_typeKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @typeKindList
//--------------------------------------------------------------------------------------------------

DownEnumerator_typeKindList::DownEnumerator_typeKindList (const GGS_typeKindList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList_2E_element DownEnumerator_typeKindList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind DownEnumerator_typeKindList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @typeKindList
//--------------------------------------------------------------------------------------------------

UpEnumerator_typeKindList::UpEnumerator_typeKindList (const GGS_typeKindList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList_2E_element UpEnumerator_typeKindList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind UpEnumerator_typeKindList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}




//--------------------------------------------------------------------------------------------------
//     @typeKindList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindList ("typeKindList",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_typeKindList result ;
  const GGS_typeKindList * p = (const GGS_typeKindList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@propertyKind typeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_typeName (const GGS_propertyKind & inObject,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_2467_type_0 ;
      GGS_propertyAccessibility extractedValue_2473__1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_2467_type_0, extractedValue_2473__1) ;
      result_result = extensionGetter_typeName (extractedValue_2467_type_0, inCompiler COMMA_SOURCE_FILE ("unified-type.ggs", 90)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_2520_typeName_0 ;
      GGS_propertyAccessibility extractedValue_2531__1 ;
      GGS_bool extractedValue_2531__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_2531__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_2520_typeName_0, extractedValue_2531__1, extractedValue_2531__2, extractedValue_2531__3) ;
      result_result = extractedValue_2520_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_2572_typeName_0 ;
      GGS_propertyAccessibility extractedValue_2583__1 ;
      GGS_bool extractedValue_2583__2 ;
      GGS_toOneOppositeRelationship extractedValue_2583__3 ;
      GGS_bool extractedValue_2583__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_2572_typeName_0, extractedValue_2583__1, extractedValue_2583__2, extractedValue_2583__3, extractedValue_2583__4) ;
      result_result = extractedValue_2572_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_2634_typeName_0 ;
      GGS_bool extractedValue_2644__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_2634_typeName_0, extractedValue_2644__1) ;
      result_result = extractedValue_2634_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_2699_typeName_0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_2699_typeName_0) ;
      result_result = extractedValue_2699_typeName_0 ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@propertyKind swiftTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_swiftTypeName (const GGS_propertyKind & inObject,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_2922_type_0 ;
      GGS_propertyAccessibility extractedValue_2928__1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_2922_type_0, extractedValue_2928__1) ;
      result_result = extensionGetter_swiftTypeName (extractedValue_2922_type_0, inCompiler COMMA_SOURCE_FILE ("unified-type.ggs", 107)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_2980_typeName_0 ;
      GGS_propertyAccessibility extractedValue_2991__1 ;
      GGS_bool extractedValue_2991__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_2991__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_2980_typeName_0, extractedValue_2991__1, extractedValue_2991__2, extractedValue_2991__3) ;
      result_result = extractedValue_2980_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_3032_typeName_0 ;
      GGS_propertyAccessibility extractedValue_3043__1 ;
      GGS_bool extractedValue_3043__2 ;
      GGS_toOneOppositeRelationship extractedValue_3043__3 ;
      GGS_bool extractedValue_3043__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_3032_typeName_0, extractedValue_3043__1, extractedValue_3043__2, extractedValue_3043__3, extractedValue_3043__4) ;
      result_result = extractedValue_3032_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_3094_typeName_0 ;
      GGS_bool extractedValue_3104__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_3094_typeName_0, extractedValue_3104__1) ;
      result_result = extractedValue_3094_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_3159_typeName_0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_3159_typeName_0) ;
      result_result = extractedValue_3159_typeName_0 ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typeKind swiftTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_swiftTypeName (const GGS_typeKind & inObject,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_integerType:
    {
      result_outResult = GGS_string ("Int") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
    {
      result_outResult = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_stringType:
    {
      result_outResult = GGS_string ("String") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_boolType:
    {
      result_outResult = GGS_string ("Bool") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dateType:
    {
      result_outResult = GGS_string ("Date") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dataType:
    {
      result_outResult = GGS_string ("Data") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_doubleType:
    {
      result_outResult = GGS_string ("Double") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_fontType:
    {
      result_outResult = GGS_string ("NSFont") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_colorType:
    {
      result_outResult = GGS_string ("NSColor") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_bezierPathType:
    {
      result_outResult = GGS_string ("NSBezierPath") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
    {
      result_outResult = GGS_string ("BezierPathArray") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_entityType:
    {
      GGS_string extractedValue_3860_entityName_0 ;
      GGS_bool extractedValue_3872__1 ;
      temp_0.getAssociatedValuesFor_entityType (extractedValue_3860_entityName_0, extractedValue_3872__1) ;
      result_outResult = extractedValue_3860_entityName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumType:
    {
      GGS_string extractedValue_3925_enumTypeName_0 ;
      GGS_enumConstantMap extractedValue_3940__1 ;
      GGS_enumFuncMap extractedValue_3940__2 ;
      temp_0.getAssociatedValuesFor_enumType (extractedValue_3925_enumTypeName_0, extractedValue_3940__1, extractedValue_3940__2) ;
      result_outResult = extractedValue_3925_enumTypeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_classType:
    {
      GGS_string extractedValue_3996_classTypeName_0 ;
      temp_0.getAssociatedValuesFor_classType (extractedValue_3996_classTypeName_0) ;
      result_outResult = extractedValue_3996_classTypeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
    {
      GGS_string extractedValue_4083_classTypeName_0 ;
      temp_0.getAssociatedValuesFor_transientPropertyExternType (extractedValue_4083_classTypeName_0) ;
      result_outResult = extractedValue_4083_classTypeName_0 ;
    }
    break ;
  }
//---
  return result_outResult ;
}




