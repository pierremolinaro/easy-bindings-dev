#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astSeparatorInstructionDeclaration_2E_weak::objectCompare (const GGS_astSeparatorInstructionDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_astSeparatorInstructionDeclaration_2E_weak::GGS_astSeparatorInstructionDeclaration_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration_2E_weak & GGS_astSeparatorInstructionDeclaration_2E_weak::operator = (const GGS_astSeparatorInstructionDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration_2E_weak::GGS_astSeparatorInstructionDeclaration_2E_weak (const GGS_astSeparatorInstructionDeclaration & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration_2E_weak GGS_astSeparatorInstructionDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astSeparatorInstructionDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration GGS_astSeparatorInstructionDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astSeparatorInstructionDeclaration result ;
  if (isValid ()) {
    const cPtr_astSeparatorInstructionDeclaration * p = (cPtr_astSeparatorInstructionDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astSeparatorInstructionDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration GGS_astSeparatorInstructionDeclaration_2E_weak::bang_astSeparatorInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astSeparatorInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astSeparatorInstructionDeclaration) ;
      result = GGS_astSeparatorInstructionDeclaration ((cPtr_astSeparatorInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astSeparatorInstructionDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration_2E_weak ("astSeparatorInstructionDeclaration.weak",
                                                                                               & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astSeparatorInstructionDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astSeparatorInstructionDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astSeparatorInstructionDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration_2E_weak GGS_astSeparatorInstructionDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astSeparatorInstructionDeclaration_2E_weak result ;
  const GGS_astSeparatorInstructionDeclaration_2E_weak * p = (const GGS_astSeparatorInstructionDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astSeparatorInstructionDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astSeparatorInstructionDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astGutterInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astGutterInstructionDeclaration::objectCompare (const GGS_astGutterInstructionDeclaration & inOperand) const {
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

GGS_astGutterInstructionDeclaration::GGS_astGutterInstructionDeclaration (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astGutterInstructionDeclaration GGS_astGutterInstructionDeclaration::
init_21_horizontal (const GGS_bool & in_horizontal,
                    Compiler * inCompiler
                    COMMA_LOCATION_ARGS) {
  cPtr_astGutterInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astGutterInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->astGutterInstructionDeclaration_init_21_horizontal (in_horizontal, inCompiler) ;
  const GGS_astGutterInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astGutterInstructionDeclaration::
astGutterInstructionDeclaration_init_21_horizontal (const GGS_bool & in_horizontal,
                                                    Compiler * /* inCompiler */) {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration::GGS_astGutterInstructionDeclaration (const cPtr_astGutterInstructionDeclaration * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astGutterInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astGutterInstructionDeclaration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_astGutterInstructionDeclaration * p = (cPtr_astGutterInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astGutterInstructionDeclaration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astGutterInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astGutterInstructionDeclaration::cPtr_astGutterInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astGutterInstructionDeclaration::cPtr_astGutterInstructionDeclaration (const GGS_bool & in_horizontal,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_horizontal () {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astGutterInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astGutterInstructionDeclaration ;
}

void cPtr_astGutterInstructionDeclaration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@astGutterInstructionDeclaration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_astGutterInstructionDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astGutterInstructionDeclaration (mProperty_horizontal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astGutterInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astGutterInstructionDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astGutterInstructionDeclaration ("astGutterInstructionDeclaration",
                                                                                    & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astGutterInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astGutterInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astGutterInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astGutterInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration GGS_astGutterInstructionDeclaration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_astGutterInstructionDeclaration result ;
  const GGS_astGutterInstructionDeclaration * p = (const GGS_astGutterInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astGutterInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astGutterInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astGutterInstructionDeclaration_2E_weak::objectCompare (const GGS_astGutterInstructionDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_astGutterInstructionDeclaration_2E_weak::GGS_astGutterInstructionDeclaration_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration_2E_weak & GGS_astGutterInstructionDeclaration_2E_weak::operator = (const GGS_astGutterInstructionDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration_2E_weak::GGS_astGutterInstructionDeclaration_2E_weak (const GGS_astGutterInstructionDeclaration & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration_2E_weak GGS_astGutterInstructionDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astGutterInstructionDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration GGS_astGutterInstructionDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astGutterInstructionDeclaration result ;
  if (isValid ()) {
    const cPtr_astGutterInstructionDeclaration * p = (cPtr_astGutterInstructionDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astGutterInstructionDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration GGS_astGutterInstructionDeclaration_2E_weak::bang_astGutterInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astGutterInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astGutterInstructionDeclaration) ;
      result = GGS_astGutterInstructionDeclaration ((cPtr_astGutterInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astGutterInstructionDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astGutterInstructionDeclaration_2E_weak ("astGutterInstructionDeclaration.weak",
                                                                                            & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astGutterInstructionDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astGutterInstructionDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astGutterInstructionDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astGutterInstructionDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration_2E_weak GGS_astGutterInstructionDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_astGutterInstructionDeclaration_2E_weak result ;
  const GGS_astGutterInstructionDeclaration_2E_weak * p = (const GGS_astGutterInstructionDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astGutterInstructionDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astGutterInstructionDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astDividerInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astDividerInstructionDeclaration::objectCompare (const GGS_astDividerInstructionDeclaration & inOperand) const {
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

GGS_astDividerInstructionDeclaration::GGS_astDividerInstructionDeclaration (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astDividerInstructionDeclaration GGS_astDividerInstructionDeclaration::
init_21_horizontal (const GGS_bool & in_horizontal,
                    Compiler * inCompiler
                    COMMA_LOCATION_ARGS) {
  cPtr_astDividerInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astDividerInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->astDividerInstructionDeclaration_init_21_horizontal (in_horizontal, inCompiler) ;
  const GGS_astDividerInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astDividerInstructionDeclaration::
astDividerInstructionDeclaration_init_21_horizontal (const GGS_bool & in_horizontal,
                                                     Compiler * /* inCompiler */) {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration::GGS_astDividerInstructionDeclaration (const cPtr_astDividerInstructionDeclaration * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astDividerInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astDividerInstructionDeclaration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_astDividerInstructionDeclaration * p = (cPtr_astDividerInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astDividerInstructionDeclaration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astDividerInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astDividerInstructionDeclaration::cPtr_astDividerInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astDividerInstructionDeclaration::cPtr_astDividerInstructionDeclaration (const GGS_bool & in_horizontal,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_horizontal () {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astDividerInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ;
}

void cPtr_astDividerInstructionDeclaration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@astDividerInstructionDeclaration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_astDividerInstructionDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astDividerInstructionDeclaration (mProperty_horizontal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astDividerInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astDividerInstructionDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ("astDividerInstructionDeclaration",
                                                                                     & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astDividerInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astDividerInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astDividerInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration GGS_astDividerInstructionDeclaration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_astDividerInstructionDeclaration result ;
  const GGS_astDividerInstructionDeclaration * p = (const GGS_astDividerInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astDividerInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDividerInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astDividerInstructionDeclaration_2E_weak::objectCompare (const GGS_astDividerInstructionDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_astDividerInstructionDeclaration_2E_weak::GGS_astDividerInstructionDeclaration_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration_2E_weak & GGS_astDividerInstructionDeclaration_2E_weak::operator = (const GGS_astDividerInstructionDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration_2E_weak::GGS_astDividerInstructionDeclaration_2E_weak (const GGS_astDividerInstructionDeclaration & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration_2E_weak GGS_astDividerInstructionDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astDividerInstructionDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration GGS_astDividerInstructionDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astDividerInstructionDeclaration result ;
  if (isValid ()) {
    const cPtr_astDividerInstructionDeclaration * p = (cPtr_astDividerInstructionDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astDividerInstructionDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration GGS_astDividerInstructionDeclaration_2E_weak::bang_astDividerInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astDividerInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astDividerInstructionDeclaration) ;
      result = GGS_astDividerInstructionDeclaration ((cPtr_astDividerInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astDividerInstructionDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration_2E_weak ("astDividerInstructionDeclaration.weak",
                                                                                             & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astDividerInstructionDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDividerInstructionDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astDividerInstructionDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astDividerInstructionDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration_2E_weak GGS_astDividerInstructionDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_astDividerInstructionDeclaration_2E_weak result ;
  const GGS_astDividerInstructionDeclaration_2E_weak * p = (const GGS_astDividerInstructionDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astDividerInstructionDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDividerInstructionDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum optionalHiddenBinding
//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding::GGS_optionalHiddenBinding (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding GGS_optionalHiddenBinding::class_func_noBinding (UNUSED_LOCATION_ARGS) {
  GGS_optionalHiddenBinding result ;
  result.mEnum = Enumeration::enum_noBinding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding GGS_optionalHiddenBinding::class_func_binding (const GGS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionalHiddenBinding result ;
  result.mEnum = Enumeration::enum_binding ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_optionalHiddenBinding_2E_binding (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding::method_extractBinding (GGS_abstractBooleanMultipleBindingExpressionAST & outAssociatedValue_hidden,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_binding) {
    outAssociatedValue_hidden.drop () ;
    String s ;
    s.appendCString ("method @optionalHiddenBinding.binding invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_optionalHiddenBinding_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_hidden = ptr->mProperty_hidden ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding_3F_ GGS_optionalHiddenBinding::getter_getBinding (UNUSED_LOCATION_ARGS) const {
  GGS_optionalHiddenBinding_2E_binding_3F_ result ;
  if (mEnum == Enumeration::enum_binding) {
    const auto ptr = (const GGS_optionalHiddenBinding_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_optionalHiddenBinding_2E_binding (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding::getAssociatedValuesFor_binding (GGS_abstractBooleanMultipleBindingExpressionAST & out_hidden) const {
  const auto ptr = (const GGS_optionalHiddenBinding_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
  out_hidden = ptr->mProperty_hidden ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_optionalHiddenBinding [3] = {
  "(not built)",
  "noBinding",
  "binding"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionalHiddenBinding::getter_isNoBinding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noBinding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionalHiddenBinding::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_binding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @optionalHiddenBinding: ") ;
  ioString.appendCString (gEnumNameArrayFor_optionalHiddenBinding [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @optionalHiddenBinding generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding ("optionalHiddenBinding",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalHiddenBinding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionalHiddenBinding::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalHiddenBinding (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding GGS_optionalHiddenBinding::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_optionalHiddenBinding result ;
  const GGS_optionalHiddenBinding * p = (const GGS_optionalHiddenBinding *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalHiddenBinding *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalHiddenBinding", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astHStackViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astHStackViewInstructionDeclaration::objectCompare (const GGS_astHStackViewInstructionDeclaration & inOperand) const {
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

GGS_astHStackViewInstructionDeclaration::GGS_astHStackViewInstructionDeclaration (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration GGS_astHStackViewInstructionDeclaration::
init_21__21__21__21_ (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                      const GGS_astViewInstructionList & in_mInstructionList,
                      const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                      const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_astHStackViewInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astHStackViewInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->astHStackViewInstructionDeclaration_init_21__21__21__21_ (in_mFunctionCallList, in_mInstructionList, in_mOptionalHiddenBinding, in_mAstNewStackViewDeclarationList, inCompiler) ;
  const GGS_astHStackViewInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astHStackViewInstructionDeclaration::
astHStackViewInstructionDeclaration_init_21__21__21__21_ (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                          const GGS_astViewInstructionList & in_mInstructionList,
                                                          const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                          const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                          Compiler * /* inCompiler */) {
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mOptionalHiddenBinding = in_mOptionalHiddenBinding ;
  mProperty_mAstNewStackViewDeclarationList = in_mAstNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration::GGS_astHStackViewInstructionDeclaration (const cPtr_astHStackViewInstructionDeclaration * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astHStackViewInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astHStackViewInstructionDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astHStackViewInstructionDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astViewInstructionList () ;
  }else{
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding GGS_astHStackViewInstructionDeclaration::readProperty_mOptionalHiddenBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_optionalHiddenBinding () ;
  }else{
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    return p->mProperty_mOptionalHiddenBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astHStackViewInstructionDeclaration::readProperty_mAstNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    return p->mProperty_mAstNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astHStackViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astHStackViewInstructionDeclaration::cPtr_astHStackViewInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mOptionalHiddenBinding (),
mProperty_mAstNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astHStackViewInstructionDeclaration::cPtr_astHStackViewInstructionDeclaration (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                    const GGS_astViewInstructionList & in_mInstructionList,
                                                                                    const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                                                    const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mOptionalHiddenBinding (),
mProperty_mAstNewStackViewDeclarationList () {
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mOptionalHiddenBinding = in_mOptionalHiddenBinding ;
  mProperty_mAstNewStackViewDeclarationList = in_mAstNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astHStackViewInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;
}

void cPtr_astHStackViewInstructionDeclaration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@astHStackViewInstructionDeclaration:") ;
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

AbstractPtrClass * cPtr_astHStackViewInstructionDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astHStackViewInstructionDeclaration (mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mOptionalHiddenBinding, mProperty_mAstNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astHStackViewInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mOptionalHiddenBinding.printNonNullClassInstanceProperties ("mOptionalHiddenBinding") ;
    mProperty_mAstNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mAstNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astHStackViewInstructionDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ("astHStackViewInstructionDeclaration",
                                                                                        & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astHStackViewInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astHStackViewInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astHStackViewInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration GGS_astHStackViewInstructionDeclaration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_astHStackViewInstructionDeclaration result ;
  const GGS_astHStackViewInstructionDeclaration * p = (const GGS_astHStackViewInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astHStackViewInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astHStackViewInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astHStackViewInstructionDeclaration_2E_weak::objectCompare (const GGS_astHStackViewInstructionDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_astHStackViewInstructionDeclaration_2E_weak::GGS_astHStackViewInstructionDeclaration_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration_2E_weak & GGS_astHStackViewInstructionDeclaration_2E_weak::operator = (const GGS_astHStackViewInstructionDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration_2E_weak::GGS_astHStackViewInstructionDeclaration_2E_weak (const GGS_astHStackViewInstructionDeclaration & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration_2E_weak GGS_astHStackViewInstructionDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astHStackViewInstructionDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration GGS_astHStackViewInstructionDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astHStackViewInstructionDeclaration result ;
  if (isValid ()) {
    const cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astHStackViewInstructionDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration GGS_astHStackViewInstructionDeclaration_2E_weak::bang_astHStackViewInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astHStackViewInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astHStackViewInstructionDeclaration) ;
      result = GGS_astHStackViewInstructionDeclaration ((cPtr_astHStackViewInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astHStackViewInstructionDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration_2E_weak ("astHStackViewInstructionDeclaration.weak",
                                                                                                & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astHStackViewInstructionDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astHStackViewInstructionDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astHStackViewInstructionDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration_2E_weak GGS_astHStackViewInstructionDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_astHStackViewInstructionDeclaration_2E_weak result ;
  const GGS_astHStackViewInstructionDeclaration_2E_weak * p = (const GGS_astHStackViewInstructionDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astHStackViewInstructionDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astHStackViewInstructionDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astVStackViewInstructionDeclaration_2E_weak::objectCompare (const GGS_astVStackViewInstructionDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_astVStackViewInstructionDeclaration_2E_weak::GGS_astVStackViewInstructionDeclaration_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration_2E_weak & GGS_astVStackViewInstructionDeclaration_2E_weak::operator = (const GGS_astVStackViewInstructionDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration_2E_weak::GGS_astVStackViewInstructionDeclaration_2E_weak (const GGS_astVStackViewInstructionDeclaration & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration_2E_weak GGS_astVStackViewInstructionDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astVStackViewInstructionDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration GGS_astVStackViewInstructionDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astVStackViewInstructionDeclaration result ;
  if (isValid ()) {
    const cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astVStackViewInstructionDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration GGS_astVStackViewInstructionDeclaration_2E_weak::bang_astVStackViewInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astVStackViewInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astVStackViewInstructionDeclaration) ;
      result = GGS_astVStackViewInstructionDeclaration ((cPtr_astVStackViewInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astVStackViewInstructionDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration_2E_weak ("astVStackViewInstructionDeclaration.weak",
                                                                                                & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astVStackViewInstructionDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astVStackViewInstructionDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astVStackViewInstructionDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration_2E_weak GGS_astVStackViewInstructionDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_astVStackViewInstructionDeclaration_2E_weak result ;
  const GGS_astVStackViewInstructionDeclaration_2E_weak * p = (const GGS_astVStackViewInstructionDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astVStackViewInstructionDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astVStackViewInstructionDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astSpaceViewInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astSpaceViewInstruction::objectCompare (const GGS_astSpaceViewInstruction & inOperand) const {
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

GGS_astSpaceViewInstruction::GGS_astSpaceViewInstruction (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astSpaceViewInstruction GGS_astSpaceViewInstruction::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_astSpaceViewInstruction * object = nullptr ;
  macroMyNew (object, cPtr_astSpaceViewInstruction (inCompiler COMMA_THERE)) ;
  object->astSpaceViewInstruction_init (inCompiler) ;
  const GGS_astSpaceViewInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astSpaceViewInstruction::
astSpaceViewInstruction_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction::GGS_astSpaceViewInstruction (const cPtr_astSpaceViewInstruction * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astSpaceViewInstruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @astSpaceViewInstruction class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_astSpaceViewInstruction::cPtr_astSpaceViewInstruction (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astSpaceViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSpaceViewInstruction ;
}

void cPtr_astSpaceViewInstruction::description (String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@astSpaceViewInstruction]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_astSpaceViewInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astSpaceViewInstruction (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astSpaceViewInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astSpaceViewInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction ("astSpaceViewInstruction",
                                                                            & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astSpaceViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSpaceViewInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astSpaceViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astSpaceViewInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction GGS_astSpaceViewInstruction::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_astSpaceViewInstruction result ;
  const GGS_astSpaceViewInstruction * p = (const GGS_astSpaceViewInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astSpaceViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astSpaceViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astSpaceViewInstruction_2E_weak::objectCompare (const GGS_astSpaceViewInstruction_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_astSpaceViewInstruction_2E_weak::GGS_astSpaceViewInstruction_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction_2E_weak & GGS_astSpaceViewInstruction_2E_weak::operator = (const GGS_astSpaceViewInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction_2E_weak::GGS_astSpaceViewInstruction_2E_weak (const GGS_astSpaceViewInstruction & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction_2E_weak GGS_astSpaceViewInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astSpaceViewInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction GGS_astSpaceViewInstruction_2E_weak::unwrappedValue (void) const {
  GGS_astSpaceViewInstruction result ;
  if (isValid ()) {
    const cPtr_astSpaceViewInstruction * p = (cPtr_astSpaceViewInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_astSpaceViewInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction GGS_astSpaceViewInstruction_2E_weak::bang_astSpaceViewInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astSpaceViewInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astSpaceViewInstruction) ;
      result = GGS_astSpaceViewInstruction ((cPtr_astSpaceViewInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astSpaceViewInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction_2E_weak ("astSpaceViewInstruction.weak",
                                                                                    & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astSpaceViewInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSpaceViewInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astSpaceViewInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astSpaceViewInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction_2E_weak GGS_astSpaceViewInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_astSpaceViewInstruction_2E_weak result ;
  const GGS_astSpaceViewInstruction_2E_weak * p = (const GGS_astSpaceViewInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astSpaceViewInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astSpaceViewInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astLocalViewInstruction_2E_weak::objectCompare (const GGS_astLocalViewInstruction_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_astLocalViewInstruction_2E_weak::GGS_astLocalViewInstruction_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction_2E_weak & GGS_astLocalViewInstruction_2E_weak::operator = (const GGS_astLocalViewInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction_2E_weak::GGS_astLocalViewInstruction_2E_weak (const GGS_astLocalViewInstruction & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction_2E_weak GGS_astLocalViewInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astLocalViewInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction GGS_astLocalViewInstruction_2E_weak::unwrappedValue (void) const {
  GGS_astLocalViewInstruction result ;
  if (isValid ()) {
    const cPtr_astLocalViewInstruction * p = (cPtr_astLocalViewInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_astLocalViewInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction GGS_astLocalViewInstruction_2E_weak::bang_astLocalViewInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astLocalViewInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astLocalViewInstruction) ;
      result = GGS_astLocalViewInstruction ((cPtr_astLocalViewInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astLocalViewInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astLocalViewInstruction_2E_weak ("astLocalViewInstruction.weak",
                                                                                    & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astLocalViewInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astLocalViewInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astLocalViewInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction_2E_weak GGS_astLocalViewInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_astLocalViewInstruction_2E_weak result ;
  const GGS_astLocalViewInstruction_2E_weak * p = (const GGS_astLocalViewInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astLocalViewInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astLocalViewInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

ComparisonResult GGS_astComputedViewInstruction_2E_weak::objectCompare (const GGS_astComputedViewInstruction_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_astComputedViewInstruction_2E_weak::GGS_astComputedViewInstruction_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction_2E_weak & GGS_astComputedViewInstruction_2E_weak::operator = (const GGS_astComputedViewInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction_2E_weak::GGS_astComputedViewInstruction_2E_weak (const GGS_astComputedViewInstruction & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction_2E_weak GGS_astComputedViewInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astComputedViewInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction GGS_astComputedViewInstruction_2E_weak::unwrappedValue (void) const {
  GGS_astComputedViewInstruction result ;
  if (isValid ()) {
    const cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_astComputedViewInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction GGS_astComputedViewInstruction_2E_weak::bang_astComputedViewInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astComputedViewInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astComputedViewInstruction) ;
      result = GGS_astComputedViewInstruction ((cPtr_astComputedViewInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astComputedViewInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedViewInstruction_2E_weak ("astComputedViewInstruction.weak",
                                                                                       & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astComputedViewInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astComputedViewInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astComputedViewInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction_2E_weak GGS_astComputedViewInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astComputedViewInstruction_2E_weak result ;
  const GGS_astComputedViewInstruction_2E_weak * p = (const GGS_astComputedViewInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astComputedViewInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedViewInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum astAutoLayoutViewInstructionParameterValue
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue::GGS_astAutoLayoutViewInstructionParameterValue (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (const GGS_string & inAssociatedValue0
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  result.mEnum = Enumeration::enum_string ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_astAutoLayoutViewInstructionParameterValue_2E_string (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterValue::class_func_menuItem (const GGS_string & inAssociatedValue0,
                                                                                                                    const GGS_runActionDescriptor & inAssociatedValue1,
                                                                                                                    const GGS_multipleBindingDescriptor & inAssociatedValue2
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  result.mEnum = Enumeration::enum_menuItem ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterValue::class_func_enumFunc (const GGS_lstring & inAssociatedValue0,
                                                                                                                    const GGS_lstring & inAssociatedValue1
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  result.mEnum = Enumeration::enum_enumFunc ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterValue::class_func_viewFunc (const GGS_astAbstractViewInstructionDeclaration & inAssociatedValue0
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  result.mEnum = Enumeration::enum_viewFunc ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterValue::class_func_entity (const GGS_lstring & inAssociatedValue0
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  result.mEnum = Enumeration::enum_entity ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::method_extractString (GGS_string & outAssociatedValue_value,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_string) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue.string invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_astAutoLayoutViewInstructionParameterValue_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::method_extractMenuItem (GGS_string & outAssociatedValue_title,
                                                                             GGS_runActionDescriptor & outAssociatedValue_run,
                                                                             GGS_multipleBindingDescriptor & outAssociatedValue_enabled,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_menuItem) {
    outAssociatedValue_title.drop () ;
    outAssociatedValue_run.drop () ;
    outAssociatedValue_enabled.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue.menuItem invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_title = ptr->mProperty_title ;
    outAssociatedValue_run = ptr->mProperty_run ;
    outAssociatedValue_enabled = ptr->mProperty_enabled ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::method_extractEnumFunc (GGS_lstring & outAssociatedValue_enumTypeName,
                                                                             GGS_lstring & outAssociatedValue_enumFuncName,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_enumFunc) {
    outAssociatedValue_enumTypeName.drop () ;
    outAssociatedValue_enumFuncName.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue.enumFunc invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_enumTypeName = ptr->mProperty_enumTypeName ;
    outAssociatedValue_enumFuncName = ptr->mProperty_enumFuncName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::method_extractViewFunc (GGS_astAbstractViewInstructionDeclaration & outAssociatedValue_instruction,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_viewFunc) {
    outAssociatedValue_instruction.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue.viewFunc invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_instruction = ptr->mProperty_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::method_extractEntity (GGS_lstring & outAssociatedValue_entityName,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_entity) {
    outAssociatedValue_entityName.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue.entity invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_astAutoLayoutViewInstructionParameterValue_2E_entity *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_entityName = ptr->mProperty_entityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ GGS_astAutoLayoutViewInstructionParameterValue::getter_getString (UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ result ;
  if (mEnum == Enumeration::enum_string) {
    const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_astAutoLayoutViewInstructionParameterValue_2E_string (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::getAssociatedValuesFor_string (GGS_string & out_value) const {
  const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ GGS_astAutoLayoutViewInstructionParameterValue::getter_getMenuItem (UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ result ;
  if (mEnum == Enumeration::enum_menuItem) {
    const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::getAssociatedValuesFor_menuItem (GGS_string & out_title,
                                                                                      GGS_runActionDescriptor & out_run,
                                                                                      GGS_multipleBindingDescriptor & out_enabled) const {
  const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem *) mAssociatedValues.associatedValuesPointer () ;
  out_title = ptr->mProperty_title ;
  out_run = ptr->mProperty_run ;
  out_enabled = ptr->mProperty_enabled ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ GGS_astAutoLayoutViewInstructionParameterValue::getter_getEnumFunc (UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ result ;
  if (mEnum == Enumeration::enum_enumFunc) {
    const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::getAssociatedValuesFor_enumFunc (GGS_lstring & out_enumTypeName,
                                                                                      GGS_lstring & out_enumFuncName) const {
  const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc *) mAssociatedValues.associatedValuesPointer () ;
  out_enumTypeName = ptr->mProperty_enumTypeName ;
  out_enumFuncName = ptr->mProperty_enumFuncName ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ GGS_astAutoLayoutViewInstructionParameterValue::getter_getViewFunc (UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ result ;
  if (mEnum == Enumeration::enum_viewFunc) {
    const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::getAssociatedValuesFor_viewFunc (GGS_astAbstractViewInstructionDeclaration & out_instruction) const {
  const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc *) mAssociatedValues.associatedValuesPointer () ;
  out_instruction = ptr->mProperty_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ GGS_astAutoLayoutViewInstructionParameterValue::getter_getEntity (UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ result ;
  if (mEnum == Enumeration::enum_entity) {
    const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::getAssociatedValuesFor_entity (GGS_lstring & out_entityName) const {
  const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity *) mAssociatedValues.associatedValuesPointer () ;
  out_entityName = ptr->mProperty_entityName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_astAutoLayoutViewInstructionParameterValue [6] = {
  "(not built)",
  "string",
  "menuItem",
  "enumFunc",
  "viewFunc",
  "entity"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewInstructionParameterValue::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewInstructionParameterValue::getter_isMenuItem (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_menuItem == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewInstructionParameterValue::getter_isEnumFunc (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_enumFunc == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewInstructionParameterValue::getter_isViewFunc (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_viewFunc == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewInstructionParameterValue::getter_isEntity (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entity == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<enum @astAutoLayoutViewInstructionParameterValue: ") ;
  ioString.appendCString (gEnumNameArrayFor_astAutoLayoutViewInstructionParameterValue [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue ("astAutoLayoutViewInstructionParameterValue",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterValue::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  const GGS_astAutoLayoutViewInstructionParameterValue * p = (const GGS_astAutoLayoutViewInstructionParameterValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @autoLayoutViewDeclarationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap::GGS_autoLayoutViewDeclarationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap::~ GGS_autoLayoutViewDeclarationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap::GGS_autoLayoutViewDeclarationMap (const GGS_autoLayoutViewDeclarationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap & GGS_autoLayoutViewDeclarationMap::operator = (const GGS_autoLayoutViewDeclarationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap GGS_autoLayoutViewDeclarationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewDeclarationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewDeclarationMap::getter_hasKey (const GGS_string & inKey
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewDeclarationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                 const GGS_uint & inLevel
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewDeclarationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewDeclarationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_autoLayoutViewDeclarationMap::getter_locationForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_autoLayoutViewDeclarationMap::getter_keyList (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewDeclarationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewDeclarationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap::performInsert (const GGS_autoLayoutViewDeclarationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutViewDeclarationMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>
GGS_autoLayoutViewDeclarationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_autoLayoutViewDeclarationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>>
GGS_autoLayoutViewDeclarationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_autoLayoutViewDeclarationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element_3F_ GGS_autoLayoutViewDeclarationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewDeclarationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_autoLayoutViewDeclarationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_autoLayoutViewDeclarationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap GGS_autoLayoutViewDeclarationMap::class_func_mapWithMapToOverride (const GGS_autoLayoutViewDeclarationMap & inMapToOverride
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewDeclarationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewDeclarationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap GGS_autoLayoutViewDeclarationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewDeclarationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap::setter_insertKey (GGS_lstring inLKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewDeclarationMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' view is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap::method_searchKey (GGS_lstring inLKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' view" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
  }else{
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_autoLayoutViewDeclarationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>> & inArray,
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

void GGS_autoLayoutViewDeclarationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>> array = sortedInfoArray () ;
    GGS_autoLayoutViewDeclarationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewDeclarationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_autoLayoutViewDeclarationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @autoLayoutViewDeclarationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewDeclarationMap::DownEnumerator_autoLayoutViewDeclarationMap (const GGS_autoLayoutViewDeclarationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element DownEnumerator_autoLayoutViewDeclarationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutViewDeclarationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @autoLayoutViewDeclarationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewDeclarationMap::UpEnumerator_autoLayoutViewDeclarationMap (const GGS_autoLayoutViewDeclarationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element UpEnumerator_autoLayoutViewDeclarationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutViewDeclarationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewDeclarationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap ("autoLayoutViewDeclarationMap",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewDeclarationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewDeclarationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewDeclarationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap GGS_autoLayoutViewDeclarationMap::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewDeclarationMap result ;
  const GGS_autoLayoutViewDeclarationMap * p = (const GGS_autoLayoutViewDeclarationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewDeclarationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewDeclarationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractViewInstructionGeneration::objectCompare (const GGS_abstractViewInstructionGeneration & inOperand) const {
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

GGS_abstractViewInstructionGeneration::GGS_abstractViewInstructionGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractViewInstructionGeneration::
abstractViewInstructionGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration::GGS_abstractViewInstructionGeneration (const cPtr_abstractViewInstructionGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractViewInstructionGeneration::cPtr_abstractViewInstructionGeneration (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractViewInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewInstructionGeneration ("abstractViewInstructionGeneration",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration GGS_abstractViewInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractViewInstructionGeneration result ;
  const GGS_abstractViewInstructionGeneration * p = (const GGS_abstractViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewDeclaration checkView'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkView (cPtr_astAbstractViewDeclaration * inObject,
                                    const GGS_string constin_inViewName,
                                    const GGS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                    const GGS_bool constin_inPreferences,
                                    const GGS_propertyMap constin_inRootObservablePropertyMap,
                                    const GGS_propertyMap constin_inPreferencesPropertyMap,
                                    const GGS_semanticContext constin_inSemanticContext,
                                    const GGS_propertyMap constin_inObservablePropertyMap,
                                    const GGS_actionMap constin_inActionMap,
                                    const GGS_string constin_inReceiverSwiftTypeName,
                                    const GGS_classMap constin_inClassMap,
                                    GGS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                    GGS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                    GGS_autoLayoutOutletMap & io_ioOutletMap,
                                    GGS_abstractViewGeneration & out_outGeneration,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outGeneration.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_astAbstractViewDeclaration) ;
    inObject->method_checkView (constin_inViewName, constin_inViewDeclarationMap, constin_inPreferences, constin_inRootObservablePropertyMap, constin_inPreferencesPropertyMap, constin_inSemanticContext, constin_inObservablePropertyMap, constin_inActionMap, constin_inReceiverSwiftTypeName, constin_inClassMap, io_ioImplicitViewFunctionGenerationList, io_ioConfiguratorMap, io_ioOutletMap, out_outGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@astAutoLayoutViewFunctionCallList checkViewFunctionCallList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkViewFunctionCallList (const GGS_astAutoLayoutViewFunctionCallList inObject,
                                                const GGS_astAutoLayoutViewFunctionMap constinArgument_inFunctionMap,
                                                const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                const GGS_bool constinArgument_inPreferences,
                                                const GGS_actionMap constinArgument_inPreferencesActionMap,
                                                const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                const GGS_actionMap constinArgument_inActionMap,
                                                const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                const GGS_classMap constinArgument_inClassMap,
                                                GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                GGS_autoLayoutViewInstructionGenerationFuncCallList & outArgument_outFuncCallList,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFuncCallList.drop () ; // Release 'out' argument
  GGS_autoLayoutViewInstructionGenerationFuncCallList temp_0 = GGS_autoLayoutViewInstructionGenerationFuncCallList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 653)) ;
  outArgument_outFuncCallList = temp_0 ;
  const GGS_astAutoLayoutViewFunctionCallList temp_1 = inObject ;
  UpEnumerator_astAutoLayoutViewFunctionCallList enumerator_26042 (temp_1) ;
  while (enumerator_26042.hasCurrentObject ()) {
    GGS_string var_mangleName_26082 = enumerator_26042.current_mFunctionName (HERE).readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 655)) ;
    UpEnumerator_astAutoLayoutViewInstructionParameterList enumerator_26146 (enumerator_26042.current_mParameterList (HERE)) ;
    while (enumerator_26146.hasCurrentObject ()) {
      var_mangleName_26082.plusAssignOperation(enumerator_26146.current_mParameterName (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 657)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 657)) ;
      enumerator_26146.gotoNextObject () ;
    }
    var_mangleName_26082.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 659)) ;
    GGS_autoLayoutClassParameterList var_formalParameterList_26324 ;
    constinArgument_inFunctionMap.method_searchKey (GGS_lstring::init_21__21_ (var_mangleName_26082, enumerator_26042.current_mFunctionName (HERE).readProperty_location (), inCompiler COMMA_HERE), var_formalParameterList_26324, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 660)) ;
    GGS_autoLayoutViewInstructionGenerationParameterList temp_2 = GGS_autoLayoutViewInstructionGenerationParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 661)) ;
    GGS_autoLayoutViewInstructionGenerationParameterList var_parameterList_26403 = temp_2 ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, var_formalParameterList_26324.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 662)).objectCompare (enumerator_26042.current_mParameterList (HERE).getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 662)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_26042.current_mFunctionName (HERE).readProperty_location (), var_formalParameterList_26324.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 664)).getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 664)).add_operation (GGS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 664)).add_operation (enumerator_26042.current_mParameterList (HERE).getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 664)).getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 664)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 664)).add_operation (GGS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 664)), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 663)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      UpEnumerator_astAutoLayoutViewInstructionParameterList enumerator_26669 (enumerator_26042.current_mParameterList (HERE)) ;
      UpEnumerator_autoLayoutClassParameterList enumerator_26713 (var_formalParameterList_26324) ;
      while (enumerator_26669.hasCurrentObject () && enumerator_26713.hasCurrentObject ()) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_26766 = enumerator_26713.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.galgas4", 668)).unwrappedValue () ;
          if (!enumerator_26713.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.galgas4", 668)).isValuated ()) {
            test_5 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_5) {
            const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_26811 = enumerator_26669.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.galgas4", 668)).unwrappedValue () ;
            if (!enumerator_26669.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.galgas4", 668)).isValuated ()) {
              test_5 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_5) {
              GGS_classKind var_typeKind_26908 ;
              GGS_propertyMap joker_26918_3 ; // Joker input parameter
              GGS_actionMap joker_26918_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_26918_1 ; // Joker input parameter
              constinArgument_inClassMap.method_searchKey (var_formalTypeEnum_26766.readProperty_name (), var_typeKind_26908, joker_26918_3, joker_26918_2, joker_26918_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 669)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                const GGS_classKind_2E_atomic var_atomicTypeKind_26940 = var_typeKind_26908.getter_getAtomic (SOURCE_FILE ("auto-layout-view.galgas4", 670)).unwrappedValue () ;
                if (!var_typeKind_26908.getter_getAtomic (SOURCE_FILE ("auto-layout-view.galgas4", 670)).isValuated ()) {
                  test_6 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_6) {
                  const GGS_typeKind_2E_enumType var_atomicEnumType_26981 = var_atomicTypeKind_26940.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.galgas4", 670)).unwrappedValue () ;
                  if (!var_atomicTypeKind_26940.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.galgas4", 670)).isValuated ()) {
                    test_6 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_6) {
                    GGS_uint joker_27106 ; // Joker input parameter
                    var_atomicEnumType_26981.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_26811.readProperty_name (), joker_27106, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 671)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GenericArray <FixItDescription> fixItArray7 ;
                inCompiler->emitSemanticError (var_formalTypeEnum_26766.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 673)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_5) {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_26669.current_mParameterType (HERE).objectCompare (enumerator_26713.current_mParameterType (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_26669.current_mParameterName (HERE).readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_26713.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 676)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 676)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 676)).add_operation (extensionGetter_string (enumerator_26669.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 676)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 676)), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 676)) ;
            }
          }
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::notEqual, enumerator_26669.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_26713.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_26669.current_mParameterName (HERE).readProperty_location (), GGS_string ("the parameter name should be '").add_operation (enumerator_26713.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 679)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 679)), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 679)) ;
          }
        }
        switch (enumerator_26669.current_mParameter (HERE).enumValue ()) {
        case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::invalid:
          break ;
        case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_viewFunc:
          {
            GGS_astAbstractViewInstructionDeclaration extractedValue_27550_instruction_0 ;
            enumerator_26669.current_mParameter (HERE).getAssociatedValuesFor_viewFunc (extractedValue_27550_instruction_0) ;
            GGS_abstractViewInstructionGeneration var_viewInstruction_28073 ;
            callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_27550_instruction_0.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_28073, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 683)) ;
            GGS_string var_viewInstructionString_28115 = callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) var_viewInstruction_28073.ptr (), constinArgument_inPreferences, enumerator_26669.current_mParameterName (HERE).readProperty_string (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 698)) ;
            {
            var_parameterList_26403.setter_append (enumerator_26669.current_mParameterName (HERE).readProperty_string (), GGS_string ("{ () -> NSView in ").add_operation (var_viewInstructionString_28115, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 703)).add_operation (GGS_string (" ; return "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 703)).add_operation (enumerator_26669.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 703)).add_operation (GGS_string (" } ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 703)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 703)) ;
            }
          }
          break ;
        case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_string:
          {
            GGS_string extractedValue_28415_stringValue_0 ;
            enumerator_26669.current_mParameter (HERE).getAssociatedValuesFor_string (extractedValue_28415_stringValue_0) ;
            {
            var_parameterList_26403.setter_append (enumerator_26669.current_mParameterName (HERE).readProperty_string (), extractedValue_28415_stringValue_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 705)) ;
            }
          }
          break ;
        case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_entity:
          {
            GGS_lstring extractedValue_28504_entityName_0 ;
            enumerator_26669.current_mParameter (HERE).getAssociatedValuesFor_entity (extractedValue_28504_entityName_0) ;
            GGS_classKind var_classKind_28567 ;
            GGS_propertyMap joker_28578_3 ; // Joker input parameter
            GGS_actionMap joker_28578_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_28578_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (extractedValue_28504_entityName_0, var_classKind_28567, joker_28578_3, joker_28578_2, joker_28578_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 707)) ;
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = var_classKind_28567.getter_isEntity (SOURCE_FILE ("auto-layout-view.galgas4", 708)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 708)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                GenericArray <FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (extractedValue_28504_entityName_0.readProperty_location (), GGS_string ("an entity is required here"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 709)) ;
              }
            }
            {
            var_parameterList_26403.setter_append (enumerator_26669.current_mParameterName (HERE).readProperty_string (), extractedValue_28504_entityName_0.readProperty_string ().add_operation (GGS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 711)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 711)) ;
            }
          }
          break ;
        case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_menuItem:
          {
            GGS_string extractedValue_28791_title_0 ;
            GGS_runActionDescriptor extractedValue_28798_run_1 ;
            GGS_multipleBindingDescriptor extractedValue_28803_enabledBinding_2 ;
            enumerator_26669.current_mParameter (HERE).getAssociatedValuesFor_menuItem (extractedValue_28791_title_0, extractedValue_28798_run_1, extractedValue_28803_enabledBinding_2) ;
            GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_29119 ;
            {
            routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (extractedValue_28798_run_1, GGS_bool (true), constinArgument_inPreferences, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 717)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inPreferencesActionMap, var_runBindingGeneration_29119, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 713)) ;
            }
            GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_29475 ;
            {
            routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (extractedValue_28803_enabledBinding_2, GGS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_29475, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 724)) ;
            }
            GGS_string var_s_29526 = GGS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_28791_title_0.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.galgas4", 734)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 734)) ;
            switch (var_runBindingGeneration_29119.enumValue ()) {
            case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
              break ;
            case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
              {
                var_s_29526.plusAssignOperation(GGS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 737)) ;
              }
              break ;
            case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
              {
                GGS_string extractedValue_29726_targetName_0 ;
                GGS_string extractedValue_29738_actionName_1 ;
                GGS_string extractedValue_29750_runTargetName_2 ;
                var_runBindingGeneration_29119.getAssociatedValuesFor_run (extractedValue_29726_targetName_0, extractedValue_29738_actionName_1, extractedValue_29750_runTargetName_2) ;
                var_s_29526.plusAssignOperation(GGS_string (", target: ").add_operation (extractedValue_29726_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 739)).add_operation (GGS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 739)).add_operation (extractedValue_29750_runTargetName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 739)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 739)).add_operation (extractedValue_29738_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 739)).add_operation (GGS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 739)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 739)) ;
              }
              break ;
            }
            switch (var_enabledBindingGeneration_29475.enumValue ()) {
            case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
              break ;
            case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
              {
                var_s_29526.plusAssignOperation(GGS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 743)) ;
              }
              break ;
            case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
              {
                GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_30035_binding_0 ;
                var_enabledBindingGeneration_29475.getAssociatedValuesFor_enabled (extractedValue_30035_binding_0) ;
                var_s_29526.plusAssignOperation(GGS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_30035_binding_0.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 745)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 745)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 745)) ;
              }
              break ;
            }
            var_s_29526.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 747)) ;
            {
            var_parameterList_26403.setter_append (enumerator_26669.current_mParameterName (HERE).readProperty_string (), var_s_29526, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 748)) ;
            }
          }
          break ;
        case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_enumFunc:
          {
            GGS_lstring extractedValue_30209_enumTypeName_0 ;
            GGS_lstring extractedValue_30223_funcName_1 ;
            enumerator_26669.current_mParameter (HERE).getAssociatedValuesFor_enumFunc (extractedValue_30209_enumTypeName_0, extractedValue_30223_funcName_1) ;
            GGS_classKind var_type_30303 ;
            GGS_propertyMap joker_30309_3 ; // Joker input parameter
            GGS_actionMap joker_30309_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_30309_1 ; // Joker input parameter
            constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_30209_enumTypeName_0, var_type_30303, joker_30309_3, joker_30309_2, joker_30309_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 750)) ;
            GalgasBool test_14 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_14) {
              test_14 = var_type_30303.getter_isAtomic (SOURCE_FILE ("auto-layout-view.galgas4", 751)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 751)).boolEnum () ;
              if (GalgasBool::boolTrue == test_14) {
                GenericArray <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (extractedValue_30209_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 752)) ;
              }
            }
            if (GalgasBool::boolFalse == test_14) {
              GGS_typeKind var_typeKind_30487 ;
              var_type_30303.method_extractAtomic (var_typeKind_30487, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 754)) ;
              GalgasBool test_16 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_16) {
                test_16 = var_typeKind_30487.getter_isEnumType (SOURCE_FILE ("auto-layout-view.galgas4", 755)).boolEnum () ;
                if (GalgasBool::boolTrue == test_16) {
                  GGS_enumFuncMap var_funcMap_30595 ;
                  GGS_string joker_30577_2 ; // Joker input parameter
                  GGS_enumConstantMap joker_30577_1 ; // Joker input parameter
                  var_typeKind_30487.method_extractEnumType (joker_30577_2, joker_30577_1, var_funcMap_30595, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 756)) ;
                  GGS_enumFunAssociationSortedList joker_30647 ; // Joker input parameter
                  var_funcMap_30595.method_searchKey (extractedValue_30223_funcName_1, joker_30647, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 757)) ;
                }
              }
              if (GalgasBool::boolFalse == test_16) {
                GenericArray <FixItDescription> fixItArray17 ;
                inCompiler->emitSemanticError (extractedValue_30209_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 759)) ;
              }
            }
            {
            var_parameterList_26403.setter_append (enumerator_26669.current_mParameterName (HERE).readProperty_string (), extractedValue_30209_enumTypeName_0.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 762)).add_operation (extractedValue_30223_funcName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 762)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 762)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 762)) ;
            }
          }
          break ;
        }
        enumerator_26669.gotoNextObject () ;
        enumerator_26713.gotoNextObject () ;
      }
    }
    {
    outArgument_outFuncCallList.setter_append (enumerator_26042.current_mFunctionName (HERE).readProperty_string (), var_parameterList_26403, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 766)) ;
    }
    enumerator_26042.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateViewCode (cPtr_astAbstractViewInstructionDeclaration * inObject,
                                           const GGS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                           const GGS_bool constin_inPreferences,
                                           const GGS_propertyMap constin_inRootObservablePropertyMap,
                                           const GGS_propertyMap constin_inPreferencesPropertyMap,
                                           const GGS_semanticContext constin_inSemanticContext,
                                           const GGS_propertyMap constin_inObservablePropertyMap,
                                           const GGS_actionMap constin_inActionMap,
                                           const GGS_string constin_inReceiverSwiftTypeName,
                                           const GGS_classMap constin_inClassMap,
                                           GGS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                           GGS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                           GGS_autoLayoutOutletMap & io_ioOutletMap,
                                           GGS_abstractViewInstructionGeneration & out_outInstruction,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outInstruction.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_astAbstractViewInstructionDeclaration) ;
    inObject->method_generateViewCode (constin_inViewDeclarationMap, constin_inPreferences, constin_inRootObservablePropertyMap, constin_inPreferencesPropertyMap, constin_inSemanticContext, constin_inObservablePropertyMap, constin_inActionMap, constin_inReceiverSwiftTypeName, constin_inClassMap, io_ioImplicitViewFunctionGenerationList, io_ioConfiguratorMap, io_ioOutletMap, out_outInstruction, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @abstractViewGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractViewGeneration::objectCompare (const GGS_abstractViewGeneration & inOperand) const {
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

GGS_abstractViewGeneration::GGS_abstractViewGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractViewGeneration::
abstractViewGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration::GGS_abstractViewGeneration (const cPtr_abstractViewGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractViewGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractViewGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractViewGeneration::cPtr_abstractViewGeneration (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractViewGeneration::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractViewGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewGeneration ("abstractViewGeneration",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractViewGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractViewGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration GGS_abstractViewGeneration::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractViewGeneration result ;
  const GGS_abstractViewGeneration * p = (const GGS_abstractViewGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractViewGeneration_2E_weak::objectCompare (const GGS_abstractViewGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_abstractViewGeneration_2E_weak::GGS_abstractViewGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration_2E_weak & GGS_abstractViewGeneration_2E_weak::operator = (const GGS_abstractViewGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration_2E_weak::GGS_abstractViewGeneration_2E_weak (const GGS_abstractViewGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration_2E_weak GGS_abstractViewGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractViewGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration GGS_abstractViewGeneration_2E_weak::unwrappedValue (void) const {
  GGS_abstractViewGeneration result ;
  if (isValid ()) {
    const cPtr_abstractViewGeneration * p = (cPtr_abstractViewGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractViewGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration GGS_abstractViewGeneration_2E_weak::bang_abstractViewGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractViewGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractViewGeneration) ;
      result = GGS_abstractViewGeneration ((cPtr_abstractViewGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractViewGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewGeneration_2E_weak ("abstractViewGeneration.weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractViewGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractViewGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractViewGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractViewGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration_2E_weak GGS_abstractViewGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractViewGeneration_2E_weak result ;
  const GGS_abstractViewGeneration_2E_weak * p = (const GGS_abstractViewGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractViewGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractViewGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutViewInstructionGenerationFuncCallList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList : public CollectionElementPtr {
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList (const GGS_string & in_mFunctionName,
                                                                                const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList::CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList (const GGS_string & in_mFunctionName,
                                                                                                                                            const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFunctionName, in_mParameters) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList::CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFunctionName, inElement.mProperty_mParameters) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList (mObject.mProperty_mFunctionName, mObject.mProperty_mParameters COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutViewInstructionGenerationFuncCallList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList::GGS_autoLayoutViewInstructionGenerationFuncCallList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList::GGS_autoLayoutViewInstructionGenerationFuncCallList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList * p = (CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList) ;
    const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element element (p->mObject.mProperty_mFunctionName, p->mObject.mProperty_mParameters) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                     const GGS_string & in_mFunctionName,
                                                                                     const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_autoLayoutViewInstructionGenerationFuncCallList (in_mFunctionName, in_mParameters COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::description (String & ioString,
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
      ioString.appendString ("mFunctionName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFunctionName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameters:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameters.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                                   const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::addAssignOperation (const GGS_string & inOperand0,
                                                                              const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_append (const GGS_string inOperand0,
                                                                         const GGS_autoLayoutViewInstructionGenerationParameterList inOperand1,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                                const GGS_autoLayoutViewInstructionGenerationParameterList inOperand1,
                                                                                const GGS_uint inInsertionIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                                GGS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                                const GGS_uint inRemoveIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFunctionName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mParameters ;
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_popFirst (GGS_string & outOperand0,
                                                                           GGS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFunctionName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameters ;
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_popLast (GGS_string & outOperand0,
                                                                          GGS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFunctionName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameters ;
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::method_first (GGS_string & outOperand0,
                                                                        GGS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFunctionName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameters ;
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::method_last (GGS_string & outOperand0,
                                                                       GGS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFunctionName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameters ;
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

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::add_operation (const GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
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

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::subList (const int32_t inStart,
                                                                                                                  const int32_t inLength,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
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

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationFuncCallList inList,
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_setMFunctionNameAtIndex (GGS_string inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionName = inOperand ;
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
  
GGS_string GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_mFunctionNameAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionName ;
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_setMParametersAtIndex (GGS_autoLayoutViewInstructionGenerationParameterList inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameters = inOperand ;
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
  
GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_mParametersAtIndex (const GGS_uint & inIndex,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameters ;
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
// Down Enumerator for @autoLayoutViewInstructionGenerationFuncCallList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList::DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const GGS_autoLayoutViewInstructionGenerationFuncCallList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current_mFunctionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current_mParameters (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameters ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutViewInstructionGenerationFuncCallList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList::UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const GGS_autoLayoutViewInstructionGenerationFuncCallList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current_mFunctionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current_mParameters (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameters ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewInstructionGenerationFuncCallList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList ("autoLayoutViewInstructionGenerationFuncCallList",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationFuncCallList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewInstructionGenerationFuncCallList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewInstructionGenerationFuncCallList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
  const GGS_autoLayoutViewInstructionGenerationFuncCallList * p = (const GGS_autoLayoutViewInstructionGenerationFuncCallList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewInstructionGenerationFuncCallList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationFuncCallList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutViewInstructionGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_autoLayoutViewInstructionGenerationList : public CollectionElementPtr {
  public: GGS_autoLayoutViewInstructionGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_autoLayoutViewInstructionGenerationList (const GGS_abstractViewInstructionGeneration & in_mInstruction
                                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_autoLayoutViewInstructionGenerationList (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutViewInstructionGenerationList::CollectionElementPtr_autoLayoutViewInstructionGenerationList (const GGS_abstractViewInstructionGeneration & in_mInstruction
                                                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutViewInstructionGenerationList::CollectionElementPtr_autoLayoutViewInstructionGenerationList (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_autoLayoutViewInstructionGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_autoLayoutViewInstructionGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_autoLayoutViewInstructionGenerationList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutViewInstructionGenerationList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList::GGS_autoLayoutViewInstructionGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList::GGS_autoLayoutViewInstructionGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_autoLayoutViewInstructionGenerationList * p = (CollectionElementPtr_autoLayoutViewInstructionGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_autoLayoutViewInstructionGenerationList) ;
    const GGS_autoLayoutViewInstructionGenerationList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                             const GGS_abstractViewInstructionGeneration & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_autoLayoutViewInstructionGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_autoLayoutViewInstructionGenerationList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewInstructionGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutViewInstructionGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::description (String & ioString,
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
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::class_func_listWithValue (const GGS_abstractViewInstructionGeneration & inOperand0
                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationList_2E_element element (inOperand0) ;
  GGS_autoLayoutViewInstructionGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::addAssignOperation (const GGS_abstractViewInstructionGeneration & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::setter_append (const GGS_abstractViewInstructionGeneration inOperand0,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::setter_insertAtIndex (const GGS_abstractViewInstructionGeneration inOperand0,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationList_2E_element newElement (inOperand0) ;
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

void GGS_autoLayoutViewInstructionGenerationList::setter_removeAtIndex (GGS_abstractViewInstructionGeneration & outOperand0,
                                                                        const GGS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
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

void GGS_autoLayoutViewInstructionGenerationList::setter_popFirst (GGS_abstractViewInstructionGeneration & outOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
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

void GGS_autoLayoutViewInstructionGenerationList::setter_popLast (GGS_abstractViewInstructionGeneration & outOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
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

void GGS_autoLayoutViewInstructionGenerationList::method_first (GGS_abstractViewInstructionGeneration & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
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

void GGS_autoLayoutViewInstructionGenerationList::method_last (GGS_abstractViewInstructionGeneration & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
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

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::add_operation (const GGS_autoLayoutViewInstructionGenerationList & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationList result ;
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

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::subList (const int32_t inStart,
                                                                                                  const int32_t inLength,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationList result ;
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

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationList inList,
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

void GGS_autoLayoutViewInstructionGenerationList::setter_setMInstructionAtIndex (GGS_abstractViewInstructionGeneration inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
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
  
GGS_abstractViewInstructionGeneration GGS_autoLayoutViewInstructionGenerationList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_abstractViewInstructionGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
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
// Down Enumerator for @autoLayoutViewInstructionGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewInstructionGenerationList::DownEnumerator_autoLayoutViewInstructionGenerationList (const GGS_autoLayoutViewInstructionGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element DownEnumerator_autoLayoutViewInstructionGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration DownEnumerator_autoLayoutViewInstructionGenerationList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutViewInstructionGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewInstructionGenerationList::UpEnumerator_autoLayoutViewInstructionGenerationList (const GGS_autoLayoutViewInstructionGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element UpEnumerator_autoLayoutViewInstructionGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration UpEnumerator_autoLayoutViewInstructionGenerationList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewInstructionGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList ("autoLayoutViewInstructionGenerationList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewInstructionGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewInstructionGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList result ;
  const GGS_autoLayoutViewInstructionGenerationList * p = (const GGS_autoLayoutViewInstructionGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewInstructionGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedHorizontalViewGeneration_2E_weak::objectCompare (const GGS_computedHorizontalViewGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_computedHorizontalViewGeneration_2E_weak::GGS_computedHorizontalViewGeneration_2E_weak (void) :
GGS_abstractViewGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration_2E_weak & GGS_computedHorizontalViewGeneration_2E_weak::operator = (const GGS_computedHorizontalViewGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration_2E_weak::GGS_computedHorizontalViewGeneration_2E_weak (const GGS_computedHorizontalViewGeneration & inSource) :
GGS_abstractViewGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration_2E_weak GGS_computedHorizontalViewGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_computedHorizontalViewGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration GGS_computedHorizontalViewGeneration_2E_weak::unwrappedValue (void) const {
  GGS_computedHorizontalViewGeneration result ;
  if (isValid ()) {
    const cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_computedHorizontalViewGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration GGS_computedHorizontalViewGeneration_2E_weak::bang_computedHorizontalViewGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computedHorizontalViewGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedHorizontalViewGeneration) ;
      result = GGS_computedHorizontalViewGeneration ((cPtr_computedHorizontalViewGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @computedHorizontalViewGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration_2E_weak ("computedHorizontalViewGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractViewGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedHorizontalViewGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedHorizontalViewGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedHorizontalViewGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration_2E_weak GGS_computedHorizontalViewGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_computedHorizontalViewGeneration_2E_weak result ;
  const GGS_computedHorizontalViewGeneration_2E_weak * p = (const GGS_computedHorizontalViewGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedHorizontalViewGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedHorizontalViewGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedVerticalViewGeneration_2E_weak::objectCompare (const GGS_computedVerticalViewGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_computedVerticalViewGeneration_2E_weak::GGS_computedVerticalViewGeneration_2E_weak (void) :
GGS_abstractViewGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration_2E_weak & GGS_computedVerticalViewGeneration_2E_weak::operator = (const GGS_computedVerticalViewGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration_2E_weak::GGS_computedVerticalViewGeneration_2E_weak (const GGS_computedVerticalViewGeneration & inSource) :
GGS_abstractViewGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration_2E_weak GGS_computedVerticalViewGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_computedVerticalViewGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration GGS_computedVerticalViewGeneration_2E_weak::unwrappedValue (void) const {
  GGS_computedVerticalViewGeneration result ;
  if (isValid ()) {
    const cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_computedVerticalViewGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration GGS_computedVerticalViewGeneration_2E_weak::bang_computedVerticalViewGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computedVerticalViewGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedVerticalViewGeneration) ;
      result = GGS_computedVerticalViewGeneration ((cPtr_computedVerticalViewGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @computedVerticalViewGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration_2E_weak ("computedVerticalViewGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractViewGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedVerticalViewGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedVerticalViewGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedVerticalViewGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedVerticalViewGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration_2E_weak GGS_computedVerticalViewGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_computedVerticalViewGeneration_2E_weak result ;
  const GGS_computedVerticalViewGeneration_2E_weak * p = (const GGS_computedVerticalViewGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedVerticalViewGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedVerticalViewGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateViewInstruction (const cPtr_abstractViewInstructionGeneration * inObject,
                                                        const GGS_bool in_inPreferences,
                                                        const GGS_string in_inName,
                                                        const GGS_string in_inIndentation,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateViewInstruction (in_inPreferences, in_inName, in_inIndentation, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateAppendViewInstruction (const cPtr_abstractViewInstructionGeneration * inObject,
                                                              const GGS_bool in_inPreferences,
                                                              const GGS_string in_inReceiverViewName,
                                                              const GGS_string in_inIndentation,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateAppendViewInstruction (in_inPreferences, in_inReceiverViewName, in_inIndentation, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractViewInstructionGeneration_2E_weak::objectCompare (const GGS_abstractViewInstructionGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_abstractViewInstructionGeneration_2E_weak::GGS_abstractViewInstructionGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration_2E_weak & GGS_abstractViewInstructionGeneration_2E_weak::operator = (const GGS_abstractViewInstructionGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration_2E_weak::GGS_abstractViewInstructionGeneration_2E_weak (const GGS_abstractViewInstructionGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration_2E_weak GGS_abstractViewInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractViewInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration GGS_abstractViewInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_abstractViewInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_abstractViewInstructionGeneration * p = (cPtr_abstractViewInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractViewInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration GGS_abstractViewInstructionGeneration_2E_weak::bang_abstractViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractViewInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractViewInstructionGeneration) ;
      result = GGS_abstractViewInstructionGeneration ((cPtr_abstractViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractViewInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak ("abstractViewInstructionGeneration.weak",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractViewInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractViewInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration_2E_weak GGS_abstractViewInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractViewInstructionGeneration_2E_weak result ;
  const GGS_abstractViewInstructionGeneration_2E_weak * p = (const GGS_abstractViewInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractViewInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractViewInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutMultipleBindingGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_autoLayoutMultipleBindingGenerationList : public CollectionElementPtr {
  public: GGS_autoLayoutMultipleBindingGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_autoLayoutMultipleBindingGenerationList (const GGS_string & in_mBindingName,
                                                                        const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_autoLayoutMultipleBindingGenerationList (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutMultipleBindingGenerationList::CollectionElementPtr_autoLayoutMultipleBindingGenerationList (const GGS_string & in_mBindingName,
                                                                                                                            const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mBindingName, in_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutMultipleBindingGenerationList::CollectionElementPtr_autoLayoutMultipleBindingGenerationList (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_autoLayoutMultipleBindingGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_autoLayoutMultipleBindingGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_autoLayoutMultipleBindingGenerationList (mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutMultipleBindingGenerationList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList::GGS_autoLayoutMultipleBindingGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList::GGS_autoLayoutMultipleBindingGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_autoLayoutMultipleBindingGenerationList * p = (CollectionElementPtr_autoLayoutMultipleBindingGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_autoLayoutMultipleBindingGenerationList) ;
    const GGS_autoLayoutMultipleBindingGenerationList_2E_element element (p->mObject.mProperty_mBindingName, p->mObject.mProperty_mBoundObjectExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                             const GGS_string & in_mBindingName,
                                                                             const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_autoLayoutMultipleBindingGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_autoLayoutMultipleBindingGenerationList (in_mBindingName, in_mBoundObjectExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutMultipleBindingGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutMultipleBindingGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::description (String & ioString,
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
      ioString.appendString ("mBindingName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBoundObjectExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBoundObjectExpression.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutMultipleBindingGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::plusPlusAssignOperation (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                   const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutMultipleBindingGenerationList_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutMultipleBindingGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::addAssignOperation (const GGS_string & inOperand0,
                                                                      const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutMultipleBindingGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::setter_append (const GGS_string inOperand0,
                                                                 const GGS_abstractBooleanMultipleBindingExpressionForGeneration inOperand1,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutMultipleBindingGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                        const GGS_abstractBooleanMultipleBindingExpressionForGeneration inOperand1,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutMultipleBindingGenerationList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_autoLayoutMultipleBindingGenerationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                        GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                        const GGS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mBindingName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBoundObjectExpression ;
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

void GGS_autoLayoutMultipleBindingGenerationList::setter_popFirst (GGS_string & outOperand0,
                                                                   GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBoundObjectExpression ;
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

void GGS_autoLayoutMultipleBindingGenerationList::setter_popLast (GGS_string & outOperand0,
                                                                  GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBoundObjectExpression ;
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

void GGS_autoLayoutMultipleBindingGenerationList::method_first (GGS_string & outOperand0,
                                                                GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBoundObjectExpression ;
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

void GGS_autoLayoutMultipleBindingGenerationList::method_last (GGS_string & outOperand0,
                                                               GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBoundObjectExpression ;
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

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::add_operation (const GGS_autoLayoutMultipleBindingGenerationList & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutMultipleBindingGenerationList result ;
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

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::subList (const int32_t inStart,
                                                                                                  const int32_t inLength,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutMultipleBindingGenerationList result ;
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

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutMultipleBindingGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutMultipleBindingGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutMultipleBindingGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::plusAssignOperation (const GGS_autoLayoutMultipleBindingGenerationList inList,
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

void GGS_autoLayoutMultipleBindingGenerationList::setter_setMBindingNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_autoLayoutMultipleBindingGenerationList::getter_mBindingNameAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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

void GGS_autoLayoutMultipleBindingGenerationList::setter_setMBoundObjectExpressionAtIndex (GGS_abstractBooleanMultipleBindingExpressionForGeneration inOperand,
                                                                                           GGS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundObjectExpression = inOperand ;
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
  
GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_autoLayoutMultipleBindingGenerationList::getter_mBoundObjectExpressionAtIndex (const GGS_uint & inIndex,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundObjectExpression ;
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
// Down Enumerator for @autoLayoutMultipleBindingGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutMultipleBindingGenerationList::DownEnumerator_autoLayoutMultipleBindingGenerationList (const GGS_autoLayoutMultipleBindingGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element DownEnumerator_autoLayoutMultipleBindingGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutMultipleBindingGenerationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration DownEnumerator_autoLayoutMultipleBindingGenerationList::current_mBoundObjectExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutMultipleBindingGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutMultipleBindingGenerationList::UpEnumerator_autoLayoutMultipleBindingGenerationList (const GGS_autoLayoutMultipleBindingGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element UpEnumerator_autoLayoutMultipleBindingGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutMultipleBindingGenerationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration UpEnumerator_autoLayoutMultipleBindingGenerationList::current_mBoundObjectExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutMultipleBindingGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList ("autoLayoutMultipleBindingGenerationList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutMultipleBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutMultipleBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutMultipleBindingGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutMultipleBindingGenerationList result ;
  const GGS_autoLayoutMultipleBindingGenerationList * p = (const GGS_autoLayoutMultipleBindingGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutMultipleBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutMultipleBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_hStackViewInstructionGeneration_2E_weak::objectCompare (const GGS_hStackViewInstructionGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_hStackViewInstructionGeneration_2E_weak::GGS_hStackViewInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration_2E_weak & GGS_hStackViewInstructionGeneration_2E_weak::operator = (const GGS_hStackViewInstructionGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration_2E_weak::GGS_hStackViewInstructionGeneration_2E_weak (const GGS_hStackViewInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration_2E_weak GGS_hStackViewInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_hStackViewInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration GGS_hStackViewInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_hStackViewInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_hStackViewInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration GGS_hStackViewInstructionGeneration_2E_weak::bang_hStackViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_hStackViewInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_hStackViewInstructionGeneration) ;
      result = GGS_hStackViewInstructionGeneration ((cPtr_hStackViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @hStackViewInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration_2E_weak ("hStackViewInstructionGeneration.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_hStackViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_hStackViewInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_hStackViewInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration_2E_weak GGS_hStackViewInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_hStackViewInstructionGeneration_2E_weak result ;
  const GGS_hStackViewInstructionGeneration_2E_weak * p = (const GGS_hStackViewInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_hStackViewInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("hStackViewInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_vStackViewInstructionGeneration_2E_weak::objectCompare (const GGS_vStackViewInstructionGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_vStackViewInstructionGeneration_2E_weak::GGS_vStackViewInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration_2E_weak & GGS_vStackViewInstructionGeneration_2E_weak::operator = (const GGS_vStackViewInstructionGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration_2E_weak::GGS_vStackViewInstructionGeneration_2E_weak (const GGS_vStackViewInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration_2E_weak GGS_vStackViewInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_vStackViewInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration GGS_vStackViewInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_vStackViewInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_vStackViewInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration GGS_vStackViewInstructionGeneration_2E_weak::bang_vStackViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_vStackViewInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_vStackViewInstructionGeneration) ;
      result = GGS_vStackViewInstructionGeneration ((cPtr_vStackViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @vStackViewInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_vStackViewInstructionGeneration_2E_weak ("vStackViewInstructionGeneration.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_vStackViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_vStackViewInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_vStackViewInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_vStackViewInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration_2E_weak GGS_vStackViewInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_vStackViewInstructionGeneration_2E_weak result ;
  const GGS_vStackViewInstructionGeneration_2E_weak * p = (const GGS_vStackViewInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_vStackViewInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("vStackViewInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutSpaceViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutSpaceViewInstructionGeneration::objectCompare (const GGS_autoLayoutSpaceViewInstructionGeneration & inOperand) const {
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

GGS_autoLayoutSpaceViewInstructionGeneration::GGS_autoLayoutSpaceViewInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration GGS_autoLayoutSpaceViewInstructionGeneration::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutSpaceViewInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutSpaceViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutSpaceViewInstructionGeneration_init (inCompiler) ;
  const GGS_autoLayoutSpaceViewInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutSpaceViewInstructionGeneration::
autoLayoutSpaceViewInstructionGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration::GGS_autoLayoutSpaceViewInstructionGeneration (const cPtr_autoLayoutSpaceViewInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutSpaceViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutSpaceViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutSpaceViewInstructionGeneration::cPtr_autoLayoutSpaceViewInstructionGeneration (Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutSpaceViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ;
}

void cPtr_autoLayoutSpaceViewInstructionGeneration::description (String & ioString,
                                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@autoLayoutSpaceViewInstructionGeneration]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_autoLayoutSpaceViewInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutSpaceViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutSpaceViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutSpaceViewInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ("autoLayoutSpaceViewInstructionGeneration",
                                                                                             & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutSpaceViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutSpaceViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutSpaceViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration GGS_autoLayoutSpaceViewInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutSpaceViewInstructionGeneration result ;
  const GGS_autoLayoutSpaceViewInstructionGeneration * p = (const GGS_autoLayoutSpaceViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutSpaceViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutSpaceViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::objectCompare (const GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak & GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::operator = (const GGS_autoLayoutSpaceViewInstructionGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak (const GGS_autoLayoutSpaceViewInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutSpaceViewInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutSpaceViewInstructionGeneration * p = (cPtr_autoLayoutSpaceViewInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutSpaceViewInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::bang_autoLayoutSpaceViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutSpaceViewInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutSpaceViewInstructionGeneration) ;
      result = GGS_autoLayoutSpaceViewInstructionGeneration ((cPtr_autoLayoutSpaceViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutSpaceViewInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration_2E_weak ("autoLayoutSpaceViewInstructionGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak result ;
  const GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak * p = (const GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutSpaceViewInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutSeparatorInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutSeparatorInstructionGeneration::objectCompare (const GGS_autoLayoutSeparatorInstructionGeneration & inOperand) const {
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

GGS_autoLayoutSeparatorInstructionGeneration::GGS_autoLayoutSeparatorInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration GGS_autoLayoutSeparatorInstructionGeneration::
init_21_horizontal (const GGS_bool & in_horizontal,
                    Compiler * inCompiler
                    COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutSeparatorInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutSeparatorInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutSeparatorInstructionGeneration_init_21_horizontal (in_horizontal, inCompiler) ;
  const GGS_autoLayoutSeparatorInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutSeparatorInstructionGeneration::
autoLayoutSeparatorInstructionGeneration_init_21_horizontal (const GGS_bool & in_horizontal,
                                                             Compiler * /* inCompiler */) {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration::GGS_autoLayoutSeparatorInstructionGeneration (const cPtr_autoLayoutSeparatorInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutSeparatorInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutSeparatorInstructionGeneration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutSeparatorInstructionGeneration * p = (cPtr_autoLayoutSeparatorInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutSeparatorInstructionGeneration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutSeparatorInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutSeparatorInstructionGeneration::cPtr_autoLayoutSeparatorInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutSeparatorInstructionGeneration::cPtr_autoLayoutSeparatorInstructionGeneration (const GGS_bool & in_horizontal,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_horizontal () {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutSeparatorInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ;
}

void cPtr_autoLayoutSeparatorInstructionGeneration::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutSeparatorInstructionGeneration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_autoLayoutSeparatorInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutSeparatorInstructionGeneration (mProperty_horizontal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutSeparatorInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutSeparatorInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ("autoLayoutSeparatorInstructionGeneration",
                                                                                             & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutSeparatorInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutSeparatorInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutSeparatorInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration GGS_autoLayoutSeparatorInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutSeparatorInstructionGeneration result ;
  const GGS_autoLayoutSeparatorInstructionGeneration * p = (const GGS_autoLayoutSeparatorInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutSeparatorInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutSeparatorInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::objectCompare (const GGS_autoLayoutSeparatorInstructionGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::GGS_autoLayoutSeparatorInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration_2E_weak & GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::operator = (const GGS_autoLayoutSeparatorInstructionGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::GGS_autoLayoutSeparatorInstructionGeneration_2E_weak (const GGS_autoLayoutSeparatorInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration_2E_weak GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutSeparatorInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutSeparatorInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutSeparatorInstructionGeneration * p = (cPtr_autoLayoutSeparatorInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutSeparatorInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::bang_autoLayoutSeparatorInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutSeparatorInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutSeparatorInstructionGeneration) ;
      result = GGS_autoLayoutSeparatorInstructionGeneration ((cPtr_autoLayoutSeparatorInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutSeparatorInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration_2E_weak ("autoLayoutSeparatorInstructionGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutSeparatorInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration_2E_weak GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutSeparatorInstructionGeneration_2E_weak result ;
  const GGS_autoLayoutSeparatorInstructionGeneration_2E_weak * p = (const GGS_autoLayoutSeparatorInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutSeparatorInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutSeparatorInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutGutterInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutGutterInstructionGeneration::objectCompare (const GGS_autoLayoutGutterInstructionGeneration & inOperand) const {
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

GGS_autoLayoutGutterInstructionGeneration::GGS_autoLayoutGutterInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration GGS_autoLayoutGutterInstructionGeneration::
init_21_horizontal (const GGS_bool & in_horizontal,
                    Compiler * inCompiler
                    COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutGutterInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutGutterInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutGutterInstructionGeneration_init_21_horizontal (in_horizontal, inCompiler) ;
  const GGS_autoLayoutGutterInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutGutterInstructionGeneration::
autoLayoutGutterInstructionGeneration_init_21_horizontal (const GGS_bool & in_horizontal,
                                                          Compiler * /* inCompiler */) {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration::GGS_autoLayoutGutterInstructionGeneration (const cPtr_autoLayoutGutterInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutGutterInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutGutterInstructionGeneration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutGutterInstructionGeneration * p = (cPtr_autoLayoutGutterInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutGutterInstructionGeneration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutGutterInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutGutterInstructionGeneration::cPtr_autoLayoutGutterInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutGutterInstructionGeneration::cPtr_autoLayoutGutterInstructionGeneration (const GGS_bool & in_horizontal,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_horizontal () {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutGutterInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutGutterInstructionGeneration ;
}

void cPtr_autoLayoutGutterInstructionGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutGutterInstructionGeneration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_autoLayoutGutterInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutGutterInstructionGeneration (mProperty_horizontal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutGutterInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutGutterInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutGutterInstructionGeneration ("autoLayoutGutterInstructionGeneration",
                                                                                          & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutGutterInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutGutterInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutGutterInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutGutterInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration GGS_autoLayoutGutterInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_autoLayoutGutterInstructionGeneration result ;
  const GGS_autoLayoutGutterInstructionGeneration * p = (const GGS_autoLayoutGutterInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutGutterInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutGutterInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutGutterInstructionGeneration_2E_weak::objectCompare (const GGS_autoLayoutGutterInstructionGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_autoLayoutGutterInstructionGeneration_2E_weak::GGS_autoLayoutGutterInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration_2E_weak & GGS_autoLayoutGutterInstructionGeneration_2E_weak::operator = (const GGS_autoLayoutGutterInstructionGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration_2E_weak::GGS_autoLayoutGutterInstructionGeneration_2E_weak (const GGS_autoLayoutGutterInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration_2E_weak GGS_autoLayoutGutterInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutGutterInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration GGS_autoLayoutGutterInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutGutterInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutGutterInstructionGeneration * p = (cPtr_autoLayoutGutterInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutGutterInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration GGS_autoLayoutGutterInstructionGeneration_2E_weak::bang_autoLayoutGutterInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutGutterInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutGutterInstructionGeneration) ;
      result = GGS_autoLayoutGutterInstructionGeneration ((cPtr_autoLayoutGutterInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutGutterInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutGutterInstructionGeneration_2E_weak ("autoLayoutGutterInstructionGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutGutterInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutGutterInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutGutterInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutGutterInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration_2E_weak GGS_autoLayoutGutterInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_autoLayoutGutterInstructionGeneration_2E_weak result ;
  const GGS_autoLayoutGutterInstructionGeneration_2E_weak * p = (const GGS_autoLayoutGutterInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutGutterInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutGutterInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutDividerInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutDividerInstructionGeneration::objectCompare (const GGS_autoLayoutDividerInstructionGeneration & inOperand) const {
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

GGS_autoLayoutDividerInstructionGeneration::GGS_autoLayoutDividerInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration GGS_autoLayoutDividerInstructionGeneration::
init_21_horizontal (const GGS_bool & in_horizontal,
                    Compiler * inCompiler
                    COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutDividerInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutDividerInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutDividerInstructionGeneration_init_21_horizontal (in_horizontal, inCompiler) ;
  const GGS_autoLayoutDividerInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDividerInstructionGeneration::
autoLayoutDividerInstructionGeneration_init_21_horizontal (const GGS_bool & in_horizontal,
                                                           Compiler * /* inCompiler */) {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration::GGS_autoLayoutDividerInstructionGeneration (const cPtr_autoLayoutDividerInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDividerInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutDividerInstructionGeneration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutDividerInstructionGeneration * p = (cPtr_autoLayoutDividerInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDividerInstructionGeneration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDividerInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDividerInstructionGeneration::cPtr_autoLayoutDividerInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDividerInstructionGeneration::cPtr_autoLayoutDividerInstructionGeneration (const GGS_bool & in_horizontal,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_horizontal () {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutDividerInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration ;
}

void cPtr_autoLayoutDividerInstructionGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutDividerInstructionGeneration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_autoLayoutDividerInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutDividerInstructionGeneration (mProperty_horizontal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutDividerInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutDividerInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration ("autoLayoutDividerInstructionGeneration",
                                                                                           & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutDividerInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutDividerInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutDividerInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration GGS_autoLayoutDividerInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDividerInstructionGeneration result ;
  const GGS_autoLayoutDividerInstructionGeneration * p = (const GGS_autoLayoutDividerInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutDividerInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDividerInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutDividerInstructionGeneration_2E_weak::objectCompare (const GGS_autoLayoutDividerInstructionGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_autoLayoutDividerInstructionGeneration_2E_weak::GGS_autoLayoutDividerInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration_2E_weak & GGS_autoLayoutDividerInstructionGeneration_2E_weak::operator = (const GGS_autoLayoutDividerInstructionGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration_2E_weak::GGS_autoLayoutDividerInstructionGeneration_2E_weak (const GGS_autoLayoutDividerInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration_2E_weak GGS_autoLayoutDividerInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutDividerInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration GGS_autoLayoutDividerInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutDividerInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutDividerInstructionGeneration * p = (cPtr_autoLayoutDividerInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutDividerInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration GGS_autoLayoutDividerInstructionGeneration_2E_weak::bang_autoLayoutDividerInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutDividerInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutDividerInstructionGeneration) ;
      result = GGS_autoLayoutDividerInstructionGeneration ((cPtr_autoLayoutDividerInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutDividerInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration_2E_weak ("autoLayoutDividerInstructionGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutDividerInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutDividerInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutDividerInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration_2E_weak GGS_autoLayoutDividerInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDividerInstructionGeneration_2E_weak result ;
  const GGS_autoLayoutDividerInstructionGeneration_2E_weak * p = (const GGS_autoLayoutDividerInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutDividerInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDividerInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutLocalViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutLocalViewInstructionGeneration::objectCompare (const GGS_autoLayoutLocalViewInstructionGeneration & inOperand) const {
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

GGS_autoLayoutLocalViewInstructionGeneration::GGS_autoLayoutLocalViewInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration GGS_autoLayoutLocalViewInstructionGeneration::
init_21_ (const GGS_string & in_mLocalView,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutLocalViewInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutLocalViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutLocalViewInstructionGeneration_init_21_ (in_mLocalView, inCompiler) ;
  const GGS_autoLayoutLocalViewInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutLocalViewInstructionGeneration::
autoLayoutLocalViewInstructionGeneration_init_21_ (const GGS_string & in_mLocalView,
                                                   Compiler * /* inCompiler */) {
  mProperty_mLocalView = in_mLocalView ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration::GGS_autoLayoutLocalViewInstructionGeneration (const cPtr_autoLayoutLocalViewInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutLocalViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutLocalViewInstructionGeneration::readProperty_mLocalView (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutLocalViewInstructionGeneration * p = (cPtr_autoLayoutLocalViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutLocalViewInstructionGeneration) ;
    return p->mProperty_mLocalView ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutLocalViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutLocalViewInstructionGeneration::cPtr_autoLayoutLocalViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mLocalView () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutLocalViewInstructionGeneration::cPtr_autoLayoutLocalViewInstructionGeneration (const GGS_string & in_mLocalView,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mLocalView () {
  mProperty_mLocalView = in_mLocalView ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutLocalViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ;
}

void cPtr_autoLayoutLocalViewInstructionGeneration::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutLocalViewInstructionGeneration:") ;
  mProperty_mLocalView.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_autoLayoutLocalViewInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutLocalViewInstructionGeneration (mProperty_mLocalView, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutLocalViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLocalView.printNonNullClassInstanceProperties ("mLocalView") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutLocalViewInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ("autoLayoutLocalViewInstructionGeneration",
                                                                                             & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutLocalViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutLocalViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutLocalViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration GGS_autoLayoutLocalViewInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutLocalViewInstructionGeneration result ;
  const GGS_autoLayoutLocalViewInstructionGeneration * p = (const GGS_autoLayoutLocalViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutLocalViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutLocalViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::objectCompare (const GGS_autoLayoutLocalViewInstructionGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::GGS_autoLayoutLocalViewInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration_2E_weak & GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::operator = (const GGS_autoLayoutLocalViewInstructionGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::GGS_autoLayoutLocalViewInstructionGeneration_2E_weak (const GGS_autoLayoutLocalViewInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration_2E_weak GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutLocalViewInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutLocalViewInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutLocalViewInstructionGeneration * p = (cPtr_autoLayoutLocalViewInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutLocalViewInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::bang_autoLayoutLocalViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutLocalViewInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutLocalViewInstructionGeneration) ;
      result = GGS_autoLayoutLocalViewInstructionGeneration ((cPtr_autoLayoutLocalViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutLocalViewInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration_2E_weak ("autoLayoutLocalViewInstructionGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutLocalViewInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration_2E_weak GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutLocalViewInstructionGeneration_2E_weak result ;
  const GGS_autoLayoutLocalViewInstructionGeneration_2E_weak * p = (const GGS_autoLayoutLocalViewInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutLocalViewInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutLocalViewInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutRegularBindingsGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_autoLayoutRegularBindingsGenerationList : public CollectionElementPtr {
  public: GGS_autoLayoutRegularBindingsGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_autoLayoutRegularBindingsGenerationList (const GGS_string & in_mBindingName,
                                                                        const GGS_boundObjectList & in_mBoundObjectList,
                                                                        const GGS_string & in_mBindingOptionsString
                                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_autoLayoutRegularBindingsGenerationList (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutRegularBindingsGenerationList::CollectionElementPtr_autoLayoutRegularBindingsGenerationList (const GGS_string & in_mBindingName,
                                                                                                                            const GGS_boundObjectList & in_mBoundObjectList,
                                                                                                                            const GGS_string & in_mBindingOptionsString
                                                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutRegularBindingsGenerationList::CollectionElementPtr_autoLayoutRegularBindingsGenerationList (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectList, inElement.mProperty_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_autoLayoutRegularBindingsGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_autoLayoutRegularBindingsGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_autoLayoutRegularBindingsGenerationList (mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectList, mObject.mProperty_mBindingOptionsString COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutRegularBindingsGenerationList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList::GGS_autoLayoutRegularBindingsGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList::GGS_autoLayoutRegularBindingsGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_autoLayoutRegularBindingsGenerationList * p = (CollectionElementPtr_autoLayoutRegularBindingsGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_autoLayoutRegularBindingsGenerationList) ;
    const GGS_autoLayoutRegularBindingsGenerationList_2E_element element (p->mObject.mProperty_mBindingName, p->mObject.mProperty_mBoundObjectList, p->mObject.mProperty_mBindingOptionsString) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                             const GGS_string & in_mBindingName,
                                                                             const GGS_boundObjectList & in_mBoundObjectList,
                                                                             const GGS_string & in_mBindingOptionsString
                                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_autoLayoutRegularBindingsGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_autoLayoutRegularBindingsGenerationList (in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutRegularBindingsGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutRegularBindingsGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::description (String & ioString,
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
      ioString.appendString ("mBindingName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBoundObjectList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBoundObjectList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBindingOptionsString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingOptionsString.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutRegularBindingsGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::plusPlusAssignOperation (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                   const GGS_boundObjectList & inOperand1,
                                                                                                                   const GGS_string & inOperand2
                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutRegularBindingsGenerationList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_autoLayoutRegularBindingsGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::addAssignOperation (const GGS_string & inOperand0,
                                                                      const GGS_boundObjectList & inOperand1,
                                                                      const GGS_string & inOperand2
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutRegularBindingsGenerationList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::setter_append (const GGS_string inOperand0,
                                                                 const GGS_boundObjectList inOperand1,
                                                                 const GGS_string inOperand2,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutRegularBindingsGenerationList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                        const GGS_boundObjectList inOperand1,
                                                                        const GGS_string inOperand2,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutRegularBindingsGenerationList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_autoLayoutRegularBindingsGenerationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                        GGS_boundObjectList & outOperand1,
                                                                        GGS_string & outOperand2,
                                                                        const GGS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mBindingName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBoundObjectList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mBindingOptionsString ;
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

void GGS_autoLayoutRegularBindingsGenerationList::setter_popFirst (GGS_string & outOperand0,
                                                                   GGS_boundObjectList & outOperand1,
                                                                   GGS_string & outOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBoundObjectList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBindingOptionsString ;
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

void GGS_autoLayoutRegularBindingsGenerationList::setter_popLast (GGS_string & outOperand0,
                                                                  GGS_boundObjectList & outOperand1,
                                                                  GGS_string & outOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBoundObjectList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBindingOptionsString ;
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

void GGS_autoLayoutRegularBindingsGenerationList::method_first (GGS_string & outOperand0,
                                                                GGS_boundObjectList & outOperand1,
                                                                GGS_string & outOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBoundObjectList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBindingOptionsString ;
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

void GGS_autoLayoutRegularBindingsGenerationList::method_last (GGS_string & outOperand0,
                                                               GGS_boundObjectList & outOperand1,
                                                               GGS_string & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBoundObjectList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBindingOptionsString ;
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

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::add_operation (const GGS_autoLayoutRegularBindingsGenerationList & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutRegularBindingsGenerationList result ;
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

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::subList (const int32_t inStart,
                                                                                                  const int32_t inLength,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutRegularBindingsGenerationList result ;
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

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutRegularBindingsGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutRegularBindingsGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutRegularBindingsGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::plusAssignOperation (const GGS_autoLayoutRegularBindingsGenerationList inList,
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

void GGS_autoLayoutRegularBindingsGenerationList::setter_setMBindingNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_autoLayoutRegularBindingsGenerationList::getter_mBindingNameAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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

void GGS_autoLayoutRegularBindingsGenerationList::setter_setMBoundObjectListAtIndex (GGS_boundObjectList inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundObjectList = inOperand ;
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
  
GGS_boundObjectList GGS_autoLayoutRegularBindingsGenerationList::getter_mBoundObjectListAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_boundObjectList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundObjectList ;
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

void GGS_autoLayoutRegularBindingsGenerationList::setter_setMBindingOptionsStringAtIndex (GGS_string inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingOptionsString = inOperand ;
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
  
GGS_string GGS_autoLayoutRegularBindingsGenerationList::getter_mBindingOptionsStringAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingOptionsString ;
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
// Down Enumerator for @autoLayoutRegularBindingsGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutRegularBindingsGenerationList::DownEnumerator_autoLayoutRegularBindingsGenerationList (const GGS_autoLayoutRegularBindingsGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element DownEnumerator_autoLayoutRegularBindingsGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutRegularBindingsGenerationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList DownEnumerator_autoLayoutRegularBindingsGenerationList::current_mBoundObjectList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutRegularBindingsGenerationList::current_mBindingOptionsString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionsString ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutRegularBindingsGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutRegularBindingsGenerationList::UpEnumerator_autoLayoutRegularBindingsGenerationList (const GGS_autoLayoutRegularBindingsGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element UpEnumerator_autoLayoutRegularBindingsGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutRegularBindingsGenerationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList UpEnumerator_autoLayoutRegularBindingsGenerationList::current_mBoundObjectList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutRegularBindingsGenerationList::current_mBindingOptionsString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionsString ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutRegularBindingsGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList ("autoLayoutRegularBindingsGenerationList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutRegularBindingsGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutRegularBindingsGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutRegularBindingsGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutRegularBindingsGenerationList result ;
  const GGS_autoLayoutRegularBindingsGenerationList * p = (const GGS_autoLayoutRegularBindingsGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutRegularBindingsGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutRegularBindingsGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@boundObjectList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_boundObjectList : public CollectionElementPtr {
  public: GGS_boundObjectList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_boundObjectList (const GGS_string & in_mBoundObjectString,
                                                const GGS_propertyKind & in_mKind
                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_boundObjectList (const GGS_boundObjectList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_boundObjectList::CollectionElementPtr_boundObjectList (const GGS_string & in_mBoundObjectString,
                                                                            const GGS_propertyKind & in_mKind
                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mBoundObjectString, in_mKind) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_boundObjectList::CollectionElementPtr_boundObjectList (const GGS_boundObjectList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mBoundObjectString, inElement.mProperty_mKind) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_boundObjectList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_boundObjectList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_boundObjectList (mObject.mProperty_mBoundObjectString, mObject.mProperty_mKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @boundObjectList
//--------------------------------------------------------------------------------------------------

GGS_boundObjectList::GGS_boundObjectList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList::GGS_boundObjectList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_boundObjectList * p = (CollectionElementPtr_boundObjectList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_boundObjectList) ;
    const GGS_boundObjectList_2E_element element (p->mObject.mProperty_mBoundObjectString, p->mObject.mProperty_mKind) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                     const GGS_string & in_mBoundObjectString,
                                                     const GGS_propertyKind & in_mKind
                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr_boundObjectList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_boundObjectList (in_mBoundObjectString, in_mKind COMMA_THERE)) ;
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
//  Enum autolayoutRunBindingForGeneration
//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration::GGS_autolayoutRunBindingForGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration GGS_autolayoutRunBindingForGeneration::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_autolayoutRunBindingForGeneration result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration GGS_autolayoutRunBindingForGeneration::class_func_run (const GGS_string & inAssociatedValue0,
                                                                                             const GGS_string & inAssociatedValue1,
                                                                                             const GGS_string & inAssociatedValue2
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autolayoutRunBindingForGeneration result ;
  result.mEnum = Enumeration::enum_run ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_autolayoutRunBindingForGeneration_2E_run (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration::method_extractRun (GGS_string & outAssociatedValue_targetName,
                                                               GGS_string & outAssociatedValue_actionName,
                                                               GGS_string & outAssociatedValue_targetTypeName,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_run) {
    outAssociatedValue_targetName.drop () ;
    outAssociatedValue_actionName.drop () ;
    outAssociatedValue_targetTypeName.drop () ;
    String s ;
    s.appendCString ("method @autolayoutRunBindingForGeneration.run invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_autolayoutRunBindingForGeneration_2E_run *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_targetName = ptr->mProperty_targetName ;
    outAssociatedValue_actionName = ptr->mProperty_actionName ;
    outAssociatedValue_targetTypeName = ptr->mProperty_targetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run_3F_ GGS_autolayoutRunBindingForGeneration::getter_getRun (UNUSED_LOCATION_ARGS) const {
  GGS_autolayoutRunBindingForGeneration_2E_run_3F_ result ;
  if (mEnum == Enumeration::enum_run) {
    const auto ptr = (const GGS_autolayoutRunBindingForGeneration_2E_run *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_autolayoutRunBindingForGeneration_2E_run (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration::getAssociatedValuesFor_run (GGS_string & out_targetName,
                                                                        GGS_string & out_actionName,
                                                                        GGS_string & out_targetTypeName) const {
  const auto ptr = (const GGS_autolayoutRunBindingForGeneration_2E_run *) mAssociatedValues.associatedValuesPointer () ;
  out_targetName = ptr->mProperty_targetName ;
  out_actionName = ptr->mProperty_actionName ;
  out_targetTypeName = ptr->mProperty_targetTypeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autolayoutRunBindingForGeneration [3] = {
  "(not built)",
  "none",
  "run"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutRunBindingForGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutRunBindingForGeneration::getter_isRun (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_run == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<enum @autolayoutRunBindingForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_autolayoutRunBindingForGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @autolayoutRunBindingForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration ("autolayoutRunBindingForGeneration",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutRunBindingForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autolayoutRunBindingForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutRunBindingForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration GGS_autolayoutRunBindingForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_autolayoutRunBindingForGeneration result ;
  const GGS_autolayoutRunBindingForGeneration * p = (const GGS_autolayoutRunBindingForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutRunBindingForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutRunBindingForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum autoLayoutViewGraphicControllerBindingGeneration
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration::GGS_autoLayoutViewGraphicControllerBindingGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_binding (const GGS_string & inAssociatedValue0
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration result ;
  result.mEnum = Enumeration::enum_binding ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration::method_extractBinding (GGS_string & outAssociatedValue_arrayControllerControllerName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_binding) {
    outAssociatedValue_arrayControllerControllerName.drop () ;
    String s ;
    s.appendCString ("method @autoLayoutViewGraphicControllerBindingGeneration.binding invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_arrayControllerControllerName = ptr->mProperty_arrayControllerControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ GGS_autoLayoutViewGraphicControllerBindingGeneration::getter_getBinding (UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ result ;
  if (mEnum == Enumeration::enum_binding) {
    const auto ptr = (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration::getAssociatedValuesFor_binding (GGS_string & out_arrayControllerControllerName) const {
  const auto ptr = (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
  out_arrayControllerControllerName = ptr->mProperty_arrayControllerControllerName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autoLayoutViewGraphicControllerBindingGeneration [3] = {
  "(not built)",
  "none",
  "binding"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewGraphicControllerBindingGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewGraphicControllerBindingGeneration::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_binding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @autoLayoutViewGraphicControllerBindingGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_autoLayoutViewGraphicControllerBindingGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewGraphicControllerBindingGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration ("autoLayoutViewGraphicControllerBindingGeneration",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewGraphicControllerBindingGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewGraphicControllerBindingGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewGraphicControllerBindingGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration GGS_autoLayoutViewGraphicControllerBindingGeneration::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration result ;
  const GGS_autoLayoutViewGraphicControllerBindingGeneration * p = (const GGS_autoLayoutViewGraphicControllerBindingGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewGraphicControllerBindingGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewGraphicControllerBindingGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum autolayoutEnabledBindingForGeneration
//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration::GGS_autolayoutEnabledBindingForGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration GGS_autolayoutEnabledBindingForGeneration::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration GGS_autolayoutEnabledBindingForGeneration::class_func_enabled (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inAssociatedValue0
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration result ;
  result.mEnum = Enumeration::enum_enabled ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_autolayoutEnabledBindingForGeneration_2E_enabled (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration::method_extractEnabled (GGS_abstractBooleanMultipleBindingExpressionForGeneration & outAssociatedValue_binding,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_enabled) {
    outAssociatedValue_binding.drop () ;
    String s ;
    s.appendCString ("method @autolayoutEnabledBindingForGeneration.enabled invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_autolayoutEnabledBindingForGeneration_2E_enabled *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_binding = ptr->mProperty_binding ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ GGS_autolayoutEnabledBindingForGeneration::getter_getEnabled (UNUSED_LOCATION_ARGS) const {
  GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ result ;
  if (mEnum == Enumeration::enum_enabled) {
    const auto ptr = (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_autolayoutEnabledBindingForGeneration_2E_enabled (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration::getAssociatedValuesFor_enabled (GGS_abstractBooleanMultipleBindingExpressionForGeneration & out_binding) const {
  const auto ptr = (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled *) mAssociatedValues.associatedValuesPointer () ;
  out_binding = ptr->mProperty_binding ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autolayoutEnabledBindingForGeneration [3] = {
  "(not built)",
  "none",
  "enabled"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutEnabledBindingForGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutEnabledBindingForGeneration::getter_isEnabled (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_enabled == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @autolayoutEnabledBindingForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_autolayoutEnabledBindingForGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @autolayoutEnabledBindingForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ("autolayoutEnabledBindingForGeneration",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutEnabledBindingForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autolayoutEnabledBindingForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutEnabledBindingForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration GGS_autolayoutEnabledBindingForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration result ;
  const GGS_autolayoutEnabledBindingForGeneration * p = (const GGS_autolayoutEnabledBindingForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutEnabledBindingForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutEnabledBindingForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutViewInstructionGenerationParameterList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList : public CollectionElementPtr {
  public: GGS_autoLayoutViewInstructionGenerationParameterList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList (const GGS_string & in_mParameterName,
                                                                                 const GGS_string & in_mParameterValue
                                                                                 COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList::CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList (const GGS_string & in_mParameterName,
                                                                                                                                              const GGS_string & in_mParameterValue
                                                                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mParameterName, in_mParameterValue) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList::CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterValue) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutViewInstructionGenerationParameterList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList::GGS_autoLayoutViewInstructionGenerationParameterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList::GGS_autoLayoutViewInstructionGenerationParameterList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList * p = (CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList) ;
    const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element element (p->mObject.mProperty_mParameterName, p->mObject.mProperty_mParameterValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                      const GGS_string & in_mParameterName,
                                                                                      const GGS_string & in_mParameterValue
                                                                                      COMMA_LOCATION_ARGS) {
  CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_autoLayoutViewInstructionGenerationParameterList (in_mParameterName, in_mParameterValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewInstructionGenerationParameterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutViewInstructionGenerationParameterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::description (String & ioString,
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
      ioString.appendString ("mParameterValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                                     const GGS_string & inOperand1
                                                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::addAssignOperation (const GGS_string & inOperand0,
                                                                               const GGS_string & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_append (const GGS_string inOperand0,
                                                                          const GGS_string inOperand1,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                                 const GGS_string inOperand1,
                                                                                 const GGS_uint inInsertionIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                                 GGS_string & outOperand1,
                                                                                 const GGS_uint inRemoveIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mParameterName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mParameterValue ;
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

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_popFirst (GGS_string & outOperand0,
                                                                            GGS_string & outOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterValue ;
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

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_popLast (GGS_string & outOperand0,
                                                                           GGS_string & outOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterValue ;
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

void GGS_autoLayoutViewInstructionGenerationParameterList::method_first (GGS_string & outOperand0,
                                                                         GGS_string & outOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterValue ;
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

void GGS_autoLayoutViewInstructionGenerationParameterList::method_last (GGS_string & outOperand0,
                                                                        GGS_string & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterValue ;
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

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::add_operation (const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand,
                                                                                                                          Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
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

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::subList (const int32_t inStart,
                                                                                                                    const int32_t inLength,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
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

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList inList,
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

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_setMParameterNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_autoLayoutViewInstructionGenerationParameterList::getter_mParameterNameAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_setMParameterValueAtIndex (GGS_string inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterValue = inOperand ;
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
  
GGS_string GGS_autoLayoutViewInstructionGenerationParameterList::getter_mParameterValueAtIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterValue ;
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
// Down Enumerator for @autoLayoutViewInstructionGenerationParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewInstructionGenerationParameterList::DownEnumerator_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element DownEnumerator_autoLayoutViewInstructionGenerationParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutViewInstructionGenerationParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewInstructionGenerationParameterList::UpEnumerator_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element UpEnumerator_autoLayoutViewInstructionGenerationParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterValue ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewInstructionGenerationParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ("autoLayoutViewInstructionGenerationParameterList",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewInstructionGenerationParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewInstructionGenerationParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  const GGS_autoLayoutViewInstructionGenerationParameterList * p = (const GGS_autoLayoutViewInstructionGenerationParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewInstructionGenerationParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::objectCompare (const GGS_autoLayoutComputedViewInstructionGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::GGS_autoLayoutComputedViewInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration_2E_weak & GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::operator = (const GGS_autoLayoutComputedViewInstructionGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::GGS_autoLayoutComputedViewInstructionGeneration_2E_weak (const GGS_autoLayoutComputedViewInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration_2E_weak GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutComputedViewInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutComputedViewInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutComputedViewInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::bang_autoLayoutComputedViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutComputedViewInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutComputedViewInstructionGeneration) ;
      result = GGS_autoLayoutComputedViewInstructionGeneration ((cPtr_autoLayoutComputedViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutComputedViewInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration_2E_weak ("autoLayoutComputedViewInstructionGeneration.weak",
                                                                                                        & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutComputedViewInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration_2E_weak GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutComputedViewInstructionGeneration_2E_weak result ;
  const GGS_autoLayoutComputedViewInstructionGeneration_2E_weak * p = (const GGS_autoLayoutComputedViewInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutComputedViewInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutComputedViewInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@autoLayoutViewInstructionGenerationFuncCallList generate'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generate (const GGS_autoLayoutViewInstructionGenerationFuncCallList inObject,
                               const GGS_string constinArgument_inIndentation,
                               GGS_string & ioArgument_ioStr,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationFuncCallList temp_0 = inObject ;
  UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList enumerator_80011 (temp_0) ;
  while (enumerator_80011.hasCurrentObject ()) {
    ioArgument_ioStr.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  ."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1910)).add_operation (enumerator_80011.current_mFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1910)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1910)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1910)) ;
    UpEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_80114 (enumerator_80011.current_mParameters (HERE)) ;
    while (enumerator_80114.hasCurrentObject ()) {
      ioArgument_ioStr.plusAssignOperation(enumerator_80114.current_mParameterName (HERE).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1912)).add_operation (enumerator_80114.current_mParameterValue (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1912)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1912)) ;
      enumerator_80114.gotoNextObject () ;
      if (enumerator_80114.hasCurrentObject ()) {
        ioArgument_ioStr.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1913)) ;
      }
    }
    ioArgument_ioStr.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1915)) ;
    enumerator_80011.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateViewBuilder (const cPtr_abstractViewGeneration * inObject,
                                                    const GGS_bool in_inPreferences,
                                                    const GGS_string in_inViewName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateViewBuilder (in_inPreferences, in_inViewName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@outletBindingModelList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_outletBindingModelList : public CollectionElementPtr {
  public: GGS_outletBindingModelList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_outletBindingModelList (const GGS_propertyKind & in_mKind,
                                                       const GGS_location & in_mErrorLocation
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_outletBindingModelList (const GGS_outletBindingModelList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_outletBindingModelList::CollectionElementPtr_outletBindingModelList (const GGS_propertyKind & in_mKind,
                                                                                          const GGS_location & in_mErrorLocation
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mKind, in_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_outletBindingModelList::CollectionElementPtr_outletBindingModelList (const GGS_outletBindingModelList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mKind, inElement.mProperty_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_outletBindingModelList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_outletBindingModelList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_outletBindingModelList (mObject.mProperty_mKind, mObject.mProperty_mErrorLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @outletBindingModelList
//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList::GGS_outletBindingModelList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList::GGS_outletBindingModelList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_outletBindingModelList * p = (CollectionElementPtr_outletBindingModelList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_outletBindingModelList) ;
    const GGS_outletBindingModelList_2E_element element (p->mObject.mProperty_mKind, p->mObject.mProperty_mErrorLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_propertyKind & in_mKind,
                                                            const GGS_location & in_mErrorLocation
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_outletBindingModelList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_outletBindingModelList (in_mKind, in_mErrorLocation COMMA_THERE)) ;
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

ComparisonResult GGS_transientDeclarationAST_2E_weak::objectCompare (const GGS_transientDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_transientDeclarationAST_2E_weak::GGS_transientDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak & GGS_transientDeclarationAST_2E_weak::operator = (const GGS_transientDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak::GGS_transientDeclarationAST_2E_weak (const GGS_transientDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak GGS_transientDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_transientDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST GGS_transientDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_transientDeclarationAST result ;
  if (isValid ()) {
    const cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_transientDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST GGS_transientDeclarationAST_2E_weak::bang_transientDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_transientDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientDeclarationAST) ;
      result = GGS_transientDeclarationAST ((cPtr_transientDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @transientDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDeclarationAST_2E_weak ("transientDeclarationAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak GGS_transientDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_transientDeclarationAST_2E_weak result ;
  const GGS_transientDeclarationAST_2E_weak * p = (const GGS_transientDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@transientDependencyListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_transientDependencyListForGeneration : public CollectionElementPtr {
  public: GGS_transientDependencyListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_transientDependencyListForGeneration (const GGS_observablePropertyAST & in_mDependency,
                                                                     const GGS_string & in_mFunctionArgumentName,
                                                                     const GGS_string & in_mFunctionArgumentTypeString,
                                                                     const GGS_string & in_mDefaultValueAsString,
                                                                     const GGS_string & in_mProtocolName
                                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_transientDependencyListForGeneration::CollectionElementPtr_transientDependencyListForGeneration (const GGS_observablePropertyAST & in_mDependency,
                                                                                                                      const GGS_string & in_mFunctionArgumentName,
                                                                                                                      const GGS_string & in_mFunctionArgumentTypeString,
                                                                                                                      const GGS_string & in_mDefaultValueAsString,
                                                                                                                      const GGS_string & in_mProtocolName
                                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mDependency, in_mFunctionArgumentName, in_mFunctionArgumentTypeString, in_mDefaultValueAsString, in_mProtocolName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_transientDependencyListForGeneration::CollectionElementPtr_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mDependency, inElement.mProperty_mFunctionArgumentName, inElement.mProperty_mFunctionArgumentTypeString, inElement.mProperty_mDefaultValueAsString, inElement.mProperty_mProtocolName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_transientDependencyListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_transientDependencyListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_transientDependencyListForGeneration (mObject.mProperty_mDependency, mObject.mProperty_mFunctionArgumentName, mObject.mProperty_mFunctionArgumentTypeString, mObject.mProperty_mDefaultValueAsString, mObject.mProperty_mProtocolName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @transientDependencyListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration::GGS_transientDependencyListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration::GGS_transientDependencyListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_transientDependencyListForGeneration * p = (CollectionElementPtr_transientDependencyListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_transientDependencyListForGeneration) ;
    const GGS_transientDependencyListForGeneration_2E_element element (p->mObject.mProperty_mDependency, p->mObject.mProperty_mFunctionArgumentName, p->mObject.mProperty_mFunctionArgumentTypeString, p->mObject.mProperty_mDefaultValueAsString, p->mObject.mProperty_mProtocolName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                          const GGS_observablePropertyAST & in_mDependency,
                                                                          const GGS_string & in_mFunctionArgumentName,
                                                                          const GGS_string & in_mFunctionArgumentTypeString,
                                                                          const GGS_string & in_mDefaultValueAsString,
                                                                          const GGS_string & in_mProtocolName
                                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_transientDependencyListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_transientDependencyListForGeneration (in_mDependency, in_mFunctionArgumentName, in_mFunctionArgumentTypeString, in_mDefaultValueAsString, in_mProtocolName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_transientDependencyListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_transientDependencyListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::description (String & ioString,
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
      ioString.appendString ("mDependency:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDependency.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFunctionArgumentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFunctionArgumentName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFunctionArgumentTypeString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFunctionArgumentTypeString.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDefaultValueAsString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDefaultValueAsString.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProtocolName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProtocolName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::plusPlusAssignOperation (const GGS_transientDependencyListForGeneration_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::class_func_listWithValue (const GGS_observablePropertyAST & inOperand0,
                                                                                                             const GGS_string & inOperand1,
                                                                                                             const GGS_string & inOperand2,
                                                                                                             const GGS_string & inOperand3,
                                                                                                             const GGS_string & inOperand4
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_transientDependencyListForGeneration_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_transientDependencyListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::addAssignOperation (const GGS_observablePropertyAST & inOperand0,
                                                                   const GGS_string & inOperand1,
                                                                   const GGS_string & inOperand2,
                                                                   const GGS_string & inOperand3,
                                                                   const GGS_string & inOperand4
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_transientDependencyListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_append (const GGS_observablePropertyAST inOperand0,
                                                              const GGS_string inOperand1,
                                                              const GGS_string inOperand2,
                                                              const GGS_string inOperand3,
                                                              const GGS_string inOperand4,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_transientDependencyListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_insertAtIndex (const GGS_observablePropertyAST inOperand0,
                                                                     const GGS_string inOperand1,
                                                                     const GGS_string inOperand2,
                                                                     const GGS_string inOperand3,
                                                                     const GGS_string inOperand4,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_transientDependencyListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GGS_transientDependencyListForGeneration::setter_removeAtIndex (GGS_observablePropertyAST & outOperand0,
                                                                     GGS_string & outOperand1,
                                                                     GGS_string & outOperand2,
                                                                     GGS_string & outOperand3,
                                                                     GGS_string & outOperand4,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDependency ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFunctionArgumentName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFunctionArgumentTypeString ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mDefaultValueAsString ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mProtocolName ;
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
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_popFirst (GGS_observablePropertyAST & outOperand0,
                                                                GGS_string & outOperand1,
                                                                GGS_string & outOperand2,
                                                                GGS_string & outOperand3,
                                                                GGS_string & outOperand4,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDependency ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFunctionArgumentName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFunctionArgumentTypeString ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mDefaultValueAsString ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mProtocolName ;
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
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_popLast (GGS_observablePropertyAST & outOperand0,
                                                               GGS_string & outOperand1,
                                                               GGS_string & outOperand2,
                                                               GGS_string & outOperand3,
                                                               GGS_string & outOperand4,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDependency ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFunctionArgumentName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFunctionArgumentTypeString ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mDefaultValueAsString ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mProtocolName ;
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
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::method_first (GGS_observablePropertyAST & outOperand0,
                                                             GGS_string & outOperand1,
                                                             GGS_string & outOperand2,
                                                             GGS_string & outOperand3,
                                                             GGS_string & outOperand4,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDependency ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFunctionArgumentName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFunctionArgumentTypeString ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mDefaultValueAsString ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mProtocolName ;
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
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::method_last (GGS_observablePropertyAST & outOperand0,
                                                            GGS_string & outOperand1,
                                                            GGS_string & outOperand2,
                                                            GGS_string & outOperand3,
                                                            GGS_string & outOperand4,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDependency ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFunctionArgumentName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFunctionArgumentTypeString ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mDefaultValueAsString ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mProtocolName ;
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
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::add_operation (const GGS_transientDependencyListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result ;
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

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result ;
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

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::plusAssignOperation (const GGS_transientDependencyListForGeneration inList,
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

void GGS_transientDependencyListForGeneration::setter_setMDependencyAtIndex (GGS_observablePropertyAST inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDependency = inOperand ;
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
  
GGS_observablePropertyAST GGS_transientDependencyListForGeneration::getter_mDependencyAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDependency ;
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

void GGS_transientDependencyListForGeneration::setter_setMFunctionArgumentNameAtIndex (GGS_string inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionArgumentName = inOperand ;
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
  
GGS_string GGS_transientDependencyListForGeneration::getter_mFunctionArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionArgumentName ;
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

void GGS_transientDependencyListForGeneration::setter_setMFunctionArgumentTypeStringAtIndex (GGS_string inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionArgumentTypeString = inOperand ;
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
  
GGS_string GGS_transientDependencyListForGeneration::getter_mFunctionArgumentTypeStringAtIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionArgumentTypeString ;
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

void GGS_transientDependencyListForGeneration::setter_setMDefaultValueAsStringAtIndex (GGS_string inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDefaultValueAsString = inOperand ;
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
  
GGS_string GGS_transientDependencyListForGeneration::getter_mDefaultValueAsStringAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDefaultValueAsString ;
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

void GGS_transientDependencyListForGeneration::setter_setMProtocolNameAtIndex (GGS_string inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProtocolName = inOperand ;
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
  
GGS_string GGS_transientDependencyListForGeneration::getter_mProtocolNameAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProtocolName ;
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
// Down Enumerator for @transientDependencyListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_transientDependencyListForGeneration::DownEnumerator_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element DownEnumerator_transientDependencyListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST DownEnumerator_transientDependencyListForGeneration::current_mDependency (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDependency ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentTypeString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionArgumentTypeString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientDependencyListForGeneration::current_mDefaultValueAsString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDefaultValueAsString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientDependencyListForGeneration::current_mProtocolName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProtocolName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @transientDependencyListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_transientDependencyListForGeneration::UpEnumerator_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element UpEnumerator_transientDependencyListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST UpEnumerator_transientDependencyListForGeneration::current_mDependency (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDependency ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentTypeString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionArgumentTypeString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientDependencyListForGeneration::current_mDefaultValueAsString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDefaultValueAsString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientDependencyListForGeneration::current_mProtocolName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProtocolName ;
}




//--------------------------------------------------------------------------------------------------
//     @transientDependencyListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration ("transientDependencyListForGeneration",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientDependencyListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientDependencyListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientDependencyListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration result ;
  const GGS_transientDependencyListForGeneration * p = (const GGS_transientDependencyListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientDependencyListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDependencyListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientPropertyGeneration_2E_weak::objectCompare (const GGS_transientPropertyGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_transientPropertyGeneration_2E_weak::GGS_transientPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak & GGS_transientPropertyGeneration_2E_weak::operator = (const GGS_transientPropertyGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak::GGS_transientPropertyGeneration_2E_weak (const GGS_transientPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak GGS_transientPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_transientPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration GGS_transientPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_transientPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_transientPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration GGS_transientPropertyGeneration_2E_weak::bang_transientPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientPropertyGeneration) ;
      result = GGS_transientPropertyGeneration ((cPtr_transientPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @transientPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientPropertyGeneration_2E_weak ("transientPropertyGeneration.weak",
                                                                                        & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak GGS_transientPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGeneration_2E_weak result ;
  const GGS_transientPropertyGeneration_2E_weak * p = (const GGS_transientPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@transientPropertyGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_transientPropertyGenerationList : public CollectionElementPtr {
  public: GGS_transientPropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_transientPropertyGenerationList (const GGS_transientPropertyGeneration & in_mProperty
                                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_transientPropertyGenerationList (const GGS_transientPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_transientPropertyGenerationList::CollectionElementPtr_transientPropertyGenerationList (const GGS_transientPropertyGeneration & in_mProperty
                                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_transientPropertyGenerationList::CollectionElementPtr_transientPropertyGenerationList (const GGS_transientPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_transientPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_transientPropertyGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_transientPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @transientPropertyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList::GGS_transientPropertyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList::GGS_transientPropertyGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_transientPropertyGenerationList * p = (CollectionElementPtr_transientPropertyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_transientPropertyGenerationList) ;
    const GGS_transientPropertyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                     const GGS_transientPropertyGeneration & in_mProperty
                                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr_transientPropertyGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_transientPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_transientPropertyGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_transientPropertyGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::description (String & ioString,
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
      ioString.appendString ("mProperty:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProperty.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientPropertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::plusPlusAssignOperation (const GGS_transientPropertyGenerationList_2E_element & inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::class_func_listWithValue (const GGS_transientPropertyGeneration & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_transientPropertyGenerationList_2E_element element (inOperand0) ;
  GGS_transientPropertyGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::addAssignOperation (const GGS_transientPropertyGeneration & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  const GGS_transientPropertyGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_append (const GGS_transientPropertyGeneration inOperand0,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  const GGS_transientPropertyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_insertAtIndex (const GGS_transientPropertyGeneration inOperand0,
                                                                const GGS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  const GGS_transientPropertyGenerationList_2E_element newElement (inOperand0) ;
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

void GGS_transientPropertyGenerationList::setter_removeAtIndex (GGS_transientPropertyGeneration & outOperand0,
                                                                const GGS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mProperty ;
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

void GGS_transientPropertyGenerationList::setter_popFirst (GGS_transientPropertyGeneration & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProperty ;
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

void GGS_transientPropertyGenerationList::setter_popLast (GGS_transientPropertyGeneration & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProperty ;
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

void GGS_transientPropertyGenerationList::method_first (GGS_transientPropertyGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProperty ;
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

void GGS_transientPropertyGenerationList::method_last (GGS_transientPropertyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProperty ;
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

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::add_operation (const GGS_transientPropertyGenerationList & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result ;
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

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::subList (const int32_t inStart,
                                                                                  const int32_t inLength,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result ;
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

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::plusAssignOperation (const GGS_transientPropertyGenerationList inList,
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

void GGS_transientPropertyGenerationList::setter_setMPropertyAtIndex (GGS_transientPropertyGeneration inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProperty = inOperand ;
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
  
GGS_transientPropertyGeneration GGS_transientPropertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProperty ;
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
// Down Enumerator for @transientPropertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_transientPropertyGenerationList::DownEnumerator_transientPropertyGenerationList (const GGS_transientPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element DownEnumerator_transientPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration DownEnumerator_transientPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @transientPropertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_transientPropertyGenerationList::UpEnumerator_transientPropertyGenerationList (const GGS_transientPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element UpEnumerator_transientPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration UpEnumerator_transientPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @transientPropertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList ("transientPropertyGenerationList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientPropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGenerationList result ;
  const GGS_transientPropertyGenerationList * p = (const GGS_transientPropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@transientDependencyListForGeneration transientComputeFunctionCall'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_transientComputeFunctionCall (const GGS_transientDependencyListForGeneration & inObject,
                                                         const GGS_bool & constinArgument_inPreferences,
                                                         const GGS_string & constinArgument_inOwnerName,
                                                         const GGS_string & constinArgument_inTransientName,
                                                         const GGS_string & constinArgument_inFunctionNamePrefix,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("unwSelf.") ;
  }
  GGS_string var_uwself_18679 = temp_0 ;
  result_result = GGS_string::makeEmptyString () ;
  GGS_string var_ident_18769 = GGS_string ("        ") ;
  const GGS_transientDependencyListForGeneration temp_2 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_18827 (temp_2) ;
  GGS_uint index_18792 (uint32_t (0)) ;
  while (enumerator_18827.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_18827.current_mDefaultValueAsString (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("var s"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 424)).add_operation (index_18792.getter_string (SOURCE_FILE ("transient-property.galgas4", 424)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 424)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 424)).add_operation (extensionGetter_modelStringForSelf (enumerator_18827.current_mDependency (HERE), var_uwself_18679, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 424)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 424)).add_operation (GGS_string (".selection"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 424)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 424)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 424)) ;
        result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("switch s"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 425)).add_operation (index_18792.getter_string (SOURCE_FILE ("transient-property.galgas4", 425)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 425)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 425)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 425)) ;
        result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("case .single :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 426)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 426)) ;
        result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("  ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 427)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 427)) ;
        result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("case .empty, .multiple :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 428)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 428)) ;
        result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("  s"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 429)).add_operation (index_18792.getter_string (SOURCE_FILE ("transient-property.galgas4", 429)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 429)).add_operation (GGS_string (" = .single ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 429)).add_operation (enumerator_18827.current_mDefaultValueAsString (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 429)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 429)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 429)) ;
        result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 430)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 430)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("let s"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 432)).add_operation (index_18792.getter_string (SOURCE_FILE ("transient-property.galgas4", 432)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 432)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 432)).add_operation (extensionGetter_modelStringForSelf (enumerator_18827.current_mDependency (HERE), var_uwself_18679, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 432)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 432)).add_operation (GGS_string (".selection"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 432)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 432)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 432)) ;
    }
    enumerator_18827.gotoNextObject () ;
    index_18792.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 422)) ;
  }
  result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("switch ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 435)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 435)) ;
  const GGS_transientDependencyListForGeneration temp_4 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_19471 (temp_4) ;
  GGS_uint index_19465 (uint32_t (0)) ;
  while (enumerator_19471.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("s").add_operation (index_19465.getter_string (SOURCE_FILE ("transient-property.galgas4", 438)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 438)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 438)) ;
    enumerator_19471.gotoNextObject () ;
    if (enumerator_19471.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 440)) ;
    }
    index_19465.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 436)) ;
  }
  result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 442)) ;
  result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 443)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 443)) ;
  const GGS_transientDependencyListForGeneration temp_5 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_19625 (temp_5) ;
  GGS_uint index_19619 (uint32_t (0)) ;
  while (enumerator_19625.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (".single (let v").add_operation (index_19619.getter_string (SOURCE_FILE ("transient-property.galgas4", 446)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 446)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 446)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 446)) ;
    enumerator_19625.gotoNextObject () ;
    if (enumerator_19625.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (",\n              "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 448)) ;
    }
    index_19619.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 444)) ;
  }
  result_result.plusAssignOperation(GGS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 450)) ;
  result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("  return .single ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 451)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 451)) ;
  result_result.plusAssignOperation(constinArgument_inFunctionNamePrefix.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 452)).add_operation (constinArgument_inOwnerName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 452)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 452)).add_operation (constinArgument_inTransientName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 452)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 452)) ;
  result_result.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 453)) ;
  const GGS_transientDependencyListForGeneration temp_6 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_19923 (temp_6) ;
  GGS_uint index_19917 (uint32_t (0)) ;
  while (enumerator_19923.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("v").add_operation (index_19917.getter_string (SOURCE_FILE ("transient-property.galgas4", 456)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 456)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 456)) ;
    enumerator_19923.gotoNextObject () ;
    if (enumerator_19923.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 458)) ;
    }
    index_19917.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 454)) ;
  }
  result_result.plusAssignOperation(GGS_string ("))\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 460)) ;
  result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 461)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 461)) ;
  const GGS_transientDependencyListForGeneration temp_7 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_20076 (temp_7) ;
  while (enumerator_20076.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (".multiple"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 464)) ;
    enumerator_20076.gotoNextObject () ;
    if (enumerator_20076.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (",\n              "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 466)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 468)) ;
  result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("  return .multiple\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 469)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 469)) ;
  result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("default :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 470)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 470)) ;
  result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("  return .empty\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 471)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 471)) ;
  result_result.plusAssignOperation(var_ident_18769.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 472)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 472)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@transientDependencyListForGeneration needs_unwSelf'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_needs_5F_unwSelf (const GGS_transientDependencyListForGeneration & inObject,
                                           const GGS_bool & constinArgument_inPreferences,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
  const GGS_transientDependencyListForGeneration temp_0 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_20544 (temp_0) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("transient-property.galgas4", 479)).isValidAndTrue () ;
  if (enumerator_20544.hasCurrentObject () && bool_1) {
    while (enumerator_20544.hasCurrentObject () && bool_1) {
      result_result = extensionGetter_needs_5F_unwSelf (enumerator_20544.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 480)) ;
      enumerator_20544.gotoNextObject () ;
      if (enumerator_20544.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("transient-property.galgas4", 479)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST generateAddObserverCall'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_generateAddObserverCall (const GGS_observablePropertyAST & inObject,
                                                    const GGS_bool & constinArgument_inPreferences,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_21080 = temp_0 ;
  const GGS_observablePropertyAST temp_2 = inObject ;
  switch (temp_2.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_21197_controllerName_0 ;
      GGS_lstring extractedValue_21222_propertyName_1 ;
      temp_2.getAssociatedValuesFor_selfControllerProperty (extractedValue_21197_controllerName_0, extractedValue_21222_propertyName_1) ;
      result_result = var_prefix_21080.add_operation (extractedValue_21197_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 496)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 496)).add_operation (extractedValue_21222_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 496)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 496)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_21387_controllerName_0 ;
      GGS_lstring extractedValue_21412_propertyName_1 ;
      GGS_lstring extractedValue_21435_secondaryPropertyName_2 ;
      temp_2.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_21387_controllerName_0, extractedValue_21412_propertyName_1, extractedValue_21435_secondaryPropertyName_2) ;
      result_result = var_prefix_21080.add_operation (extractedValue_21387_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 498)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 498)).add_operation (extractedValue_21412_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 498)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 498)).add_operation (extractedValue_21435_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 498)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 498)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_21644_controllerName_0 ;
      GGS_lstring extractedValue_21669_propertyName_1 ;
      GGS_lstring extractedValue_21692_secondaryPropertyName_2 ;
      temp_2.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_21644_controllerName_0, extractedValue_21669_propertyName_1, extractedValue_21692_secondaryPropertyName_2) ;
      result_result = var_prefix_21080.add_operation (extractedValue_21644_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 500)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 500)).add_operation (extractedValue_21669_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 500)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 500)).add_operation (extractedValue_21692_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 500)).add_operation (GGS_string ("_StartsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 500)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_21897_controllerName_0 ;
      GGS_lstring extractedValue_21922_propertyName_1 ;
      temp_2.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_21897_controllerName_0, extractedValue_21922_propertyName_1) ;
      result_result = var_prefix_21080.add_operation (extractedValue_21897_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 502)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 502)).add_operation (extractedValue_21922_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 502)).add_operation (GGS_string ("_property.<<4>>"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 502)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_22053__0 ;
      temp_2.getAssociatedValuesFor_selfWithoutProperty (extractedValue_22053__0) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_22136_masterName_0 ;
      temp_2.getAssociatedValuesFor_selfProperty (extractedValue_22136_masterName_0) ;
      result_result = var_prefix_21080.add_operation (extractedValue_22136_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 506)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 506)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_22264_masterName_0 ;
      GGS_lstring extractedValue_22276__1 ;
      temp_2.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_22264_masterName_0, extractedValue_22276__1) ;
      result_result = var_prefix_21080.add_operation (extractedValue_22264_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 508)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 508)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_22390_masterName_0 ;
      GGS_lstring extractedValue_22411_elementPropertyName_1 ;
      temp_2.getAssociatedValuesFor_selfPropertyArray (extractedValue_22390_masterName_0, extractedValue_22411_elementPropertyName_1) ;
      result_result = var_prefix_21080.add_operation (extractedValue_22390_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 510)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 510)).add_operation (extractedValue_22411_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 510)).add_operation (GGS_string ("_StartsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 510)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_22579_masterName_0 ;
      GGS_lstring extractedValue_22600_elementPropertyName_1 ;
      temp_2.getAssociatedValuesFor_selfPropertyObject (extractedValue_22579_masterName_0, extractedValue_22600_elementPropertyName_1) ;
      result_result = var_prefix_21080.add_operation (extractedValue_22579_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 512)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 512)).add_operation (extractedValue_22600_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 512)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 512)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_22768_masterName_0 ;
      temp_2.getAssociatedValuesFor_selfPropertyNone (extractedValue_22768_masterName_0) ;
      result_result = var_prefix_21080.add_operation (extractedValue_22768_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 514)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 514)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_22887_propertyName_0 ;
      temp_2.getAssociatedValuesFor_prefsProperty (extractedValue_22887_propertyName_0) ;
      result_result = GGS_string ("preferences_").add_operation (extractedValue_22887_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 516)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 516)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_23022_propertyName_0 ;
      GGS_lstring extractedValue_23036__1 ;
      temp_2.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_23022_propertyName_0, extractedValue_23036__1) ;
      result_result = GGS_string ("preferences_").add_operation (extractedValue_23022_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 518)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 518)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_23149_masterName_0 ;
      temp_2.getAssociatedValuesFor_rootProperty (extractedValue_23149_masterName_0) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_23149_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 520)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 520)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_23276_masterName_0 ;
      temp_2.getAssociatedValuesFor_rootPropertyNone (extractedValue_23276_masterName_0) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_23276_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 522)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 522)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_23409_masterName_0 ;
      GGS_lstring extractedValue_23430_optionName_1 ;
      temp_2.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_23409_masterName_0, extractedValue_23430_optionName_1) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_23409_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 524)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 524)).add_operation (extractedValue_23430_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 524)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 524)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_23593_relationshipName_0 ;
      GGS_lstring extractedValue_23620_propertyName_1 ;
      temp_2.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_23593_relationshipName_0, extractedValue_23620_propertyName_1) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_23593_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 526)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 526)).add_operation (extractedValue_23620_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 526)).add_operation (GGS_string ("_StartsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 526)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_23775__0 ;
      temp_2.getAssociatedValuesFor_signatureProperty (extractedValue_23775__0) ;
      result_result = GGS_string ("<< ligne 243 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_23835__0 ;
      temp_2.getAssociatedValuesFor_versionProperty (extractedValue_23835__0) ;
      result_result = GGS_string ("<< ligne 245 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_23907__0 ;
      temp_2.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_23907__0) ;
      result_result = GGS_string ("<< ligne 247 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_23965__0 ;
      GGS_lstring extractedValue_23977_propertyName_1 ;
      temp_2.getAssociatedValuesFor_superProperty (extractedValue_23965__0, extractedValue_23977_propertyName_1) ;
      result_result = var_prefix_21080.add_operation (extractedValue_23977_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 534)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 534)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_24107__0 ;
      GGS_lstring extractedValue_24119_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_24133__2 ;
      temp_2.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_24107__0, extractedValue_24119_propertyName_1, extractedValue_24133__2) ;
      result_result = var_prefix_21080.add_operation (extractedValue_24119_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 536)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 536)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST generateRemoveObserverCall'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_generateRemoveObserverCall (const GGS_observablePropertyAST & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_24450_controllerName_0 ;
      GGS_lstring extractedValue_24475_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_24450_controllerName_0, extractedValue_24475_propertyName_1) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_24450_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 545)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 545)).add_operation (extractedValue_24475_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 545)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 545)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_24640_controllerName_0 ;
      GGS_lstring extractedValue_24665_propertyName_1 ;
      GGS_lstring extractedValue_24688_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_24640_controllerName_0, extractedValue_24665_propertyName_1, extractedValue_24688_secondaryPropertyName_2) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_24640_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 547)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 547)).add_operation (extractedValue_24665_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 547)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 547)).add_operation (extractedValue_24688_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 547)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 547)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_24897_controllerName_0 ;
      GGS_lstring extractedValue_24922_propertyName_1 ;
      GGS_lstring extractedValue_24945_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_24897_controllerName_0, extractedValue_24922_propertyName_1, extractedValue_24945_secondaryPropertyName_2) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_24897_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 549)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 549)).add_operation (extractedValue_24922_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 549)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 549)).add_operation (extractedValue_24945_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 549)).add_operation (GGS_string ("_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 549)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_25150_controllerName_0 ;
      GGS_lstring extractedValue_25175_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_25150_controllerName_0, extractedValue_25175_propertyName_1) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_25150_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 551)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 551)).add_operation (extractedValue_25175_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 551)).add_operation (GGS_string ("_property.toMany_<<5>>_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 551)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_25332__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_25332__0) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_25415_masterName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_25415_masterName_0) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_25415_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 555)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 555)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_25543_masterName_0 ;
      GGS_lstring extractedValue_25555__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_25543_masterName_0, extractedValue_25555__1) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_25543_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 557)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 557)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_25669_masterName_0 ;
      GGS_lstring extractedValue_25690_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_25669_masterName_0, extractedValue_25690_elementPropertyName_1) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_25669_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 559)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 559)).add_operation (extractedValue_25690_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 559)).add_operation (GGS_string ("_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 559)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_25858_masterName_0 ;
      GGS_lstring extractedValue_25879_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_25858_masterName_0, extractedValue_25879_elementPropertyName_1) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_25858_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 561)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 561)).add_operation (extractedValue_25879_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 561)).add_operation (GGS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 561)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_26045_masterName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_26045_masterName_0) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_26045_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 563)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 563)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_26164_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_26164_propertyName_0) ;
      result_result = GGS_string ("preferences_").add_operation (extractedValue_26164_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 565)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 565)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_26298_propertyName_0 ;
      GGS_lstring extractedValue_26312__1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_26298_propertyName_0, extractedValue_26312__1) ;
      result_result = GGS_string ("preferences_").add_operation (extractedValue_26298_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 567)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 567)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_26424_masterName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_26424_masterName_0) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_26424_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 569)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 569)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_26556_masterName_0 ;
      GGS_lstring extractedValue_26577_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_26556_masterName_0, extractedValue_26577_optionName_1) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_26556_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 571)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 571)).add_operation (extractedValue_26577_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 571)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 571)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_26731_masterName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_26731_masterName_0) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_26731_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 573)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 573)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_26865_relationshipName_0 ;
      GGS_lstring extractedValue_26892_propertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_26865_relationshipName_0, extractedValue_26892_propertyName_1) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_26865_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 575)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 575)).add_operation (extractedValue_26892_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 575)).add_operation (GGS_string ("_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 575)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_27046__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_27046__0) ;
      result_result = GGS_string ("<< ligne 270 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_27106__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_27106__0) ;
      result_result = GGS_string ("<< ligne 272 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_27178__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_27178__0) ;
      result_result = GGS_string ("<< ligne 274 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_27236__0 ;
      GGS_lstring extractedValue_27248_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_27236__0, extractedValue_27248_propertyName_1) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_27248_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 583)).add_operation (GGS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 583)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_27376__0 ;
      GGS_lstring extractedValue_27388_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_27402__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_27376__0, extractedValue_27388_propertyName_1, extractedValue_27402__2) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_27388_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 585)).add_operation (GGS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 585)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @transientRoutineGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientRoutineGeneration::objectCompare (const GGS_transientRoutineGeneration & inOperand) const {
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

GGS_transientRoutineGeneration::GGS_transientRoutineGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration::
init_21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                          const GGS_string & in_mTransientName,
                          const GGS_typeKind & in_mTransientType,
                          const GGS_string & in_mGeneratedFunctionNamePrefix,
                          const GGS_transientDependencyListForGeneration & in_mDependencyList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_transientRoutineGeneration * object = nullptr ;
  macroMyNew (object, cPtr_transientRoutineGeneration (inCompiler COMMA_THERE)) ;
  object->transientRoutineGeneration_init_21__21__21__21__21_ (in_mOwnerName, in_mTransientName, in_mTransientType, in_mGeneratedFunctionNamePrefix, in_mDependencyList, inCompiler) ;
  const GGS_transientRoutineGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::
transientRoutineGeneration_init_21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                                                     const GGS_string & in_mTransientName,
                                                     const GGS_typeKind & in_mTransientType,
                                                     const GGS_string & in_mGeneratedFunctionNamePrefix,
                                                     const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mTransientType = in_mTransientType ;
  mProperty_mGeneratedFunctionNamePrefix = in_mGeneratedFunctionNamePrefix ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration::GGS_transientRoutineGeneration (const cPtr_transientRoutineGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientRoutineGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientRoutineGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientRoutineGeneration::readProperty_mTransientName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mTransientName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_transientRoutineGeneration::readProperty_mTransientType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mTransientType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientRoutineGeneration::readProperty_mGeneratedFunctionNamePrefix (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mGeneratedFunctionNamePrefix ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientRoutineGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_transientDependencyListForGeneration () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @transientRoutineGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_transientRoutineGeneration::cPtr_transientRoutineGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mTransientName (),
mProperty_mTransientType (),
mProperty_mGeneratedFunctionNamePrefix (),
mProperty_mDependencyList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_transientRoutineGeneration::cPtr_transientRoutineGeneration (const GGS_string & in_mOwnerName,
                                                                  const GGS_string & in_mTransientName,
                                                                  const GGS_typeKind & in_mTransientType,
                                                                  const GGS_string & in_mGeneratedFunctionNamePrefix,
                                                                  const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mTransientName (),
mProperty_mTransientType (),
mProperty_mGeneratedFunctionNamePrefix (),
mProperty_mDependencyList () {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mTransientType = in_mTransientType ;
  mProperty_mGeneratedFunctionNamePrefix = in_mGeneratedFunctionNamePrefix ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_transientRoutineGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration ;
}

void cPtr_transientRoutineGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@transientRoutineGeneration:") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGeneratedFunctionNamePrefix.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_transientRoutineGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_transientRoutineGeneration (mProperty_mOwnerName, mProperty_mTransientName, mProperty_mTransientType, mProperty_mGeneratedFunctionNamePrefix, mProperty_mDependencyList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_transientRoutineGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
    mProperty_mTransientName.printNonNullClassInstanceProperties ("mTransientName") ;
    mProperty_mTransientType.printNonNullClassInstanceProperties ("mTransientType") ;
    mProperty_mGeneratedFunctionNamePrefix.printNonNullClassInstanceProperties ("mGeneratedFunctionNamePrefix") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @transientRoutineGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientRoutineGeneration ("transientRoutineGeneration",
                                                                               & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientRoutineGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientRoutineGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientRoutineGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_transientRoutineGeneration result ;
  const GGS_transientRoutineGeneration * p = (const GGS_transientRoutineGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientRoutineGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientRoutineGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientRoutineGeneration_2E_weak::objectCompare (const GGS_transientRoutineGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_transientRoutineGeneration_2E_weak::GGS_transientRoutineGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak & GGS_transientRoutineGeneration_2E_weak::operator = (const GGS_transientRoutineGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak::GGS_transientRoutineGeneration_2E_weak (const GGS_transientRoutineGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak GGS_transientRoutineGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_transientRoutineGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration_2E_weak::unwrappedValue (void) const {
  GGS_transientRoutineGeneration result ;
  if (isValid ()) {
    const cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_transientRoutineGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration_2E_weak::bang_transientRoutineGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_transientRoutineGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientRoutineGeneration) ;
      result = GGS_transientRoutineGeneration ((cPtr_transientRoutineGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @transientRoutineGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientRoutineGeneration_2E_weak ("transientRoutineGeneration.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientRoutineGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientRoutineGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientRoutineGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak GGS_transientRoutineGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_transientRoutineGeneration_2E_weak result ;
  const GGS_transientRoutineGeneration_2E_weak * p = (const GGS_transientRoutineGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientRoutineGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientRoutineGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@transientExternTypeList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_transientExternTypeList : public CollectionElementPtr {
  public: GGS_transientExternTypeList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_transientExternTypeList (const GGS_string & in_mTypeName,
                                                        const GGS_bool & in_mIsClass
                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_transientExternTypeList (const GGS_transientExternTypeList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_transientExternTypeList::CollectionElementPtr_transientExternTypeList (const GGS_string & in_mTypeName,
                                                                                            const GGS_bool & in_mIsClass
                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTypeName, in_mIsClass) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_transientExternTypeList::CollectionElementPtr_transientExternTypeList (const GGS_transientExternTypeList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mIsClass) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_transientExternTypeList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_transientExternTypeList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_transientExternTypeList (mObject.mProperty_mTypeName, mObject.mProperty_mIsClass COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @transientExternTypeList
//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList::GGS_transientExternTypeList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList::GGS_transientExternTypeList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_transientExternTypeList * p = (CollectionElementPtr_transientExternTypeList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_transientExternTypeList) ;
    const GGS_transientExternTypeList_2E_element element (p->mObject.mProperty_mTypeName, p->mObject.mProperty_mIsClass) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                             const GGS_string & in_mTypeName,
                                                             const GGS_bool & in_mIsClass
                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_transientExternTypeList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_transientExternTypeList (in_mTypeName, in_mIsClass COMMA_THERE)) ;
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

class CollectionElementPtr_fileGenerationList : public CollectionElementPtr {
  public: GGS_fileGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_fileGenerationList (const GGS_abstractFileGeneration & in_mFileGeneration
                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_fileGenerationList (const GGS_fileGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_fileGenerationList::CollectionElementPtr_fileGenerationList (const GGS_abstractFileGeneration & in_mFileGeneration
                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFileGeneration) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_fileGenerationList::CollectionElementPtr_fileGenerationList (const GGS_fileGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFileGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_fileGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_fileGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_fileGenerationList (mObject.mProperty_mFileGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @fileGenerationList
//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList::GGS_fileGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList::GGS_fileGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_fileGenerationList * p = (CollectionElementPtr_fileGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_fileGenerationList) ;
    const GGS_fileGenerationList_2E_element element (p->mObject.mProperty_mFileGeneration) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                        const GGS_abstractFileGeneration & in_mFileGeneration
                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_fileGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_fileGenerationList (in_mFileGeneration COMMA_THERE)) ;
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
//Class for element of '@entityListForGeneratingEBManagedObjectContext' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_entityListForGeneratingEBManagedObjectContext : public CollectionElementPtr {
  public: GGS_entityListForGeneratingEBManagedObjectContext_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_entityListForGeneratingEBManagedObjectContext (const GGS_string & in_mEntityName,
                                                                              const GGS_lstringlist & in_mObsoleteEntityNames
                                                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_entityListForGeneratingEBManagedObjectContext::CollectionElementPtr_entityListForGeneratingEBManagedObjectContext (const GGS_string & in_mEntityName,
                                                                                                                                        const GGS_lstringlist & in_mObsoleteEntityNames
                                                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mEntityName, in_mObsoleteEntityNames) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_entityListForGeneratingEBManagedObjectContext::CollectionElementPtr_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mEntityName, inElement.mProperty_mObsoleteEntityNames) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_entityListForGeneratingEBManagedObjectContext::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_entityListForGeneratingEBManagedObjectContext::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_entityListForGeneratingEBManagedObjectContext (mObject.mProperty_mEntityName, mObject.mProperty_mObsoleteEntityNames COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @entityListForGeneratingEBManagedObjectContext
//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext::GGS_entityListForGeneratingEBManagedObjectContext (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext::GGS_entityListForGeneratingEBManagedObjectContext (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_entityListForGeneratingEBManagedObjectContext * p = (CollectionElementPtr_entityListForGeneratingEBManagedObjectContext *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_entityListForGeneratingEBManagedObjectContext) ;
    const GGS_entityListForGeneratingEBManagedObjectContext_2E_element element (p->mObject.mProperty_mEntityName, p->mObject.mProperty_mObsoleteEntityNames) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                   const GGS_string & in_mEntityName,
                                                                                   const GGS_lstringlist & in_mObsoleteEntityNames
                                                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_entityListForGeneratingEBManagedObjectContext * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_entityListForGeneratingEBManagedObjectContext (in_mEntityName, in_mObsoleteEntityNames COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_entityListForGeneratingEBManagedObjectContext::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_entityListForGeneratingEBManagedObjectContext::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::description (String & ioString,
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
      ioString.appendString ("mEntityName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEntityName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mObsoleteEntityNames:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mObsoleteEntityNames.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::plusPlusAssignOperation (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                               const GGS_lstringlist & inOperand1
                                                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_entityListForGeneratingEBManagedObjectContext_2E_element element (inOperand0, inOperand1) ;
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::addAssignOperation (const GGS_string & inOperand0,
                                                                            const GGS_lstringlist & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  const GGS_entityListForGeneratingEBManagedObjectContext_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::setter_append (const GGS_string inOperand0,
                                                                       const GGS_lstringlist inOperand1,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_entityListForGeneratingEBManagedObjectContext_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::setter_insertAtIndex (const GGS_string inOperand0,
                                                                              const GGS_lstringlist inOperand1,
                                                                              const GGS_uint inInsertionIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_entityListForGeneratingEBManagedObjectContext_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_entityListForGeneratingEBManagedObjectContext::setter_removeAtIndex (GGS_string & outOperand0,
                                                                              GGS_lstringlist & outOperand1,
                                                                              const GGS_uint inRemoveIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mEntityName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mObsoleteEntityNames ;
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

void GGS_entityListForGeneratingEBManagedObjectContext::setter_popFirst (GGS_string & outOperand0,
                                                                         GGS_lstringlist & outOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEntityName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mObsoleteEntityNames ;
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

void GGS_entityListForGeneratingEBManagedObjectContext::setter_popLast (GGS_string & outOperand0,
                                                                        GGS_lstringlist & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEntityName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mObsoleteEntityNames ;
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

void GGS_entityListForGeneratingEBManagedObjectContext::method_first (GGS_string & outOperand0,
                                                                      GGS_lstringlist & outOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEntityName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mObsoleteEntityNames ;
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

void GGS_entityListForGeneratingEBManagedObjectContext::method_last (GGS_string & outOperand0,
                                                                     GGS_lstringlist & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEntityName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mObsoleteEntityNames ;
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

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::add_operation (const GGS_entityListForGeneratingEBManagedObjectContext & inOperand,
                                                                                                                    Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
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

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::subList (const int32_t inStart,
                                                                                                              const int32_t inLength,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
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

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::plusAssignOperation (const GGS_entityListForGeneratingEBManagedObjectContext inList,
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

void GGS_entityListForGeneratingEBManagedObjectContext::setter_setMEntityNameAtIndex (GGS_string inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEntityName = inOperand ;
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
  
GGS_string GGS_entityListForGeneratingEBManagedObjectContext::getter_mEntityNameAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEntityName ;
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

void GGS_entityListForGeneratingEBManagedObjectContext::setter_setMObsoleteEntityNamesAtIndex (GGS_lstringlist inOperand,
                                                                                               GGS_uint inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mObsoleteEntityNames = inOperand ;
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
  
GGS_lstringlist GGS_entityListForGeneratingEBManagedObjectContext::getter_mObsoleteEntityNamesAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mObsoleteEntityNames ;
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
// Down Enumerator for @entityListForGeneratingEBManagedObjectContext
//--------------------------------------------------------------------------------------------------

DownEnumerator_entityListForGeneratingEBManagedObjectContext::DownEnumerator_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element DownEnumerator_entityListForGeneratingEBManagedObjectContext::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_entityListForGeneratingEBManagedObjectContext::current_mEntityName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_entityListForGeneratingEBManagedObjectContext::current_mObsoleteEntityNames (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObsoleteEntityNames ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @entityListForGeneratingEBManagedObjectContext
//--------------------------------------------------------------------------------------------------

UpEnumerator_entityListForGeneratingEBManagedObjectContext::UpEnumerator_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element UpEnumerator_entityListForGeneratingEBManagedObjectContext::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_entityListForGeneratingEBManagedObjectContext::current_mEntityName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_entityListForGeneratingEBManagedObjectContext::current_mObsoleteEntityNames (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObsoleteEntityNames ;
}




//--------------------------------------------------------------------------------------------------
//     @entityListForGeneratingEBManagedObjectContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ("entityListForGeneratingEBManagedObjectContext",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_entityListForGeneratingEBManagedObjectContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityListForGeneratingEBManagedObjectContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityListForGeneratingEBManagedObjectContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  const GGS_entityListForGeneratingEBManagedObjectContext * p = (const GGS_entityListForGeneratingEBManagedObjectContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityListForGeneratingEBManagedObjectContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneratingEBManagedObjectContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_enumerationDeclarationAST_2E_weak::objectCompare (const GGS_enumerationDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_enumerationDeclarationAST_2E_weak::GGS_enumerationDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak & GGS_enumerationDeclarationAST_2E_weak::operator = (const GGS_enumerationDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak::GGS_enumerationDeclarationAST_2E_weak (const GGS_enumerationDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak GGS_enumerationDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumerationDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_enumerationDeclarationAST result ;
  if (isValid ()) {
    const cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumerationDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST_2E_weak::bang_enumerationDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumerationDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumerationDeclarationAST) ;
      result = GGS_enumerationDeclarationAST ((cPtr_enumerationDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumerationDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST_2E_weak ("enumerationDeclarationAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumerationDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak GGS_enumerationDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_enumerationDeclarationAST_2E_weak result ;
  const GGS_enumerationDeclarationAST_2E_weak * p = (const GGS_enumerationDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @enumConstantMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap::GGS_enumConstantMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap::~ GGS_enumConstantMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap::GGS_enumConstantMap (const GGS_enumConstantMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap & GGS_enumConstantMap::operator = (const GGS_enumConstantMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_enumConstantMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_enumConstantMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumConstantMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumConstantMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_enumConstantMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_enumConstantMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumConstantMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_enumConstantMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::performInsert (const GGS_enumConstantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_enumConstantMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>
GGS_enumConstantMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_enumConstantMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>>
GGS_enumConstantMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_enumConstantMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element_3F_ GGS_enumConstantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_enumConstantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_enumConstantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_enumConstantMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::class_func_mapWithMapToOverride (const GGS_enumConstantMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_enumConstantMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_enumConstantMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::setter_insertKey (GGS_lstring inLKey,
                                            GGS_uint inArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_enumConstantMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "there is already a '%K' constant" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::method_searchKey (GGS_lstring inLKey,
                                            GGS_uint & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' constant is not defined" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumConstantMap::getter_mIndexForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::setter_setMIndexForKey (GGS_uint inValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_enumConstantMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_enumConstantMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> & inArray,
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
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> array = sortedInfoArray () ;
    GGS_enumConstantMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_enumConstantMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_enumConstantMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumConstantMap::objectCompare (const GGS_enumConstantMap & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      const GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> left = sortedInfoArray () ;
      const GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> right = inOperand.sortedInfoArray () ;
      for (int32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        result = left (i COMMA_HERE).value ().objectCompare (right (i COMMA_HERE).value ()) ;
      }
    }
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @enumConstantMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_enumConstantMap::DownEnumerator_enumConstantMap (const GGS_enumConstantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element DownEnumerator_enumConstantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_enumConstantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_enumConstantMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @enumConstantMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_enumConstantMap::UpEnumerator_enumConstantMap (const GGS_enumConstantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element UpEnumerator_enumConstantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_enumConstantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_enumConstantMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @enumConstantMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantMap ("enumConstantMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumConstantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap result ;
  const GGS_enumConstantMap * p = (const GGS_enumConstantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

