#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//----------------------------------------------------------------------------------------------------------------------
// @orBooleanMultipleBindingExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_orBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration::GALGAS_orBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration::GALGAS_orBooleanMultipleBindingExpressionForGeneration (const cPtr_orBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orBooleanMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orBooleanMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @orBooleanMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionForGeneration::cPtr_orBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                            const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_orBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "[@orBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@orBooleanMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ("orBooleanMultipleBindingExpressionForGeneration",
                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_orBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_orBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_orBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
      result = GALGAS_orBooleanMultipleBindingExpressionForGeneration ((cPtr_orBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@orBooleanMultipleBindingExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak ("orBooleanMultipleBindingExpressionForGeneration-weak",
                                                                                & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @xorBooleanMultipleBindingExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_xorBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_xorBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration::GALGAS_xorBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration::GALGAS_xorBooleanMultipleBindingExpressionForGeneration (const cPtr_xorBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorBooleanMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorBooleanMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @xorBooleanMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionForGeneration::cPtr_xorBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_xorBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@xorBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@xorBooleanMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ("xorBooleanMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_xorBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
      result = GALGAS_xorBooleanMultipleBindingExpressionForGeneration ((cPtr_xorBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@xorBooleanMultipleBindingExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak ("xorBooleanMultipleBindingExpressionForGeneration-weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @andBooleanMultipleBindingExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_andBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration::GALGAS_andBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration::GALGAS_andBooleanMultipleBindingExpressionForGeneration (const cPtr_andBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andBooleanMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andBooleanMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @andBooleanMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionForGeneration::cPtr_andBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_andBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@andBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@andBooleanMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ("andBooleanMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_andBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_andBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_andBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
      result = GALGAS_andBooleanMultipleBindingExpressionForGeneration ((cPtr_andBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@andBooleanMultipleBindingExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak ("andBooleanMultipleBindingExpressionForGeneration-weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @comparisonMultipleBindingExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_comparisonMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_comparisonMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration::GALGAS_comparisonMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration::GALGAS_comparisonMultipleBindingExpressionForGeneration (const cPtr_comparisonMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_multipleBindingComparisonAST & inAttribute_mOperator,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mOperator, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionForGeneration::setter_setMOperator (GALGAS_multipleBindingComparisonAST inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_comparisonMultipleBindingExpressionForGeneration::readProperty_mOperator (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_multipleBindingComparisonAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mOperator ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @comparisonMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionForGeneration::cPtr_comparisonMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mOperator (in_mOperator),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

void cPtr_comparisonMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@comparisonMultipleBindingExpressionForGeneration:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ("comparisonMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  const GALGAS_comparisonMultipleBindingExpressionForGeneration * p = (const GALGAS_comparisonMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::objectCompare (const GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak & GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::bang_comparisonMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
      result = GALGAS_comparisonMultipleBindingExpressionForGeneration ((cPtr_comparisonMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonMultipleBindingExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak ("comparisonMultipleBindingExpressionForGeneration-weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpressionForMultipleBinding (cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                              const GALGAS_bool constin_inPreferences,
                                                              const GALGAS_propertyMap constin_inRootObservablePropertyMap,
                                                              const GALGAS_semanticContext constin_inSemanticContext,
                                                              const GALGAS_propertyMap constin_inCurrentObservablePropertyMap,
                                                              const GALGAS_propertyMap constin_inPreferencesObservablePropertyMap,
                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & out_outEnableExpression,
                                                              GALGAS_typeKind & out_outType,
                                                              GALGAS_location & out_outErrorLocation,
                                                              C_Compiler * inCompiler
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
//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_expressionString (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship::cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship (const GALGAS_lstring inAssociatedValue0
                                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship::description (C_String & ioString,
                                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * ptr = dynamic_cast<const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST::GALGAS_arrayControllerBoundModelAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST GALGAS_arrayControllerBoundModelAST::constructor_rootToManyRelationship (const GALGAS_lstring & inAssociatedValue0
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundModelAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_rootToManyRelationship ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST GALGAS_arrayControllerBoundModelAST::constructor_selfToManyRelationship (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundModelAST result ;
  result.mEnum = kEnum_selfToManyRelationship ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBoundModelAST::method_rootToManyRelationship (GALGAS_lstring & outAssociatedValue0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_rootToManyRelationship) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @arrayControllerBoundModelAST rootToManyRelationship invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * ptr = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_arrayControllerBoundModelAST::optional_rootToManyRelationship (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_rootToManyRelationship ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) unsafePointer () ;
    // const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * ptr = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_arrayControllerBoundModelAST::optional_selfToManyRelationship () const {
  const bool ok = mEnum == kEnum_selfToManyRelationship ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_arrayControllerBoundModelAST [3] = {
  "(not built)",
  "rootToManyRelationship",
  "selfToManyRelationship"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerBoundModelAST::getter_isRootToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootToManyRelationship == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerBoundModelAST::getter_isSelfToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfToManyRelationship == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBoundModelAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<enum @arrayControllerBoundModelAST: " << gEnumNameArrayFor_arrayControllerBoundModelAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_arrayControllerBoundModelAST::objectCompare (const GALGAS_arrayControllerBoundModelAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerBoundModelAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ("arrayControllerBoundModelAST",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundModelAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerBoundModelAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundModelAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST GALGAS_arrayControllerBoundModelAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundModelAST result ;
  const GALGAS_arrayControllerBoundModelAST * p = (const GALGAS_arrayControllerBoundModelAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundModelAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundModelAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_arrayControllerDeclarationAST_2D_weak::objectCompare (const GALGAS_arrayControllerDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak::GALGAS_arrayControllerDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak & GALGAS_arrayControllerDeclarationAST_2D_weak::operator = (const GALGAS_arrayControllerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak::GALGAS_arrayControllerDeclarationAST_2D_weak (const GALGAS_arrayControllerDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak GALGAS_arrayControllerDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST_2D_weak::bang_arrayControllerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerDeclarationAST) ;
      result = GALGAS_arrayControllerDeclarationAST ((cPtr_arrayControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2D_weak ("arrayControllerDeclarationAST-weak",
                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak GALGAS_arrayControllerDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST_2D_weak result ;
  const GALGAS_arrayControllerDeclarationAST_2D_weak * p = (const GALGAS_arrayControllerDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @arrayControllerPropertyGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_arrayControllerPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayControllerPropertyGeneration * p = (const cPtr_arrayControllerPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_arrayControllerPropertyGeneration::objectCompare (const GALGAS_arrayControllerPropertyGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration::GALGAS_arrayControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayControllerPropertyGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration::GALGAS_arrayControllerPropertyGeneration (const cPtr_arrayControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerPropertyGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                                    const GALGAS_string & inAttribute_mModelString,
                                                                                                    const GALGAS_string & inAttribute_mOwnerName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mOwnerName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerPropertyGeneration (inAttribute_mPropertyName, inAttribute_mModelString, inAttribute_mOwnerName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerPropertyGeneration::setter_setMModelString (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerPropertyGeneration::readProperty_mModelString (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_arrayControllerPropertyGeneration::cPtr_arrayControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                const GALGAS_string & in_mModelString,
                                                                                const GALGAS_string & in_mOwnerName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mModelString (in_mModelString),
mProperty_mOwnerName (in_mOwnerName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

void cPtr_arrayControllerPropertyGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@arrayControllerPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ("arrayControllerPropertyGeneration",
                                                          & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration result ;
  const GALGAS_arrayControllerPropertyGeneration * p = (const GALGAS_arrayControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_arrayControllerPropertyGeneration_2D_weak::objectCompare (const GALGAS_arrayControllerPropertyGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak::GALGAS_arrayControllerPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak & GALGAS_arrayControllerPropertyGeneration_2D_weak::operator = (const GALGAS_arrayControllerPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak::GALGAS_arrayControllerPropertyGeneration_2D_weak (const GALGAS_arrayControllerPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak GALGAS_arrayControllerPropertyGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration_2D_weak::bang_arrayControllerPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerPropertyGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerPropertyGeneration) ;
      result = GALGAS_arrayControllerPropertyGeneration ((cPtr_arrayControllerPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerPropertyGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2D_weak ("arrayControllerPropertyGeneration-weak",
                                                                  & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak GALGAS_arrayControllerPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration_2D_weak result ;
  const GALGAS_arrayControllerPropertyGeneration_2D_weak * p = (const GALGAS_arrayControllerPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind::GALGAS_arrayControllerModelKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_entityArray (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_entityArray ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_transientArray (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_transientArray ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_arrayControllerModelKind::optional_entityArray () const {
  const bool ok = mEnum == kEnum_entityArray ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_arrayControllerModelKind::optional_transientArray () const {
  const bool ok = mEnum == kEnum_transientArray ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_arrayControllerModelKind [3] = {
  "(not built)",
  "entityArray",
  "transientArray"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerModelKind::description (C_String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString << "<enum @arrayControllerModelKind: " << gEnumNameArrayFor_arrayControllerModelKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_arrayControllerModelKind::objectCompare (const GALGAS_arrayControllerModelKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerModelKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerModelKind ("arrayControllerModelKind",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerModelKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerModelKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  const GALGAS_arrayControllerModelKind * p = (const GALGAS_arrayControllerModelKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerModelKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerModelKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_arrayControllerGeneration_2D_weak::objectCompare (const GALGAS_arrayControllerGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak::GALGAS_arrayControllerGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak & GALGAS_arrayControllerGeneration_2D_weak::operator = (const GALGAS_arrayControllerGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak::GALGAS_arrayControllerGeneration_2D_weak (const GALGAS_arrayControllerGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak GALGAS_arrayControllerGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration GALGAS_arrayControllerGeneration_2D_weak::bang_arrayControllerGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerGeneration) ;
      result = GALGAS_arrayControllerGeneration ((cPtr_arrayControllerGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerGeneration_2D_weak ("arrayControllerGeneration-weak",
                                                          & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak GALGAS_arrayControllerGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration_2D_weak result ;
  const GALGAS_arrayControllerGeneration_2D_weak * p = (const GALGAS_arrayControllerGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerBoundColumnListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST : public cCollectionElement {
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_bool & in_mEditable,
                                                                              const GALGAS_lstring & in_mPropertyName,
                                                                              const GALGAS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                              const GALGAS_lstring & in_mSortPropertyName
                                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_bool & in_mEditable,
                                                                                                                                        const GALGAS_lstring & in_mPropertyName,
                                                                                                                                        const GALGAS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                                                                        const GALGAS_lstring & in_mSortPropertyName
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEditable, in_mPropertyName, in_mColumnParameterListAST, in_mSortPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEditable, inElement.mProperty_mPropertyName, inElement.mProperty_mColumnParameterListAST, inElement.mProperty_mSortPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (mObject.mProperty_mEditable, mObject.mProperty_mPropertyName, mObject.mProperty_mColumnParameterListAST, mObject.mProperty_mSortPropertyName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEditable" ":" ;
  mObject.mProperty_mEditable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnParameterListAST" ":" ;
  mObject.mProperty_mColumnParameterListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSortPropertyName" ":" ;
  mObject.mProperty_mSortPropertyName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * operand = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST::GALGAS_autoLayoutTableViewControllerBoundColumnListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST::GALGAS_autoLayoutTableViewControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerBoundColumnListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                                          const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                                                          const GALGAS_lstring & inOperand3
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerBoundColumnListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutTableViewControllerBoundColumnListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                        const GALGAS_bool & in_mEditable,
                                                                                        const GALGAS_lstring & in_mPropertyName,
                                                                                        const GALGAS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                        const GALGAS_lstring & in_mSortPropertyName
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (in_mEditable,
                                                                                     in_mPropertyName,
                                                                                     in_mColumnParameterListAST,
                                                                                     in_mSortPropertyName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::addAssign_operation (const GALGAS_bool & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                  const GALGAS_lstring & inOperand3
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_append (GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element inElement,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                                                   const GALGAS_lstring inOperand1,
                                                                                   const GALGAS_astAutoLayoutViewInstructionParameterList inOperand2,
                                                                                   const GALGAS_lstring inOperand3,
                                                                                   const GALGAS_uint inInsertionIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                                                   GALGAS_lstring & outOperand1,
                                                                                   GALGAS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                                   GALGAS_lstring & outOperand3,
                                                                                   const GALGAS_uint inRemoveIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
        outOperand0 = p->mObject.mProperty_mEditable ;
        outOperand1 = p->mObject.mProperty_mPropertyName ;
        outOperand2 = p->mObject.mProperty_mColumnParameterListAST ;
        outOperand3 = p->mObject.mProperty_mSortPropertyName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_popFirst (GALGAS_bool & outOperand0,
                                                                              GALGAS_lstring & outOperand1,
                                                                              GALGAS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                              GALGAS_lstring & outOperand3,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mColumnParameterListAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_popLast (GALGAS_bool & outOperand0,
                                                                             GALGAS_lstring & outOperand1,
                                                                             GALGAS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                             GALGAS_lstring & outOperand3,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mColumnParameterListAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::method_first (GALGAS_bool & outOperand0,
                                                                           GALGAS_lstring & outOperand1,
                                                                           GALGAS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                           GALGAS_lstring & outOperand3,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mColumnParameterListAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::method_last (GALGAS_bool & outOperand0,
                                                                          GALGAS_lstring & outOperand1,
                                                                          GALGAS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                          GALGAS_lstring & outOperand3,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mColumnParameterListAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::add_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & inOperand,
                                                                                                                              C_Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result = GALGAS_autoLayoutTableViewControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result = GALGAS_autoLayoutTableViewControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result = GALGAS_autoLayoutTableViewControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::plusAssign_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST inOperand,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMEditableAtIndex (GALGAS_bool inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEditable = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mEditableAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mEditable ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                                             GALGAS_uint inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMColumnParameterListASTAtIndex (GALGAS_astAutoLayoutViewInstructionParameterList inOperand,
                                                                                                       GALGAS_uint inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnParameterListAST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mColumnParameterListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_astAutoLayoutViewInstructionParameterList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnParameterListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMSortPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                                                 GALGAS_uint inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mSortPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mSortPropertyName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::cEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & inEnumeratedObject,
                                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mEditable (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mEditable ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mColumnParameterListAST (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnParameterListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mSortPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mSortPropertyName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerBoundColumnListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ("autoLayoutTableViewControllerBoundColumnListAST",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerBoundColumnListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerBoundColumnListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerBoundColumnListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result ;
  const GALGAS_autoLayoutTableViewControllerBoundColumnListAST * p = (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerBoundColumnListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerBoundColumnListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerAttributListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerAttributListAST : public cCollectionElement {
  public: GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                           const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerAttributListAST::cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                                                                  const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerAttributListAST::cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerAttributListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerAttributListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerAttributListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerAttributListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeValue" ":" ;
  mObject.mProperty_mAttributeValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutTableViewControllerAttributListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * operand = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST::GALGAS_autoLayoutTableViewControllerAttributListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST::GALGAS_autoLayoutTableViewControllerAttributListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerAttributListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                    const GALGAS_abstractDefaultValue & inOperand1
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerAttributListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerAttributListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutTableViewControllerAttributListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_lstring & in_mAttributeName,
                                                                                     const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (in_mAttributeName,
                                                                                  in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                               const GALGAS_abstractDefaultValue & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_append (GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element inElement,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                                const GALGAS_abstractDefaultValue inOperand1,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                                GALGAS_abstractDefaultValue & outOperand1,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
        outOperand0 = p->mObject.mProperty_mAttributeName ;
        outOperand1 = p->mObject.mProperty_mAttributeValue ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                           GALGAS_abstractDefaultValue & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                          GALGAS_abstractDefaultValue & outOperand1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::method_first (GALGAS_lstring & outOperand0,
                                                                        GALGAS_abstractDefaultValue & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::method_last (GALGAS_lstring & outOperand0,
                                                                       GALGAS_abstractDefaultValue & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::add_operation (const GALGAS_autoLayoutTableViewControllerAttributListAST & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result = GALGAS_autoLayoutTableViewControllerAttributListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result = GALGAS_autoLayoutTableViewControllerAttributListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result = GALGAS_autoLayoutTableViewControllerAttributListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::plusAssign_operation (const GALGAS_autoLayoutTableViewControllerAttributListAST inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeValueAtIndex (GALGAS_abstractDefaultValue inOperand,
                                                                                            GALGAS_uint inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeValueAtIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerAttributListAST::cEnumerator_autoLayoutTableViewControllerAttributListAST (const GALGAS_autoLayoutTableViewControllerAttributListAST & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element cEnumerator_autoLayoutTableViewControllerAttributListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue cEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerAttributListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ("autoLayoutTableViewControllerAttributListAST",
                                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerAttributListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerAttributListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerAttributListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerAttributListAST result ;
  const GALGAS_autoLayoutTableViewControllerAttributListAST * p = (const GALGAS_autoLayoutTableViewControllerAttributListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerAttributListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerAttributListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::objectCompare (const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak & GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::operator = (const GALGAS_autoLayoutTableViewControllerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (const GALGAS_autoLayoutTableViewControllerDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::bang_autoLayoutTableViewControllerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
      result = GALGAS_autoLayoutTableViewControllerDeclarationAST ((cPtr_autoLayoutTableViewControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak ("autoLayoutTableViewControllerDeclarationAST-weak",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak result ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak * p = (const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerPropertyGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutTableViewControllerPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (const cPtr_autoLayoutTableViewControllerPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutTableViewControllerPropertyGeneration::objectCompare (const GALGAS_autoLayoutTableViewControllerPropertyGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration::GALGAS_autoLayoutTableViewControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration GALGAS_autoLayoutTableViewControllerPropertyGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerPropertyGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                                  GALGAS_string::constructor_default (HERE),
                                                                                  GALGAS_string::constructor_default (HERE)
                                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration::GALGAS_autoLayoutTableViewControllerPropertyGeneration (const cPtr_autoLayoutTableViewControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration GALGAS_autoLayoutTableViewControllerPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                                                                const GALGAS_string & inAttribute_mModelString,
                                                                                                                                const GALGAS_string & inAttribute_mOwnerName
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mOwnerName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerPropertyGeneration (inAttribute_mPropertyName, inAttribute_mModelString, inAttribute_mOwnerName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerPropertyGeneration::setter_setMModelString (GALGAS_string inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerPropertyGeneration::readProperty_mModelString (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerPropertyGeneration::cPtr_autoLayoutTableViewControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                                            const GALGAS_string & in_mModelString,
                                                                                                            const GALGAS_string & in_mOwnerName
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mModelString (in_mModelString),
mProperty_mOwnerName (in_mOwnerName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutTableViewControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ;
}

void cPtr_autoLayoutTableViewControllerPropertyGeneration::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "[@autoLayoutTableViewControllerPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutTableViewControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ("autoLayoutTableViewControllerPropertyGeneration",
                                                                        & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration GALGAS_autoLayoutTableViewControllerPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerPropertyGeneration result ;
  const GALGAS_autoLayoutTableViewControllerPropertyGeneration * p = (const GALGAS_autoLayoutTableViewControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak & GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::operator = (const GALGAS_autoLayoutTableViewControllerPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak (const GALGAS_autoLayoutTableViewControllerPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::bang_autoLayoutTableViewControllerPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerPropertyGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
      result = GALGAS_autoLayoutTableViewControllerPropertyGeneration ((cPtr_autoLayoutTableViewControllerPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerPropertyGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak ("autoLayoutTableViewControllerPropertyGeneration-weak",
                                                                                & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak result ;
  const GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak * p = (const GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind::GALGAS_autoLayoutTableViewControllerModelKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind GALGAS_autoLayoutTableViewControllerModelKind::constructor_entityArray (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerModelKind result ;
  result.mEnum = kEnum_entityArray ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind GALGAS_autoLayoutTableViewControllerModelKind::constructor_transientArray (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerModelKind result ;
  result.mEnum = kEnum_transientArray ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutTableViewControllerModelKind::optional_entityArray () const {
  const bool ok = mEnum == kEnum_entityArray ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutTableViewControllerModelKind::optional_transientArray () const {
  const bool ok = mEnum == kEnum_transientArray ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autoLayoutTableViewControllerModelKind [3] = {
  "(not built)",
  "entityArray",
  "transientArray"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerModelKind::description (C_String & ioString,
                                                                 const int32_t /* inIndentation */) const {
  ioString << "<enum @autoLayoutTableViewControllerModelKind: " << gEnumNameArrayFor_autoLayoutTableViewControllerModelKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutTableViewControllerModelKind::objectCompare (const GALGAS_autoLayoutTableViewControllerModelKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerModelKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ("autoLayoutTableViewControllerModelKind",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerModelKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind GALGAS_autoLayoutTableViewControllerModelKind::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerModelKind result ;
  const GALGAS_autoLayoutTableViewControllerModelKind * p = (const GALGAS_autoLayoutTableViewControllerModelKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerModelKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerModelKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerBoundColumnListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration : public cCollectionElement {
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_bool & in_mEditable,
                                                                                        const GALGAS_string & in_mSortPropertyName,
                                                                                        const GALGAS_string & in_mDisplayedPropertyName,
                                                                                        const GALGAS_string & in_mColumnObjectTypeName,
                                                                                        const GALGAS_string & in_mRunAction,
                                                                                        const GALGAS__32_stringlist & in_mActualParameterList
                                                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_bool & in_mEditable,
                                                                                                                                                            const GALGAS_string & in_mSortPropertyName,
                                                                                                                                                            const GALGAS_string & in_mDisplayedPropertyName,
                                                                                                                                                            const GALGAS_string & in_mColumnObjectTypeName,
                                                                                                                                                            const GALGAS_string & in_mRunAction,
                                                                                                                                                            const GALGAS__32_stringlist & in_mActualParameterList
                                                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEditable, in_mSortPropertyName, in_mDisplayedPropertyName, in_mColumnObjectTypeName, in_mRunAction, in_mActualParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEditable, inElement.mProperty_mSortPropertyName, inElement.mProperty_mDisplayedPropertyName, inElement.mProperty_mColumnObjectTypeName, inElement.mProperty_mRunAction, inElement.mProperty_mActualParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (mObject.mProperty_mEditable, mObject.mProperty_mSortPropertyName, mObject.mProperty_mDisplayedPropertyName, mObject.mProperty_mColumnObjectTypeName, mObject.mProperty_mRunAction, mObject.mProperty_mActualParameterList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEditable" ":" ;
  mObject.mProperty_mEditable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSortPropertyName" ":" ;
  mObject.mProperty_mSortPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDisplayedPropertyName" ":" ;
  mObject.mProperty_mDisplayedPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnObjectTypeName" ":" ;
  mObject.mProperty_mColumnObjectTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRunAction" ":" ;
  mObject.mProperty_mRunAction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActualParameterList" ":" ;
  mObject.mProperty_mActualParameterList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * operand = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                                                              const GALGAS_string & inOperand3,
                                                                                                                                                              const GALGAS_string & inOperand4,
                                                                                                                                                              const GALGAS__32_stringlist & inOperand5
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                                  const GALGAS_bool & in_mEditable,
                                                                                                  const GALGAS_string & in_mSortPropertyName,
                                                                                                  const GALGAS_string & in_mDisplayedPropertyName,
                                                                                                  const GALGAS_string & in_mColumnObjectTypeName,
                                                                                                  const GALGAS_string & in_mRunAction,
                                                                                                  const GALGAS__32_stringlist & in_mActualParameterList
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (in_mEditable,
                                                                                               in_mSortPropertyName,
                                                                                               in_mDisplayedPropertyName,
                                                                                               in_mColumnObjectTypeName,
                                                                                               in_mRunAction,
                                                                                               in_mActualParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::addAssign_operation (const GALGAS_bool & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_string & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_string & inOperand4,
                                                                                            const GALGAS__32_stringlist & inOperand5
                                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_append (GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element inElement,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                                                             const GALGAS_string inOperand1,
                                                                                             const GALGAS_string inOperand2,
                                                                                             const GALGAS_string inOperand3,
                                                                                             const GALGAS_string inOperand4,
                                                                                             const GALGAS__32_stringlist inOperand5,
                                                                                             const GALGAS_uint inInsertionIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                                                             GALGAS_string & outOperand1,
                                                                                             GALGAS_string & outOperand2,
                                                                                             GALGAS_string & outOperand3,
                                                                                             GALGAS_string & outOperand4,
                                                                                             GALGAS__32_stringlist & outOperand5,
                                                                                             const GALGAS_uint inRemoveIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mEditable ;
        outOperand1 = p->mObject.mProperty_mSortPropertyName ;
        outOperand2 = p->mObject.mProperty_mDisplayedPropertyName ;
        outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
        outOperand4 = p->mObject.mProperty_mRunAction ;
        outOperand5 = p->mObject.mProperty_mActualParameterList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_popFirst (GALGAS_bool & outOperand0,
                                                                                        GALGAS_string & outOperand1,
                                                                                        GALGAS_string & outOperand2,
                                                                                        GALGAS_string & outOperand3,
                                                                                        GALGAS_string & outOperand4,
                                                                                        GALGAS__32_stringlist & outOperand5,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mSortPropertyName ;
    outOperand2 = p->mObject.mProperty_mDisplayedPropertyName ;
    outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
    outOperand4 = p->mObject.mProperty_mRunAction ;
    outOperand5 = p->mObject.mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_popLast (GALGAS_bool & outOperand0,
                                                                                       GALGAS_string & outOperand1,
                                                                                       GALGAS_string & outOperand2,
                                                                                       GALGAS_string & outOperand3,
                                                                                       GALGAS_string & outOperand4,
                                                                                       GALGAS__32_stringlist & outOperand5,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mSortPropertyName ;
    outOperand2 = p->mObject.mProperty_mDisplayedPropertyName ;
    outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
    outOperand4 = p->mObject.mProperty_mRunAction ;
    outOperand5 = p->mObject.mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::method_first (GALGAS_bool & outOperand0,
                                                                                     GALGAS_string & outOperand1,
                                                                                     GALGAS_string & outOperand2,
                                                                                     GALGAS_string & outOperand3,
                                                                                     GALGAS_string & outOperand4,
                                                                                     GALGAS__32_stringlist & outOperand5,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mSortPropertyName ;
    outOperand2 = p->mObject.mProperty_mDisplayedPropertyName ;
    outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
    outOperand4 = p->mObject.mProperty_mRunAction ;
    outOperand5 = p->mObject.mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::method_last (GALGAS_bool & outOperand0,
                                                                                    GALGAS_string & outOperand1,
                                                                                    GALGAS_string & outOperand2,
                                                                                    GALGAS_string & outOperand3,
                                                                                    GALGAS_string & outOperand4,
                                                                                    GALGAS__32_stringlist & outOperand5,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mSortPropertyName ;
    outOperand2 = p->mObject.mProperty_mDisplayedPropertyName ;
    outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
    outOperand4 = p->mObject.mProperty_mRunAction ;
    outOperand5 = p->mObject.mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::add_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand,
                                                                                                                                                  C_Compiler * /* inCompiler */
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::plusAssign_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration inOperand,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMEditableAtIndex (GALGAS_bool inOperand,
                                                                                                   GALGAS_uint inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEditable = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mEditableAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mEditable ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMSortPropertyNameAtIndex (GALGAS_string inOperand,
                                                                                                           GALGAS_uint inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mSortPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mSortPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMDisplayedPropertyNameAtIndex (GALGAS_string inOperand,
                                                                                                                GALGAS_uint inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDisplayedPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mDisplayedPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mDisplayedPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMColumnObjectTypeNameAtIndex (GALGAS_string inOperand,
                                                                                                               GALGAS_uint inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnObjectTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mColumnObjectTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnObjectTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMRunActionAtIndex (GALGAS_string inOperand,
                                                                                                    GALGAS_uint inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRunAction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mRunActionAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRunAction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMActualParameterListAtIndex (GALGAS__32_stringlist inOperand,
                                                                                                              GALGAS_uint inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualParameterList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mActualParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mActualParameterList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mEditable (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mEditable ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mSortPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mSortPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mDisplayedPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mDisplayedPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mColumnObjectTypeName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnObjectTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mRunAction (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRunAction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mActualParameterList (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mActualParameterList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerBoundColumnListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration ("autoLayoutTableViewControllerBoundColumnListForGeneration",
                                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerBoundColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerSortedColumnListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration : public cCollectionElement {
  public: GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                         const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                         const GALGAS_string & in_mObservablePropertyForSorting
                                                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                                                                                              const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                                                                                              const GALGAS_string & in_mObservablePropertyForSorting
                                                                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mSortPropertyKind, in_mObservablePropertyForSorting) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mSortPropertyKind, inElement.mProperty_mObservablePropertyForSorting) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (mObject.mProperty_mColumnName, mObject.mProperty_mSortPropertyKind, mObject.mProperty_mObservablePropertyForSorting COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mProperty_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSortPropertyKind" ":" ;
  mObject.mProperty_mSortPropertyKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObservablePropertyForSorting" ":" ;
  mObject.mProperty_mObservablePropertyForSorting.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * operand = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                                                const GALGAS_propertyKind & inOperand1,
                                                                                                                                                                const GALGAS_string & inOperand2
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                                   const GALGAS_string & in_mColumnName,
                                                                                                   const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                                   const GALGAS_string & in_mObservablePropertyForSorting
                                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (in_mColumnName,
                                                                                                in_mSortPropertyKind,
                                                                                                in_mObservablePropertyForSorting COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                             const GALGAS_propertyKind & inOperand1,
                                                                                             const GALGAS_string & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_append (GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element inElement,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                              const GALGAS_propertyKind inOperand1,
                                                                                              const GALGAS_string inOperand2,
                                                                                              const GALGAS_uint inInsertionIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                              GALGAS_propertyKind & outOperand1,
                                                                                              GALGAS_string & outOperand2,
                                                                                              const GALGAS_uint inRemoveIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mColumnName ;
        outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
        outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                                         GALGAS_propertyKind & outOperand1,
                                                                                         GALGAS_string & outOperand2,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                                        GALGAS_propertyKind & outOperand1,
                                                                                        GALGAS_string & outOperand2,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                                      GALGAS_propertyKind & outOperand1,
                                                                                      GALGAS_string & outOperand2,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                                     GALGAS_propertyKind & outOperand1,
                                                                                     GALGAS_string & outOperand2,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::add_operation (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand,
                                                                                                                                                    C_Compiler * /* inCompiler */
                                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::plusAssign_operation (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration inOperand,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_setMColumnNameAtIndex (GALGAS_string inOperand,
                                                                                                      GALGAS_uint inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_setMSortPropertyKindAtIndex (GALGAS_propertyKind inOperand,
                                                                                                            GALGAS_uint inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortPropertyKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_mSortPropertyKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mSortPropertyKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_setMObservablePropertyForSortingAtIndex (GALGAS_string inOperand,
                                                                                                                        GALGAS_uint inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObservablePropertyForSorting = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_mObservablePropertyForSortingAtIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & inEnumeratedObject,
                                                                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mSortPropertyKind (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mSortPropertyKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mObservablePropertyForSorting (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mObservablePropertyForSorting ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerSortedColumnListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration ("autoLayoutTableViewControllerSortedColumnListForGeneration",
                                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerSortedColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutTableViewControllerGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::GALGAS_autoLayoutTableViewControllerGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak & GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::operator = (const GALGAS_autoLayoutTableViewControllerGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::GALGAS_autoLayoutTableViewControllerGeneration_2D_weak (const GALGAS_autoLayoutTableViewControllerGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::bang_autoLayoutTableViewControllerGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutTableViewControllerGeneration) ;
      result = GALGAS_autoLayoutTableViewControllerGeneration ((cPtr_autoLayoutTableViewControllerGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration_2D_weak ("autoLayoutTableViewControllerGeneration-weak",
                                                                        & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerGeneration_2D_weak result ;
  const GALGAS_autoLayoutTableViewControllerGeneration_2D_weak * p = (const GALGAS_autoLayoutTableViewControllerGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selectionControllerDeclarationAST_2D_weak::objectCompare (const GALGAS_selectionControllerDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST_2D_weak::GALGAS_selectionControllerDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST_2D_weak & GALGAS_selectionControllerDeclarationAST_2D_weak::operator = (const GALGAS_selectionControllerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST_2D_weak::GALGAS_selectionControllerDeclarationAST_2D_weak (const GALGAS_selectionControllerDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST_2D_weak GALGAS_selectionControllerDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST_2D_weak::bang_selectionControllerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectionControllerDeclarationAST) ;
      result = GALGAS_selectionControllerDeclarationAST ((cPtr_selectionControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@selectionControllerDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerDeclarationAST_2D_weak ("selectionControllerDeclarationAST-weak",
                                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST_2D_weak GALGAS_selectionControllerDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST_2D_weak result ;
  const GALGAS_selectionControllerDeclarationAST_2D_weak * p = (const GALGAS_selectionControllerDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @selectionControllerPropertyGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selectionControllerPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectionControllerPropertyGeneration * p = (const cPtr_selectionControllerPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelControllerName.objectCompare (p->mProperty_mModelControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelControllerPropertyName.objectCompare (p->mProperty_mModelControllerPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selectionControllerPropertyGeneration::objectCompare (const GALGAS_selectionControllerPropertyGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration::GALGAS_selectionControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration GALGAS_selectionControllerPropertyGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectionControllerPropertyGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration::GALGAS_selectionControllerPropertyGeneration (const cPtr_selectionControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerPropertyGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration GALGAS_selectionControllerPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                                            const GALGAS_string & inAttribute_mOwnerName,
                                                                                                            const GALGAS_string & inAttribute_mModelControllerName,
                                                                                                            const GALGAS_string & inAttribute_mModelControllerPropertyName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mOwnerName.isValid () && inAttribute_mModelControllerName.isValid () && inAttribute_mModelControllerPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectionControllerPropertyGeneration (inAttribute_mPropertyName, inAttribute_mOwnerName, inAttribute_mModelControllerName, inAttribute_mModelControllerPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerPropertyGeneration::setter_setMModelControllerName (GALGAS_string inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    p->mProperty_mModelControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerPropertyGeneration::setter_setMModelControllerPropertyName (GALGAS_string inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    p->mProperty_mModelControllerPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerPropertyGeneration::readProperty_mModelControllerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    return p->mProperty_mModelControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerPropertyGeneration::readProperty_mModelControllerPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    return p->mProperty_mModelControllerPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selectionControllerPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selectionControllerPropertyGeneration::cPtr_selectionControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                        const GALGAS_string & in_mOwnerName,
                                                                                        const GALGAS_string & in_mModelControllerName,
                                                                                        const GALGAS_string & in_mModelControllerPropertyName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mModelControllerName (in_mModelControllerName),
mProperty_mModelControllerPropertyName (in_mModelControllerPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectionControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ;
}

void cPtr_selectionControllerPropertyGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@selectionControllerPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelControllerPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectionControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectionControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mOwnerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@selectionControllerPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ("selectionControllerPropertyGeneration",
                                                              & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration GALGAS_selectionControllerPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerPropertyGeneration result ;
  const GALGAS_selectionControllerPropertyGeneration * p = (const GALGAS_selectionControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selectionControllerPropertyGeneration_2D_weak::objectCompare (const GALGAS_selectionControllerPropertyGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration_2D_weak::GALGAS_selectionControllerPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration_2D_weak & GALGAS_selectionControllerPropertyGeneration_2D_weak::operator = (const GALGAS_selectionControllerPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration_2D_weak::GALGAS_selectionControllerPropertyGeneration_2D_weak (const GALGAS_selectionControllerPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration_2D_weak GALGAS_selectionControllerPropertyGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_selectionControllerPropertyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration GALGAS_selectionControllerPropertyGeneration_2D_weak::bang_selectionControllerPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerPropertyGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectionControllerPropertyGeneration) ;
      result = GALGAS_selectionControllerPropertyGeneration ((cPtr_selectionControllerPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@selectionControllerPropertyGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration_2D_weak ("selectionControllerPropertyGeneration-weak",
                                                                      & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration_2D_weak GALGAS_selectionControllerPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerPropertyGeneration_2D_weak result ;
  const GALGAS_selectionControllerPropertyGeneration_2D_weak * p = (const GALGAS_selectionControllerPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@selectionControllerForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_selectionControllerForGeneration : public cCollectionElement {
  public: GALGAS_selectionControllerForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_selectionControllerForGeneration (const GALGAS_string & in_mOwnerName,
                                                               const GALGAS_string & in_mSelectionControllerName,
                                                               const GALGAS_string & in_mBoundControllerName,
                                                               const GALGAS_string & in_mBoundControllerPropertyName,
                                                               const GALGAS_string & in_mBaseTypeName,
                                                               const GALGAS_string & in_mSelectionTypeName,
                                                               const GALGAS_propertyMap & in_mSelectionObservablePropertyMap,
                                                               const GALGAS_propertyGenerationList & in_mPropertyGenerationList
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_selectionControllerForGeneration::cCollectionElement_selectionControllerForGeneration (const GALGAS_string & in_mOwnerName,
                                                                                                          const GALGAS_string & in_mSelectionControllerName,
                                                                                                          const GALGAS_string & in_mBoundControllerName,
                                                                                                          const GALGAS_string & in_mBoundControllerPropertyName,
                                                                                                          const GALGAS_string & in_mBaseTypeName,
                                                                                                          const GALGAS_string & in_mSelectionTypeName,
                                                                                                          const GALGAS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                                                          const GALGAS_propertyGenerationList & in_mPropertyGenerationList
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOwnerName, in_mSelectionControllerName, in_mBoundControllerName, in_mBoundControllerPropertyName, in_mBaseTypeName, in_mSelectionTypeName, in_mSelectionObservablePropertyMap, in_mPropertyGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_selectionControllerForGeneration::cCollectionElement_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOwnerName, inElement.mProperty_mSelectionControllerName, inElement.mProperty_mBoundControllerName, inElement.mProperty_mBoundControllerPropertyName, inElement.mProperty_mBaseTypeName, inElement.mProperty_mSelectionTypeName, inElement.mProperty_mSelectionObservablePropertyMap, inElement.mProperty_mPropertyGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_selectionControllerForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_selectionControllerForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_selectionControllerForGeneration (mObject.mProperty_mOwnerName, mObject.mProperty_mSelectionControllerName, mObject.mProperty_mBoundControllerName, mObject.mProperty_mBoundControllerPropertyName, mObject.mProperty_mBaseTypeName, mObject.mProperty_mSelectionTypeName, mObject.mProperty_mSelectionObservablePropertyMap, mObject.mProperty_mPropertyGenerationList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_selectionControllerForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOwnerName" ":" ;
  mObject.mProperty_mOwnerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectionControllerName" ":" ;
  mObject.mProperty_mSelectionControllerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundControllerName" ":" ;
  mObject.mProperty_mBoundControllerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundControllerPropertyName" ":" ;
  mObject.mProperty_mBoundControllerPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBaseTypeName" ":" ;
  mObject.mProperty_mBaseTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectionTypeName" ":" ;
  mObject.mProperty_mSelectionTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectionObservablePropertyMap" ":" ;
  mObject.mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyGenerationList" ":" ;
  mObject.mProperty_mPropertyGenerationList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_selectionControllerForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_selectionControllerForGeneration * operand = (cCollectionElement_selectionControllerForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_selectionControllerForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration::GALGAS_selectionControllerForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration::GALGAS_selectionControllerForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_selectionControllerForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                            const GALGAS_string & inOperand1,
                                                                                                            const GALGAS_string & inOperand2,
                                                                                                            const GALGAS_string & inOperand3,
                                                                                                            const GALGAS_string & inOperand4,
                                                                                                            const GALGAS_string & inOperand5,
                                                                                                            const GALGAS_propertyMap & inOperand6,
                                                                                                            const GALGAS_propertyGenerationList & inOperand7
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_selectionControllerForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_selectionControllerForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_string & in_mOwnerName,
                                                                         const GALGAS_string & in_mSelectionControllerName,
                                                                         const GALGAS_string & in_mBoundControllerName,
                                                                         const GALGAS_string & in_mBoundControllerPropertyName,
                                                                         const GALGAS_string & in_mBaseTypeName,
                                                                         const GALGAS_string & in_mSelectionTypeName,
                                                                         const GALGAS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                         const GALGAS_propertyGenerationList & in_mPropertyGenerationList
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_selectionControllerForGeneration (in_mOwnerName,
                                                                      in_mSelectionControllerName,
                                                                      in_mBoundControllerName,
                                                                      in_mBoundControllerPropertyName,
                                                                      in_mBaseTypeName,
                                                                      in_mSelectionTypeName,
                                                                      in_mSelectionObservablePropertyMap,
                                                                      in_mPropertyGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                   const GALGAS_string & inOperand1,
                                                                   const GALGAS_string & inOperand2,
                                                                   const GALGAS_string & inOperand3,
                                                                   const GALGAS_string & inOperand4,
                                                                   const GALGAS_string & inOperand5,
                                                                   const GALGAS_propertyMap & inOperand6,
                                                                   const GALGAS_propertyGenerationList & inOperand7
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_append (GALGAS_selectionControllerForGeneration_2D_element inElement,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                    const GALGAS_string inOperand1,
                                                                    const GALGAS_string inOperand2,
                                                                    const GALGAS_string inOperand3,
                                                                    const GALGAS_string inOperand4,
                                                                    const GALGAS_string inOperand5,
                                                                    const GALGAS_propertyMap inOperand6,
                                                                    const GALGAS_propertyGenerationList inOperand7,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_string & outOperand3,
                                                                    GALGAS_string & outOperand4,
                                                                    GALGAS_string & outOperand5,
                                                                    GALGAS_propertyMap & outOperand6,
                                                                    GALGAS_propertyGenerationList & outOperand7,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        outOperand7.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
        outOperand0 = p->mObject.mProperty_mOwnerName ;
        outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
        outOperand2 = p->mObject.mProperty_mBoundControllerName ;
        outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
        outOperand4 = p->mObject.mProperty_mBaseTypeName ;
        outOperand5 = p->mObject.mProperty_mSelectionTypeName ;
        outOperand6 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
        outOperand7 = p->mObject.mProperty_mPropertyGenerationList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               GALGAS_string & outOperand3,
                                                               GALGAS_string & outOperand4,
                                                               GALGAS_string & outOperand5,
                                                               GALGAS_propertyMap & outOperand6,
                                                               GALGAS_propertyGenerationList & outOperand7,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mBaseTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand6 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
    outOperand7 = p->mObject.mProperty_mPropertyGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              GALGAS_string & outOperand2,
                                                              GALGAS_string & outOperand3,
                                                              GALGAS_string & outOperand4,
                                                              GALGAS_string & outOperand5,
                                                              GALGAS_propertyMap & outOperand6,
                                                              GALGAS_propertyGenerationList & outOperand7,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mBaseTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand6 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
    outOperand7 = p->mObject.mProperty_mPropertyGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::method_first (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            GALGAS_string & outOperand4,
                                                            GALGAS_string & outOperand5,
                                                            GALGAS_propertyMap & outOperand6,
                                                            GALGAS_propertyGenerationList & outOperand7,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mBaseTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand6 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
    outOperand7 = p->mObject.mProperty_mPropertyGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::method_last (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_string & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           GALGAS_string & outOperand4,
                                                           GALGAS_string & outOperand5,
                                                           GALGAS_propertyMap & outOperand6,
                                                           GALGAS_propertyGenerationList & outOperand7,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mBaseTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand6 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
    outOperand7 = p->mObject.mProperty_mPropertyGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::add_operation (const GALGAS_selectionControllerForGeneration & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result = GALGAS_selectionControllerForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result = GALGAS_selectionControllerForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result = GALGAS_selectionControllerForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::plusAssign_operation (const GALGAS_selectionControllerForGeneration inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMOwnerNameAtIndex (GALGAS_string inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOwnerName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mOwnerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mOwnerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMSelectionControllerNameAtIndex (GALGAS_string inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelectionControllerName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mSelectionControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionControllerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMBoundControllerNameAtIndex (GALGAS_string inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBoundControllerName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mBoundControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBoundControllerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMBoundControllerPropertyNameAtIndex (GALGAS_string inOperand,
                                                                                             GALGAS_uint inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBoundControllerPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mBoundControllerPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBoundControllerPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMBaseTypeNameAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBaseTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mBaseTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBaseTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMSelectionTypeNameAtIndex (GALGAS_string inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelectionTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mSelectionTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMSelectionObservablePropertyMapAtIndex (GALGAS_propertyMap inOperand,
                                                                                                GALGAS_uint inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelectionObservablePropertyMap = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_selectionControllerForGeneration::getter_mSelectionObservablePropertyMapAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_propertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMPropertyGenerationListAtIndex (GALGAS_propertyGenerationList inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyGenerationList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_selectionControllerForGeneration::getter_mPropertyGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_propertyGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mPropertyGenerationList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_selectionControllerForGeneration::cEnumerator_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration_2D_element cEnumerator_selectionControllerForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mOwnerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mOwnerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mSelectionControllerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mBoundControllerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBoundControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mBoundControllerPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBoundControllerPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mBaseTypeName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBaseTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mSelectionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap cEnumerator_selectionControllerForGeneration::current_mSelectionObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionObservablePropertyMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList cEnumerator_selectionControllerForGeneration::current_mPropertyGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mPropertyGenerationList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@selectionControllerForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerForGeneration ("selectionControllerForGeneration",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration result ;
  const GALGAS_selectionControllerForGeneration * p = (const GALGAS_selectionControllerForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractDefaultValue_2D_weak::objectCompare (const GALGAS_abstractDefaultValue_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue_2D_weak::GALGAS_abstractDefaultValue_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue_2D_weak & GALGAS_abstractDefaultValue_2D_weak::operator = (const GALGAS_abstractDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue_2D_weak::GALGAS_abstractDefaultValue_2D_weak (const GALGAS_abstractDefaultValue & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue_2D_weak GALGAS_abstractDefaultValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_abstractDefaultValue_2D_weak::bang_abstractDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractDefaultValue result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractDefaultValue) ;
      result = GALGAS_abstractDefaultValue ((cPtr_abstractDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractDefaultValue-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak ("abstractDefaultValue-weak",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue_2D_weak GALGAS_abstractDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractDefaultValue_2D_weak result ;
  const GALGAS_abstractDefaultValue_2D_weak * p = (const GALGAS_abstractDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolAsDefaultValue_2D_weak::objectCompare (const GALGAS_boolAsDefaultValue_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue_2D_weak::GALGAS_boolAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue_2D_weak & GALGAS_boolAsDefaultValue_2D_weak::operator = (const GALGAS_boolAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue_2D_weak::GALGAS_boolAsDefaultValue_2D_weak (const GALGAS_boolAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue_2D_weak GALGAS_boolAsDefaultValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue_2D_weak::bang_boolAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolAsDefaultValue result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolAsDefaultValue) ;
      result = GALGAS_boolAsDefaultValue ((cPtr_boolAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@boolAsDefaultValue-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolAsDefaultValue_2D_weak ("boolAsDefaultValue-weak",
                                                   & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolAsDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolAsDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolAsDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue_2D_weak GALGAS_boolAsDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue_2D_weak result ;
  const GALGAS_boolAsDefaultValue_2D_weak * p = (const GALGAS_boolAsDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolAsDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolAsDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_doubleAsDefaultValue_2D_weak::objectCompare (const GALGAS_doubleAsDefaultValue_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue_2D_weak::GALGAS_doubleAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue_2D_weak & GALGAS_doubleAsDefaultValue_2D_weak::operator = (const GALGAS_doubleAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue_2D_weak::GALGAS_doubleAsDefaultValue_2D_weak (const GALGAS_doubleAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue_2D_weak GALGAS_doubleAsDefaultValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_doubleAsDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue GALGAS_doubleAsDefaultValue_2D_weak::bang_doubleAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_doubleAsDefaultValue result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_doubleAsDefaultValue) ;
      result = GALGAS_doubleAsDefaultValue ((cPtr_doubleAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@doubleAsDefaultValue-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_doubleAsDefaultValue_2D_weak ("doubleAsDefaultValue-weak",
                                                     & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_doubleAsDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_doubleAsDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_doubleAsDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue_2D_weak GALGAS_doubleAsDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_doubleAsDefaultValue_2D_weak result ;
  const GALGAS_doubleAsDefaultValue_2D_weak * p = (const GALGAS_doubleAsDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_doubleAsDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doubleAsDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @integerAsDefaultValue reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_integerAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerAsDefaultValue * p = (const cPtr_integerAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNegative.objectCompare (p->mProperty_mNegative) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_integerAsDefaultValue::objectCompare (const GALGAS_integerAsDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue::GALGAS_integerAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerAsDefaultValue::constructor_new (GALGAS_luint::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue::GALGAS_integerAsDefaultValue (const cPtr_integerAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerAsDefaultValue) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::constructor_new (const GALGAS_luint & inAttribute_mValue,
                                                                            const GALGAS_bool & inAttribute_mNegative
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue result ;
  if (inAttribute_mValue.isValid () && inAttribute_mNegative.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerAsDefaultValue (inAttribute_mValue, inAttribute_mNegative COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_integerAsDefaultValue::setter_setMValue (GALGAS_luint inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_integerAsDefaultValue::setter_setMNegative (GALGAS_bool inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    p->mProperty_mNegative = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_integerAsDefaultValue::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_integerAsDefaultValue::readProperty_mNegative (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    return p->mProperty_mNegative ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @integerAsDefaultValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_integerAsDefaultValue::cPtr_integerAsDefaultValue (const GALGAS_luint & in_mValue,
                                                        const GALGAS_bool & in_mNegative
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue),
mProperty_mNegative (in_mNegative) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_integerAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue ;
}

void cPtr_integerAsDefaultValue::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@integerAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNegative.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_integerAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerAsDefaultValue (mProperty_mValue, mProperty_mNegative COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@integerAsDefaultValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerAsDefaultValue ("integerAsDefaultValue",
                                              & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerAsDefaultValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue result ;
  const GALGAS_integerAsDefaultValue * p = (const GALGAS_integerAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_integerAsDefaultValue_2D_weak::objectCompare (const GALGAS_integerAsDefaultValue_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue_2D_weak::GALGAS_integerAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue_2D_weak & GALGAS_integerAsDefaultValue_2D_weak::operator = (const GALGAS_integerAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue_2D_weak::GALGAS_integerAsDefaultValue_2D_weak (const GALGAS_integerAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue_2D_weak GALGAS_integerAsDefaultValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue_2D_weak::bang_integerAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_integerAsDefaultValue result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_integerAsDefaultValue) ;
      result = GALGAS_integerAsDefaultValue ((cPtr_integerAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@integerAsDefaultValue-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerAsDefaultValue_2D_weak ("integerAsDefaultValue-weak",
                                                      & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerAsDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerAsDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerAsDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue_2D_weak GALGAS_integerAsDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue_2D_weak result ;
  const GALGAS_integerAsDefaultValue_2D_weak * p = (const GALGAS_integerAsDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerAsDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerAsDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_stringAsDefaultValue_2D_weak::objectCompare (const GALGAS_stringAsDefaultValue_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue_2D_weak::GALGAS_stringAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue_2D_weak & GALGAS_stringAsDefaultValue_2D_weak::operator = (const GALGAS_stringAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue_2D_weak::GALGAS_stringAsDefaultValue_2D_weak (const GALGAS_stringAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue_2D_weak GALGAS_stringAsDefaultValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue_2D_weak::bang_stringAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_stringAsDefaultValue result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_stringAsDefaultValue) ;
      result = GALGAS_stringAsDefaultValue ((cPtr_stringAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@stringAsDefaultValue-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringAsDefaultValue_2D_weak ("stringAsDefaultValue-weak",
                                                     & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_stringAsDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_stringAsDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringAsDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue_2D_weak GALGAS_stringAsDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue_2D_weak result ;
  const GALGAS_stringAsDefaultValue_2D_weak * p = (const GALGAS_stringAsDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringAsDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringAsDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_identifierAsDefaultValue_2D_weak::objectCompare (const GALGAS_identifierAsDefaultValue_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue_2D_weak::GALGAS_identifierAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue_2D_weak & GALGAS_identifierAsDefaultValue_2D_weak::operator = (const GALGAS_identifierAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue_2D_weak::GALGAS_identifierAsDefaultValue_2D_weak (const GALGAS_identifierAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue_2D_weak GALGAS_identifierAsDefaultValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue_2D_weak::bang_identifierAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_identifierAsDefaultValue result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_identifierAsDefaultValue) ;
      result = GALGAS_identifierAsDefaultValue ((cPtr_identifierAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@identifierAsDefaultValue-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_identifierAsDefaultValue_2D_weak ("identifierAsDefaultValue-weak",
                                                         & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_identifierAsDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_identifierAsDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_identifierAsDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue_2D_weak GALGAS_identifierAsDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue_2D_weak result ;
  const GALGAS_identifierAsDefaultValue_2D_weak * p = (const GALGAS_identifierAsDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_identifierAsDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("identifierAsDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_prefsAsDefaultValue_2D_weak::objectCompare (const GALGAS_prefsAsDefaultValue_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue_2D_weak::GALGAS_prefsAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue_2D_weak & GALGAS_prefsAsDefaultValue_2D_weak::operator = (const GALGAS_prefsAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue_2D_weak::GALGAS_prefsAsDefaultValue_2D_weak (const GALGAS_prefsAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue_2D_weak GALGAS_prefsAsDefaultValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_prefsAsDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue GALGAS_prefsAsDefaultValue_2D_weak::bang_prefsAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_prefsAsDefaultValue result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefsAsDefaultValue) ;
      result = GALGAS_prefsAsDefaultValue ((cPtr_prefsAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@prefsAsDefaultValue-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefsAsDefaultValue_2D_weak ("prefsAsDefaultValue-weak",
                                                    & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefsAsDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefsAsDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsAsDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue_2D_weak GALGAS_prefsAsDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefsAsDefaultValue_2D_weak result ;
  const GALGAS_prefsAsDefaultValue_2D_weak * p = (const GALGAS_prefsAsDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefsAsDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsAsDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeDefaultValueType (cPtr_abstractDefaultValue * inObject,
                                                  const GALGAS_typeKindList constin_inAttributeActualTypeList,
                                                  const GALGAS_propertyMap constin_inPreferencesPropertyMap,
                                                  GALGAS_string & out_outSwiftDefaultValueAsString,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outSwiftDefaultValueAsString.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDefaultValue) ;
    inObject->method_analyzeDefaultValueType (constin_inAttributeActualTypeList, constin_inPreferencesPropertyMap, out_outSwiftDefaultValueAsString, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDefaultValue enterDefaultValuePrecedence'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractDefaultValue::method_enterDefaultValuePrecedence (const GALGAS_lstring /* constinArgument_inNode */,
                                                                    GALGAS_declarationPrecedenceGraph & /* ioArgument_ioGraph */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDefaultValuePrecedence (cPtr_abstractDefaultValue * inObject,
                                                      const GALGAS_lstring constin_inNode,
                                                      GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDefaultValue) ;
    inObject->method_enterDefaultValuePrecedence  (constin_inNode, io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeKind typeName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_typeName (const GALGAS_typeKind & inObject,
                                        C_Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_result = GALGAS_string ("Bool") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_result = GALGAS_string ("Int") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uint_33__32_Type:
    {
      result_result = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_result = GALGAS_string ("Double") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_result = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_result = GALGAS_string ("Date") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_result = GALGAS_string ("Data") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_result = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_result = GALGAS_string ("NSColor") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_result = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathArrayType:
    {
      result_result = GALGAS_string ("BezierPathArray") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      const cEnumAssociatedValues_typeKind_enumType * extractPtr_833 = (const cEnumAssociatedValues_typeKind_enumType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_805_typeName = extractPtr_833->mAssociatedValue0 ;
      result_result = extractedValue_805_typeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_888 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_861_typeName = extractPtr_888->mAssociatedValue0 ;
      result_result = extractedValue_861_typeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      const cEnumAssociatedValues_typeKind_classType * extractPtr_940 = (const cEnumAssociatedValues_typeKind_classType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_915_typeName = extractPtr_940->mAssociatedValue0 ;
      result_result = extractedValue_915_typeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      const cEnumAssociatedValues_typeKind_transientPropertyExternType * extractPtr_1010 = (const cEnumAssociatedValues_typeKind_transientPropertyExternType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_985_typeName = extractPtr_1010->mAssociatedValue0 ;
      result_result = extractedValue_985_typeName ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeKind isComparable'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isComparable (const GALGAS_typeKind & inObject,
                                          C_Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_uint_33__32_Type:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
  case GALGAS_typeKind::kEnum_colorType:
  case GALGAS_typeKind::kEnum_bezierPathType:
  case GALGAS_typeKind::kEnum_bezierPathArrayType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeKind isGraphic'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isGraphic (const GALGAS_typeKind & inObject,
                                       C_Compiler *
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_uint_33__32_Type:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_dataType:
  case GALGAS_typeKind::kEnum_bezierPathType:
  case GALGAS_typeKind::kEnum_bezierPathArrayType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_2104 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_bool extractedValue_2075_isGraphic = extractPtr_2104->mAssociatedValue1 ;
      result_outResult = extractedValue_2075_isGraphic ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@typeKindList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_typeKindList : public cCollectionElement {
  public: GALGAS_typeKindList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_typeKindList (const GALGAS_typeKind & in_mType
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_typeKindList (const GALGAS_typeKindList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_typeKindList::cCollectionElement_typeKindList (const GALGAS_typeKind & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_typeKindList::cCollectionElement_typeKindList (const GALGAS_typeKindList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_typeKindList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_typeKindList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_typeKindList (mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_typeKindList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_typeKindList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typeKindList * operand = (cCollectionElement_typeKindList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typeKindList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList::GALGAS_typeKindList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList::GALGAS_typeKindList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_typeKindList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::constructor_listWithValue (const GALGAS_typeKind & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeKindList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typeKindList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_typeKindList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_typeKind & in_mType
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_typeKindList * p = NULL ;
  macroMyNew (p, cCollectionElement_typeKindList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::addAssign_operation (const GALGAS_typeKind & inOperand0
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_typeKindList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::setter_append (GALGAS_typeKindList_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_typeKindList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::setter_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_typeKindList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::setter_removeAtIndex (GALGAS_typeKind & outOperand0,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_typeKindList) ;
        outOperand0 = p->mObject.mProperty_mType ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::setter_popFirst (GALGAS_typeKind & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::setter_popLast (GALGAS_typeKind & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::method_first (GALGAS_typeKind & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::method_last (GALGAS_typeKind & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::add_operation (const GALGAS_typeKindList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKindList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::plusAssign_operation (const GALGAS_typeKindList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::setter_setMTypeAtIndex (GALGAS_typeKind inOperand,
                                                  GALGAS_uint inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKindList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_typeKindList::cEnumerator_typeKindList (const GALGAS_typeKindList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element cEnumerator_typeKindList::current (LOCATION_ARGS) const {
  const cCollectionElement_typeKindList * p = (const cCollectionElement_typeKindList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeKindList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind cEnumerator_typeKindList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_typeKindList * p = (const cCollectionElement_typeKindList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeKindList) ;
  return p->mObject.mProperty_mType ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@typeKindList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindList ("typeKindList",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKindList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKindList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKindList result ;
  const GALGAS_typeKindList * p = (const GALGAS_typeKindList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKindList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyKind typeName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_typeName (const GALGAS_propertyKind & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_2631 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_2597_type = extractPtr_2631->mAssociatedValue0 ;
      result_result = extensionGetter_typeName (extractedValue_2597_type, inCompiler COMMA_SOURCE_FILE ("unified-type.ggs", 90)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_2683 = (const cEnumAssociatedValues_propertyKind_toMany *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_2655_typeName = extractPtr_2683->mAssociatedValue0 ;
      result_result = extractedValue_2655_typeName.readProperty_string () ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const cEnumAssociatedValues_propertyKind_toOne * extractPtr_2734 = (const cEnumAssociatedValues_propertyKind_toOne *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_2706_typeName = extractPtr_2734->mAssociatedValue0 ;
      result_result = extractedValue_2706_typeName.readProperty_string () ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_2794 = (const cEnumAssociatedValues_propertyKind_arrayController *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_2767_typeName = extractPtr_2794->mAssociatedValue0 ;
      result_result = extractedValue_2767_typeName.readProperty_string () ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const cEnumAssociatedValues_propertyKind_selectionController * extractPtr_2856 = (const cEnumAssociatedValues_propertyKind_selectionController *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_2831_typeName = extractPtr_2856->mAssociatedValue0 ;
      result_result = extractedValue_2831_typeName ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyKind swiftTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_swiftTypeName (const GALGAS_propertyKind & inObject,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_3110 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_3071_type = extractPtr_3110->mAssociatedValue0 ;
      result_result = extensionGetter_swiftTypeName (extractedValue_3071_type, inCompiler COMMA_SOURCE_FILE ("unified-type.ggs", 107)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_3162 = (const cEnumAssociatedValues_propertyKind_toMany *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_3134_typeName = extractPtr_3162->mAssociatedValue0 ;
      result_result = extractedValue_3134_typeName.readProperty_string () ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const cEnumAssociatedValues_propertyKind_toOne * extractPtr_3213 = (const cEnumAssociatedValues_propertyKind_toOne *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_3185_typeName = extractPtr_3213->mAssociatedValue0 ;
      result_result = extractedValue_3185_typeName.readProperty_string () ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_3273 = (const cEnumAssociatedValues_propertyKind_arrayController *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_3246_typeName = extractPtr_3273->mAssociatedValue0 ;
      result_result = extractedValue_3246_typeName.readProperty_string () ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const cEnumAssociatedValues_propertyKind_selectionController * extractPtr_3335 = (const cEnumAssociatedValues_propertyKind_selectionController *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_3310_typeName = extractPtr_3335->mAssociatedValue0 ;
      result_result = extractedValue_3310_typeName ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeKind swiftTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_swiftTypeName (const GALGAS_typeKind & inObject,
                                             C_Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("Int") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uint_33__32_Type:
    {
      result_outResult = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("Bool") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("Date") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("Data") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("Double") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSColor") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathArrayType:
    {
      result_outResult = GALGAS_string ("BezierPathArray") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_4063 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_4035_entityName = extractPtr_4063->mAssociatedValue0 ;
      result_outResult = extractedValue_4035_entityName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      const cEnumAssociatedValues_typeKind_enumType * extractPtr_4132 = (const cEnumAssociatedValues_typeKind_enumType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_4101_enumTypeName = extractPtr_4132->mAssociatedValue0 ;
      result_outResult = extractedValue_4101_enumTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      const cEnumAssociatedValues_typeKind_classType * extractPtr_4201 = (const cEnumAssociatedValues_typeKind_classType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_4172_classTypeName = extractPtr_4201->mAssociatedValue0 ;
      result_outResult = extractedValue_4172_classTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      const cEnumAssociatedValues_typeKind_transientPropertyExternType * extractPtr_4288 = (const cEnumAssociatedValues_typeKind_transientPropertyExternType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_4259_classTypeName = extractPtr_4288->mAssociatedValue0 ;
      result_outResult = extractedValue_4259_classTypeName ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyKind isTransient'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isTransient (const GALGAS_propertyKind & inObject,
                                         C_Compiler *
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_4550 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_propertyAccessibility extractedValue_4510_accessibility = extractPtr_4550->mAssociatedValue1 ;
      result_result = extractedValue_4510_accessibility.getter_isTransient (SOURCE_FILE ("unified-type.ggs", 145)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_4624 = (const cEnumAssociatedValues_propertyKind_toMany *) (temp_0.unsafePointer ()) ;
      const GALGAS_propertyAccessibility extractedValue_4581_accessibility = extractPtr_4624->mAssociatedValue1 ;
      result_result = extractedValue_4581_accessibility.getter_isTransient (SOURCE_FILE ("unified-type.ggs", 146)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const cEnumAssociatedValues_propertyKind_toOne * extractPtr_4697 = (const cEnumAssociatedValues_propertyKind_toOne *) (temp_0.unsafePointer ()) ;
      const GALGAS_propertyAccessibility extractedValue_4654_accessibility = extractPtr_4697->mAssociatedValue1 ;
      result_result = extractedValue_4654_accessibility.getter_isTransient (SOURCE_FILE ("unified-type.ggs", 147)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyKind isComparable'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isComparable (const GALGAS_propertyKind & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_5036 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_5002_type = extractPtr_5036->mAssociatedValue0 ;
      result_result = extensionGetter_isComparable (extractedValue_5002_type, inCompiler COMMA_SOURCE_FILE ("unified-type.ggs", 157)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyKind isEntityType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isEntityType (const GALGAS_propertyKind & inObject,
                                          C_Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyKind isEnumType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isEnumType (const GALGAS_propertyKind & inObject,
                                        C_Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_5832 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_5800_type = extractPtr_5832->mAssociatedValue0 ;
      result_result = extractedValue_5800_type.getter_isEnumType (SOURCE_FILE ("unified-type.ggs", 181)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_classKind_atomic::cEnumAssociatedValues_classKind_atomic (const GALGAS_typeKind inAssociatedValue0
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_classKind_atomic::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_classKind_atomic::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_classKind_atomic * ptr = dynamic_cast<const cEnumAssociatedValues_classKind_atomic *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_classKind_document::cEnumAssociatedValues_classKind_document (const GALGAS_lstring inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_classKind_document::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_classKind_document::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_classKind_document * ptr = dynamic_cast<const cEnumAssociatedValues_classKind_document *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_classKind_entity::cEnumAssociatedValues_classKind_entity (const GALGAS_string inAssociatedValue0,
                                                                                const GALGAS_bool inAssociatedValue1,
                                                                                const GALGAS_bool inAssociatedValue2,
                                                                                const GALGAS_bool inAssociatedValue3
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_classKind_entity::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_classKind_entity::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_classKind_entity * ptr = dynamic_cast<const cEnumAssociatedValues_classKind_entity *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classKind::GALGAS_classKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classKind GALGAS_classKind::constructor_prefs (UNUSED_LOCATION_ARGS) {
  GALGAS_classKind result ;
  result.mEnum = kEnum_prefs ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classKind GALGAS_classKind::constructor_atomic (const GALGAS_typeKind & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_classKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_atomic ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_classKind_atomic (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classKind GALGAS_classKind::constructor_document (const GALGAS_lstring & inAssociatedValue0
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_classKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_document ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_classKind_document (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classKind GALGAS_classKind::constructor_entity (const GALGAS_string & inAssociatedValue0,
                                                       const GALGAS_bool & inAssociatedValue1,
                                                       const GALGAS_bool & inAssociatedValue2,
                                                       const GALGAS_bool & inAssociatedValue3
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_classKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_entity ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_classKind_entity (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classKind::method_atomic (GALGAS_typeKind & outAssociatedValue0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_atomic) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @classKind atomic invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_classKind_atomic * ptr = (const cEnumAssociatedValues_classKind_atomic *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classKind::method_document (GALGAS_lstring & outAssociatedValue0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_document) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @classKind document invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_classKind_document * ptr = (const cEnumAssociatedValues_classKind_document *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classKind::method_entity (GALGAS_string & outAssociatedValue0,
                                      GALGAS_bool & outAssociatedValue1,
                                      GALGAS_bool & outAssociatedValue2,
                                      GALGAS_bool & outAssociatedValue3,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_entity) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @classKind entity invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_classKind_entity * ptr = (const cEnumAssociatedValues_classKind_entity *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_classKind::optional_prefs () const {
  const bool ok = mEnum == kEnum_prefs ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_classKind::optional_atomic (GALGAS_typeKind & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_atomic ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_classKind_atomic *) unsafePointer () ;
    // const cEnumAssociatedValues_classKind_atomic * ptr = (const cEnumAssociatedValues_classKind_atomic *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_classKind::optional_document (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_document ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_classKind_document *) unsafePointer () ;
    // const cEnumAssociatedValues_classKind_document * ptr = (const cEnumAssociatedValues_classKind_document *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_classKind::optional_entity (GALGAS_string & outAssociatedValue0,
                                        GALGAS_bool & outAssociatedValue1,
                                        GALGAS_bool & outAssociatedValue2,
                                        GALGAS_bool & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_entity ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_classKind_entity *) unsafePointer () ;
    // const cEnumAssociatedValues_classKind_entity * ptr = (const cEnumAssociatedValues_classKind_entity *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_classKind [5] = {
  "(not built)",
  "prefs",
  "atomic",
  "document",
  "entity"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classKind::getter_isPrefs (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_prefs == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classKind::getter_isAtomic (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_atomic == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classKind::getter_isDocument (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_document == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classKind::getter_isEntity (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entity == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classKind::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<enum @classKind: " << gEnumNameArrayFor_classKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_classKind::objectCompare (const GALGAS_classKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@classKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classKind ("classKind",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classKind GALGAS_classKind::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_classKind result ;
  const GALGAS_classKind * p = (const GALGAS_classKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration prefKeyDefinitionCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_propertyGeneration::getter_prefKeyDefinitionCode (C_Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_prefKeyDefinitionCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_propertyGeneration::getter_declarationInSelectionControllerCode (C_Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_declarationInSelectionControllerCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_propertyGeneration::getter_bindPropertyInSelectionController (C_Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_bindPropertyInSelectionController (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                           const GALGAS_bool in_inPreferences,
                                                           const GALGAS_stringset in_inOverriddenTransients,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_propertyDeclarationCode (in_inPreferences, in_inOverriddenTransients, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_configurationCode (const cPtr_propertyGeneration * inObject,
                                                     const GALGAS_bool in_inPreferences,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_configurationCode (in_inPreferences, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_initCode (const cPtr_propertyGeneration * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_initCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration setupAtomicPropertyFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_propertyGeneration::getter_setupAtomicPropertyFromDictionaryCode (C_Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_setupAtomicPropertyFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_setupAtomicPropertyFromDictionaryCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration setupRelationshipFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_propertyGeneration::getter_setupRelationshipFromDictionaryCode (C_Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_setupRelationshipFromDictionaryCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration saveIntoDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_propertyGeneration::getter_saveIntoDictionaryCode (C_Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_saveIntoDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_saveIntoDictionaryCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration objectAccessibilityCodeForSaveOperation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_propertyGeneration::getter_objectAccessibilityCodeForSaveOperation (C_Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_objectAccessibilityCodeForSaveOperation (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration populateExplorerWindowCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_propertyGeneration::getter_populateExplorerWindowCode (C_Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_populateExplorerWindowCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration resetToManyRelationships'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_propertyGeneration::getter_resetToManyRelationships (C_Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_resetToManyRelationships (const cPtr_propertyGeneration * inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_resetToManyRelationships (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyAccessibility_transient::cEnumAssociatedValues_propertyAccessibility_transient (const GALGAS_bool inAssociatedValue0
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyAccessibility_transient::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyAccessibility_transient::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyAccessibility_transient * ptr = dynamic_cast<const cEnumAssociatedValues_propertyAccessibility_transient *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAccessibility::GALGAS_propertyAccessibility (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::constructor_stored (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  result.mEnum = kEnum_stored ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::constructor_computed (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  result.mEnum = kEnum_computed ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::constructor_transient (const GALGAS_bool & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_transient ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyAccessibility_transient (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAccessibility::method_transient (GALGAS_bool & outAssociatedValue0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_transient) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @propertyAccessibility transient invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyAccessibility_transient * ptr = (const cEnumAssociatedValues_propertyAccessibility_transient *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyAccessibility::optional_stored () const {
  const bool ok = mEnum == kEnum_stored ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyAccessibility::optional_computed () const {
  const bool ok = mEnum == kEnum_computed ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyAccessibility::optional_transient (GALGAS_bool & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_transient ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyAccessibility_transient *) unsafePointer () ;
    // const cEnumAssociatedValues_propertyAccessibility_transient * ptr = (const cEnumAssociatedValues_propertyAccessibility_transient *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyAccessibility [4] = {
  "(not built)",
  "stored",
  "computed",
  "transient"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyAccessibility::getter_isStored (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stored == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyAccessibility::getter_isComputed (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_computed == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyAccessibility::getter_isTransient (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transient == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyAccessibility::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @propertyAccessibility: " << gEnumNameArrayFor_propertyAccessibility [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyAccessibility::objectCompare (const GALGAS_propertyAccessibility & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@propertyAccessibility type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyAccessibility ("propertyAccessibility",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyAccessibility::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessibility ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyAccessibility::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyAccessibility (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  const GALGAS_propertyAccessibility * p = (const GALGAS_propertyAccessibility *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyAccessibility *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAccessibility", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@transientExternTypeList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_transientExternTypeList : public cCollectionElement {
  public: GALGAS_transientExternTypeList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_transientExternTypeList (const GALGAS_string & in_mTypeName,
                                                      const GALGAS_bool & in_mIsClass
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_transientExternTypeList (const GALGAS_transientExternTypeList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GALGAS_string & in_mTypeName,
                                                                                        const GALGAS_bool & in_mIsClass
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mIsClass) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GALGAS_transientExternTypeList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mIsClass) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_transientExternTypeList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_transientExternTypeList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_transientExternTypeList (mObject.mProperty_mTypeName, mObject.mProperty_mIsClass COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_transientExternTypeList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsClass" ":" ;
  mObject.mProperty_mIsClass.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_transientExternTypeList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_transientExternTypeList * operand = (cCollectionElement_transientExternTypeList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_transientExternTypeList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList::GALGAS_transientExternTypeList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList::GALGAS_transientExternTypeList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientExternTypeList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                          const GALGAS_bool & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_transientExternTypeList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_transientExternTypeList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_transientExternTypeList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_string & in_mTypeName,
                                                                const GALGAS_bool & in_mIsClass
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = NULL ;
  macroMyNew (p, cCollectionElement_transientExternTypeList (in_mTypeName,
                                                             in_mIsClass COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::addAssign_operation (const GALGAS_string & inOperand0,
                                                          const GALGAS_bool & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::setter_append (GALGAS_transientExternTypeList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_transientExternTypeList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                           const GALGAS_bool inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                           GALGAS_bool & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
        outOperand0 = p->mObject.mProperty_mTypeName ;
        outOperand1 = p->mObject.mProperty_mIsClass ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::setter_popFirst (GALGAS_string & outOperand0,
                                                      GALGAS_bool & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::setter_popLast (GALGAS_string & outOperand0,
                                                     GALGAS_bool & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::method_first (GALGAS_string & outOperand0,
                                                   GALGAS_bool & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::method_last (GALGAS_string & outOperand0,
                                                  GALGAS_bool & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::add_operation (const GALGAS_transientExternTypeList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result = GALGAS_transientExternTypeList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result = GALGAS_transientExternTypeList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result = GALGAS_transientExternTypeList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::plusAssign_operation (const GALGAS_transientExternTypeList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::setter_setMTypeNameAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientExternTypeList::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::setter_setMIsClassAtIndex (GALGAS_bool inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsClass = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_transientExternTypeList::getter_mIsClassAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    result = p->mObject.mProperty_mIsClass ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_transientExternTypeList::cEnumerator_transientExternTypeList (const GALGAS_transientExternTypeList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element cEnumerator_transientExternTypeList::current (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_transientExternTypeList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_transientExternTypeList::current_mIsClass (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mIsClass ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@transientExternTypeList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientExternTypeList ("transientExternTypeList",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientExternTypeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientExternTypeList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientExternTypeList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientExternTypeList result ;
  const GALGAS_transientExternTypeList * p = (const GALGAS_transientExternTypeList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientExternTypeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientExternTypeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFileGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_abstractFileGeneration * inObject,
                                       const GALGAS_string constin_inOutputDirectory,
                                       GALGAS_stringset in_inToOneEntities,
                                       GALGAS_stringset in_inToManyEntities,
                                       GALGAS_stringset in_inGenerateClass_5F_PreferencesArrayOf,
                                       GALGAS_stringset in_inGenerateClass_5F_StandAloneArrayOf,
                                       GALGAS_stringset in_inGenerateClass_5F_ProxyArrayOf,
                                       GALGAS_stringset in_inGenerateClass_5F_TransientArrayOfSuperOf,
                                       GALGAS_stringset in_inGenerateClass_5F_TransientArrayOf,
                                       GALGAS_stringset & io_ioGeneratedFileSet,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractFileGeneration) ;
    inObject->method_generateCode (constin_inOutputDirectory, in_inToOneEntities, in_inToManyEntities, in_inGenerateClass_5F_PreferencesArrayOf, in_inGenerateClass_5F_StandAloneArrayOf, in_inGenerateClass_5F_ProxyArrayOf, in_inGenerateClass_5F_TransientArrayOfSuperOf, in_inGenerateClass_5F_TransientArrayOf, io_ioGeneratedFileSet, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@fileGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_fileGenerationList : public cCollectionElement {
  public: GALGAS_fileGenerationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_fileGenerationList (const GALGAS_abstractFileGeneration & in_mFileGeneration
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_fileGenerationList (const GALGAS_fileGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GALGAS_abstractFileGeneration & in_mFileGeneration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GALGAS_fileGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_fileGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_fileGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_fileGenerationList (mObject.mProperty_mFileGeneration COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_fileGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileGeneration" ":" ;
  mObject.mProperty_mFileGeneration.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_fileGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_fileGenerationList * operand = (cCollectionElement_fileGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_fileGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList::GALGAS_fileGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList::GALGAS_fileGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_fileGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::constructor_listWithValue (const GALGAS_abstractFileGeneration & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_fileGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fileGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_fileGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractFileGeneration & in_mFileGeneration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_fileGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_fileGenerationList (in_mFileGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::addAssign_operation (const GALGAS_abstractFileGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::setter_append (GALGAS_fileGenerationList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_fileGenerationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::setter_insertAtIndex (const GALGAS_abstractFileGeneration inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::setter_removeAtIndex (GALGAS_abstractFileGeneration & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
        outOperand0 = p->mObject.mProperty_mFileGeneration ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::setter_popFirst (GALGAS_abstractFileGeneration & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::setter_popLast (GALGAS_abstractFileGeneration & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::method_first (GALGAS_abstractFileGeneration & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::method_last (GALGAS_abstractFileGeneration & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::add_operation (const GALGAS_fileGenerationList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result = GALGAS_fileGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result = GALGAS_fileGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result = GALGAS_fileGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::plusAssign_operation (const GALGAS_fileGenerationList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::setter_setMFileGenerationAtIndex (GALGAS_abstractFileGeneration inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileGeneration = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration GALGAS_fileGenerationList::getter_mFileGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  GALGAS_abstractFileGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    result = p->mObject.mProperty_mFileGeneration ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_fileGenerationList::cEnumerator_fileGenerationList (const GALGAS_fileGenerationList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element cEnumerator_fileGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration cEnumerator_fileGenerationList::current_mFileGeneration (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject.mProperty_mFileGeneration ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@fileGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fileGenerationList ("fileGenerationList",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fileGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fileGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_fileGenerationList result ;
  const GALGAS_fileGenerationList * p = (const GALGAS_fileGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fileGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generationStruct::GALGAS_generationStruct (void) :
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
mProperty_mGenerateClass_5F_StandAloneArrayOf_5F_ (),
mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (),
mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (),
mProperty_mGenerateClass_5F_TransientArrayOf_5F_ () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generationStruct::~ GALGAS_generationStruct (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generationStruct::GALGAS_generationStruct (const GALGAS_validationStubRoutineListForGeneration & inOperand0,
                                                  const GALGAS_fileGenerationList & inOperand1,
                                                  const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand2,
                                                  const GALGAS_bool & inOperand3,
                                                  const GALGAS_bool & inOperand4,
                                                  const GALGAS_stringset & inOperand5,
                                                  const GALGAS_mainXibDescriptorList & inOperand6,
                                                  const GALGAS_stringset & inOperand7,
                                                  const GALGAS_stringset & inOperand8,
                                                  const GALGAS_selectionControllerForGeneration & inOperand9,
                                                  const GALGAS_stringlist & inOperand10,
                                                  const GALGAS_transientExternTypeList & inOperand11,
                                                  const GALGAS_stringset & inOperand12,
                                                  const GALGAS_stringset & inOperand13,
                                                  const GALGAS_stringset & inOperand14,
                                                  const GALGAS_stringset & inOperand15,
                                                  const GALGAS_stringset & inOperand16) :
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
mProperty_mGenerateClass_5F_StandAloneArrayOf_5F_ (inOperand13),
mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (inOperand14),
mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (inOperand15),
mProperty_mGenerateClass_5F_TransientArrayOf_5F_ (inOperand16) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generationStruct GALGAS_generationStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_generationStruct (GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (HERE),
                                  GALGAS_fileGenerationList::constructor_emptyList (HERE),
                                  GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (HERE),
                                  GALGAS_bool::constructor_default (HERE),
                                  GALGAS_bool::constructor_default (HERE),
                                  GALGAS_stringset::constructor_emptySet (HERE),
                                  GALGAS_mainXibDescriptorList::constructor_emptyList (HERE),
                                  GALGAS_stringset::constructor_emptySet (HERE),
                                  GALGAS_stringset::constructor_emptySet (HERE),
                                  GALGAS_selectionControllerForGeneration::constructor_emptyList (HERE),
                                  GALGAS_stringlist::constructor_emptyList (HERE),
                                  GALGAS_transientExternTypeList::constructor_emptyList (HERE),
                                  GALGAS_stringset::constructor_emptySet (HERE),
                                  GALGAS_stringset::constructor_emptySet (HERE),
                                  GALGAS_stringset::constructor_emptySet (HERE),
                                  GALGAS_stringset::constructor_emptySet (HERE),
                                  GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generationStruct GALGAS_generationStruct::constructor_new (const GALGAS_validationStubRoutineListForGeneration & inOperand0,
                                                                  const GALGAS_fileGenerationList & inOperand1,
                                                                  const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand2,
                                                                  const GALGAS_bool & inOperand3,
                                                                  const GALGAS_bool & inOperand4,
                                                                  const GALGAS_stringset & inOperand5,
                                                                  const GALGAS_mainXibDescriptorList & inOperand6,
                                                                  const GALGAS_stringset & inOperand7,
                                                                  const GALGAS_stringset & inOperand8,
                                                                  const GALGAS_selectionControllerForGeneration & inOperand9,
                                                                  const GALGAS_stringlist & inOperand10,
                                                                  const GALGAS_transientExternTypeList & inOperand11,
                                                                  const GALGAS_stringset & inOperand12,
                                                                  const GALGAS_stringset & inOperand13,
                                                                  const GALGAS_stringset & inOperand14,
                                                                  const GALGAS_stringset & inOperand15,
                                                                  const GALGAS_stringset & inOperand16 
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid ()) {
    result = GALGAS_generationStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_generationStruct::objectCompare (const GALGAS_generationStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mValidationStubRoutineListForGeneration.objectCompare (inOperand.mProperty_mValidationStubRoutineListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFileGenerationList.objectCompare (inOperand.mProperty_mFileGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEntityListForGeneration.objectCompare (inOperand.mProperty_mEntityListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateEBManagedXibDocumentSwift.objectCompare (inOperand.mProperty_mGenerateEBManagedXibDocumentSwift) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.objectCompare (inOperand.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeededOutletClasses.objectCompare (inOperand.mProperty_mNeededOutletClasses) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mToOneClassImplementations.objectCompare (inOperand.mProperty_mToOneClassImplementations) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mToManyClassImplementations.objectCompare (inOperand.mProperty_mToManyClassImplementations) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionControllerListForGeneration.objectCompare (inOperand.mProperty_mSelectionControllerListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyClassList.objectCompare (inOperand.mProperty_mPropertyClassList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransientPropertyTypeList.objectCompare (inOperand.mProperty_mTransientPropertyTypeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.objectCompare (inOperand.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateClass_5F_StandAloneArrayOf_5F_.objectCompare (inOperand.mProperty_mGenerateClass_5F_StandAloneArrayOf_5F_) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.objectCompare (inOperand.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.objectCompare (inOperand.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateClass_5F_TransientArrayOf_5F_.objectCompare (inOperand.mProperty_mGenerateClass_5F_TransientArrayOf_5F_) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_generationStruct::isValid (void) const {
  return mProperty_mValidationStubRoutineListForGeneration.isValid () && mProperty_mFileGenerationList.isValid () && mProperty_mEntityListForGeneration.isValid () && mProperty_mGenerateEBManagedXibDocumentSwift.isValid () && mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.isValid () && mProperty_mNeededOutletClasses.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mToOneClassImplementations.isValid () && mProperty_mToManyClassImplementations.isValid () && mProperty_mSelectionControllerListForGeneration.isValid () && mProperty_mPropertyClassList.isValid () && mProperty_mTransientPropertyTypeList.isValid () && mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_StandAloneArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.isValid () && mProperty_mGenerateClass_5F_TransientArrayOf_5F_.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_generationStruct::drop (void) {
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
  mProperty_mGenerateClass_5F_StandAloneArrayOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_TransientArrayOf_5F_.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_generationStruct::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<struct @generationStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mValidationStubRoutineListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFileGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEntityListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateEBManagedXibDocumentSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNeededOutletClasses.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mToOneClassImplementations.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mToManyClassImplementations.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyClassList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientPropertyTypeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateClass_5F_StandAloneArrayOf_5F_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateClass_5F_TransientArrayOf_5F_.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@generationStruct type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generationStruct ("generationStruct",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_generationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationStruct ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_generationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationStruct (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generationStruct GALGAS_generationStruct::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_generationStruct result ;
  const GALGAS_generationStruct * p = (const GALGAS_generationStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_generationStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeGroupList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeGroupList : public cCollectionElement {
  public: GALGAS_XCodeGroupList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                             const GALGAS_string & in_mGroupName,
                                             const GALGAS_string & in_mGroupPath,
                                             const GALGAS_stringlist & in_mChildrenRefs
                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                                                      const GALGAS_string & in_mGroupName,
                                                                      const GALGAS_string & in_mGroupPath,
                                                                      const GALGAS_stringlist & in_mChildrenRefs
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGroupReference, inElement.mProperty_mGroupName, inElement.mProperty_mGroupPath, inElement.mProperty_mChildrenRefs) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeGroupList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeGroupList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeGroupList (mObject.mProperty_mGroupReference, mObject.mProperty_mGroupName, mObject.mProperty_mGroupPath, mObject.mProperty_mChildrenRefs COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeGroupList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupReference" ":" ;
  mObject.mProperty_mGroupReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupName" ":" ;
  mObject.mProperty_mGroupName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupPath" ":" ;
  mObject.mProperty_mGroupPath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mChildrenRefs" ":" ;
  mObject.mProperty_mChildrenRefs.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_XCodeGroupList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeGroupList * operand = (cCollectionElement_XCodeGroupList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeGroupList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                        const GALGAS_string & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS_stringlist & inOperand3
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_XCodeGroupList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeGroupList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_string & in_mGroupReference,
                                                       const GALGAS_string & in_mGroupName,
                                                       const GALGAS_string & in_mGroupPath,
                                                       const GALGAS_stringlist & in_mChildrenRefs
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = NULL ;
  macroMyNew (p, cCollectionElement_XCodeGroupList (in_mGroupReference,
                                                    in_mGroupName,
                                                    in_mGroupPath,
                                                    in_mChildrenRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::addAssign_operation (const GALGAS_string & inOperand0,
                                                 const GALGAS_string & inOperand1,
                                                 const GALGAS_string & inOperand2,
                                                 const GALGAS_stringlist & inOperand3
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_append (GALGAS_XCodeGroupList_2D_element inElement,
                                           C_Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_XCodeGroupList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                  const GALGAS_string inOperand1,
                                                  const GALGAS_string inOperand2,
                                                  const GALGAS_stringlist inOperand3,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  GALGAS_stringlist & outOperand3,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
        outOperand0 = p->mObject.mProperty_mGroupReference ;
        outOperand1 = p->mObject.mProperty_mGroupName ;
        outOperand2 = p->mObject.mProperty_mGroupPath ;
        outOperand3 = p->mObject.mProperty_mChildrenRefs ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_popFirst (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             GALGAS_string & outOperand2,
                                             GALGAS_stringlist & outOperand3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_popLast (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_string & outOperand2,
                                            GALGAS_stringlist & outOperand3,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::method_first (GALGAS_string & outOperand0,
                                          GALGAS_string & outOperand1,
                                          GALGAS_string & outOperand2,
                                          GALGAS_stringlist & outOperand3,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::method_last (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         GALGAS_stringlist & outOperand3,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::add_operation (const GALGAS_XCodeGroupList & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::plusAssign_operation (const GALGAS_XCodeGroupList inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupReferenceAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupReference ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupNameAtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupPathAtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupPath = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupPathAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupPath ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMChildrenRefsAtIndex (GALGAS_stringlist inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mChildrenRefs = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mChildrenRefs ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_XCodeGroupList::cEnumerator_XCodeGroupList (const GALGAS_XCodeGroupList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element cEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupPath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mChildrenRefs ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@XCodeGroupList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList ("XCodeGroupList",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeGroupList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeGroupList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  const GALGAS_XCodeGroupList * p = (const GALGAS_XCodeGroupList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeGroupList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeToolTargetList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeToolTargetList : public cCollectionElement {
  public: GALGAS_XCodeToolTargetList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_XCodeToolTargetList (const GALGAS_string & in_mTargetRef,
                                                  const GALGAS_string & in_mTargetName,
                                                  const GALGAS_string & in_mProductFileReference,
                                                  const GALGAS_string & in_mProductFileName,
                                                  const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                  const GALGAS_string & in_mBuildPhaseRef,
                                                  const GALGAS_string & in_mBuildConfigurationListRef,
                                                  const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                  const GALGAS_string & in_mBuildConfigurationRef,
                                                  const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                  const GALGAS_string & in_mFrameworkBuildPhaseRef
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeToolTargetList (const GALGAS_XCodeToolTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GALGAS_string & in_mTargetRef,
                                                                                const GALGAS_string & in_mTargetName,
                                                                                const GALGAS_string & in_mProductFileReference,
                                                                                const GALGAS_string & in_mProductFileName,
                                                                                const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                                                const GALGAS_string & in_mBuildPhaseRef,
                                                                                const GALGAS_string & in_mBuildConfigurationListRef,
                                                                                const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                                                const GALGAS_string & in_mBuildConfigurationRef,
                                                                                const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                                                const GALGAS_string & in_mFrameworkBuildPhaseRef
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GALGAS_XCodeToolTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeToolTargetList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeToolTargetList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeToolTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeToolTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_XCodeToolTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeToolTargetList * operand = (cCollectionElement_XCodeToolTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeToolTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2,
                                                                                  const GALGAS_string & inOperand3,
                                                                                  const GALGAS_stringlist & inOperand4,
                                                                                  const GALGAS_string & inOperand5,
                                                                                  const GALGAS_string & inOperand6,
                                                                                  const GALGAS_stringlist & inOperand7,
                                                                                  const GALGAS_string & inOperand8,
                                                                                  const GALGAS_stringlist & inOperand9,
                                                                                  const GALGAS_string & inOperand10
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_XCodeToolTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeToolTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_string & in_mTargetRef,
                                                            const GALGAS_string & in_mTargetName,
                                                            const GALGAS_string & in_mProductFileReference,
                                                            const GALGAS_string & in_mProductFileName,
                                                            const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                            const GALGAS_string & in_mBuildPhaseRef,
                                                            const GALGAS_string & in_mBuildConfigurationListRef,
                                                            const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                            const GALGAS_string & in_mBuildConfigurationRef,
                                                            const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                            const GALGAS_string & in_mFrameworkBuildPhaseRef
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = NULL ;
  macroMyNew (p, cCollectionElement_XCodeToolTargetList (in_mTargetRef,
                                                         in_mTargetName,
                                                         in_mProductFileReference,
                                                         in_mProductFileName,
                                                         in_mBuildPhaseRefList,
                                                         in_mBuildPhaseRef,
                                                         in_mBuildConfigurationListRef,
                                                         in_mBuildConfigurationSettingList,
                                                         in_mBuildConfigurationRef,
                                                         in_mFrameworksFileRefList,
                                                         in_mFrameworkBuildPhaseRef COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::addAssign_operation (const GALGAS_string & inOperand0,
                                                      const GALGAS_string & inOperand1,
                                                      const GALGAS_string & inOperand2,
                                                      const GALGAS_string & inOperand3,
                                                      const GALGAS_stringlist & inOperand4,
                                                      const GALGAS_string & inOperand5,
                                                      const GALGAS_string & inOperand6,
                                                      const GALGAS_stringlist & inOperand7,
                                                      const GALGAS_string & inOperand8,
                                                      const GALGAS_stringlist & inOperand9,
                                                      const GALGAS_string & inOperand10
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_append (GALGAS_XCodeToolTargetList_2D_element inElement,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_XCodeToolTargetList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                       const GALGAS_string inOperand1,
                                                       const GALGAS_string inOperand2,
                                                       const GALGAS_string inOperand3,
                                                       const GALGAS_stringlist inOperand4,
                                                       const GALGAS_string inOperand5,
                                                       const GALGAS_string inOperand6,
                                                       const GALGAS_stringlist inOperand7,
                                                       const GALGAS_string inOperand8,
                                                       const GALGAS_stringlist inOperand9,
                                                       const GALGAS_string inOperand10,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       GALGAS_string & outOperand3,
                                                       GALGAS_stringlist & outOperand4,
                                                       GALGAS_string & outOperand5,
                                                       GALGAS_string & outOperand6,
                                                       GALGAS_stringlist & outOperand7,
                                                       GALGAS_string & outOperand8,
                                                       GALGAS_stringlist & outOperand9,
                                                       GALGAS_string & outOperand10,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        outOperand7.drop () ;
        outOperand8.drop () ;
        outOperand9.drop () ;
        outOperand10.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
        outOperand0 = p->mObject.mProperty_mTargetRef ;
        outOperand1 = p->mObject.mProperty_mTargetName ;
        outOperand2 = p->mObject.mProperty_mProductFileReference ;
        outOperand3 = p->mObject.mProperty_mProductFileName ;
        outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
        outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
        outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
        outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
        outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
        outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
        outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      outOperand9.drop () ;
      outOperand10.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_popFirst (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  GALGAS_string & outOperand3,
                                                  GALGAS_stringlist & outOperand4,
                                                  GALGAS_string & outOperand5,
                                                  GALGAS_string & outOperand6,
                                                  GALGAS_stringlist & outOperand7,
                                                  GALGAS_string & outOperand8,
                                                  GALGAS_stringlist & outOperand9,
                                                  GALGAS_string & outOperand10,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_popLast (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_stringlist & outOperand4,
                                                 GALGAS_string & outOperand5,
                                                 GALGAS_string & outOperand6,
                                                 GALGAS_stringlist & outOperand7,
                                                 GALGAS_string & outOperand8,
                                                 GALGAS_stringlist & outOperand9,
                                                 GALGAS_string & outOperand10,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::method_first (GALGAS_string & outOperand0,
                                               GALGAS_string & outOperand1,
                                               GALGAS_string & outOperand2,
                                               GALGAS_string & outOperand3,
                                               GALGAS_stringlist & outOperand4,
                                               GALGAS_string & outOperand5,
                                               GALGAS_string & outOperand6,
                                               GALGAS_stringlist & outOperand7,
                                               GALGAS_string & outOperand8,
                                               GALGAS_stringlist & outOperand9,
                                               GALGAS_string & outOperand10,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::method_last (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_string & outOperand3,
                                              GALGAS_stringlist & outOperand4,
                                              GALGAS_string & outOperand5,
                                              GALGAS_string & outOperand6,
                                              GALGAS_stringlist & outOperand7,
                                              GALGAS_string & outOperand8,
                                              GALGAS_stringlist & outOperand9,
                                              GALGAS_string & outOperand10,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::add_operation (const GALGAS_XCodeToolTargetList & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::plusAssign_operation (const GALGAS_XCodeToolTargetList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMTargetRefAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMProductFileReferenceAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMProductFileNameAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildPhaseRefListAtIndex (GALGAS_stringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationListRefAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationSettingListAtIndex (GALGAS_stringlist inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationRefAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMFrameworksFileRefListAtIndex (GALGAS_stringlist inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_XCodeToolTargetList::cEnumerator_XCodeToolTargetList (const GALGAS_XCodeToolTargetList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element cEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@XCodeToolTargetList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList ("XCodeToolTargetList",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeToolTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList result ;
  const GALGAS_XCodeToolTargetList * p = (const GALGAS_XCodeToolTargetList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeToolTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeAppTargetList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeAppTargetList : public cCollectionElement {
  public: GALGAS_XCodeAppTargetList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_XCodeAppTargetList (const GALGAS_string & in_mTargetRef,
                                                 const GALGAS_string & in_mTargetName,
                                                 const GALGAS_string & in_mProductFileReference,
                                                 const GALGAS_string & in_mProductFileName,
                                                 const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                 const GALGAS_string & in_mBuildPhaseRef,
                                                 const GALGAS_string & in_mBuildConfigurationListRef,
                                                 const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                 const GALGAS_string & in_mBuildConfigurationRef,
                                                 const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                 const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                 const GALGAS__32_stringlist & in_mDependentTargets,
                                                 const GALGAS_string & in_mResourceBuildRef,
                                                 const GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                 const GALGAS_string & in_mInfoPListFile
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GALGAS_string & in_mTargetRef,
                                                                              const GALGAS_string & in_mTargetName,
                                                                              const GALGAS_string & in_mProductFileReference,
                                                                              const GALGAS_string & in_mProductFileName,
                                                                              const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                                              const GALGAS_string & in_mBuildPhaseRef,
                                                                              const GALGAS_string & in_mBuildConfigurationListRef,
                                                                              const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                                              const GALGAS_string & in_mBuildConfigurationRef,
                                                                              const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                                              const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                                              const GALGAS__32_stringlist & in_mDependentTargets,
                                                                              const GALGAS_string & in_mResourceBuildRef,
                                                                              const GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                                              const GALGAS_string & in_mInfoPListFile
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs, in_mInfoPListFile) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs, inElement.mProperty_mInfoPListFile) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeAppTargetList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeAppTargetList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs, mObject.mProperty_mInfoPListFile COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeAppTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDependentTargets" ":" ;
  mObject.mProperty_mDependentTargets.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceBuildRef" ":" ;
  mObject.mProperty_mResourceBuildRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceFileBuildRefs" ":" ;
  mObject.mProperty_mResourceFileBuildRefs.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInfoPListFile" ":" ;
  mObject.mProperty_mInfoPListFile.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_XCodeAppTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeAppTargetList * operand = (cCollectionElement_XCodeAppTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeAppTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                const GALGAS_string & inOperand1,
                                                                                const GALGAS_string & inOperand2,
                                                                                const GALGAS_string & inOperand3,
                                                                                const GALGAS_stringlist & inOperand4,
                                                                                const GALGAS_string & inOperand5,
                                                                                const GALGAS_string & inOperand6,
                                                                                const GALGAS_stringlist & inOperand7,
                                                                                const GALGAS_string & inOperand8,
                                                                                const GALGAS_stringlist & inOperand9,
                                                                                const GALGAS_string & inOperand10,
                                                                                const GALGAS__32_stringlist & inOperand11,
                                                                                const GALGAS_string & inOperand12,
                                                                                const GALGAS_stringlist & inOperand13,
                                                                                const GALGAS_string & inOperand14
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    result = GALGAS_XCodeAppTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeAppTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_string & in_mTargetRef,
                                                           const GALGAS_string & in_mTargetName,
                                                           const GALGAS_string & in_mProductFileReference,
                                                           const GALGAS_string & in_mProductFileName,
                                                           const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                           const GALGAS_string & in_mBuildPhaseRef,
                                                           const GALGAS_string & in_mBuildConfigurationListRef,
                                                           const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                           const GALGAS_string & in_mBuildConfigurationRef,
                                                           const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                           const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                           const GALGAS__32_stringlist & in_mDependentTargets,
                                                           const GALGAS_string & in_mResourceBuildRef,
                                                           const GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                           const GALGAS_string & in_mInfoPListFile
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = NULL ;
  macroMyNew (p, cCollectionElement_XCodeAppTargetList (in_mTargetRef,
                                                        in_mTargetName,
                                                        in_mProductFileReference,
                                                        in_mProductFileName,
                                                        in_mBuildPhaseRefList,
                                                        in_mBuildPhaseRef,
                                                        in_mBuildConfigurationListRef,
                                                        in_mBuildConfigurationSettingList,
                                                        in_mBuildConfigurationRef,
                                                        in_mFrameworksFileRefList,
                                                        in_mFrameworkBuildPhaseRef,
                                                        in_mDependentTargets,
                                                        in_mResourceBuildRef,
                                                        in_mResourceFileBuildRefs,
                                                        in_mInfoPListFile COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::addAssign_operation (const GALGAS_string & inOperand0,
                                                     const GALGAS_string & inOperand1,
                                                     const GALGAS_string & inOperand2,
                                                     const GALGAS_string & inOperand3,
                                                     const GALGAS_stringlist & inOperand4,
                                                     const GALGAS_string & inOperand5,
                                                     const GALGAS_string & inOperand6,
                                                     const GALGAS_stringlist & inOperand7,
                                                     const GALGAS_string & inOperand8,
                                                     const GALGAS_stringlist & inOperand9,
                                                     const GALGAS_string & inOperand10,
                                                     const GALGAS__32_stringlist & inOperand11,
                                                     const GALGAS_string & inOperand12,
                                                     const GALGAS_stringlist & inOperand13,
                                                     const GALGAS_string & inOperand14
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_append (GALGAS_XCodeAppTargetList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_XCodeAppTargetList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                      const GALGAS_string inOperand1,
                                                      const GALGAS_string inOperand2,
                                                      const GALGAS_string inOperand3,
                                                      const GALGAS_stringlist inOperand4,
                                                      const GALGAS_string inOperand5,
                                                      const GALGAS_string inOperand6,
                                                      const GALGAS_stringlist inOperand7,
                                                      const GALGAS_string inOperand8,
                                                      const GALGAS_stringlist inOperand9,
                                                      const GALGAS_string inOperand10,
                                                      const GALGAS__32_stringlist inOperand11,
                                                      const GALGAS_string inOperand12,
                                                      const GALGAS_stringlist inOperand13,
                                                      const GALGAS_string inOperand14,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      GALGAS_string & outOperand2,
                                                      GALGAS_string & outOperand3,
                                                      GALGAS_stringlist & outOperand4,
                                                      GALGAS_string & outOperand5,
                                                      GALGAS_string & outOperand6,
                                                      GALGAS_stringlist & outOperand7,
                                                      GALGAS_string & outOperand8,
                                                      GALGAS_stringlist & outOperand9,
                                                      GALGAS_string & outOperand10,
                                                      GALGAS__32_stringlist & outOperand11,
                                                      GALGAS_string & outOperand12,
                                                      GALGAS_stringlist & outOperand13,
                                                      GALGAS_string & outOperand14,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        outOperand7.drop () ;
        outOperand8.drop () ;
        outOperand9.drop () ;
        outOperand10.drop () ;
        outOperand11.drop () ;
        outOperand12.drop () ;
        outOperand13.drop () ;
        outOperand14.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
        outOperand0 = p->mObject.mProperty_mTargetRef ;
        outOperand1 = p->mObject.mProperty_mTargetName ;
        outOperand2 = p->mObject.mProperty_mProductFileReference ;
        outOperand3 = p->mObject.mProperty_mProductFileName ;
        outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
        outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
        outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
        outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
        outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
        outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
        outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
        outOperand11 = p->mObject.mProperty_mDependentTargets ;
        outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
        outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
        outOperand14 = p->mObject.mProperty_mInfoPListFile ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      outOperand9.drop () ;
      outOperand10.drop () ;
      outOperand11.drop () ;
      outOperand12.drop () ;
      outOperand13.drop () ;
      outOperand14.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_popFirst (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_stringlist & outOperand4,
                                                 GALGAS_string & outOperand5,
                                                 GALGAS_string & outOperand6,
                                                 GALGAS_stringlist & outOperand7,
                                                 GALGAS_string & outOperand8,
                                                 GALGAS_stringlist & outOperand9,
                                                 GALGAS_string & outOperand10,
                                                 GALGAS__32_stringlist & outOperand11,
                                                 GALGAS_string & outOperand12,
                                                 GALGAS_stringlist & outOperand13,
                                                 GALGAS_string & outOperand14,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_popLast (GALGAS_string & outOperand0,
                                                GALGAS_string & outOperand1,
                                                GALGAS_string & outOperand2,
                                                GALGAS_string & outOperand3,
                                                GALGAS_stringlist & outOperand4,
                                                GALGAS_string & outOperand5,
                                                GALGAS_string & outOperand6,
                                                GALGAS_stringlist & outOperand7,
                                                GALGAS_string & outOperand8,
                                                GALGAS_stringlist & outOperand9,
                                                GALGAS_string & outOperand10,
                                                GALGAS__32_stringlist & outOperand11,
                                                GALGAS_string & outOperand12,
                                                GALGAS_stringlist & outOperand13,
                                                GALGAS_string & outOperand14,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::method_first (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_string & outOperand3,
                                              GALGAS_stringlist & outOperand4,
                                              GALGAS_string & outOperand5,
                                              GALGAS_string & outOperand6,
                                              GALGAS_stringlist & outOperand7,
                                              GALGAS_string & outOperand8,
                                              GALGAS_stringlist & outOperand9,
                                              GALGAS_string & outOperand10,
                                              GALGAS__32_stringlist & outOperand11,
                                              GALGAS_string & outOperand12,
                                              GALGAS_stringlist & outOperand13,
                                              GALGAS_string & outOperand14,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::method_last (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             GALGAS_string & outOperand2,
                                             GALGAS_string & outOperand3,
                                             GALGAS_stringlist & outOperand4,
                                             GALGAS_string & outOperand5,
                                             GALGAS_string & outOperand6,
                                             GALGAS_stringlist & outOperand7,
                                             GALGAS_string & outOperand8,
                                             GALGAS_stringlist & outOperand9,
                                             GALGAS_string & outOperand10,
                                             GALGAS__32_stringlist & outOperand11,
                                             GALGAS_string & outOperand12,
                                             GALGAS_stringlist & outOperand13,
                                             GALGAS_string & outOperand14,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::add_operation (const GALGAS_XCodeAppTargetList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::plusAssign_operation (const GALGAS_XCodeAppTargetList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMTargetRefAtIndex (GALGAS_string inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMProductFileReferenceAtIndex (GALGAS_string inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMProductFileNameAtIndex (GALGAS_string inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildPhaseRefListAtIndex (GALGAS_stringlist inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationListRefAtIndex (GALGAS_string inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationSettingListAtIndex (GALGAS_stringlist inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationRefAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMFrameworksFileRefListAtIndex (GALGAS_stringlist inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMDependentTargetsAtIndex (GALGAS__32_stringlist inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDependentTargets = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mDependentTargets ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMResourceBuildRefAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceBuildRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceBuildRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMResourceFileBuildRefsAtIndex (GALGAS_stringlist inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceFileBuildRefs = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMInfoPListFileAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInfoPListFile = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mInfoPListFileAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mInfoPListFile ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_XCodeAppTargetList::cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element cEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist cEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mDependentTargets ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceBuildRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceFileBuildRefs ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mInfoPListFile (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mInfoPListFile ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@XCodeAppTargetList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeAppTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  const GALGAS_XCodeAppTargetList * p = (const GALGAS_XCodeAppTargetList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeAppTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@BuildFileList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_BuildFileList : public cCollectionElement {
  public: GALGAS_BuildFileList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                            const GALGAS_string & in_mFileName,
                                            const GALGAS_string & in_mBuildReference
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                                                    const GALGAS_string & in_mFileName,
                                                                    const GALGAS_string & in_mBuildReference
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileReference, inElement.mProperty_mFileName, inElement.mProperty_mBuildReference) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_BuildFileList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mProperty_mFileReference, mObject.mProperty_mFileName, mObject.mProperty_mBuildReference COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_BuildFileList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileReference" ":" ;
  mObject.mProperty_mFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileName" ":" ;
  mObject.mProperty_mFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildReference" ":" ;
  mObject.mProperty_mBuildReference.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_BuildFileList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_BuildFileList * operand = (cCollectionElement_BuildFileList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_BuildFileList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList::GALGAS_BuildFileList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList::GALGAS_BuildFileList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                      const GALGAS_string & inOperand1,
                                                                      const GALGAS_string & inOperand2
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_BuildFileList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_BuildFileList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mFileReference,
                                                      const GALGAS_string & in_mFileName,
                                                      const GALGAS_string & in_mBuildReference
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = NULL ;
  macroMyNew (p, cCollectionElement_BuildFileList (in_mFileReference,
                                                   in_mFileName,
                                                   in_mBuildReference COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1,
                                                const GALGAS_string & inOperand2
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_append (GALGAS_BuildFileList_2D_element inElement,
                                          C_Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_BuildFileList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_string inOperand2,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
        outOperand0 = p->mObject.mProperty_mFileReference ;
        outOperand1 = p->mObject.mProperty_mFileName ;
        outOperand2 = p->mObject.mProperty_mBuildReference ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_string & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           GALGAS_string & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_string & outOperand2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::add_operation (const GALGAS_BuildFileList & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_BuildFileList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::plusAssign_operation (const GALGAS_BuildFileList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_setMFileReferenceAtIndex (GALGAS_string inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList::getter_mFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mFileReference ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_setMFileNameAtIndex (GALGAS_string inOperand,
                                                       GALGAS_uint inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList::getter_mFileNameAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mFileName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_setMBuildReferenceAtIndex (GALGAS_string inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList::getter_mBuildReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mBuildReference ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_BuildFileList::cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element cEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mBuildReference ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@BuildFileList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_BuildFileList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_BuildFileList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  const GALGAS_BuildFileList * p = (const GALGAS_BuildFileList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_BuildFileList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@mainXibLineDescriptorList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mainXibLineDescriptorList : public cCollectionElement {
  public: GALGAS_mainXibLineDescriptorList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_mainXibLineDescriptorList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mainXibLineDescriptorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mainXibLineDescriptorList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mainXibLineDescriptorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_mainXibLineDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mainXibLineDescriptorList * operand = (cCollectionElement_mainXibLineDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mainXibLineDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibLineDescriptorList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::constructor_listWithValue (const GALGAS_mainXibElement & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibLineDescriptorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mainXibLineDescriptorList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_mainXibElement & in_mElement
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibLineDescriptorList * p = NULL ;
  macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::addAssign_operation (const GALGAS_mainXibElement & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::setter_append (GALGAS_mainXibLineDescriptorList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::setter_insertAtIndex (const GALGAS_mainXibElement inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::setter_removeAtIndex (GALGAS_mainXibElement & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
        outOperand0 = p->mObject.mProperty_mElement ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::setter_popFirst (GALGAS_mainXibElement & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::setter_popLast (GALGAS_mainXibElement & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::method_first (GALGAS_mainXibElement & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::method_last (GALGAS_mainXibElement & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::add_operation (const GALGAS_mainXibLineDescriptorList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::plusAssign_operation (const GALGAS_mainXibLineDescriptorList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::setter_setMElementAtIndex (GALGAS_mainXibElement inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibElement GALGAS_mainXibLineDescriptorList::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  GALGAS_mainXibElement result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mainXibLineDescriptorList::cEnumerator_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element cEnumerator_mainXibLineDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibElement cEnumerator_mainXibLineDescriptorList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject.mProperty_mElement ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@mainXibLineDescriptorList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibLineDescriptorList ("mainXibLineDescriptorList",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList result ;
  const GALGAS_mainXibLineDescriptorList * p = (const GALGAS_mainXibLineDescriptorList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibLineDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibLineDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

